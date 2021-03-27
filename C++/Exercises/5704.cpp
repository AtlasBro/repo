#include<iostream>
int main(){
    char a;
    std::cin>>a;
    if(a>=65&&a<=90)
    std::cout<<char(a+32);
    else if(a>=97&&a<=122)
    std::cout<<char(a-32);
}