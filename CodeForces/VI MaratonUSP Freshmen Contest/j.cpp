#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
#define f first
#define s second

int main()
{
	int n, ano, idade, real, mentiu=0;
	cin>>n;
	cin>>ano>>idade;
	real=ano-idade;
	for( int i=1; i<n; i++)
	{
		cin>>ano>>idade;
		if(real!=ano-idade)
			mentiu=1;
	}
	if(mentiu)
		cout<<"mentiu a idade"<<endl;
	else
	cout<<"idades corretas"<<endl;
}
