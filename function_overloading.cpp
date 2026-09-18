//example of function overloading
#include<iostream.h>
#include<conio.h>

int add(int x, int y);
int add(int x, int y, int z);

void main()
{
    int a,b,c,d;
    clrscr();

    cout<<"Enter three num: ";
    cin>>a>>b>>c;

    d=add(a,b);
    cout<<"\nSum of two argument fun: "<<d;

    d=add(a,b,c);
    cout<<"\nSum of three argument fun: "<<d;

    getch();
}

int add(int x,int y)
{
    return(x+y);
}

int add(int x,int y,int z)
{
    return(x+y+z);
}
/*Output
Enter three num: 10 20 30


Sum of two argument fun: 30
Sum of three argument fun: 60

Here:

add(10, 20) → 30
add(10, 20, 30) → 60*/