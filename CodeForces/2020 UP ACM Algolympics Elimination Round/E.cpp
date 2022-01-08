#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,w;
	cin>>t;
	for( int i=0; i<t; i++)
	{
		string plants;
		cin>>w>>plants;
		int ta=plants.size(),s=0;
		for( int j=0; j<ta; j++)
		{
			s+=plants[j]-'A'+1;
		}
		if(s<=w)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}
