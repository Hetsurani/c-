//copy constructor
#include<iostream.h>
#include<conio.h>

class A
{
	int a,b;
	public:
		A()
		{
			cout<<"\n default constructor";
			a=0;
			b=0;
		}
		A(int x,int y)
		{
			cout<<"\n paramiterized constructor";
			a=x;
			b=y;
		}
		A(A &a1)
		{
			a=a1.a;
			b=a1.b;
		}
		void put()
		{
			cout<<"\n a="<<a<<"\t b="<<b;
		}
};

void main()
{
	int x,y;
	clrscr();
	cout<<"\n enter two num:";
	cin>>x>>y;
	A a1;
	A a2(x,y);
	A a3=a2;
	
	a1.put();
	a2.put();
	a3.put();
	getch();
}
/* enter two num:10 20

 default constructor
 paramiterized constructor
 a=0	 b=0
 a=10	 b=20
 a=10	 b=20
*/