#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef pair<string,int> si;
#define f first
#define s second


int main()
{
	set<string> sabe;
	int n,m,k;
	string aux,palavra;
	cin>>n;
	for( int i=0; i<n; i++)
	{
		cin>>aux;
		if( sabe.count(aux) == 0 )
			sabe.insert(aux);
	}
	cin>>m;
	queue<string> q;
	queue<si> link;
	for( int i=0; i<m; i++)
	{
		cin>>aux>>k;
		link.push(si(aux,k));
		for( int j=0; j<k; j++)
		{
			cin>>palavra;
			q.push(palavra);
		}
		sabe.insert(aux);
	}
	for( int i=0; i<m; i++)
	{
		int cont=0;
		for( int j=0; j<link[i].s; j++)
		{
			//~ cout<<cont<<" "<<link[i].f<<" "<<q.front()<<endl;
			if(sabe.count(q.front()))
				cont++;
			q.pop();
		}
		if(cont!=link[i].s)
			sabe.erase(link[i].f);
	}
	
	
	cout<<sabe.size()<<endl;
	
	//~ for( set<string>::iterator it = sabe.begin(); it!=sabe.end(); it++)
		//~ cout<<*it<<" ";
	
}

