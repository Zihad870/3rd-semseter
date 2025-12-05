#include<iostream>
using namespace std;
int binToDememal(int binNum){
    int ans=0,pow=1;
    while(binNum>0){
        int rem=binNum%2;
        ans+=rem*pow;
        binNum/=10;
        pow*=2;
    }
    return ans;
}
int main(){
    int binNum=101010;
    cout<<binToDememal(binNum);
}
