#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	double d,u,v,t1,t2,delta;
	scanf(" %d",&n);
	for( int i=1; i<=n; i++)
	{
		scanf("%lf%lf%lf",&d,&v,&u);
		t1=d/u;
		delta=u*u-v*v;
		t2=d/sqrt(delta);
		//~ printf("%lf",t2);
		if(delta>0 && t2-t1>0)
		{
			printf("Case %d: %.3lf\n",i,t2-t1);
		}else{
			printf("Case %d: can't determine\n",i);
		}
	}
}
