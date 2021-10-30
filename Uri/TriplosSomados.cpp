#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,prox;
	long long soma;
	while( cin>>a && a!=0)
	{
		soma=0;
		cin>>b;
		prox=a%3;
		if(prox==0)
			soma+=a;
		a=a+3-prox;
		while(a<=b)
		{
			
			soma+=a;
			a+=3;
		}
		cout<<soma<<endl;
	}
}
