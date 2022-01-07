#include <bits/stdc++.h>
using namespace std;

#define maxn 100010


int find( int parent[], int i)
{
	if(parent[i]==i)
		return i;
	return parent[i]=find(parent,parent[i]);
}

int find( int parent[], int pontos[], int res[], int i)
{
	if(parent[i]==i)
		return i;
	
	int pai=find(parent,pontos,res,parent[i]);
	res[pai]+=pontos[i];
	return parent[i]=pai;
}

void uni( int parent[], int a, int b)
{
	parent[find(parent,a)]=find(parent,b);
}

void uni( int parent[], int pontos[], int a, int b)
{
	int pa=find(parent,a);
	int pb=find(parent,b);
	parent[pa]=pb;
	pontos[pb]+=pontos[pa];
}

int main()
{
	//~ freopen("entrada","r",stdin);
	//~ freopen("saida","w",stdout);
	int n,m;
	while(scanf(" %d %d",&n,&m) && (n||m))
	{
		int pontos[n], parent[maxn], res[n];
		int a,b,o,vitorias=0;
		for( int i=0; i<n; i++)
		{
			scanf(" %d",&pontos[i]);
			res[i]=0;
			parent[i]=i;
		}
			
		for( int i=0; i<m; i++)
		{
			scanf("%d %d %d",&o,&a,&b);
			if(o==1)
			{
				uni(parent,pontos,a-1,b-1);
			}
			else
			{
				int pai1=find(parent,a-1);
				int pai2=find(parent,b-1);
				int p1=find(parent,0);
				if(pontos[pai1]>pontos[pai2] && pai1==p1)
					vitorias++;
				if(pontos[pai1]<pontos[pai2] && pai2==p1)
					vitorias++;
			}
		}
		printf("%d\n",vitorias);
	}
}
