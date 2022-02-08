#include<stdio.h>
void main()
{
    int count_emp, x;
    float hours, total_pay, pay, rate;
    total_pay=0;

    printf("How many employee you want to process?:", x);
    scanf("%d",&x);

    for(count_emp = 1; count_emp<=x; count_emp++)
    {
        printf("Processing Employee who are Payed:%d\n", count_emp);
        printf("Enter Hours: ");
        scanf("%f", &hours);
        printf("Enter Rate: ");
        scanf("%f", &rate);
        pay= hours * rate;
        printf("Pay is Php %.2f \n", pay);
        total_pay= total_pay + pay;

    }
    printf("All haas been modify proceed\n");
    printf("Total Pay is Php %.2f\n", total_pay);
}
