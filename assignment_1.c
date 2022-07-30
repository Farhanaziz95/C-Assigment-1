#include <stdio.h>

int main()
{
    const int rate1 = 7;
    const int rate2 = 10;
    const int rate3 = 13;

    int current;
    int previous;
    int total;

    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
back:
    printf("Enter your Current Meter Reading? \t\t");
    scanf("%d", &current);

if(current<=0){printf("can not enter lessthen or equal to 0 Try again\n");goto back;}
backp:

    printf("\nEnter your Previous Meter Reading?\t\t");
    scanf("%d", &previous);
    int consumped = current - previous;
if(previous<=0){printf("can not enter lessthen or equal to 0 Try again\n");goto backp;}
if(consumped<=0){printf("bill cant be 0 or negative Try again\n");goto backp;}

    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("Previous Reading\t\tCurrent Reading\t\tTotal Unit\n\n");
    // int consumped = current - previous;
    printf("\t%d\t\t\t\t%d\t\t     %d\n\n", previous, current, consumped);

    printf("Type\t\t\tUnit\t\tRate Per Unit\t\tAmount\n");

    if (consumped <= 100)
    {

        printf("Form 1 to 100 unit\t %d \t\t\t %d \t\t %d\n\n", consumped, rate1, consumped * rate1);
    total=consumped * rate1;
    }
    else if (consumped > 100 && consumped <= 200)
    {
        printf("Form 1 to 100 unit\t %d \t\t\t %d \t\t %d \n", 100, rate1, 100 * rate1);
        total=100 * rate1;
        printf("Form 101 to 200 unit\t %d \t\t\t %d \t\t %d \n\n", consumped - 100, rate2, (consumped - 100) * rate2);
        total=total+ ((consumped-100) * rate2);

    }
    else
    {
        printf("Form 1 to 100 unit\t %d \t\t\t %d \t\t %d \n", 100, rate1, 100 * rate1);
        total=100 * rate1;
        printf("Form 101 to 200 unit\t %d \t\t\t %d \t\t %d \n", 100, rate2, 100 * rate2);
        total=total+100 * rate2;     
        printf("Form 1 to 100 unit\t %d \t\t\t %d \t\t %d \n\n", consumped-200, rate3, (consumped-200) * rate3);
        total=total+ ((consumped-200) * rate3);

    }

    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    float a = (float)total*14/100;
    float b = (float)total*10/100;
    float c = (float)total*7/100;
    float d = (float)total*3/100;
    // printf("G.S.T 14 \t\t\t %d\n",total);

    printf("G.S.T 14 %% : \t\t\t\t\t\t\t %.2f\n",a);
    printf("Bhatta Tex :\t\t\t\t\t\t\t %d\n",6000);
    printf("Meter Tex :\t\t\t\t\t\t\t %d\n",300);
    printf("Extra G.S.T Tex :\t\t\t\t\t\t %.2f\n",b);
    printf("Further G.S.T Tex : \t\t\t\t\t\t %.2f\n",c);
    printf("Fual Adjustment :\t\t\t\t\t\t %.2f\n",d);

    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    
    printf("Your Current Electricity bill (Jo ke lunte ke baraber hai) is :  %.2f\n",6000+300+a+b+c+d+total);

    return 0;
}
