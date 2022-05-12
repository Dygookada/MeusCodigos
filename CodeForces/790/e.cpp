#include <bits/stdc++.h>
using namespace std;

#define maxn 100010
#define inf 123456789

int main()
{
	int t,n,q;
	cin>>t;
	while(t--)
	{
		cin>>n>>q;
		vector<int> d(n), s(n);
		for( int i=0; i<n; i++)
			cin>>d[i];
			
		
		sort(d.rbegin(), d.rend());
		s[0]=d[0];
		for( int i=1; i<n; i++)
			s[i]=s[i-1]+d[i];
		
		int p;
		while(q--)
		{
			cin>>p;
			int l=1, r=n,res=-1;
			while(l<=r)
			{
				int mid = (l + r) / 2;
				if(s[mid - 1] >= p) {
					res = mid;
					r = mid - 1;
				} else {
					l = mid + 1;
				}
			}
			cout<<res<<endl;
		}
	}
}
