#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>&num,int tar){
    int st=0,end=num.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(num[mid]==tar){
            return mid;
        }
        if(num[st]<=num[mid]){
            if(num[st]<=tar&& tar<=num[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else{
            if(num[mid]<=tar&&tar<=num[end]){
                st=mid+1;
            }
            else {
                end=mid-1;
            }
        }
    }
}
int main(){
    vector<int>num={4,5,6,7,0,1,2};
    int tar=0;
    cout<<search(num,tar)<<endl;
}