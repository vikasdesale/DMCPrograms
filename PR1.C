#include<stdio.h>
#include<conio.h>
void union1();
void intersection();
void comp();
void diff();
void subset();

int setA[5];
int setB[5];
int setC[5];
void main()
{
int ch;
clrscr();
do{
printf("\n1.Union \n2.Intersection\n3.Differentiate\n4.Subset\n5.Complement\n6.Exit");
printf("\nEnter Your Choice...");
scanf("%d",&ch);
switch(ch)
{
case 1:
       unoin1();
       break;
case 2:
       intersection();
       break;
case 3:
       diff();
       break;
case 4:
	subset();
       break;
case 5:
	comp();
       break;

case 6: exit(0);
	break;
default:
	 printf("you entered wrong choice");
}
}while(ch!=5);

getch();
}


void union1()
{
 int i,j,valid;
 int uni[10];
 printf("Enter Elements in set A");
 for(i=0;i<5;i++)
 {
 scanf("%d",&setA[i]);
 }
 printf("Enter Elements in Set B");
 for(i=0;i<5;i++)
 {scanf("%d",&setB[i]);
 }
 for(i=0;i<5;i++)
 {
  uni[i]=setA[i];
 }
 for(i=0;i<5;i++)
 {
  valid=1;
  for(j=0;j<5;j++)
  {if(setA[i]==setB[j])
    {
    valid=0;
    break;
    }

  }
  if(valid==0)
  uni[i+5]=setB[i];
 }

 printf("Union of Set A and B");
 for(i=0;i<10;i++)
 {
  printf("%d",uni[i]);
 }

}

void intersection()
{
 int i,j,valid,p,k;
 int inter[5];
 printf("Enter Elements in set A");
 for(i=0;i<5;i++)
 {
 scanf("%d",&setA[i]);
 }
 printf("Enter Elements in Set B");
 for(i=0;i<5;i++)
 {scanf("%d",&setB[i]);
 }
 for(i=0;i<5;i++)
 {
  for(j=0;j<5;j++)
  {if(setA[i]==setA[j])
    {inter[k++]=setA[i];
    }
    }
    printf("\n Intersection of Set A and Set B is :");
    for(i=0;i<k;i++)
    {
    printf("%d",inter[i]);
  }

}
void diff()
{
  int i,j,k,valid;
  int diff[10];
  printf("Enter Elements in set A");
 for(i=0;i<5;i++){
 scanf("%d",&setA[i]);

 printf("Enter Elements in Set B");
 for(i=0;i<5;i++)
 scanf("%d",&setB[i]);

 for(i=0;i<5;i++)
 {
 valid=1;
  for(j=0;j<5;j++)
  {if(setA[i]==setA[j])
    {valid=0;
    break;
    }
    }
    if(valid)
    {
     diff[k++]=setA[i];
    }
    }
    printf("\n  Set A - Set B is :");
    for(i=0;i<k;i++)
    {
    printf("%d",diff[i]);
  }
}
void subset()
{
int i,j,k;
  printf("Enter Elements in set A");
 for(i=0;i<5;i++)
 {
 scanf("%d",&setA[i]);
 }
 for(i=0;i<5;i++)
 {
  if(setA[i]%2==0)
    {setB[j++]=setA[i];
    }
    }
    printf("\n  Subset of  A Elements Divisible by 2: :");
    for(i=0;i<j;i++)
    {
    printf("%d",setB[i]);
  }
}
void comp()
{
 int i,j,k,valid;
 int setU[15];
 printf("Enter Elements in Universal Set");
 for(i=0;i<15;i++)
 scanf("%d",&setU[i]);

 printf("Enter Elements in Set A");
 for(i=0;i<5;i++)
 scanf("%d",&setA[i]);

 for(i=0;i<15;i++)
 {
  valid=1;
  for(j=0;j<5;j++)
  {if(setA[j]==setU[i])
    {
    valid=0;
    break;
    }

  }
  if(valid)
  setB[k++]==setU[i];
 }

 printf("Complement of Set A\n");
 for(i=0;i<k;i++)
 {
  printf("%d",setB[i]);
 }

}
}