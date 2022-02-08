#include <Stdio.h>
#include <string.h>

int main()
{
    char name1[20], str[6] = {'M','a','g','n','o','\0'}, name2[5];
    strcpy(name1, "Jericho");
    strcpy(name2, str);
    printf("Hello %s %s",name1,name2);
    return 0;


}
