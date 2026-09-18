//example of friend function
#include<iostream.h>
#include<conio.h>
class B;//forward declaration
class A
{
	int a;
	public:
		void get()
		{
			cout<<"Enter a : ";
			cin>>a;
		}
		void put()
		{
			cout<<"\n a = "<<a;
		}
		friend int sum(A x,B y);
};
class B
{
	int b;
	public:
		void get()
		{
			cout<<"Enter b : ";
			cin>>b;
		}
		void put()
		{
			cout<<"\n b = "<<b;
		}
		friend int sum(A x,B y);
};
int sum(A x,B y)
{
	return(x.a + y.a);
}
void main()
{
	A a1;
	B b1;
	clrscr();
	a1.get();
	b1.get();

	a1.put();
	b1.put();

	cout<<"\n Sum = "<<sum(a1,b1);
	getch();
}