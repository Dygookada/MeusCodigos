#include <iostream>
using namespace std;

int main()
{
	int n,m,x;
	bool escada=true;
	cin>>n>>m;
	int vet[n][m];
	for( int i=0; i<n; i++)
	{
		for( int j=0; j<m; j++)
		{
			cin>>vet[i][j];
		}
	}
	for( x=0; vet[0][x]==0 && x<m; x++);
	
	for( int i=1; i<n; i++)
	{
		int j;
		for( j=0; vet[i][j]==0 && j<m; j++);
		if(j>x || j==m)
		{
			x=j;
		}else{
			escada=false;
		}
	}
	if(escada)
	{
		cout<<"S\n";
	}else{
		cout<<"N\n";
	}
}
