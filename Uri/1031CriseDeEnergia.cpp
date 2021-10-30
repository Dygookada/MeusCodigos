#include <bits/stdc++.h>
using namespace std;

int f( int n, int k)
{
	if(n==1)
		return 1;
	
	return (f(n-1,k)+k-1)%n+1;
}

int main()
{
	//~ freopen("entrada","r",stdin);
	//~ freopen("saida","w",stdout);
	int n,k,last=0;
	while( cin>>n && n)
	{
		last=0,k=0;
		int a=0,b=0;
		while(last!=13 && (a+b)!=13)
		{
			k++;
			a=((n+1)-(k%n))%n;
			b=f(n,k);
			last=(a+b)%n;
			//~ cout<<a<<" "<<b<<" "<<last<<endl;
			
		}
		cout<<k<<endl;
	}
}
