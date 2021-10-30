#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
typedef pair<long,long> ii;
typedef pair<long,ii>iii;

int main() {
	//~ freopen("entrada","r",stdin);
	//~ freopen("saida","w",stdout);
	queue<long> fila;
	priority_queue<iii,vector<iii>,greater<iii> >caixa;
	long n,m,aux;
	cin>>n>>m;
	for(int i=0; i<n; i++)
	{
		cin>>aux;
		caixa.push(iii(0,ii(i+1,aux)));
	}
	for(int i=0; i<m; i++)
	{
		cin>>aux;
		fila.push(aux);
	}
	iii frente;
	while(!fila.empty())
	{
		//cout<<"**"<<fila.size()<<endl;
		frente=caixa.top();
		frente.f+=frente.s.s*fila.front();
		caixa.pop();
		fila.pop();
		caixa.push(frente);
	}
	aux=0;
	while(!caixa.empty())
	{
		//~ cout<<caixa.top().f<<endl;
		aux=max(caixa.top().f,aux);
		caixa.pop();
	}
	cout<<aux<<endl;
}
