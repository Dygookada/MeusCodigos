#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

vector<int> vet[100];
vector<bool> visitados;

void dfs(int v)
{
	visitados[v]=true;
	int ta=vet[v].size();
	for( int i=0; i<ta; i++)
	{
		if(!visitados[vet[v][i]])
		{
			dfs(vet[v][i]);
		}
	}
}

int main()
{
	int e,l,x,y,teste=1;
	while(scanf(" %d%d",&e,&l) && (e!=0 && l!=0))
	{
		for( int i=0; i<l; i++)
		{
			scanf(" %d%d",&x,&y);
			vet[x-1].push_back(y-1);
			vet[y-1].push_back(x-1);
		}
		for( int i=0; i<e; i++)
		{
			visitados.push_back(false);
		}
		dfs(0);
		int j,ta=visitados.size();
		for( j=0; j<ta && visitados[j]; j++);
		printf("Teste %d\n",teste);
		if(j==e)
		{
			printf("normal\n\n");
		}else{
			printf("falha\n\n");
		}
		teste++;
		visitados.clear();
		for (int i = 0; i < e; i++)
		{
			vet[i].clear();
		}
		
	}
}
