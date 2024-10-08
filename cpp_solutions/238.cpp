class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // .push_back .insert will cost lots of time
        // pre-allocate vectors of known size and pre-fill them with appropriate values save lots of time
        int l = nums.size();
        vector<int> prefix(l,1);  // (size, default value) size can be variable only in vector declaration
        vector<int> suffix(l,1);  // size should be constant in array declaration 
        vector<int> ans(l,1);
        for (int i = 1; i < l; i++) {
            prefix[i] = prefix[i-1] * nums[i-1];
            suffix[l-1-i] = suffix[l-i] * nums[l-i];
        }
        for (int i = 0; i < l; i++) {
            ans[i] = prefix[i] * suffix[i]; 
        }
        return ans;
    }
};