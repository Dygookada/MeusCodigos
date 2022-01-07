#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,custo;
	while(scanf("%d",&n)!=EOF)
	{
		scanf("%d",&custo);
		int a[n];
		scanf("%d",&a[0]);
		int max_so_far = a[0]-custo;
		int curr_max = a[0]-custo;
		for( int i=1; i<n; i++)
		{
			scanf("%d",&a[i]);
			curr_max = max(a[i]-custo, curr_max+a[i]-custo);
			max_so_far = max(max_so_far, curr_max);
		}
		if(max_so_far>0)
			cout << max_so_far << endl;
		else
			printf("0\n");
	}
	return 0;
}
