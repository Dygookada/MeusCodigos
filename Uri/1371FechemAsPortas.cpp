#include <bits/stdc++.h>
using namespace std;


int main()
{
	freopen("entrada","r",stdin);
	freopen("saida","w",stdout);
	int n,d;
	while(cin>>n && n!=0)
	{
		for( int i=1; i<=n; i++)
		{
			
			d=sqrt(i);
			if(d*d==i)
			{
				if(i!=1)
					cout<<" ";
				cout<<i;
			}
		}
		cout<<endl;
	}
	
}
