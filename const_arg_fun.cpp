//constant argument function
#include<iostream.h>
#include<conio.h>

int sum(int a, const int b);

void main()
{
    int a,b,c;
    clrscr();

    cout<<"Enter two number: ";
    cin>>a>>b;

    c=sum(a,b);

    cout<<"\n sum ="<<c;

    getch();
}

int sum(int a, const int b)
{
    int c;
    a++;
    c=a+b;
    return c;
}
/*Example

If you enter:

Enter two number: 10 20

Output:

sum = 31

Because a++ changes the local copy of a from 10 to 11, then 11 + 20 = 31.*/