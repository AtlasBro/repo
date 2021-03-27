#include<iostream>
int main(){
    int m=0,n,sum=0;
    std::cin>>n;
    for(int i=1;i<=n;i++){
        int num=i;
        m=0;
        if(num<10){
            if(num==9)
            sum++;
        }
        else if(num>=10){ 
            while(num){
                m+=num%10;
                num=num/10;
            }
            if(m==9)
            sum++;
        }  
    }
    std::cout<<sum;
}