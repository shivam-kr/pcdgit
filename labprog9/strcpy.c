#include <stdio.h>
#include <string.h>
void stcpy(char str1[],char str2[])
{
    int i;
    for(i=0;str1[i]!='\0';i++)
        str2[i]=str1[i];
    str2[i]='\0';
}
int main()
{
    char s1[100],s2[100];
    printf("enter the strings\n");
    scanf("%s%s",s1,s2);
    stcpy(s1,s2);
    printf("strings is %s",s2);
    return 0;
}
