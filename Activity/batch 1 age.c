#include <stdio.h>
#include <conio.h>
int main()
{
int age, month=12, weeks=52, days=365, hours=8760, minutes=525600;

printf("Enter your age: ");
scanf("%d", &age);
month=age * month;
weeks=age * weeks;
days= age * days;
hours = age * hours;
minutes = age * minutes;
printf("You're %d month old\n", month);
printf("You're %d weeks old\n", weeks);
printf("You're %d days old\n", days);
printf("You're %d hours old\n", hours);
printf("You're %d minutes old\n", minutes);
return 0;
}


