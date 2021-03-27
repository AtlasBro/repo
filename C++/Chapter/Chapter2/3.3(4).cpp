#include<iostream>
using namespace std;
int main(){
    string word1,word2;
    cin>>word1>>word2;
    auto len1=word1.size();
    auto len2=word2.size();
    if(word1!=word2){
        cout<<(word1>word2?word1:word2);
    }
    else
    {
        return -1;
    }
    return 0;
}