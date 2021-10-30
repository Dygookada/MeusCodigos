#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	double a,b,valor=99999999;
	cin>>n;
	for( int i=0; i<n; i++)
	{
		cin>>a>>b;
		valor=min(valor,a*(1000/b));
	}
	printf("%.2lf\n",valor);
}
