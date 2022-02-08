#include<stdio.h>

int Sum(int a, int b);
int Diff(int c, int d);
int Product(int e, int f);
int Quotient(int x, int y);
int Modulo(int x, int y);
int Power(int x, int y);
int main()
{
    display_accept();
}
int display_accept()
{
    int x, y;

    printf("Enter First Value: "); scanf("%d", &x);
    printf("Enter Second Value: "); scanf("%d", &y);
    printf("Sum is %d\n", Sum(x,y));
    printf("Diff is %d\n", Diff(x,y));
    printf("Product is %d\n", Product(x,y));
    printf("Quotient is %d\n", Quotient(x,y));
    if(y!=0)
        printf("The Quotient is: %d\n",Quotient(x,y));
     else
        printf("Cannot Divide by zero\n");
    if(y!=0)
       printf("The Modulo is: %d\n",Modulo(x,y));
    else
        printf("The Modulo is Undefined\n");
        printf("Power is: %d",Power(x,y));
    getche();
}
  int Sum(int a, int b)
 {
     int Sum;
     Sum = a + b;
 }
 int Diff(int c, int d)
 {
     int Diff;
     Diff = c - d;
 }
 int Product(int e, int f)
 {
     int Product;
     Product = e * f;
 }
 int Quotient (int x, int y)
 {
     int Quotient;
     Quotient = x / y;
 }
 int Modulo(int x, int y)
 {
     int Modulo;
     Modulo = x % y;
     return Modulo;

 }
    int Power(int x, int y)
{
    int Power=1;

    if(x==0 && y==0)
        printf("Power Undefined");


    else if(y==0)
        Power=1;


    while(y!=0)
    {
        Power = Power*x;
        y--;
    }
    return 0;
}




