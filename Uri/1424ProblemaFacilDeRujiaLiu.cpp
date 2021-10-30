#include <bits/stdc++.h>
using namespace std;

#define maxn 100001

int main()
{
	//~ freopen("entrada.txt","r",stdin);
	//~ freopen("saida.txt","w",stdout);
	vector<int> vet[maxn];
	map<int,int>::iterator it;
	map<int,int> rep;
	int n,m,x,cont=0;
	while(cin>>n>>m)
	{
		cont=0;
		for( int i=0; i<n; i++)
		{
			cin>>x;
			if(rep.count(x)==0)
			{
				rep[x]=cont;
				cont++;
			}
			vet[rep[x]].push_back(i+1);
		}
		int a,b;
		for( int i=0; i<m; i++)
		{
			cin>>a>>b;
			it=rep.find(x);
			
			if( rep.count(b)>0 && a<=vet[rep[b]].size())
			{
				cout<<vet[rep[b]][a-1]<<endl;
			}else
				cout<<0<<endl;
			
		}
		int ta=rep.size();
		rep.clear();
		for( int i=0; i<ta; i++)
			vet[i].clear();
	}
	
}
