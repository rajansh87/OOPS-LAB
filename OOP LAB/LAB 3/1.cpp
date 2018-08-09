#include<iostream>
#include<conio.h>
using namespace std;
class a
{
private:
int n,i;
public:
void get()
{
cout<<"enter a no. : ";
cin>>n;
}
void display()
{
for(i=0;i<n;i++)
{
cout<<"\n\t\t WELL DONE \n\n\n";
}
}
};
int main()
{
    a a1;
    a1.get();
    a1.display();
    getch();
    return 0;
}
