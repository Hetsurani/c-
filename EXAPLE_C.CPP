//example of class
#include<iostream.h>
#include<conio.h>

class demo
{
	private:
		int a;
		float b;
		char c;
	public:
		void get()
	{
	cout<<"Enter an int ,a float and a char:";
	cin>>a>>b>>c;
	}
	void put();
};
void	 demo::put()
{
	cout<<"\n a="<<a;
	cout<<"\n b="<<b;
	cout<<"\n c="<<c;
}
void main()
{
	demo d1;
	clrscr();
	d1.get();
	d1.put();
	getch();
}
/*Enter an int, a float and a char: 10 20.5 A

 a=10
 b=20.5
 c=A*/