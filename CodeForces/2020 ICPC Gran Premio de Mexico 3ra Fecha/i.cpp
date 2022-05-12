#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int res=a+b+c;
	if(a>=500)
		if(b>=500)
			if(c>=500)
				cout<<res-300<<endl;
			else
				cout<<res-200<<endl;
		else
			if(c>=500 || b+c>=500)
				cout<<res-200<<endl;
			else
				cout<<res-100;
	else
		if(b>=500)
			if(c>=500 || a+c>=500)
				cout<<res-200<<endl;
			else 
				cout<<res-100<<endl;
		else
			if(c>=500)
				if(a+b>=500)
					cout<<res-200<<endl;
				else
					cout<<res-100<<endl;
			else if(a+b>=500)
				cout<<res-100<<endl;
			else if(a+c>=500)
				cout<<res-100<<endl;
			else if(b+c>=500)
				cout<<res-100<<endl;
			else if(res>=500)
				cout<<res-100<<endl;
			else
				cout<<res<<endl;
}
