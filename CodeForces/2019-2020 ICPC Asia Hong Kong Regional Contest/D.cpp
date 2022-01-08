#include <bits/stdc++.h>
using namespace std;

int main()
{
	 int t,n,x,y;
	 cin>>t;
	 for( int i=0; i<t; i++)
	 {
		 cin>>n;
		 for( int j=1; j<n; j++)
		 {
			 cin>>x>>y;
		 }
		 if(n%2==1)
			cout<<"Alice"<<endl;
		else
			cout<<"Bob"<<endl;
	 }
}
