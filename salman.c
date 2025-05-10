
//[9:36 am, 11/09/2022] Salman:
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

void login()
{
	int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="salman";
    char pass[10]="12345";
    do
{

    printf("\n LOGIN ");
    printf(" \n                        USERNAME:-");
	scanf("%s", &uname);
	printf(" \n                        PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';

	i=0;

		if(strcmp(uname,"salman")==0 && strcmp(pword,"12345")==0)
	{
	printf("  \n\n\n      SCHOOL's BILLING SYSTEM !!!! LOGIN IS SUCCESSFUL");
	printf("\n\n\n\t\t\t\tPress any key to continue...");
	getch();
	break;
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;

		getch();

	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");

		getch();

		}
		system("cls");
}

struct dat
{
    int d,m;
};
int clscanf();
struct student
{
    struct dat dt;
    float f,fine,tot,adv,due;
    char n[50];
    int r,c;
} stud,s;
struct teacher
{
    struct dat dt;
    char n[50];
    float sal,adv,tot;
    int id,no;
} tech,t;
int chkdat(int,int);
void addrec(int);
void modrec(int);
void searchrec(int);
void delrec(int);
void salary(int);
FILE *fs,*ft;

int mm,dd;
void ext();
void main(void)
{
    int i,j,k;
    printf("SCHOOL Billing System  \n");
printf("\n");
    printf("\n");
    printf("\n");
    for(i=0;i<99;i++)
		printf("-");
    printf("                     \n   \t \t \t \t  ENTER ANY KEY TO CONTINUE ");
    printf("\n");
	for(i=0;i<99;i++)
		printf("-");


    getch();
    system("cls");
    printf("\n");
    for(i=0; i<80; i++)

    {
        printf("\xdb");
    }
    system("color 0");
    printf("\n\n\t || WELCOME TO SCHOOL BILLING SYSTEM  || \n\n\n");
    for(i=0; i<80; i++)
    {
        printf("\xdb");
    }
    printf("\n LOADING PLEASE WAIT... \n");
    for(i=0; i<3; i++)
    {
        printf(".");
        Sleep(500);
    }
    printf("\n Enter Any Key To Proceed");
    fflush(stdin);
    getch();
    system("cls");
    login();
    start();
}
void start()
{
    int i,j;
    system("cls");
    	for(i=0;i<80;i++)
		printf("-");
    printf("\n\t\t SELECT YOUR ACCOUNT  ");
    printf("\n");
    for(i=0;i<80;i++)
	printf("-");
    printf("\n\t\t1->> Student");
    printf("\n\t\t2->> Teacher & Staffs");
    printf("\n\t\t3->> Exit");
    printf("\n");
    for(i=0;i<80;i++)
	printf("-");
    printf("\n\t\t Enter Your Account Type :- ");
    fflush(stdin);
    scanf("%d",&j);
    switch (j)
    {
    case 3:
        ext();
    case 1:
    {
        system("cls");
        for(i=0;i<80;i++)
		printf("-");
		printf("\n");
		printf("**********  |STUDENT ACC. MENU|  *********** \n");
		for(i=0;i<80;i++)
		printf("-");
		printf("\n");
        printf("\n\t\t SELECT YOUR CHOICE  :");
        printf("\n\t\t1>> Add Student's Record");
        printf("\n\t\t2>> Search Student's Record");
        printf("\n\t\t3>> Modify Student's Record");
        printf("\n\t\t4>> Delete Student's Record");
        printf("\n\t\t5>> Calculate Student's Fee");
        printf("\n\t\t6>> Exit");
        printf("\n");
        printf("\n");
        time_t t;
	    time(&t);
        for(i=0;i<80;i++)
		printf("-");
	    printf("\nCurrent date and time : %s",ctime(&t));
	    for(i=0;i<80;i++)
		printf("-");
        printf("\n\n Enter Your Choice  ");
        fflush(stdin);
        scanf("%d",&i);
        switch (i)
        {
        case 1:
            addrec(j);
            start();
        case 2:
            searchrec(j);
            start();
        case 3:
            modrec(j);
            start();
        case 4:
            delrec(j);
            start();
        case 5:
            fee(mm);
  // …
//[9:40 am, 11/09/2022] Salman: scanf("%d",&i);
        switch (i)
        {
        case 1:
            addrec(j);
            start();
        case 2:
            searchrec(j);
            start();
        case 3:
            modrec(j);
            start();
        case 4:
            delrec(j);
        case 5:
            salary(mm);
            start();
        case 6:
            ext();
        default :
        {
            printf("\n\n\tInvalid Entry!!");
            printf("\n\nTo Account Type\n\n\t");
            system("pause");
            start();
        }

        }
    }
    default :
    {
        printf("\n\n\tInvalid Entry!!");
        printf("\n\nTo Account Type\n\n\t");
        system("pause");
        start();
    }
    }
}

void addrec(int j)
{
    int dif,cdat,ddat,month=0;
    float ff;
    char c='y';
    system("cls");
    printf("\n\t   **********************");


    printf("\n\t  >>>>>>>>>>>>>>>>>>       ADD RECORDS         <<<<<<<<<<<<<<<<<<<<<<<");


    printf("\n\t   **********************");
    if (j==1)
    {
        while(c=='y'||c=='Y')
        {
            int a=1;
            printf("\n\nEnter  Name of the student: ");
            fflush(stdin);
            scanf("%[^\n]",stud.n);
            printf("\nEnter the class: ");
            fflush(stdin);
            stud.c=clscanf();
            printf("\nEnter Roll No.:");
            fflush(stdin);
            scanf("%2d",&stud.r);
            printf("\nEnter month and day till which Fee is paid:");
            fflush(stdin);
            scanf("%2d%2d",&cdat,&ddat);
            cdat=chkdat(cdat,ddat);
            stud.dt.m=cdat;
            ff=stud.c/10.0;
            stud.f=1000*(1+ff);
            dif=mm-stud.dt.m;
            stud.fine=(dif*stud.f)*1/100;
            stud.due=(dif)*stud.f;
            if(dif==1)
            {
                stud.tot=stud.f;
                stud.fine=0;
            }
            else
            {
                stud.tot=stud.fine+stud.due;
            }
            fs=fopen("student","ab+");
            fwrite(&stud,sizeof(stud),1,fs);
            fclose(fs);
            printf("\nRecorded Successfully !! ");
            printf("\n\nPress Esc To Exit or Do you want to continue adding records(press y or Y") ;
            fflush(stdin);
            c=getch();
            if(c==27)
		start();
        }
        getch();
    }
    if (j==2)
    {
        while(c=='y'||c=='Y')
        {
            int a=1;
            printf("\n\nEnter name of teacher/staff:" );
            fflush(stdin);
            scanf("%[^\n]",tech.n);
            printf("\nEnter teacher/staff id: ");
            fflush(stdin);
            scanf("%d",&tech.id);
            printf("\nEnter number of class/shift per month:: ");
            scanf("%d",&tech.no);
            fflush(stdin);
            printf("\nEnter month and day till which salary is paid::");
            scanf("%d %d",&tech.dt.m,&tech.dt.d);
            cdat=chkdat(cdat,ddat);
            tech.dt.m=cdat;
            tech.sal=tech.no*500;
            tech.adv=(tech.dt.m-mm-1)*tech.sal;
            if (tech.adv<0) tech.adv=0;
            tech.tot=tech.sal;
            ft=fopen("teacher","ab+");
            fwrite(&tech,sizeof(tech),1,ft);
            fclose(ft);
            printf("\nRecorded Successfully !! ");
            printf("\n\n Press Esc To Exit or Do you want to continue adding records(press y or Y");
            fflush(stdin);
            c=getch();
            if(c==27)
		start();
        }
        fflush(stdin);
        printf("\n\n");
        system("pause");
    }
