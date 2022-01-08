#include <bits/stdc++.h>
using namespace std;

bool compare( int a,int b)
{
	return a>b;
}
int main()
{
	int t,n,m;
	scanf("%d",&t);
	for( int i=0; i<t; i++)
	{
		scanf(" %d%d",&n,&m);
		int combo[n],let[26],aux;
		vector<int> erros;
		char c;
		for( int j=0; j<26; j++)
			let[j]=0;
		for( int j=0; j<n; j++)
		{
			scanf(" %c",&c);
			combo[j]=c-'a';
			let[combo[j]]++;
		}
		for( int j=0; j<m; j++)
		{
			scanf(" %d",&aux);
			erros.push_back(aux);
		}
		sort(erros.begin(),erros.end());
		int ind=0,a=0;
		while(!erros.empty())
		{
			if(erros[0]==ind)
				erros.erase(erros.begin());
			else
				let[combo[ind]]+=erros.size();
				ind++;
		}
		for( int j=0; j<26; j++)
		{
			if(j>0)
				printf(" ");
			printf("%d",let[j]);
		}
		printf("\n");
	}
}
