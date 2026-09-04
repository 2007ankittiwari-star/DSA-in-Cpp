class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int index=0;
        while(index<nums.size()){
            int leftsum=0;
            for(int i=0;i<index;i++){
                leftsum+=nums[i];
        }
            int rightsum=0;
            for(int j=nums.size()-1;j>index;j--){
                rightsum+=nums[j];
        }
            if(leftsum==rightsum){
                return index;
                break;
            }
            index++;
            
        }
        return -1;
    }
};