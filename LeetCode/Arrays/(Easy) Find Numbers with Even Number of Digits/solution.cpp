class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int result = 0;
        for(int i = 0; i < nums.size(); i++){
            if(to_string(nums[i]).length() % 2 == 0) result++;
        }
        return result;
    }
};