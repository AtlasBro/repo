#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    int score[n];
    if(n<3){
        return -1;
    }
    for(int i=0;i<n;i++){
        cin>>score[i];
        // if(score[i]<0||score[i]>100)
        // return -1;
    }
    for(int i=3;i<=n;i++){
        int tmp=i;
        double sum=0;
        double s=0;
        sort(score,score+tmp);
        for(int i=1;i<tmp-1;i++){
            sum+=score[i];
        }
        s=sum/(tmp-2);
        cout<<fixed<<setprecision(2)<<s<<endl;
    }
}