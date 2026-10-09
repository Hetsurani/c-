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

        friend ostream& operator<<(ostream &out, A x);
};

ostream& operator<<(ostream &out, A x)
{
    out<<"\na = "<<x.a;
    return out;
}

void main()
{
    A a1;
    clrscr();

    a1.get();

    cout<<a1;

    getch();
}
/*Enter a number: 10

a = 10*/