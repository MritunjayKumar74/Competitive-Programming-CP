class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int t = nums.size();
        int x = nums[0] + nums[1] + nums[2];
        for(int i = 0; i < t-2; i++){
            for (int j = i+1; j < t - 1; j++){
                for (int k = j+1; k < t; k++){
                    int y = nums[i] + nums[j] + nums[k];
                    if(abs(x - target) >= abs(y - target)){
                        x = y;
                    }
                }
            }
        }
        
        return x;
    }
};