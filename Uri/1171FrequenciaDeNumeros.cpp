#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n,aux;
    map<int,int> frequencia;
    cin>>n;
    for( int i=0; i<n; i++)
    {
        cin>>aux;
        if(frequencia.count(aux)==0)
            frequencia[aux]=1;
        else
            frequencia[aux]++;
    }
    for( map<int,int>::iterator it = frequencia.begin(); it!=frequencia.end(); it++)
    {
        cout<<it->first<<" aparece "<<it->second<<" vez(es)"<<endl;
    }
 
    return 0;
}
