#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
#define f first
#define s second
int ordem[26];

bool comp( string a, string b)
{
	int ta=a.size(), tb=b.size();
	for( int i=0; i<ta && i<tb; i++)
	{
		if(ordem[a[i]-'a']!=ordem[b[i]-'a'])
			return ordem[a[i]-'a']<ordem[b[i]-'a'];
	}
	return ta<tb;
}


int main()
{
	int n;
	string aux;
	string ko="kobus";
	string alfa="kobusacdefghijlmnpqrtvwxyz";
	
	for( int i=0; i<26; i++)
	{
		
		ordem[alfa[i]-'a']=i;
	}
	cin>>n;
	vector<string> vet;
	vet.push_back(ko);
	for( int i=0; i<n; i++)
	{
		cin>>aux;
		vet.push_back(aux);

	}
	sort(vet.begin(), vet.end(), comp);
	if(vet[0]==ko)
		cout<<alfa<<endl;
	else
		cout<<"sem chance"<<endl;

}
