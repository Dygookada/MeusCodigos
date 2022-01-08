#include <bits/stdc++.h>
using namespace std;

int main()
{
	int key,lock;
	cin>>key>>lock;
	if( key==1 )
	{
		if( lock==2 )
			printf("GOOD LUCK AGENT P\n");
		else
			printf("CURSE YOU\n");
	}else if( key==2 )
	{
		if( lock==1 || lock==3 )
			printf("GOOD LUCK AGENT P\n");
		else
			printf("CURSE YOU\n");
	}else if( key==3 )
	{
		if( lock==2 || lock==4)
			printf("GOOD LUCK AGENT P\n");
		else
			printf("CURSE YOU\n");
	}else if( key==4 )
	{
		if( lock==3 || lock==5)
			printf("GOOD LUCK AGENT P\n");	
		else
			printf("CURSE YOU\n");
	}else if( key==5)
	{
		if( lock==4)
			printf("GOOD LUCK AGENT P\n");
		else
			printf("CURSE YOU\n");
	}
}
