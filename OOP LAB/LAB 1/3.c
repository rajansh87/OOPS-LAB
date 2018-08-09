#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,i,temp;
for(i=1000;i<9999;i++)
{
	temp=i;
	a=temp%10;
	temp=temp/10;
    b=temp%10;
	temp=temp/10;
    c=temp%10;
	temp=temp/10;
    d=temp%10;
	temp=temp/10;
	if(a==b&&c==d)
	{
		if(sqrt(i)*sqrt(i)==i)
		{
		printf("\n\n%d",i);
		}
	}
}

getch();
}

