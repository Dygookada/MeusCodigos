#include <bits/stdc++.h>
using namespace std;

int z[1000][1000];

void mochila ( int c[], int w[], int n, int W)
{
	for( int i=0; i<=W; i++)
		z[0][i]=0;
	for( int i=0; i<=n; i++)
		z[i][0]=0;
	
	for( int i=1; i<=n; i++)
	{
		for( int j=1; j<=W; j++)
		{
			z[i][j]=z[i-1][j];
			if( w[i-1]<=j && z[i][j]<c[i-1]+z[i-1][j-w[i-1]])
				z[i][j] = c[i-1]+z[i-1][j-w[i-1]];
		}
	}
}

//entrada
//~ 4 7
//~ 10 7 25 24
//~ 2 1 6 5

//saida
//~ 0 0 10 10 10 10 10 10
//~ 0 7 10 17 17 17 17 17
//~ 0 7 10 17 17 17 25 32
//~ 0 7 10 17 17 24 31 34

int main()
{
	int n,W;
	cin>>n>>W;
	int c[n],w[n];
	for( int i=0; i<n; i++)
		cin>>c[i];
	for( int i=0; i<n; i++)
		cin>>w[i];
	
	for( int i=0; i<=n; i++)
	{
		for( int j=0; j<=W; j++)
			printf("%d ",z[i][j]);
		printf("\n");
	}
	
	mochila(c,w,n,W);
	for( int i=0; i<=n; i++)
	{
		for( int j=0; j<=W; j++)
			printf("%d ",z[i][j]);
		printf("\n");
	}
}
