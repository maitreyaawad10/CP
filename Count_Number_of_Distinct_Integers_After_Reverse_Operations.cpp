#include <bits/stdc++.h>

using namespace std;

#define ll long long

int reverse(int n){
    int x = 0;

    while(n > 0){
        x = (x * 10) + (n % 10);
        n /= 10;
    }

    return x;
}

int countDistinctIntegers(vector<int>& nums){
    unordered_set<int> st;

    for(auto value : nums){
        st.insert(value);
        st.insert(reverse(value));
    }

    return st.size();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> nums;
    nums.push_back(1);
    nums.push_back(13);
    nums.push_back(10);
    nums.push_back(12);
    nums.push_back(31);

    cout << countDistinctIntegers(nums) << endl;

    return 0;
}