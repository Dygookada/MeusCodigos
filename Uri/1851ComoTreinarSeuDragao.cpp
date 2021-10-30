#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
typedef pair<int,int> ii;

int main()
{
	freopen("entrada.txt","r",stdin);
	int time,cash,now,multa=0,aloja=0;
	bool train=false;
	priority_queue<ii, vector<ii>, greater<ii>> pq;
	ii u;
	while(cin>>time>>cash)
	{
		pq.push(ii(cash,time));
		aloja+=cash;
		now--;
		if(!train)
		{//peguei
			u=pq.top();
			pq.pop();
			aloja-=u.f;
			now=u.s-1;
			train=true;
		}else
		{
			if(now<=0)
			{
				train=false;
			}
		}
		multa+=aloja;
		
		
	}
	cout<<multa<<endl;
}
