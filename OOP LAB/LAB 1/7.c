#include<stdio.h>
#include<conio.h>
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
int l=lt;
int p=0;
if(ls<=lt)
{
	p--;
}
else
{
	int i=0;
	while(t[i]!='\0')
	{
	    if(s[l+1]==t[i])
	    p++;
	    i++;
	    l++;
	}
}
if(p>0)
{
	printf("\n\n\n yes or 1 ");
}
else
{
	printf("\n\n\n no or 0");
}
getch();
}

