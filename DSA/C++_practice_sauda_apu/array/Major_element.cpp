#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxElement(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    return nums[n/2];   
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    int ans = maxElement(nums);

    cout << "Majority Element = " << ans << endl;

    return 0;
}
