#include <bits/stdc++.h>
using namespace std;

bool inside( int xa, int xb, int a)
{
	return a<max(xa,xb) && a>min(xa,xb);

}

int main()
{
	int xb,yb,xa,ya,x,y1,y2;
	scanf(" %d %d %d %d %d %d %d",&xb,&yb,&xa,&ya,&x,&y1,&y2);
	int res=0, xma,xme,yma,yme;
	yma=max(ya,yb);
	yme=min(ya,yb);
	xma=max(xa,xb);
	xme=min(xa,xb);
	
	if(inside(xma,xme,x))
	{
		bool um=inside(yma,yme,y1);
		bool dois=inside(yma,yme,y2);
		if( um || dois)
			res = xma-xme+yma-yme;
		else
		{
			
			if(y1>0)
				res = xma-xme+yma-yme+min(2*abs(yme-y1+1),2*abs(yma-y2+1));
			else
				res = xma-xme+yma-yme+2*abs(yma-y2);
		}
	}
	else
	{
		res = xma-xme+yma-yme;
	}
	//~ printf("%d %d %d %d %d\n",abs(xma-xme),abs(yma-yme),max(2*min(baixo,cima),0),cima,baixo);
	cout<<res<<endl;
}
