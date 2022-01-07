#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second

typedef pair<int,int> ii;


int pac, qt, p;
int val[101],peso[101];
ii pd[101][51];

void f( int v, int w)
{
	for( int i=0; i<=50; i++)
		pd[0][i]=ii(0,0);
	for( int i=0; i<=100; i++)
		pd[i][0]=ii(0,0);
	
	for( int i=1; i<=pac; i++)
	{
		for( int j=1; j<=50; j++)
		{
			pd[i][j]=pd[i-1][j];
			if( peso[i-1]<=j && pd[i][j].fi<val[i-1]+pd[i-1][j-peso[i-1]].fi)
				pd[i][j] = ii(val[i-1]+pd[i-1][j-peso[i-1]].fi, pd[i-1][j-peso[i-1]].se + 1);
		}
	}
	
	qt=0,p=0;
	for( int i=1; i<=50; i++)
	{
		if(pd[pac][i]!=pd[pac][i-1])
			p=i;
	}
	

	//~ rec(1,50);
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
		}
		//~ cont=0;
		
		f(0,50);
		
		cout<<pd[pac][50].fi<<" brinquedos"<<endl;
		cout<<"Peso: "<<p<<" kg"<<endl;
		cout<<"sobra(m) "<<pac-pd[pac][50].se<<" pacote(s)"<<endl<<endl;
	}
}
