#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
#define f first
#define s second


int main()
{
	map<long long, int> mp;
	long long dia,aux;
	int n,m;
	cin>>n;
	for( int i=0; i<n; i++)
	{
		cin>>dia;
		if( mp.count(dia) == 0 )
			mp[dia]=1;
		else
			mp[dia]++;
	}
	aux=m=0;
	dia=-1;
	for( map<long long, int>::iterator it=mp.begin(); it!=mp.end(); it++)
	{
		aux+=it->second;
		if(aux%3==0)
			dia=it->first;
	}
	cout<<dia<<endl;
}

