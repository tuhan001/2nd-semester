#include<stdio.h>


int main()

{
    char s1[200],s2[200];
 int x;

    printf("enter num/sem: ");
    gets(s1);
    for(x=0;s1[x]!=s1;x++)
        {


        if(s1>=32&&s1<=47)&&(s1>=65&&s1<=127)
        {
            s2[x]=s1[x]-7;
            printf("s2[x]: %c",s2);
        }
        else if(s1>=48&&s1<=64)
        {
            s2[x]=s1[x]+57;
            printf("s2[x]: %c",s2);
        }

        else


            printf("massage is : ");
            getch();

    }


    }
