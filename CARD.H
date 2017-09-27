#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
//#include "update.h"
//void random();
char name[20];
char date[20];
char mob[20];
 int n,a;
 char ch;
int money;

void random1()
{
FILE *fp;
int c,n1;
int res,found=0;
fp=fopen("card_registeration.txt","r");

  for (c = 1; c <=1; c++)
  {
    n1 = rand() % 1000000 + 1;
    }
    while(fscanf(fp,"%s %s %s %d %d\n",name,date,mob,&money,&n)!=EOF)
    {

     if(n1==n)
     {
     found=1;

    fclose(fp);
    random1();
     break;
     }
     }
     if(found!=1)
     {
     n=n1;



    }

    fclose(fp);
    //fp=fopen("card_registeration.txt","a");
    //fprintf(fp,"%s %s %s %d %d\n",name,date,mob,money,n);
//fclose(fp);
//fclose(fp1);
}

// registeration
void card_registeration()
{

FILE *fp;
fp=fopen("card_registeration.txt","a");
random1();
printf("Enter customer name :: ");
scanf("%s",name);
printf("Enter Date          :: ");
scanf("%s",date);
printf("Enter mobile no      :: ");
scanf("%s",mob);
printf("Enter amount to be submitted:: ");
scanf("%d",&money);
printf("\ncard issued\n");
//random1();
printf("your ID is %d",n);
fprintf(fp,"%s %s %s %d %d\n",name,date,mob,money,n);
fclose(fp);
}
//card update
/*void main()
{
int m;
clrscr();
printf("press 1 to registeration");
printf("press 2 to update\n");
scanf("%d",&m);
switch(m)
{
case 1:
{
card_registeration();
break;
}
case 2:
{
card_update();
break;
}
default:
printf("erreo");
}
getch();
} */