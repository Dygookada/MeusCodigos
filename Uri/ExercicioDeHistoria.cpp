#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	while(cin>>a)
	{
		if(a%100==0)
			b=a/100;
		else
			b=a/100+1;
		cout<<b<<"\n";
	}
}
