#include <bits/stdc++.h>
using namespace std;


int main()
{
	//~ freopen("entrada.txt","r",stdin);
	int n,c,aux;
	
	char t;
	cin>>n>>c>>t;
	int vet[n];
	if(t=='G')
		c=c*1024;
	if(t=='T')
		c=c*1024*1024;
	for( int i=0; i<n; i++)
	{
		scanf("%d",&aux);
		vet[i]=aux;
	}
	int soma=0,r,l;
	r=l=INT_MAX;
	int a;
	for( int i=0; i<n; i++)
	{
		soma=vet[i];
		a=1;
		while(soma+vet[i+a]<c && i+a<n)
		{
			//~ printf("%d\n",soma);
			soma+=vet[i+a];
			a++;
		}
		//~ printf("%d\n",soma);
		if(a<r)
		{
			r=a;
		}
		i=i+a-1;
	}
	
	for( int i=0; i<n; i++)
	{
		
	}
	
	
	if(r==n)
		l=-1;
	printf("%d %d\n",r,l);
}
