#include<iostream>
using namespace std;
int main(){
    int num=16;
    int count=0;
    for(int i=2;i*i<num;i++){
        if(num%2==0){
            count++;
        }
    }
    if(count==0){
        cout<<"prime number";
    }
    else{
        cout<<"non prime";
    }
}