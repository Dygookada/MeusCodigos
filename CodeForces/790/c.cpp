#include <bits/stdc++.h>
using namespace std;

int compara( int** vet, int n, int a, int b)
{
	int soma=0;
	for( int i=0; i<n; i++)
		soma+=abs(vet[a][i]-vet[b][i]);
	return soma;
}

int main()
{
	int n;
	cin>>n;
	int a,b;
	for( int i=0; i<n; i++)
	{
		scanf(" %d %d",&a,&b);
		char c;
		int* vet[a];
		for( int j=0; j<a; j++)
		{
			vet[j] = new int[b];
			for( int k=0; k<b; k++)
			{
				scanf(" %c",&c);
				vet[j][k]=c-'a';
			}
		}
		int res=10e8;
		for( int j=0; j<a; j++)
			for( int k=j+1; k<a; k++)
			{
				int aux = compara(vet,b,j,k);
				//~ printf("%d-%d=%d ",j,k,aux);
				res = min(aux,res);
			}
		printf("%d\n",res);
	}
}
