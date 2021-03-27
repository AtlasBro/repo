#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
    int a[5]={1,3,4,2,2};
    sort(a,a+5);
    for(int i=0;i<5;i++)
            cout<<a[i]<<' ';
    return 0;
 }     