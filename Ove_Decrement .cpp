#include<iostream.h>
#include<conio.h>

class A
{
    int a;

    public:
        void get()
        {
            cout<<"Enter a number: ";
            cin>>a;
        }

        void put()
        {
            cout<<"\na = "<<a;
        }

        friend void operator--(A &x);
};

void operator--(A &x)
{
    x.a--;
}

void main()
{
    A a1;
    clrscr();

    a1.get();

    --a1;

    a1.put();

    getch();
}
/*Enter a number: 10

a = 9*/