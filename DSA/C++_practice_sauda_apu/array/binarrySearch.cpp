#include<iostream>
#include<vector>
using namespace std;
int binarrySarch(vector<int>arr,int tar){
    int st=0,end=arr.size()-1;
    while(st<=end){
        int mid=(st+end)/2;
        if(tar>arr[mid]){
            st=mid+1;
        }
        else if(tar<arr[mid]){
            end=mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int>arr1={-1,0,1,3,5,9,12};
    int target=12;
    cout<<binarrySarch(arr1,target);
}