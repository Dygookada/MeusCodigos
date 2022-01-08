#include <bits/stdc++.h>
using namespace std;

int main()
{
	int luzes=0, apaga=0;
	string s;
	cin>>s;
	
	for( int i=0; i<s.size(); i++)
	{
	
		int j;
		for( j=i; j<s.size() && s[j]=='1'; j++);
		luzes+=(j-i);
		apaga=max((j-i),apaga);
		i=j;

	}
	
	cout<<luzes-apaga<<endl;
}
	
