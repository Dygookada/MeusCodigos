#include <bits/stdc++.h>
using namespace std;

#define maxn 100100
#define fi first
#define se second
#define ll long long
typedef pair<ll,ll> ii;

ll vet[maxn],ouro[maxn];
ii area[maxn];
ll n;

ll gold( ll x)
{
	if(x>=n)
		return 0;
	if(vet[x]!=0)
		return vet[x];
	ll ma=0;
	for( ll i=area[x].fi; i<=area[x].se; i++)
		ma = max(ma,gold(x+i));
	
	return vet[x] = ma+ouro[x];
}

int main()
{
	cin>>n;
	for( int i=0; i<n; i++)
		cin>>ouro[i]>>area[i].fi>>area[i].se;
	ll rico=0;
	for( int i=n; i>=0; i--)
		rico = max(rico,gold(i));
	
	cout<<rico<<endl;
}
