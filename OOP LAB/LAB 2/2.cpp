#include<bits/stdc++.h>
//#include<string.h>
#include<conio.h>
using namespace std;
int slen(char *);
int main()
{

    char a[50];
    cout<<"enter string : "<<endl;
    cin>>a;
    char *p=a;
    int z=slen(p);
    cout<<"length of the given string = "<<z;
	getch();
	return 0;
}
int slen(char *b)
{
	int i=0;

	while(*(b+i)!='\0')
	{
	    i++;
	}
	return i;
}
