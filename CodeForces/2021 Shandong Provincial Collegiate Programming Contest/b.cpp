#include <bits/stdc++.h>
using namespace std;

#define nd second
#define st first
#define iii(a,b,c) iii(a,ii(b,c))

typedef pair<int,int>ii;
typedef pair<int,ii>iii;
typedef vector<ii>vi;

int n, L, R, a[200001],soma;
unsigned long long seed;
vi edge;

int find( int x)
{
	if(x==a[x]) return x;
	return a[x] = find(a[x]);
}




unsigned long long xorshift64()
{
	unsigned long long x=seed;
	x ^= x<<13;
	x ^= x>>7;
	x ^= x<<17;
	return seed = x;
}

int gen ()
{
	return xorshift64() % (R-L+1) + L;
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}

int main()
{
	int primo=0,menor= INT_MAX;
	scanf("%d%d%d%llu", &n,&L,&R,&seed);
	for( int i=1; i<=n; i++)
	{
		a[i]=gen();
		if(isPrime(a[i]))
			primo=max(primo,a[i]);
		if(a[i]<menor)
			menor=a[i];
		printf("%d\n",isPrime(a[i]));
	}
	soma=0;
	for( int i=1; i<=n; i++)
	{
		int aux=__gcd(a[i],primo);
		soma+=aux;
		printf("%d\n",aux);
	}
	printf("%d",soma);
}
