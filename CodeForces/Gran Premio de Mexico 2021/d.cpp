#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <bitset>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#include <stack>
#include <list>
#include <limits.h>
#include <list>
#include <fstream>
#include <string.h>
#include <time.h>
#include <cassert>
#include <cmath>
#include <chrono>

using namespace std;

#define pi 3.141592653589793
#define inf32 1000000000
#define inf64 1000000000000000000
#define inf inf32
#define ll long long int
#define ii pair<int, int>
#define db double
#define MOD 1000000007

#define tos to_string

#define sum(a, b) (ll)((((ll)(a % MOD) + (ll)(b % MOD)) + MOD) % MOD)
#define mult(a, b) (((ll)(a % MOD) * (ll)(b % MOD)) % MOD)
#define goldenratio ((double)(1 + sqrt(5)) / 2) 
#define binet(a) (ll)round((((double)pow(goldenratio, a) - (double)pow(-goldenratio, -a)) / sqrt(5)))
#define eulerconstant 0.577215664901532
#define isvalid(a_, b_, n_, m_) (a_ >= 0 && a_ < n_ && b_ >= 0 && b_ < m_)

int main()
{
	int t; scanf("%d", &t);

	while (t--)
	{
		int c, r, s; scanf("%d %d %d", &c, &r, &s);

		int lucky = 0;
		int unlucky = 0;

		if (s == 1)
			unlucky = c;
		else {
			ll aux = c;
			ll auxr = r;

			if (c > (c + r) % s && (c + r) % s) {
				aux -= ((c + r) % s - 1);
				auxr--;
			}

			aux -= (auxr * (s - 1));
			aux = max(aux, ll(0));
			unlucky = aux / s;
		}

		if (c > (c + r) % s && (c + r) % s) {
			lucky++;
			c -= (c + r) % s;
		}

		lucky += c / s;



		printf("%d %d\n", lucky, unlucky);
	}
}
