#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[80];
    char usn[80];
};
int combine_name_and_usn(char *file1,char *file2,struct student s[100])
{
    FILE *fp1;
    FILE *fp2;
    fp1=fopen(file1,"r");
    if(fp1==NULL)
    {
        printf("error%s",file1);
        return -1;
    }
    fp2=fopen(file2,"r");
    if(fp2==NULL)
    {
        printf("error%s",file2);
        return -2;
    }
    int i;
    for(i=0;((!feof(fp1))&&(!feof(fp2)));i++)
    {
        fscanf(fp1,"%s",s[i].name);
        fscanf(fp2,"%s",s[i].usn);
    }
    return i;
}
void writestudent(char *file,int n,struct student s[])
{
    FILE *fp;
    int i;
    fp=fopen(file,"w");
    for(i=0;i<n;i++)
    {
        fprintf(fp,"%s %s\n",s[i].name,s[i].usn);
    }
}
int main()
{
    struct student s[80];
    int c;
    c=combine_name_and_usn("student.txt","usn.txt",s);
    writestudent("output.txt",c,s);
    return 0;
}

