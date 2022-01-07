#include <bits/stdc++.h>
using namespace std;

// Driver code
int main()
{
	//~ freopen("entrada","r",stdin);
	int n;
	scanf(" %d",&n);
	int vet[n];
	for( int i=0; i<n; i++)
	{
		scanf(" %d",&vet[i]);
		
	}
	int menor,tam,dist,alt;
	tam=dist=alt=0;
	
	for( int i=0; i<n; i++)
	{
		alt=dist=0;
		menor=vet[i];
		while(i+dist<n && i-dist>=0 && menor>dist-alt)
		{
			
			if(vet[i+dist]<menor || vet[i-dist]<menor)
			{
				menor=min(vet[i-dist],vet[i+dist]);
				alt=dist;
			}
			dist++;
			tam=max(tam,dist);
			//~ printf("%d-%d h%d d%d m%d",vet[i-dist],vet[i+dist],alt,dist,menor); 
			//~ printf(" res:%d\n",tam);
		}
	}
	printf("%d",tam);
}
