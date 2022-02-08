#include <Stdio.h>
#include <string.h>

int main()
{
    char name1[20], name2[20];
    int len1, len2;
    strcpy(name1,"Carlo");
    strcpy(name2,"Magno");
    len1 = strlen(name1);
    len2 = strlen(name2);
    printf("The length of string one is: %d ",len1);
    printf("\nThe length of string two is: %d", len2);
    strcat(name1,name2);
    printf("\nThe value of string one is: %s ",name1);
    printf("\nThe value of string two is: %s ",name2);
    len1=strlen(name1);
    printf("\nThe new length of string one is: %d",len1);
    len2=strlen(name2);
    printf("\nThe new and old length of name2 is: %d", len2);
    strlwr(name1);
    strupr(name2);
    printf("\nThe name1 in all lowercase: %s",name1);
    printf("\nThe name2 in all uppercase: %s",name2);
    strrev(name2);
    printf("\nThe name2 in reverse order: %s", name2);
    return 0;


}
