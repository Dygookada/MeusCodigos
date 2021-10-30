#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,s,c,r;
	cin>>t;
	for( int i=0; i<t; i++)
	{
		cin>>s>>c>>r;
		double res=0;
		int vi[s];
		for( int i=0; i<s; i++)
		{
			cin>>vi[i];
		}
		sort(vi,vi+s);
		for( int i=0; i<s; i++)
		{
			if(c>0)
				res+=(double) 1/(vi[i]+r),c--;
			else
				res+=(double) 1/vi[i];
		}
		printf("%.2lf\n",res);
	}
}
