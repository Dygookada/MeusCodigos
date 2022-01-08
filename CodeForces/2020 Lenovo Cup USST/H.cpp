#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,k,valor;
	cin>>n>>m>>k;
	int linha[n],coluna[m];
	for( int i=0; i<m; i++)
		coluna[i]=0;
	for( int i=0; i<n; i++)
	{
		linha[i]=0;
		for( int j=0; j<m; j++)
		{
			cin>>valor;
			linha[i]+=valor;
			coluna[j]+=valor;
		}
	}
	char c;
	long long res=0,x,y;
	for( int i=0; i<k; i++)
	{
		cin>>c>>x>>y;
		if(c=='r')
		{
			res+=(linha[x-1]*y)%998244353;
		}else if(c=='c')
		{
			res+=(coluna[x-1]*y)%998244353;
		}
		cout<<res<<endl<<endl;
	}
	cout<<res<<endl;
}
