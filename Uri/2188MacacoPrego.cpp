#include <bits/stdc++.h>
using namespace std;

const double EPS = 1E-9;

int main()
{
	//~ freopen("entrada","r",stdin);
	//~ freopen("saida","w",stdout);
	int n,cont=0,deumerda=1;
	while( scanf("%d",&n) && n!=0)
	{
		deumerda=1;
		double x[n][2],y[n][2];
		double a,b,c,d, x1,x2,y1,y2;
		scanf("%lf %lf %lf %lf",&x[0][0],&y[0][0],&x[0][1],&y[0][1]);
		x1=x[0][0],x2=x[0][1],y1=y[0][0],y2=y[0][1];
		for( int i=1; i<n; i++)
		{
			scanf("%lf %lf %lf %lf",&x[i][0],&y[i][0],&x[i][1],&y[i][1]);
			if( x1 > x2 )
				a = x2, b = x1;
			else
				a = x1, b = x2;
			
			if( x[i][0] > x[i][1] )
				d = x[i][0], c = x[i][1];
			else
				c = x[i][0], d = x[i][1];
			
			if( max(a,c) <= min(b,d) )
				x1=max(a,c),x2=min(b,d);
			else
				deumerda=0;
				
			if(y1 > y2)
				a=y2,b=y1;
			else
				a=y1,b=y2;
			
			if( y[i][0] > y[i][1] )
				d = y[i][0], c = y[i][1];
			else
				c = y[i][0], d = y[i][1];
				
			if( max(a,c) <= min(b,d))
				y1=max(a,c),y2=min(b,d);
			else
				deumerda=0;
		}
		printf("Teste %d\n",++cont);
		a=max(x1,x2);
		b=max(y1,y2);
		c=min(x1,x2);
		d=min(y1,y2);
		if(deumerda)
			printf("%d %d %d %d\n",(int)x1,(int)b,(int)x2,(int)d);
		else
			printf("nenhum\n");
		
		printf("\n");
	}
}
