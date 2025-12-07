#include<iostream>
#include<vector>
using namespace std;
int majorElement(vector<int>&nums){
    int freq=0,ans=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(freq==0){
            ans=nums[i];
        }
        if(ans==nums[i]){
            freq++;
        }
        else {

        freq--;
    }
    }
    return ans;
}

 int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2,1,1};

    int ans = majorElement(nums);

    cout << "Majority Element = " << ans << endl;

    return 0;
}