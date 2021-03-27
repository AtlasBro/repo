#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,m,s;
    cin>>n>>m;
    int count=0;
    int save=n-1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=i;j++){
        if(save>=0)
        s+=pow(10,save)*j;
        if(s%m==0)
        count++;
        save--;
        }
    }
    cout<<count;
}