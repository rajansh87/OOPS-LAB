#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
void max_min(int[],int,int*,int*);
int main()
{
int a[50],i,l,n,ma,mi;
cout<<"enter no. of elements : ";
cin>>n;
cout<<"\nenter array : ";
for(i=0;i<n;i++)
cin>>a[i];
max_min(a,n,&ma,&mi);

getch();
return 0;
}
void max_min(int b[],int l,int *max,int *min)
{
    int x=0,y=10000;
    int j;
    for(j=0;j<l;j++)
    {
        if(b[j]>x)
        x=b[j];
        if(b[j]<y)
        y=b[j];
    }
    *min=y;
    *max=x;

    cout<<"\nmax = "<<*max<<"    min = "<<*min;
}
