class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> gen;
        
        int num = pow(2, nums.size()) - 1;
        while(num>=0){
            vector<int> loc;
            //int check = 0;
            for(int i = 0; i < nums.size(); i ++){
                if((num>>i)&1){
                    loc.push_back(nums[i]);
                    
                }
            }
            num -=1;
            gen.push_back(loc);
        }
        return gen;
    }
};