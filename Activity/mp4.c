#include <stdio.h>
#include <math.h>
int main()
{
    int pounds;
    double price,total;
    char shipping;

    printf("Enter the number of pounds of tea: ");
    scanf("%d",&pounds);
    printf("Enter the price: ");
    scanf("%lf",&price);
    printf("You want shipping?\nY or N: ");
    scanf("%c",&shipping);
    total = pounds*price;

    shipping = getchar();
    switch(shipping)
    {
    case 'Y':
    case 'y':
    printf("Total is: %.lf", total+15);
    break;
    case 'N':
    case 'n':
    printf("Total is: %.lf",total);
    break;
    default:
    printf("Invalid Entry");
    }
    return 0;
}





