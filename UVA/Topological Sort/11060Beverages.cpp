#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
#define s second
#define f first

int main()
{
	int n,m,cont=1;
	string n1,n2;
	while(scanf(" %d",&n)!=EOF)
	{
		map<string,int> nome;
		string ind[n];
		vector<int> adj[110];
		vector<int> pilha;
		for( int i=0; i<n; i++)
		{
			cin>>n1;
			nome[n1]=i;
			ind[i]=n1;
		}
		int inci[n];
		for( int i=0; i<n; i++)
		{
			inci[i]=0;
		}
		scanf(" %d",&m);
		for( int i=0; i<m; i++)
		{
			cin>>n1>>n2;
			adj[nome[n1]].push_back(nome[n2]);
			inci[nome[n2]]++;
		}
		priority_queue<int, vector<int>, greater<int> > q;
		for( int i=0; i<n; i++)
		{
			if(inci[i]==0)
			{
				q.push(i);
			}
		}
		while(!q.empty())
		{
			int v=q.top(),tam=adj[v].size();
			pilha.push_back(v);
			q.pop();
			for( int i=0; i<tam; i++)
			{
				int u=adj[v][i];
				inci[u]--;
				if(inci[u]==0)
					q.push(u);
			}
			
		}
		printf("Case #%d: Dilbert should drink beverages in this order: ",cont++);
		for( int i=0; i<n; i++)
		{
			cout<<ind[pilha[i]];
			if(i+1==n)
			{
				printf(".\n\n");
			}else{
				printf(" ");
			}
		}
	}
}
