#include<stdio.h>
#include<conio.h>
void main()
{
int n,c;
printf("enter number : ");
scanf("%d",&n);
c=0;
while(n!=0)
{
    n=n/10;
    c++;
}
printf("\nnumber of digits are : %d",c);
getch();
}

