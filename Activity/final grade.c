#include<stdio.h>
#include<math.h>

int main()
{

float rawscoreA, totalscoreA, rawscoreL, totalscoreL, rawscoreQ, totalscoreQ, rawscoreE, totalscoreE, attendance, laboratory, examination, quizzes, grade;

printf("Enter The Following Score For Each Area:\n ");
printf("\nAttendance ");

printf("\nRaw Score: ");
scanf("%f", &rawscoreA);
printf("Total Score: ");
scanf("%f", &totalscoreA);

printf("\nLaboratory Activities ");

printf("\nRaw Score: ");
scanf("%f", &rawscoreL);
printf("Total Score: ");
scanf("%f", &totalscoreL);

printf("\nQuizzes ");

printf("\nRaw Score: ");
scanf("%f", &rawscoreQ);
printf("Total Score: ");
scanf("%f", &totalscoreQ);

printf("\nExamination: ");

printf("\nRaw Score ");
scanf("%f", &rawscoreE);
printf("Total Score: ");
scanf("%f", &totalscoreE);

attendance = ((rawscoreA/totalscoreA)*50+50)*0.1;
printf("\nAttendance: %.2f", attendance);
laboratory = ((rawscoreL/totalscoreL)*50+50)*0.2;
printf("\nLaboratory:%.2f ", laboratory);
quizzes = ((rawscoreQ/totalscoreQ)*50+50)*0.3;
printf("\nQuizzes: %.2f", quizzes);
examination = ((rawscoreE/totalscoreE)*50+50)*0.4;
printf("\nExamination:%.2f ", examination);

grade = attendance+laboratory+quizzes+examination;
printf("\nFinal Grade: %.2f", grade);


if (grade >= 75)
    printf(" \nPassed");
else
    printf(" \nFailed");
return 0;

}
