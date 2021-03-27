#include<iostream>
#include<math.h>
int main(){
    int a,b,c;
    std::cin>>c;
    for(a=1;a<c;a++){
        int m=pow(c,2)-pow(a,2);
        b=sqrt(m);
        if(pow(b,2)==m){
            std::cout<<a<<" "<<b;
            break;
        }
    }
}