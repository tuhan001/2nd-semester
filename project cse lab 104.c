#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>

#define Student struct Stud

 void add(FILE*fp);
 void modify(FILE*fp);
 void display(FILE*fp);
 void Indivisual(FILE*fp);
 void password();
 FILE*del(FILE*fp);
 void printchar(char ch,int n);
 void title();
 FILE*tp;

 void gotoxy(int x,int y)
{
    COORD CRD;
    CRD.X=x;
    CRD.Y=y;
    SetConsoleCursorPositionursorposition(GetStdHandle(STD_OUTPUT_HANDLE),CRD);
}



struct pass
{
    char pass[20];

    }pa;

    struct Stud
    {
        char name[50];
        char dept[25];
        int roll;
        float cgpa;
    };
    int main()
    {
   int ch,id,k,i;
   char c, add, pas[25];
   setconsoletitle("Student Management System | GUB");
   FILE*fp;
   Student s;
   int option;
   char another;
   if((fp=fopen("db.text","rb+"))==NULL)
   {
    if((fp=fopen("db text","wb+"))==NULL)
    {
        printf("can not creat database");
        return 0;
    }
   }
   //PASSWORD

   system("color 9f");
   gotoxy(42,8);
   printf("Login");
   gotoxy(42,10);
   printf("Enter your id: ");
   gotoxy(42,11);
   printf("Enter Your password:11111");
   gotoxy(42,12);
   printf("ok");
   gotoxy(65,11);
   while(k<10)
   {
       pas[k]=getch();
       char s=pas[k];
       if(s==13)
        break;
       else printf("*");
       k++;
   }
   pas[k]='\0';
   tp=fopen("F:/password.text","r=");
   fgets(pa.pass,20,tp);
   if (strcmp(pas,pa.pass)==0);
   {
       system("cls");
       gotoxy(10,3);
       printf("LOADING PLEASE WAIT....");
       for(i=0;i<5;i++);
       {
           printf("\t(*_*)");
           Sleep(250);
       }
       printf("WELCOME");
       printf("press Enten to continue");
       getch();
       title();
       printf("LAB FINAL summer 2022");
       printf("section D2");
       printf("Green Univesity of Bangladesh");
       printchar('=',38);
       printf("PRESS THE ENTER");
       getch();

       while(1);
       {
           title();
           printf("Student Details\n");
          printchar('*',64);
          printf("Add Student");
          printf("Modify Student\n");
          printf("show All Student\n");
          printf("individual view\n");
          printf("Remove Student\n");
          printf("Change password\n");
          printf("Logout");
          printchar('*',64);
          printf("Enter Your Option: ");
          scanf("%d",&option);

          switch(option)
          {
              case 1:
              add(fp);
              break;
              case 2:
              modify(fp);
              break;
              case 3:
              display(fp);
              break;
              case 4:
              Indivisual(fp);
              break;
              case 5:
              fp=del(fp);
              break;
              case 6:
              system("cls");
                    system("color 5f");
                            password();
              break;
              case 7:
              return 1;
              break;
              default:
                printf("No Action Detected");
                printf("Press Enter");
                getch();
                system("pause");
          }
       }
   }
   else
   {
       printf("Wrong Password\n");
       printf("retry");
       getch();
   }
   return 1;

    }

