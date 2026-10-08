//overload array operator use friend function
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
		friend void operator -(A&a1);
};                                      // ; added

void operator -(A&a1)
{
	a1.a=-a1.a;
	a1.b=-a1.b;
}

void main()
{
	A a1;                               // object declaration added
	clrscr();
	a1.get();
	a1.put();
	-a1;
	a1.put();                           // - removed
	getch();
}