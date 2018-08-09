#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,p;
printf("enter value of i and j : ");
scanf("%d%d",&i,&j);
int c=1;
p=j;
while(i>=j)
{
	j=p*c;
	c++;
}
printf("\nnumber is %d",j);
getch();
}

