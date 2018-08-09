#include<iostream>
#include<conio.h>
using namespace std;
class s
{
private:
    int a,b,c;
public:
    void get()
    {
        cout<<"\nenter value of a,b : ";
        cin>>a>>b;
    }
    void swap()
    {
       c=a;
       a=b;
       b=c;
    }
    void disp()
    {
        cout<<"\nthe value of a = "<<a;
        cout<<"\nthe value of b = "<<b;
    }
};
int main()
{
    s s1;
    s1.get();
    s1.swap();
    s1.disp();
    getch();
    return 0;
}
