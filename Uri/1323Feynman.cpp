#include <iostream>
using namespace std;

int main()
{
	long long a;
	int n;
	while(cin>>n && n!=0)
	{
		a=0;
		for( int i=1; i<=n; i++)
		{
			a+=i*i;
		}
		cout<<a<<endl;
	}
}
