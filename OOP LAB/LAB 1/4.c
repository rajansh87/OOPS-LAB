#include<stdio.h>
#include<conio.h>
void main()
{
int f,n;
printf("enter number : ");
scanf("%d",&n);
f=recur(n);
printf("\nfactorial is %d",f);
getch();
}
int recur(int x)
{
	if(x>1)
	{
		return x*recur(x-1);
	}
	else
	{
		return 1;
	}
}
