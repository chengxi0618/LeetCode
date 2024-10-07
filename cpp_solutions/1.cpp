class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//     // need to declare the variables before usage
//     int length;
//     int n2;
//     // vector<int> answer;
//     // sizeof() works only for statically declared arrays, for std::vector, you should use .size()
//     length = nums.size();
//     for (int i = 0; i < length; i++) {
//         n2 = target - nums[i];
//         for (int n = 0; n < length; n++) {
//             if ((i != n) && (nums[n] == n2)) {
//                 // answer.push_back(i);
//                 // answer.push_back(n);
//                 return {i,n};
//             }
//         }
//     }
//     // need to consider what to return under all conditions
//     return {};
//     }
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> m;
            for (int i = 0; i < nums.size(); i++) {
                int diff = target - nums[i];
                if (m.find(diff) != m.end()) {
                    return {m[diff], i};
                }
                m[nums[i]] = i;
            }
            return {-1, -1};
        }
};