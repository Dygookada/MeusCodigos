#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
	fstream file;
	string aux;
	int num;
	file.open("codigobinario.txt", fstream::in | fstream::out | fstream::binary );
	file>>num;
	cin>>aux;
	file<<aux;
	cout<<num;
	file.close();
}
