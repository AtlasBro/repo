#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,k;
        cin>>n>>k;
        if((n-1)%(k+1)!=0)
        {
            cout<<"yo xi no forever!\n";
        }
        else
        {
            cout<<"ma la se mi no.1!\n";
        }
    }
    return 0;
}