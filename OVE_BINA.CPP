//overload binary fun using member fun
#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	public:
		void get()
		{
			cout<<"Enter a number:";
			cin>>a;
		}
		void put()
		{
			cout<<"\n a="<<a;
		}
		A operator +(A a1);
		int operator==(A a1);
};

A A::operator+(A a1)
{
	A a2;
	a2.a=a+a1.a;
	return(a2);
}

int A::operator==(A a1)
{
	if (a==a1.a)
		return 1;
	else
		return 0;
}

void main()
{
	A a1,a2,a3;
	clrscr();
	a1.get();
	a2.get();              // error solved

	a1.put();
	a2.put();

	a3=a1+a2;
	a3.put();

	if(a1==a2)
		cout<<"\n object a1 and a2 are same";
	else
		cout<<"\n object a1 and a2 are not same";

	getch();
}
/*Enter a number: 10
Enter a number: 20

 a=10     a=20
 a=30
 object a1 and a2 are not same*/