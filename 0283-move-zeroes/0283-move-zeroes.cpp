class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i, j,temp;
        for(i = 0, j = 1 ; i < nums.size() && j < nums.size() ; ){
            if(nums[i] == 0 && nums[j] != 0){
                temp = nums[i];
                nums[i++] = nums[j];
                nums[j++] = temp;   
            }else if(nums[i] == 0 && nums[j] == 0){
                j++;   
            }else{
                i++;
                j++;
            }
        }
    }
};