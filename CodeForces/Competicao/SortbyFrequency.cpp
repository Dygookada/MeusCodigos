#include <bits/stdc++.h>
using namespace std;

typedef pair<int,char> ii;

bool ordena(ii a, ii b)
{
	if(a.first==b.first)
		return a.second<b.second;
	return a.first>b.first;
}

int main()
{
	ii letras[26];
	string aux;
	for( int i=0; i<26; i++)
	{
		letras[i]=ii(0,i+97);
	}
	cin>>aux;
	int ta=aux.size();
	for( int i=0; i<ta; i++)
	{
		letras[aux[i]-97].first++;
	}
	sort(letras,letras+26,ordena);
	for( int i=0; i<26; i++)
	{
		ta=letras[i].first;
		if(ta>0)
			for( int j=0; j<ta; j++)
				cout<<letras[i].second;
	}
	cout<<endl;
}
