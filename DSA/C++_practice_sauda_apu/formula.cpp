#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b,c,x1,x2,d;
    cout<<"enter a,b,c="<<endl;
    cin>>a>>b>>c;
    d=sqrt(b*b-4*a*c);
    x1=(-b+d)/2*a;
    x2=(-b-d)/2*a;
    cout<<x1<<endl;
    cout<<x2<<endl;
}