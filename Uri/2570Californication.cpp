#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
typedef pair<int,int> ii;
typedef pair<int,ii> iii;

struct HRCP{
	set<int> lin;
	set<int> col;
	int pontos;
};

int main()
{
	int n,m,k,valor;
	cin>>n>>m>>k;	
	char dir;
	HRCP pes[4];
	pair< set<int> ::iterator, bool> p;
	int lin[n],col[m];
	for( int i=0; i<4; i++)
		pes[i].pontos=0;
	for( int t=0; t<k; t++)
	{
		cin>>dir>>valor;
		int ind=t%4;
		if(dir=='L')
		{
			p=pes[ind].lin.insert(valor);
			if(p.s)
			{
				pes[ind].pontos+=m;
				for( int i=0; i<4; i++)
				{
					if(i!=ind && pes[i].lin.find(valor))
					
				}
			}
			else
		}
		else
		{
			
		}
			
	}
	
}
