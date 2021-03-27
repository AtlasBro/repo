#include<iostream>
#define N 100000
using namespace std;

long long ans(long long x){
    long long answer=(x*(x+1))/2;
    return answer;
}

int main(){
    int n;
    cin>>n;
    int num[N];
    for(int i=1;i<=n;i++){
        cin>>num[i];
    }
    long long t=0;
    long long answer=0;
    for(int i=1;i<=n;i++){
        if(num[i]>num[i+1]||i==n){
            answer+=ans(i-t);
            t=i;
        }
    }
    cout<<answer;
    return 0;
}