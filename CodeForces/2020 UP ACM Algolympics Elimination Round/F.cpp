#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for( int k=0; k<t; k++)
	{
		int r,c,alvos=0;
		cin>>r>>c;
		char grid[r][c];
		for( int i=0; i<r-1; i++)
		{
			for( int j=0; j<c; j++)
			{
				cin>>grid[i][j];
			}
		}
		for( int j=0; j<c; j++)
		{
			for( int i=r-1; i>=0; i--)
			{
				if(grid[i][j]=='X')
					alvos++;
				else if(grid[i][j]=='#')
					break;
			}
		}
		cout<<alvos<<endl;
	}
}
