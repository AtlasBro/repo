#include<iostream>
using namespace std;
int main(){
    int n,v,m,a;
    int x=0;
    cin>>n>>v>>m>>a;
    int res=0;
    for(int i=1;i<=n;i+=m){
        x++;
        for(int j=i;j<i+m;j++)
        if(j<=n)
        res+=v+(x-1)*a;
    }
    cout<<res;
    return 0;
}