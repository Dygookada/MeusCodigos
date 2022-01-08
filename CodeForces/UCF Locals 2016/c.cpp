#include <bits/stdc++.h>
using namespace std;
//Don’t Break the Ice
int main()
{
	int t,n,p;
	cin>>t;
	for( int k=0; k<t; k++)
	{
		cin>>n>>p;
		int linha[n],coluna[n],x,y,erros=0;
		for( int i=0; i<n; i++)
			linha[i]=coluna[i]=1;
		
		for( int j=0; j<p; j++)
		{
			cin>>x>>y;
			if(linha[x-1] || coluna[y-1])
				linha[x-1]=coluna[y-1]=0;
			else
				erros++;
		}
		printf("Strategy #%d: %d\n",k+1,erros);
	}
}
