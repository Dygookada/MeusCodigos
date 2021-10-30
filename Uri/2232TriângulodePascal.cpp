#include <iostream>
using namespace std;

int main()
{
	long long x;
	int n,exp;
	cin>>n;
	for( int i=0; i<n; i++)
	{
		cin>>exp;
		x=1;
		for (int j = 0; j < exp; j++)
		{
			x=x*2;
		}
		cout<<x-1<<endl;
	}
}
