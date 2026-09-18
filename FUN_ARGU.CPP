//function with default argumnt
#include<iostream.h>
#include<conio.h>
int add (int x, int y=20);

void main()
{
	int x,y,z;
	clrscr();
	cout<<"Enter two number:";
	cin>>x>>y;
	z=add(x,y);
	cout<<"\n sum without defult:"<<z;
	z=add(x);
	cout<<"\n sum with defult:"<<z;
	getch();
}
int add (int x,int y)
{
	return (x+y);
}
/*Output
Enter two number: 10 30


sum without defult:40
sum with defult:30

Explanation:

add(10,30) → 10 + 30 = 40
add(10) → 10 + 20 = 30 because the default value of y is 20.*/