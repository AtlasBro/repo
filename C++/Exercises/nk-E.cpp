#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    int T,n,x,a,b;
    double r,c,temp;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>n>>x;
        a=min(x-1,n-x);
        b=max(x-1,n-x);
        c=(double)(b-a);
        r=(sqrt(5.0)+1.0)/2.0;
        temp=(int)(r*c);
        if(temp!=a){
            cout<<"yo xi no forever!\n";
        }
        else
        {
            cout<<"ma la se mi no.1!\n";
        }
        
    }
    return 0;
}