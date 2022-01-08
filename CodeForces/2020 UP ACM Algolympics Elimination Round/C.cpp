#include <bits/stdc++.h>
using namespace std;

int main()
{
	int key,lock,k,days=0;
	bool l[1000000001];
	for( int i=0; i<105; i++)
		l[i]=false;
	cin>>key;
	for( int i=0; i<key; i++)
	{
		cin>>k;
		if(k==1000000000)
			l[k-1]=true;
		else if( k==1)
			l[k+1]=true;
		else
			l[k+1]=true,l[k-1]=true;
	}
	cin>>lock;
	for( int i=0; i<lock; i++)
	{
		cin>>k;
		if( l[k] )
			days++;
	}
	cout<<days<<endl;
}
