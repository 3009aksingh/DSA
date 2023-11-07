class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i, j,temp;
        // for(i = 0 ; i < nums.size() ; i++){
        //     cout<<nums[i]<<" ";
        // }
        // cout<<"\n";
        for(i = 0, j = 1 ; i < nums.size() && j < nums.size() ; ){
            if(nums[i] == 0 && nums[j] != 0){
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp; 
                i++;
                j++;  
            }else if(nums[i] == 0 && nums[j] == 0){
                j++;   
            }else{
                i++;
                j++;
            }
            // for(ptr1 = 0 ; ptr1 < nums.size() ; ptr1++){
            //     cout<<nums[ptr1]<<" ";
            // }
            // cout<<"\n";
        }
        // cout<<"Final : ";
        // for(i = 0 ; i < nums.size() ; i++){
        //     cout<<nums[i]<<" ";
        // }
    }
};