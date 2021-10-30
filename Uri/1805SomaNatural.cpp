#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    long long a,b;
    cin>>a>>b;
    long long c=abs(a-b)+1;
    
    if(c%2==0)
		cout<<(a+b)*(c/2)<<endl;
	else
		cout<<(a+b)*(c/2)+(a+b)/2<<endl;
    return 0;
}
