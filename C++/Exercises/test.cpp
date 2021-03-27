#include <iostream>
using namespace std;
long long int jc(int x)
{
    if (x >= 1)
        return x * jc(x - 1);
    else
        return 1;
}
int main()
{
    int n;
    long long int sum=0;
    cin>>n;
    while(n!=0)
    {
        sum+=jc(n);
        n--;
    }
    cout<<sum;
    return 0;
}