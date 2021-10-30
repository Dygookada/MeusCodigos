#include <bits/stdc++.h>
using namespace std;

vector<string> grid;
int x[]={-1,-1,0,1,1,1,0,-1},y[]={0,1,1,1,0,-1,-1,-1},n,tam;


void agua( int i, int j)
{
	grid[i][j]='C';
	for( int k=0; k<8; k++)
	{
		int ix=i+x[k],jy=j+y[k];
		if( ix>=0 && ix<tam && jy>=0 && jy<tam && grid[ix][jy]=='W')
		{
			n++;
			agua(ix,jy);
		}
	}
}

int main()
{
	int a,b,quest;
	string aux;
	scanf(" %d",&quest);
	for( int i=0; i<quest; i++)
	{
		cin>>aux;
		grid.push_back(aux);
		int ta=aux.size();
		for( int j=1; j<ta; j++)
		{
			cin>>aux;
			grid.push_back(aux);
		}
		while( scanf(" %d%d",&a,&b)!=EOF)
		{
			tam=ta,n=1;
			agua(a-1,b-1);
			printf("%d\n",n);
		}
		
	}
}
