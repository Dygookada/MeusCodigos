#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

int mdc( int a, int b)
{
	if(b==0)
	{
		return a;
	}else{
		return  mdc(b,a%b);
	}
}

int main()
{
	char p;
	int x,y,a,b;
	scanf(" %d %c %d",&a,&p,&b);
	x=a*100+b;
	y = mdc (36000,x);
	cout<<36000/y<<endl;
}
