//static member variable
#include<iostream.h>
#include<conio.h>

class A
{
	int a;
	static int b;
	public:
		void get()
		{
		cout<<"\n Enter a:";
		cin>>a;
		b++;
		}
		void put()
		{
			cout<<"\n a="<<a <<"\t b="<<b;
			}
};
int A::b;
void main()
{
	A a1,a2,a3;
	clrscr();
	a1.get();//10
	a1.put();
	a2.get();
	a2.put();
	a3.get();
	a3.put();
	a1.put();
	getch();
}