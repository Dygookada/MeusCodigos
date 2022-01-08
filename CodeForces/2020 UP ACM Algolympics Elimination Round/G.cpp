#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for( int i=0; i<t; i++)
	{
		long long m;
		cin>>m;
		int m3=1,m5=1,m7=1;
		if(m%3==0)
			printf("AGENT 003\n"),m3=0;
		if(m%5==0)
			printf("AGENT 005\n"),m5=0;
		if(m%7==0)
			printf("AGENT 007\n"),m7=0;
		if(m3 && m5 && m7)
			printf("NONE\n");
		printf("---\n");
	}
}
