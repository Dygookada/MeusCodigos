#include <bits/stdc++.h>
using namespace std;
#define pi 3.14159265359

int main()
{
	int n;
	while(cin>>n)
	{
		pair<int,int> caixa[n];
		pair<int,int> troca;
		for( int i=0; i<n; i++)
		{
			cin>>caixa[i].first;
		}
		for( int i=0; i<n; i++)
		{
			cin>>caixa[i].second;
		}
		int tempo=0,certos=0;
		bool ordenado=false;
		for( int j=0; j<n; j++)
		{
			for( int i=1; i<n; i++)
			{
				if(caixa[i].first<caixa[i-1].first)
				{
					troca=caixa[i];
					caixa[i]=caixa[i-1];
					caixa[i-1]=troca;
					tempo+=caixa[i].second+caixa[i-1].second;
				}		
			}
		}
		cout<<tempo<<endl;
	}
}
