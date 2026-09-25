//paramiterized constructor(constructor with argument)
#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public:

		A()
		{
			a=0;
			b=0;
		}

		A(int x, int y)
	{
		cout<<"\n paramiterized constructor";
		a=x;
		b=y;
	}
	void put()
	{
		cout<<"\n a = "<<a<<"\t b="<<b;
	}
};
void main()
{
	int x,y;
	clrscr();
	cout<<"\n Enter two Number:";
	cin>>x>>y;
	A a2;
	A a1(x,y);
	a1.put();
	getch();
}
/*Enter two Number: 10 20
 paramiterized constructor
 a = 10    b=20*/