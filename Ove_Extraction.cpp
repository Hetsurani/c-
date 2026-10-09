#include<iostream.h>
#include<conio.h>

class A
{
    int a;

    public:
        friend istream& operator>>(istream &in, A &x);

        void put()
        {
            cout<<"\na = "<<a;
        }
};

istream& operator>>(istream &in, A &x)
{
    cout<<"Enter a number: ";
    in>>x.a;
    return in;
}

void main()
{
    A a1;
    clrscr();

    cin>>a1;
    a1.put();

    getch();
}
/*Enter a number: 10

a = 10*/