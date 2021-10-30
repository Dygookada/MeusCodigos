#include <bits/stdc++.h>
using namespace std;

int main()
{
	int b,t;
	cin>>b>>t;
	if((b+t)>160)
		cout<<1<<endl;
	else if((b+t)<160)
		cout<<2<<endl;
	else
		cout<<0<<endl;
}
