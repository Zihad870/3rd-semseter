#include<iostream>
using namespace std;
int main(){
int num[]={5,15, -200,2,1,-34};
int s=6;
int index=-1;
int big=INT32_MIN;
for(int i=0;i<s;i++){
    if(num[i]>big){
        big=num[i];
        index=i;
       
    }
     
}
cout<<"bigest="<<big<<endl;
 cout<<"aray index="<<index<<endl;
}