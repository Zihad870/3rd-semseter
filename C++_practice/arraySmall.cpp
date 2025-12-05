#include<iostream>
using namespace std;
int main(){
int num[]={5,15, -200,2,1,-34};
int s=6;
int index=-1;
int small=INT32_MAX;
for(int i=0;i<s;i++){
    if(num[i]<small){
        small=num[i];
        index=i;
       
    }
     
}
cout<<"smallest="<<small<<endl;
 cout<<"aray index="<<index<<endl;
}