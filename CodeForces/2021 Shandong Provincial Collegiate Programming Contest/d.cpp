#include <bits/stdc++.h>
using namespace std;

int main()
{
	//~ freopen("entrada.txt","r",stdin);
	int n,x,y,vx,vy,hx,hy;
	//~ scanf("%d",&n);
	cin>>n;
	int coluna[n+1],linha[n+1];
	vx=vy=hx=hy=0;
	for( int i=1; i<=n; i++)
		coluna[i]=linha[i]=0;
	for( int i=1; i<=n; i++)
	{
		//~ scanf("%d%d",&x,&y);
		cin>>x>>y;
		if(coluna[x]==0)
		{
			vx+=2,vy+=2,coluna[x]++;
			if(x+1<=n && coluna[x+1]!=0)
				vy-=2;
			if(x-1>0 && coluna[x-1]!=0)
				vy-=2;
		}
		else
		{
			vy+=2;
			if(x+1<=n && coluna[x+1]!=0)
				vy-=2;
			if(x-1>0 && coluna[x-1]!=0)
				vy-=2;
		}
		
		if(linha[y]==0)
		{
			hx+=2,hy+=2,linha[y]++;
			if(y+1<=n && linha[y+1]!=0)
				hx-=2;
			if(y-1>0 && linha[y-1]!=0)
				hx-=2;
		}
		else
		{
			hx+=2;
			if(y+1<=n && linha[y+1]!=0)
				hx-=2;
			if(y-1>0 && linha[y-1]!=0)
				hx-=2;
		}
		//~ printf("%d %d\n",vx+vy,hx+hy);
		cout<<vx+vy<<" "<<hx+hy<<endl;
	}
	
}
