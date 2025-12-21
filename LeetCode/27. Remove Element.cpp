class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0;
        int t = nums.size();
        for(int i = 0; i < t; i++){
            if(nums[i] != val){
                nums[j++] = nums[i];
            }
        }
        return j;
    }
};