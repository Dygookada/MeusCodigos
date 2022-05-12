#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,w,h;
	scanf(" %d",&t);
	for( int i=0; i<t; i++)
	{
		scanf(" %d %d",&w,&h);
		int h1,h2,v1,v2;
		scanf(" %d",&h1);
		int ph1[h1];
		for( int j=0; j<h1; j++)
			scanf(" %d",&ph1[j]);
		
		scanf(" %d",&h2);
		int ph2[h2];
		for( int j=0; j<h2; j++)
			scanf(" %d",&ph2[j]);
		
		scanf(" %d",&v1);
		int pv1[v1];
		for( int j=0; j<v1; j++)
			scanf(" %d",&pv1[j]);
			
		scanf(" %d",&v2);
		int pv2[v2];
		for( int j=0; j<v2; j++)
			scanf(" %d",&pv2[j]);
		
		long long tri1 = max(ph1[h1-1] - ph1[0], ph2[h2-1] - ph2[0]);
		long long tri2 = max(pv1[v1-1] - pv1[0], pv2[v2-1] - pv2[0]);
		long long res = max( tri1*h, tri2*w);
		printf("%I64d\n",res);
	}
}
