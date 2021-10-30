#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	//~ freopen("entrada","r",stdin);
	//~ freopen("saida","w",stdout);
	string inst;
	char card[]={'N','L','S','O'};
	int dirx[]={-1,0,1,0},diry[]={0,1,0,-1};
	int n,m,s,x,y;
	while(scanf("%d%d%d",&n,&m,&s) && n!=0 && m!=0 && s!=0)
	{
		char matriz[n][m],aux;
		int dir,k;
		for( int i=0; i<n; i++)
		{
			for( int j=0; j<m; j++)
			{
				scanf(" %c",&aux);
				matriz[i][j]=aux;
				if(aux=='N' || aux=='S' || aux=='L' || aux=='O')
				{
					x=i,y=j;
					for( k=0; k<4 && aux!=card[k]; k++);
					dir=k;
				}
			}
		}
		//~ printf("direcao %d\n",dir);
		cin>>inst;
		int ta=inst.size(),fig=0;
		for( int i=0; i<ta; i++)
		{
			if(inst[i]=='F')
			{
				if(x+dirx[dir%4]>=0 && x+dirx[dir%4]<n && y+diry[dir%4]>=0 && y+diry[dir%4]<m)
				{
					if(matriz[x+dirx[dir%4]][y+diry[dir%4]]!='#')
					{
						x=x+dirx[dir%4],y=y+diry[dir%4];
						if(matriz[x][y]=='*')
						{
							fig++;
							//~ printf("fig");
							matriz[x][y]='.';
						}
					}
					
				}
			}else if(inst[i]=='D')
			{
				dir=(dir+1+4)%4;
			}else{
				dir=(dir-1+4)%4;
			}
			//~ printf("x:%d y:%d\n",x,y);
		}
		printf("%d\n",fig);
		//~ for( int i=0; i<n; i++)
		//~ {
			//~ for( int j=0; j<m; j++)
			//~ {
				//~ printf("%c",matriz[i][j]);
			//~ }
			//~ printf("\n");
		//~ }
	}
}
