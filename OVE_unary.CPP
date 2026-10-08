//overload unary operator using member function
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
		void operator -();
};

void A::operator -()
{
	a=-a;
	b=-b;
}

void main()
{
	A a1;
	clrscr();

	a1.get();
	a1.put();

	-a1;        // Error solved

	a1.put();
	getch();
}