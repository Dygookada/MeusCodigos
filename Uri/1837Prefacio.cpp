#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<a/b<<" "<<a%b<<endl;
	if(a%b>=0)
		cout<<a/b<<" "<<a%b<<endl;
	else
		cout<<a/(b-1)<<" "<<a-(a/(b-1))*b<<endl;
}
