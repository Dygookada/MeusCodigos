#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,d,in,b;
	cin>>t;
	for( int k=0; k<t; k++)
	{
		cin>>d>>in>>b;
		int ing[in],bol[b],x=99999999,aux,ind,qtd;
		for( int i=0; i<in; i++)
		{
			cin>>ing[i];
		}
		for( int i=0; i<b; i++)
		{
			cin>>aux;
			bol[i]=0;
			for( int j=0; j<aux; j++)
			{
				cin>>ind>>qtd;
				bol[i]+=ing[ind]*qtd;
			}
		}
		for( int i=0; i<b; i++)
		{
			x=min(x,bol[i]);
		}
		cout<<d/x<<endl;
	}
}
