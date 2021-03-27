#include<iostream>
#include<string.h>
#include<set>
#include<map> 
using namespace std;

int main(){
    int N;
    cin>>N;
    set<string> s[101];
    map<string,int> mp1;
    map<string,int> mp2;
    map<string,int> mp3;
    for(int i=1;i<=N;i++)
    {
        string name;
        int cj,xb,xh;
        cin>>name>>cj>>xb>>xh;
        s[cj].insert(name);
        mp1[name]=cj;
        mp2[name]=xb;
        mp3[name]=xh;
    }
    int M;
    cin>>M;
    while(M--){
        int a;
        cin>>a;
        if(a==1){
            string name;
            cin>>name;
            cout<<mp1[name]<<" "<<mp3[name]<<" "<<mp2[name]<<endl; 
        }
        else if(a==2){
            int score;
            cin>>score;
            set<string>::iterator it;
            it=s[score].begin();
            for(;it!=s[score].end();it++){
                cout<<*it<<"\n";
            }
        }
    }
    return 0;
}