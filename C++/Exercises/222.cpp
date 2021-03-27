#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
    double a;
    double gpa;
    cin>>a;
    if(a>=90&&a<=100)
    {
        gpa=4.0;
    }
    if(a>=60&&a<90)
    {
        gpa=4.0-(90-a)/10;
    }
    else if(a>=0&&a<60)
    {
        double c;
        c=(int)(pow(a,0.5)*10);
         if(c>=60)
         gpa=4.0-(90-c)/10;
         else
         gpa=0;
        
    }
    cout<<fixed<<setprecision(1)<<gpa;
    return 0;
}