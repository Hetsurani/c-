
//Default constructor without argument
#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public:
		A()
		{
			cout<<"\n Default constructor";
			a=0;
			b=0;
		}
		void put()
		{
			cout<<"\n a="<<a<<"\t b="<<b;
		}
};
void main()
{
	clrscr();
	A a1;
	a1.put();
	getch();
}