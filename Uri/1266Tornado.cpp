#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	//~ freopen("entrada","r",stdin);
	//~ freopen("saida","w",stdout);
	int n;
	while(scanf(" %d",&n) && n!=0)
	{
		int vet[n],ind,cercas=0,dist=0;
		for( int i=0; i<n; i++)
		{
			scanf(" %d",&vet[i]);
		}
		for( ind=0; ind<n && vet[ind]!=1; ind++);
		if(ind==n)
		{
			cercas=n/2+n%2;
		}else{
			for( int i=ind; i<=n+ind; i++)
			{
				//~ printf("%d",vet[i%n]);
				if(vet[i%n]==0)
				{
					dist++;
				}else{
					cercas+=dist/2;
					dist=0;
				}
			}
		}
		printf("%d\n",cercas);
	}
}
