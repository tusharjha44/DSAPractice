class Solution {
public:
    
    vector<vector<int>> allSubsets;
    
    void generateSubsets(vector<int> &subsets,int i,vector<int> &nums){
        if(i == nums.size()){
            allSubsets.push_back(subsets);
            return;
        }
        
        generateSubsets(subsets,i+1,nums);
        
        subsets.push_back(nums[i]);
        generateSubsets(subsets,i+1,nums);
        subsets.pop_back();
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> empty;
        generateSubsets(empty,0,nums);
        return allSubsets;
    }
};
