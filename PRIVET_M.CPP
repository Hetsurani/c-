//example of class (privet member function (nesting)of meber functional)
#include<iostream.h>
using namespace std;
//#include<conio.h >

class demo
{
	int a;
	float b;
	char c;
		void get();
		public:
			void put()
			{
			get();
			cout<<"\n a="<<a;
			cout<<"\n b="<<b;
			cout<<"\n c="<<c;
			}
		};
		void demo::get()
		{
			cout<<"ENter an int, a float and a char:";
			cin>>a>>b>>c;
		}
		void main()
		{
			demo d1;
			clrscr();
			d1.put();
			getch();
		}
		/*Enter an int, a float and a char: 10 20.5 A

 a=10
 b=20.5
 c=A*/