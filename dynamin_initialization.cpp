//dynamic initialization
#include<iostream.h>
#include<conio.h>
#include<math.h>

class CI
{
	float p,r,amt;
	int n;
	public:
		CI(float p1,int n1,float r1)
		{
			cout<<"\n float int,rate";
			p=p1;
			n=n1;
			r=r1;
			float t1=1+r;
			float t2=pow(t1,n);
			amt=p*t2-p;
		}
		CI(float p1,int n1,int r1)
		{
			cout<<"\n int int.rate";
			p=p1;
			n=n1;
			r=r1;
			float t1=1+r1/100.0;
			float t2=pow(t1,n);
			amt=p*t2-p;
		}
		void disp()
		{
			cout<<"\n p="<<p;
			cout<<"\n r="<<r;
			cout<<"\n n="<<n;
			cout<<"\n ci="<<amt;
		}
};

void main()
{
	float p=100,r=0.10;
	int r1=10,n=10;
	clrscr();

	CI ci1(p,n,r);
	CI ci2(p,n,r1);

	ci1.disp();
	ci2.disp();
	getch();
}
/* float int,rate
 p=100
 r=0.1
 n=10
 ci=159.374

 int int.rate
 p=100
 r=10
 n=10
 ci=159374
*/