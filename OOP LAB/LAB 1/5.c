#include<stdio.h>
#include<conio.h>
void main()
{
	char a[50];
printf("enter string : ");
scanf("%s",a);
int i=0,l=0;
while(a[i]!='\0')
{
	l++;
	i++;
}
printf("\nlength of string is %d",l);
getch();
}

