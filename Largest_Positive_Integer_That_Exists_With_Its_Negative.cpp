#include <bits/stdc++.h>

using namespace std;

#define ll long long

int solve(vector<int>& nums){
    sort(nums.begin(), nums.end());

    for(int i = nums.size()-1; i >= 0; --i){
        int x = -nums[i];
        
        if(nums[i] > 0 && binary_search(nums.begin(), nums.end(), x))
            return nums[i];
    }

    return -1;  
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> nums;
    nums.push_back(-1);
    nums.push_back(10);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(-7);
    nums.push_back(1);

    cout << solve(nums) << endl;

    return 0;
}