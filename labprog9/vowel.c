#include <stdio.h>
#include<string.h>
int vow(char s[100])
{
    int i;int vowel=0;
    for(i=0;s[i]!='\0';i++)
    {
        if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')||(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'))
        {vowel=vowel+1;}
    }
    return vowel;
}
int special(char s[100])
{
  int spc=0;
  int i;
  for(i=0;s[i]!='\0';i++)
  {
      if(s[i]==' '||s[i]=='\0')
        {spc=spc+1;}
  }
  return spc;
}
int con(char s[100],int r,int t)
{
    int i;

    int z=strlen(s);
    return (z-(r+t));
}
int main()
{
    char s[100];
    printf("enter the string\n");
    scanf("%[^\n]",s);
    int r;
    r=vow(s);
    int t=special(s);
    int z=con(s,r,t);
    printf("vowel=%d consonant=%d special=%d\n",r,z,t);
    return 0;
}
