#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
	//~ freopen("entrada.txt","r",stdin);
	//~ freopen("saida","w",stdout);

	bool flag,ant=true;
	char t;
	char proib[]={'p','P','s','S','v','V','x','X','j','J','b','B','z','Z','f','F'};
	while(scanf("%c",&t)!=EOF)
	{
		flag=false;
		for( int i=0; i<16; i++)
		{
			if(t==proib[i])
				flag=true;
		}
		if(flag)
		{
			if(ant)
			{
				if(t>='a' && t<='z')
					printf("f");
				if(t>='A' && t<='Z')
					printf("F");
				ant=false;
			}
			
		}
		else
		{
			printf("%c",t);
			ant=true;
		}
	}
}
