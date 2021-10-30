#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,v[]={0,0,0},aux;
	char a;
	cin>>n>>a;
	v[a-'A']=1;
	for( int i=0; i<n; i++)
	{
		cin>>aux;
		int num;
		if(aux==1)
		{
			num=v[0];
			v[0]=v[1];
			v[1]=num;
		}else if( aux==2)
		{
			num=v[1];
			v[1]=v[2];
			v[2]=num;
		}else if(aux==3)
		{
			num=v[0];
			v[0]=v[2];
			v[2]=num;
		}
	}
	if(v[0]==1)
	{
		cout<<'A'<<endl;
	}else if(v[1]==1)
	{
		cout<<'B'<<endl;
	}else if(v[2]==1)
	{
		cout<<'C'<<endl;
	}
}
