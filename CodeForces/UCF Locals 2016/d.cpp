#include <bits/stdc++.h>
using namespace std;
//Wildest Dreams
int main()
{
	int n,t,k,d,s;
	scanf(" %d",&n);
	for( int i=0; i<n; i++)
	{
		scanf(" %d%d",&t,&k);
		
		int cd[t],tp;
		for( int ii=0; ii<t; ii++)
		{
			scanf(" %d",&tp);
			cd[ii]=tp;
		}
		//~ soma-=cd[k-1];
		scanf(" %d",&d);
		printf("CD #%d\n",i+1);
		for( int j=0; j<d; j++)
		{
			scanf(" %d",&s);
			int carga=0,tempo=0,drive,soma=0;
			
			for( int kk=0; kk<s; kk++)
			{
				scanf(" %d",&drive);
				for( int ii=0; ii<t; ii++)
					soma+=cd[ii];
				if(kk%2==0)
				{//ela esta
					//~ printf("%d",drive%cd[k-1]);
					if(drive%cd[k-1]==0)
						tempo+=drive;
					else
					{
						if(kk+1<s)
						{
							carga=(drive/cd[k-1]+1)*cd[k-1]-drive;
							tempo+=(drive);
						}
						else
							tempo+=drive;
					}
				}
				else
				{// ela nao esta
					if(drive<carga)
					{
						tempo+=drive;
						
					}
					else
					{
						tempo+=carga;
						drive-=carga;
						
						tempo+=(drive/soma)*cd[k-1];
						drive=drive-drive/soma*soma;
						soma-=cd[k-1];
						tempo+= max(drive-soma,0);
					}
				}
			}
			printf("%d\n",tempo);
		}
	}
}
