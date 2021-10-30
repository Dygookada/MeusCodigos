#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	string a,b;
	cin>>n;
	for( int lk=0; lk<n; lk++)
	{
		cin>>a>>b;
		int dif=abs(a.size()-b.size()),m=min(a.size(),b.size());
		for( int i=0; i<m; i++)
		{
			if(a[i]!=b[i])
				dif++;
		}
		if(dif>1)
			cout<<"0"<<endl;
		else
			cout<<"1"<<endl;
	}
}
