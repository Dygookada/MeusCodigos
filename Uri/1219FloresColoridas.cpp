#include <bits/stdc++.h>
using namespace std;

#define mod7 1000000007

int main()
{
	double a,b,c;
	while(cin>>a)
	{
		cin>>b>>c;
		double p=(a+b+c)/2;
		double t=sqrt(p*(p-a)*(p-b)*(p-c));
		double r1=t/p;
		double c1=r1*r1*M_PI;
		double r2=(a*b*c)/(4*t);
		double c2=r2*r2*M_PI;
		cout<<fixed<<setprecision(4);
		cout<<c2-t<<" ";
		cout<<t-c1<<" ";
		cout<<c1<<endl;
	}
}
