#include <bits/stdc++.h>
using namespace std;

int main()
{
	string som;
	int c,n;
	cin>>c;
	for( int i=0; i<c; i++)
	{
		bool isbop=true;
		cin>>n;
		for( int j=0; j<n; j++)
		{
			cin>>som;
			if(som!="BEEP" && som!="BOOP")
				isbop=false;
		}
		if(isbop)
			cout<<"IT'S A BOP!"<<endl;
		else
			cout<<"IT'S NOT A BOP!"<<endl;
	}
}
