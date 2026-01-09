
#include<iostream>
using namespace std;
int printDigits(int n){
    int count =0;
    while(n!=0){
        int digit=n%10;
        count++;
        n=n/10;
    }
    return count;
}
int main(){
    int n=34567;
   cout<< printDigits(n);
    
}