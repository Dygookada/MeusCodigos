#include <bits/stdc++.h>
using namespace std;

int img[26][26],x[]={-1,-1,0,1,1,1,0,-1},y[]={0,1,1,1,0,-1,-1,-1},n;
bool vis[26][26];

void marca( int i,int j)
{
	vis[i][j]=true;
	for( int k=0; k<8; k++)
	{
		int ix=i+x[k],jy=j+y[k];
		if(ix>=0 && ix<n && jy>=0 && jy<n && !vis[ix][jy] && img[ix][jy])
			marca(ix,jy);
	}
} 

int main()
{
	int war,cont=1;
	char aux;
	while(cin>>n)
	{
		for( int i=0; i<n; i++)
		{
			for( int j=0; j<n; j++)
			{
				vis[i][j]=false;
			}
		}
		war=0;
		for( int i=0; i<n; i++)
		{
			for( int j=0; j<n; j++)
			{
				scanf(" %c",&aux);
				img[i][j]=aux-48;
			}
		}
		for( int i=0; i<n; i++)
		{
			for( int j=0; j<n; j++)
			{
				if(!vis[i][j] && img[i][j]==1)
				{
					war++;
					marca(i,j);
				}
			}
		}
		printf("Image number %d contains %d war eagles.\n",cont++,war);
	}
}
