#include <bits/stdc++.h>
using namespace std;

#define max(a,b,c) max(a,max(b,c))

int main()
{
	//~ freopen("entrada.txt","r",stdin);
	long long n,maior,a,b,c,x,y,z;
	
	scanf("%lld",&n);
	for( int i=0; i<n; i++)
	{
		scanf("%lld%lld%lld",&a,&b,&c);
		maior=max(a,b,c);
		x=maior-a+(a<=maior)+(b==maior || c==maior);
		y=maior-b+(b<=maior)+(a==maior || c==maior);
		z=maior-c+(c<=maior)+(a==maior || b==maior);
		
		
		
		
		
		printf("%lld %lld %lld %lld\n",maior,x,y,z);
	}
	
}
