#include<stdio.h>
int main()
{
    char card;
    int a;
    int b;
    int n;
    int p;
    int diff;
    printf("Welcome to union bank atm\n");
    printf("please insert your card\n");
    scanf("%c",&card);
    if(card=='k')
    {
        printf("--------------------");
        printf("hello kishore\n");
        printf(">press 1 to withdrawel the money from your account\n\n");
        printf(">press 2 tocheck the balance\n\n");
        b=50000;
        scanf("%d",&n);
        if(n==1)
        {
            printf("Enter your 4-digit pin number:\n");
            scanf("%d",&p);
            if(p==1234)
            {
                printf("Enter the amount to be withdrawel\n");
                scanf("%d",&a);
                printf("collect the cash\n");
            }
            else
            {
                printf ("Pin number is wrong");
            }
            printf("-------------------");

            scanf("%d",&n);

      if(n==2)
            {
                printf("Balance enqiuy\n");

            diff=b-a;
            printf("Total amount is:%d\n",b);
            printf("your balance is:%d", diff);
            }
        }
    }
}








