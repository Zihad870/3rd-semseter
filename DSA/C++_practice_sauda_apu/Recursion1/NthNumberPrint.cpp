#include<iostream>
using namespace std;
void PrintNum(int n){
    if(n==0){//base case
     cout<<"1\n";
     return;
    }
    cout<<n<<" ";
    PrintNum(n-1);//back traking

}
int main(){
    PrintNum(100);
}