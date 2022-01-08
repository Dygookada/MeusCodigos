#include <bits/stdc++.h>
using namespace std;

int main()
{
	set<int> a;
	int x;
	pair< set<int> ::iterator, bool> p;
	while(cin>>x)
	{
		p=a.insert(x);
		if(a.insert(x).second)
			cout<<"foi inserido "<<x<<endl;
		else
			cout<<"Ja foi inserido esse valor "<<endl;
		cout<<*p.first<<endl;
	}
}
