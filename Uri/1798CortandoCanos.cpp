#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define maxn 1001

typedef pair<int,int> ii;


int main()
{
	//~ freopen("entrada","r",stdin);
	//~ freopen("saida","w",stdout);
	int n,t;
	int c[maxn],v[maxn];
	scanf("%d %d",&n,&t);
	int pd[t+1];
	
	for( int i=0; i<n; i++)
		scanf("%d %d",&c[i],&v[i]);
	
	for( int i=0; i<=t; i++)
		pd[i]=0;

	
	
	for( int i=0; i<=t; i++)
	{
		for( int j=0; j<n; j++)
		{
			if(c[j]<=i)
				pd[i] = max(pd[i],v[j]+pd[i-c[j]]);
		}
	}
	printf("%d\n",pd[t]);
}
