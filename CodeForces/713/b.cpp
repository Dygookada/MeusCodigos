#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;



int main()
{
	//~ freopen("saida","w",stdout);
	int n,t;
	cin>>n;
	char mat[401][401],c;
	for( int k=0 ;k<n; k++)
	{
		cin>>t;
		vector<ii> p;
		for( int i=0; i<t; i++)
		{
			for( int j=0; j<t; j++)
			{
				cin>>mat[i][j];
				if(mat[i][j]=='*')
					p.push_back(ii(i,j));
			}
			
		}
		if(p[0].first!=p[1].first && p[0].second!=p[1].second)
		{
			mat[p[0].first][p[1].second]='*';
			mat[p[1].first][p[0].second]='*';
		}
		else
		{
			int a=1;
			if(p[0].first==p[1].first)
			{
				
				if(p[0].first+a==t)
					a=-1;
				mat[p[0].first+a][p[0].second]='*';
				mat[p[1].first+a][p[1].second]='*';
			}
			else
			{
				if(p[0].second+a==t)
					a=-1;
				mat[p[0].first][p[0].second+a]='*';
				mat[p[1].first][p[1].second+a]='*';
			}
		}
		for( int i=0; i<t; i++)
		{
			for( int j=0; j<t; j++)
				cout<<mat[i][j];
			cout<<endl;
		}
	}
}
