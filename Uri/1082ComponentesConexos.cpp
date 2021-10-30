#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
using namespace std;

//knapsack algoritmo para mochila

vector<bool> adj(27,false);
vector<int> list[27];
vector<char> saida;

void dfs( int ind)
{
	adj[ind]=true;
	saida.push_back(ind+97);
	int ta=list[ind].size();
	for( int i=0; i<ta; i++)
	{
		if(!adj[list[ind][i]])
		{
			dfs(list[ind][i]);
		}
	}
	return;
}

int main()
{
	//freopen("out","w",stdout);
	int n,letra,conexao;
	char x,y;
	scanf("%d",&n);
	for( int k=0; k<n; k++)
	{
		scanf("%d%d",&letra,&conexao);
		for( int j=0; j<conexao; j++)
		{
			scanf(" %c %c",&x,&y);
			list[x-97].push_back(y-97);
			list[y-97].push_back(x-97);
		}
		printf("Case #%d:\n",k+1);
		int comp_conexos=0;
		for( int i=0; i<letra; i++)
		{
			if(!adj[i])
			{
				dfs(i);
				sort(saida.begin(),saida.end());
				int tam=saida.size();
				for(int j=0; j<tam; j++)
				{
					printf("%c,",saida[j]);
				}
				comp_conexos++;
				printf("\n");
				saida.clear();
			}
		}
		printf("%d connected components\n\n",comp_conexos);
		// clear do adj e do list;
		for( int i=0; i<27; i++)
		{
			adj[i]=false;
			list[i].clear();
		}
	}
}
