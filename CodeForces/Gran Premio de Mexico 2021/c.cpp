#include <bits/stdc++.h>
using namespace std;


int main()
{
	//~ freopen("entrada.txt","r",stdin);
	int n,cont,ind,menor;
	
	scanf("%d",&n);
	string s;
	long long c;
	for( int i=0; i<n; i++)
	{
		cin>>s;
		cont=ind=menor=0;
		for( int j=0; j<s.size(); j++)
		{
			if(s[j]=='B')
				cont++;
			if(s[j]=='R')
				cont--;
			if(cont<menor)
			{
				menor=cont;
				ind=j+1;

				
			}
		}
		printf("%d\n",ind);
	}
	
}
