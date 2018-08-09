#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
char s[50],t[50];
int ls,lt;
printf("enter first string : ");
scanf("%s",s);
printf("\nenter second string : ");
scanf("%s",t);
ls=strlen(s);
lt=strlen(t);
printf("\nlength of first string is %d\nlength of second string is %d",ls,lt);
int i=0;
while(i<=lt)
{
	s[ls]=t[i];
	i++;
	ls++;
}
printf("\nnew string is %s",s);
getch();
}

