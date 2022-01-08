#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,m,x,y;
	cin>>t;
	for (int i = 0; i < t; i++)
	{
		cin>>n>>m>>x>>y;
		cout<<min((n+(m-1)*y)/x,m)<<endl;
	}
}
