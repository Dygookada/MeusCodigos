#include <bits/stdc++.h>
using namespace std;

#define maxn 100010
/*
 * da pra ter duas abordagens otimizadas do union find
 * a primeira fazer a lista ficar horizontal ao inves de vertical, fazendo um pai ter varios filhos, a funcao find faz isso
 * ja a segunda utiliza a ideia de unir a menor lista na maior, ai faz ela ficar mais balanceada
 * 
*/
int find( int parent[], int I)
{
	if(parent[I]==I)
		return I;
	
	return parent[I] = find(parent,parent[I]);
}

void uni( int parent[], int x, int y)
{
	parent[find(parent,x)]=find(parent,y);
}

int main()
{
	//~ int tempo = clock();
	//~ freopen("entrada","r", stdin);
	//~ freopen("saida","w", stdout);
	
	int n,k,a,b,x,y;
	char c;
	scanf("%d %d",&n,&k);
	int parent[maxn];
	for( int i=0; i<=maxn; i++)
		parent[i]=i;
	for( int i=0; i<k; i++)
	{
		scanf(" %c %d %d",&c,&a,&b);
		
		if( c== 'F')
		{
			uni(parent,b,a);
		
		}
		else
		{
			x=find(parent,a);
			y=find(parent,b);
			//~ printf("%d-%d %d=%d",x,y,a,b);
			if(x==y)
				printf("S\n");
			else
				printf("N\n");
		}
	}
	//~ printf("%lf\n",((double(clock()-tempo))/CLOCKS_PER_SEC));
}
