#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
	int f,r,dist,x,y=1;
	scanf(" %d%d",&f,&r);
	if(r==1)
	{
		scanf("%d",&x);
		dist=max(x-y,f-x);
	}else{
		scanf("%d",&x);
		dist=x-y;
		for( int i=1; i<r; i++)
		{
			y=x;
			scanf("%d",&x);
			dist=max(dist,(x-y)/2);
		}
		dist=max(dist,f-x);
	}
	printf("%d\n",dist);
}
