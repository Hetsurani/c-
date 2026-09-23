//local classes
#include<iostream.h>
#include<conio.h>

void Test();

void main()
{
    clrscr();
    Test();
    getch();
}

void Test()
{
    int x=10;
    class A
    {
        int a;
        public:
            void get()
            {
                cout<<"Enter a:";
                cin>>a;
            }
            void put()
            {
                cout<<"\n a="<<a;
                cout<<"\n x="<<x;
            }
    };

    A a1;
    a1.get();
    a1.put();
}