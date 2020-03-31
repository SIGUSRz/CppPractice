#include "Two_Sum.hpp"

vector<int> Two_Sum::twoSum(vector<int> &nums, int target) {
    vector<int> result;
    unordered_map<int, int> mp;

    for (auto iter = nums.begin(); iter != nums.end(); ++iter) {
        int idx = iter - nums.begin();
        int cache = target - *iter;
        if (mp.find(cache) != mp.end()) {
            result.push_back(idx);
            result.push_back(mp[cache]);
            return result;
        }
        mp[*iter] = idx;
    }
    return result;
}