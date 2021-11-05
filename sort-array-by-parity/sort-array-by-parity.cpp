class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        if(nums.size()==1){return nums;}
        int high = nums.size() -1;
        int low = 0;
        while(low<=high){
            int check = nums[low]%2;
            if(check == 0){
                low++;
            }
            else{
                swap(nums[low],nums[high]);
                high--;
            }
        }
        return nums;
    }
};