#include <Stdio.h>
#include <string.h>

int main()
{
    char pass[20];
    int password;
    printf("Enter the password please: ");
    gets(pass);
    password=strcmp(pass,"hello");
    if (password==0)
        puts("Welcome To The System!");
    else
        puts("Ops! you're dected! It hurts you know.h");

    return 0;


}
