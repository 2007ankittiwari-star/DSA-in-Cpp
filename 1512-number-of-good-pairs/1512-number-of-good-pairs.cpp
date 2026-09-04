class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int no_of_pairs=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    no_of_pairs++;
                }
            }
        }
        return no_of_pairs;
    }
};