#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second

typedef pair<int,int> ii;

int pac;
int val[101],peso[101];
ii pd[101][51];

ii fu( int v, int w)
{
	if(v>=pac)
		return ii(0,w);
	
	if( pd[v][w].f!=-1)
		return pd[v][w];
	
	if(w<peso[v]) // se n couber na mochila passa
		return pd[v][w]= fu( v+1, w);
		
	int v1= val[v] + fu( v+1, w-peso[v]).f; // peguei
	int v2= fu( v+1, w).f; // n peguei
	
	return pd[v][w]=ii(max(v1,v2),max(w,w-peso[v]));
}

int cont,pes;

void rec( int v, int w)
{
	if(v>=pac || w<peso[v])
		return;
	
	
	ii escolha = fu(v, w);
	int p1 = val[v] + fu(v + 1, w - peso[v]);
	int p2 = fu(v + 1, w).f;

	if (escolha == p1 )
	{
		cont++;
		cout<<val[v]<<" "<<v<<" "<<peso[v]<<endl;
		pes+=peso[v];
		rec(v + 1, w - peso[v]);
		return;
		
	}
	else
	{
		
		rec(v + 1, w);
	}
	
	
}

int main()
{
	freopen("entrada","r",stdin);
	freopen("saida","w",stdout);
	int n;
	cin>>n;
	for( int j=0; j<n; j++)
	{
		cin>>pac;
		for( int i=0; i<pac; i++)
		{
			cin>>val[i]>>peso[i];
			for( int k=0; k<51; k++)
				pd[i][k]=ii(-1,0);
			
		}
		cont=0,pes=0;
		
		int res=f(0,50);
		rec(0,50);
		
		for( int i=0; i<pac; i++)
		{
			for( int k=0; k<51; k++)
				if(pd[i][k]!=-1)
					printf("%d-%d |  ",k,pd[i][k]);
			cout<<endl;
		}
		cout<<res<<" brinquedos"<<endl;
		cout<<"Peso: "<<pes<<" kg"<<endl;
		cout<<"sobra(m) "<<pac-cont<<" pacote(s)"<<endl<<endl;
	}
}
