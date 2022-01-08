#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	char vogais[]={'a','e','i','y','o','u'};
	int n,vog=0;
	cin>>n;
	cin>>s;
	for( int i=0; i<s.size(); i++)
		for( int j=0; j<6; j++)
			if(s[i]==vogais[j])
				vog++;
	
	if(s.size()-vog>vog)
		cout<<vog<<endl;
	else
		cout<<s.size()-vog<<endl;
}
