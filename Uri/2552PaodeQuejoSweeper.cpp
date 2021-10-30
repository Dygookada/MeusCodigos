#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	//~ freopen("entrada","r",stdin);
	//~ freopen("saida","w",stdout);
	int n,m,vet[110][110],aux,x[]={-1,0,1,0},y[]={0,1,0,-1};
	while(scanf(" %d%d",&n,&m)!=EOF)
	{
		for( int i=0; i<n; i++)
		{
			for( int j=0; j<m; j++)
			{
				scanf("%d",&aux);
				if(aux==1)
				{
					vet[i][j]=9;
				}else{
					vet[i][j]=0;
				}
			}
		}
		for( int i=0; i<n; i++)
		{
			for( int j=0; j<m; j++)
			{
				if(vet[i][j]==9)
				{
					for( int k=0; k<4; k++)
					{
						int xx=i+x[k],yy=j+y[k];
						if(xx>=0 && xx<n && yy>=0 && yy<m && vet[xx][yy]!=9)
						{
							vet[xx][yy]++;
						}
					}
				}
			}
		}
		for( int i=0; i<n; i++)
		{
			for( int j=0; j<m; j++)
			{
				printf("%d",vet[i][j]);
			}
			printf("\n");
		}
	}
}
