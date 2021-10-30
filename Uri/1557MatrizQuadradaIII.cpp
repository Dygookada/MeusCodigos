#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	//~ freopen("saida","w",stdout);
	int n;
	while(cin>>n && n!=0)
	{
		unsigned long long mat[n][n],expi=1,expj=1,ta=1;
		for( int i=0; i<n; i++)
		{
			expj=expi;
			for( int j=0; j<n; j++)
			{
				mat[i][j]=expj;
				expj*=2;
			}
			expi*=2;
		}
		expj=expj/2;
		while(expj/10)
		{
			ta++;
			expj=expj/10;
		}
		for( int i=0; i<n; i++)
		{
			for( int j=0; j<n; j++)
			{
				cout.width(ta);
				cout<<right<<mat[i][j];
				if(j+1<n) cout<<' ';
			}
			cout<<endl;
		}
		cout<<endl;
	}
}
