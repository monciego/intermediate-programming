#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
float raw, raw2, raw3, raw4, total, total2, total3, total4, att, lab, quiz, exam, grade;

printf("Input the following score for each Area:\n ");
printf("Attendance:\n");
printf("Raw score:");
scanf("%f",&raw);
printf("Total Score:");
scanf("%f",&total);

printf("Lab Activities:\n");
printf("Raw score:");
scanf("%f",&raw2);
printf("Total Score:");
scanf("%f",&total2);

printf("Quizzes:\n");
printf("Raw score:");
scanf("%f",&raw3);
printf("Total Score:");
scanf("%f",&total3);

printf("Exam:\n");
printf("Raw score:");
scanf("%f",&raw4);
printf("Total Score:");
scanf("%f",&total4);

if (total!=0)
att=(raw/total*50+50)*.10;
else
att=50*.10;

if (total2!=0)
lab=(raw2/total2*50+50)*.20;
else
lab=50*.20;

if (total3!=0)
quiz=(raw3/total3*50+50)*.30;
else
quiz=50*.30;

if (total4!=0)
exam=(raw4/total4*50+50)*.40;
else
exam=50*.30;

grade = att + lab + quiz + exam/4;


printf("\nAttendance:%.2f \n", att);
printf("Laboratory:%.2f \n", lab);
printf("Quiz: %.2f \n", quiz);
printf("Exam:%.2f \n", exam);
printf("Grade: %.2f \n", grade);

getche();
}
