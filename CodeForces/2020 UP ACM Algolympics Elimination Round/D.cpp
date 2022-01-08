#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,power=0;
	cin>>n;
	int exp[n];
	for( int i=0; i<n; i++)
		cin>>exp[i];
	for( int i=1; i<n-1; i++)
	{
		power+=exp[i];
	}
	cout<<power<<endl;
}
