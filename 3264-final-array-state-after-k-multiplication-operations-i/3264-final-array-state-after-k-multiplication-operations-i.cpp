class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k){
           int min = nums[0];
           int i = 0;
           for(int j=0;j<nums.size();j++){
            if(nums[j]<min){
                i=j;
            }
           }
           nums[i] = nums[i] * multiplier;
           k--;
        }
        return nums;
    }
};