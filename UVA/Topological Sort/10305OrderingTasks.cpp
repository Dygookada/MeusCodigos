#include <iostream>
#include <stdio.h>
#include <list>
#include <stack>
#include <vector>
using namespace std; 

// A C++ program to print topological sorting of a DAG 
int x;
vector<int> task[105];
bool vis[105];
stack<int> pilha;

void dfs( int y)
{
	vis[y]=true;
	int ta=task[y].size();
	for( int i=0; i<ta; i++)
	{
		int dot=task[y][i];
		if(vis[dot]==false)
			dfs(dot);
	}
	pilha.push(y);
} 

int main()
{
	int n,m,x,y;
	while(scanf(" %d%d",&n,&m), n!=0 || m!=0)
	{
		int cont=0;
		for( int i=0; i<m; i++)
		{
			scanf(" %d%d",&x,&y);
			task[x].push_back(y);
		}
		for( int i=1; i<=n; i++)
		{
			if(vis[i]==false)
				dfs(i);
		}
		int tam=pilha.size();
		for( int i=0; i<tam; i++)
		{
			if( cont!=0)
				printf(" ");
			printf("%d",pilha.top());
			pilha.pop();
			cont++;
		}
		printf("\n");
		for( int i=1; i<=n; i++)
		{
			task[i].clear();
			vis[i]=false;
		}
	}
}
