#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159265

int main()
{
	double seno,cosseno,l,w,h,x,y,ang;
	scanf(" %lf%lf%lf%lf%lf%lf",&l,&w,&h,&x,&y,&ang);
	seno=h*sin(ang*PI/180.00)+y;
	cosseno=h*cos(ang*PI/180.0)+x;
	//~ cout<<seno<<endl<<cosseno<<endl;
	if(seno<=l+seno*0.01 && seno>=0-seno*0.01 && cosseno<=w+cosseno*0.01 && cosseno>=0-cosseno*0.01)
		printf("YES\n");
	else
		printf("NO\n");
}
