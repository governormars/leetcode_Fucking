class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        vector<int> result;
        for (int i=0; i < nums.size(); i++) {
            int NumberToFind = target - nums[i];

            //if find number,return them
            if (hash.find(NumberToFind) != hash.end()) {
              result.push_back(hash[NumberToFind]);
              result.push_back(i);
              return result;
            }
            //add hash value
            hash[nums[i]] = i;
        }
        return result;
    }
};
