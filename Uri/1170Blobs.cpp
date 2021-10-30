#include <iostream>
using namespace std;

int main()
{
	int exp[]={1,2,4,8,16,32,64,128,256,512,1024},n;
	double c;
	cin>>n;
	for( int i=0; i<n; i++)
	{
		cin>>c;
		int j=0;
		while(c>exp[j])
		{
			j++;
		}
		cout<<j<<" dias"<<endl;
	}
}
