#include <bits/stdc++.h>
using namespace std;

int main()
{
	int v,p,n;
	cin>>v>>p;
	n=v/p;
	for( int i=0; i<p; i++)
	{
		if(v%p>0)
		{
			cout<<n+1<<endl;
			v--;
		}
		else
			cout<<n<<endl;
		
	}
} 
