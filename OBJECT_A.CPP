// object as function argument
#include<iostream.h>
#include<conio.h>

class A
{
    int a,b;

public:
    void get()
    {
        cout<<"Enter two number:";
        cin>>a>>b;
    }

    void put()
    {
        cout<<"\n a="<<a<<"\t b="<<b;
    }

    void swap1(A a1)       // pass by value
    {
        int c=a1.a;
        a1.a=a1.b;
        a1.b=c;
    }

    void swap2(A &a1)      // pass by reference
    {
        int c=a1.a;
        a1.a=a1.b;
        a1.b=c;
    }

    void swap3(A *a1)      // pass by pointer
    {
        int c=a1->a;
        a1->a=a1->b;
        a1->b=c;
    }

    void swap4(const A &a1) // pass by const reference
    {
        cout<<"\n a="<<a1.a<<"\t b="<<a1.b;
    }

    void swap5(const A *a1) // pass by constant pointer
    {
        cout<<"\n a="<<a1->a<<"\t b="<<a1->b;
    }
};

void main()
{
    A a1;

    clrscr();

    a1.get();
    a1.put();

    a1.swap1(a1);
    cout<<"\nAfter swap1 pass by value:";
    a1.put();

    a1.swap2(a1);
    cout<<"\nAfter swap2 pass by reference:";
    a1.put();

    a1.swap3(&a1);
    cout<<"\nAfter swap3 pass by pointer:";
    a1.put();

    cout<<"\nAfter swap4 pass by const reference:";
    a1.swap4(a1);

    a1.swap5(&a1);
    cout<<"\nAfter swap5 pass by const pointer:";
    a1.put();

    getch();
}

/*Enter two number:10 20
 a=10    b=20
After swap1 pass by value:
 a=10    b=20
After swap2 pass by reference:
 a=20    b=10
After swap3 pass by pointer:
 a=10    b=20
After swap4 pass by const reference:
 a=10    b=20
After swap5 pass by const pointer:
 a=10    b=20*/