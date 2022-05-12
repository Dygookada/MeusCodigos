#include <bits/stdc++.h>
using namespace std;


int main()
{
	char a,b;
	int n;cin>>n;
	for( int i=0; i<n; i++)
	{
		cin>>a>>b;
		int res = (a-'a')*26+(b-'a')-(a-'a');
		if(a<b)
			cout<<res<<endl;
		else
			cout<<res+1<<endl;
	}
}
