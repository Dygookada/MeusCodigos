#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second

typedef pair<int,int> ii;

int pac;
int val[102],peso[102];
int pd[102][52];

int fu( int v, int w)
{
	if(v>=pac)
		return 0;
	
	if( pd[v][w] !=-1)
		return pd[v][w];
	
	if(w<peso[v]) // se n couber na mochila passa
		return pd[v][w]= fu( v+1, w);
		
	int v1= val[v] + fu( v+1, w-peso[v]) ; // peguei
	int v2= fu( v+1, w) ; // n peguei
	//~ if(v1>v2)
		//~ cout<<v<<"*"<<w<<endl;
	return pd[v][w]=max(v1,v2);
}

int cont,pes;

void rec( int v, int w)
{
	if(v>=pac)
		return;
	int escolha = fu(v, w);
	int p1 = val[v] + fu(v + 1, w - peso[v]) ;
	int p2 = fu(v + 1, w);

	if (escolha  == p1)
	{
		cont++;
		//~ cout<<val[v]<<" "<<v<<" "<<peso[v]<<endl;
		pes+=peso[v];
		rec(v + 1, w - peso[v]);
	}
	else
		rec(v + 1, w);

}

int main()
{
	//~ freopen("entrada","r",stdin);
	//~ freopen("saida","w",stdout);
	
	int n;
	cin>>n;
	for( int j=0; j<n; j++)
	{
		cin>>pac;
		for( int i=0; i<pac; i++)
		{
			cin>>val[i]>>peso[i];
			for( int k=0; k<=51; k++)
				pd[i][k]=-1;
			
		}
		for( int k=0; k<=51; k++)
				pd[pac][k]=-1;
		cont=0,pes=0;
		
		int res=fu(0,50) ;
		rec(0,50);
		
		//~ for( int i=0; i<pac; i++)
		//~ {
			//~ for( int k=0; k<51; k++)
				//~ printf("%d-%d |  ",i,pd[i][k]);
			//~ cout<<endl;
		//~ }
		cout<<res<<" brinquedos"<<endl;
		cout<<"Peso: "<<pes<<" kg"<<endl;
		cout<<"sobra(m) "<<pac-cont<<" pacote(s)"<<endl<<endl;
	}
}
