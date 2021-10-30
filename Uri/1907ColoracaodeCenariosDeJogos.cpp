#include <iostream>
using namespace std;

int n,m;
char desenho[1050][1050];
int x[]={-1,0,1,0},y[]={0,1,0,-1};

void pintar( int i, int j)
{
	desenho[i][j]='@';
	for( int k=0; k<4; k++)
	{
		int di=i+x[k],dj=j+y[k];
		if( di>=0 && di<n && dj>=0 && dj<m && desenho[di][dj]=='.')
			pintar(di,dj);
	}
	return;
}

int main()
{
//	freopen("entrada","r",stdin);
//	freopen("saida","w",stdout);
	cin>>n>>m;
	int col=0;
	for( int i=0; i<n; i++)
	{
		for( int j=0; j<m; j++)
		{
			cin>>desenho[i][j];
		}
	}
	for( int i=0; i<n; i++)
	{
//	cout<<endl;
		for( int j=0; j<m; j++)
		{
			if(desenho[i][j]=='.')
			{
				pintar(i,j);
				col++;
			}
//		cout<<desenho[i][j];
		}
	}
	cout<<col<<endl;
}
