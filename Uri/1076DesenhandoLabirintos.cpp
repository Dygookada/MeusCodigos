#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

vector<int> vet[49];
bool vis[49];
int mov;

void dfs(int v)
{
	vis[v]=true;
	//~ mov++;
	int ta=vet[v].size();
	for( int i=0; i<ta; i++)
	{
		if(!vis[vet[v][i]])
		{
			//~ mov+=ta;
			dfs(vet[v][i]);
		}
	}
	mov+=2;
}

int main()
{
	int n,ini,v,a,x,y;
	scanf(" %d",&n);
	for( int i=0; i<n; i++)
	{
		scanf(" %d",&ini);
		scanf(" %d%d",&v,&a);
		for( int j=0; j<a; j++)
		{
			scanf("%d%d",&x,&y);
			vet[x].push_back(y);
			vet[y].push_back(x);
		}
		for( int j=0; j<v; j++)
		{
			vis[j]=false;
		}
		mov=0;
		dfs(ini);
		//~ for( int j=0; j<v; j++)
		//~ {
			//~ if(vis[j])
			//~ {
				//~ mov++;
			//~ }
		//~ }
		for( int j=0; j<v; j++)
		{
			vet[j].clear();
		}
		printf("%d\n",mov-2);
	}
}
