#include<Stdlib.h>
#include<Stdio.h>
void main()
{
long num, div, n1;
int flag, digit, post, tot_dig;
printf("\nEnter a number: ");
scanf("%ld",&num);
if(num==0)
{
printf("Zero\n");
exit(0)};
}
if(num >9999){
printf("Please Enter a Number between 0 and 10000\n\n");
exit(0);
}
tot_dig = 0;
div =1;
n1 =num;
while (n1>9){
n1 = n1 /10;
div = div*10;
tot_dig++;
}
tot_dig++;
pos = tot_dig;
while (num != 0){
digit = num / div;
num = num % div;
div =div / 10;
switch(pos){
case 2:
case 5:
if(digit ==1)
flag =1;
else{
flag = 0;
switch(digit){
case 2: printf("twenty"); break;
case 3: printf("thirty");break;
case 4: printf("fourty"); break;
case 5: printf("fifty"); break;
case 6: printf("sixty"); break;
case 7: printf("seventy"); break;
case 8: printf("eighty"); break;
case 9: printf("ninty"); break;
}
}
break;
case 1;
case 4;
if (flag ==1 ){
flag = 0;
switch(digit){
case 0: printf("ten"); break;
case 1: printf("eleven"); break;
case 2: printf("twelve"); break;
case 3: printf("thirteen"); break;
case 4: printf("fourteen"); break;
case 5: printf("fifteen"); break;
case 6: printf("sixteen"); break;
case 7: printf("seventeen"); break;
case 8: printf("eighteen"); break;
case 9: printf("nineteen"); break;
}
}
else {
switch (digit){
case 1: printf("one"); break;
case 2: printf("two"); break;
case 3: printf("three"); break;
case 4: printf("four"); break;
case 5: printf("five"); break;
case 6: printf("six); break;
case 7: printf("seven"); break;
case 8: printf("eight"); break;
case 9: printf("nine"); break;
}
}
if (pos==4)
printf("thousand");
break;
case 3:
if(digit > 0){
switch(digit){
case 1: printf("one"); break;
case 2: printf("two"); break;
case 3: printf("three"); break;
case 4: printf("four"); break;
case 5: printf("five"); break;
case 6: printf("six"); break;
case 7: printf("Seven"); break;
case 8: printf("eight"); break;
case 9: printf("nine");
}
printf("hundred");
}
break;
}
pos--;
}
if (pos ==4 && flag  == 0)
printf("thousand");
if (pos == 1 && flag == 1)
printf("ten");
}




}




}
