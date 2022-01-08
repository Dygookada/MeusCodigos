#include <bits/stdc++.h>
using namespace std;
//Majestic 10
int main()
{
	int n,a,b,c,s;
	cin>>n;
	for( int i=0; i<n; i++)
	{
		
		cin>>a>>b>>c;
		s=0;
		if(a>=10)
			s++;
		if(b>=10)
			s++;
		if(c>=10)
			s++;
		
		printf("%d %d %d\n",a,b,c);
		if(s==0)
			cout<<"zilch"<<endl;
		if(s==1)
			cout<<"double"<<endl;
		if(s==2)
			cout<<"double-double"<<endl;
		if(s==3)
			cout<<"triple-double"<<endl;
		cout<<endl;
	}
}
