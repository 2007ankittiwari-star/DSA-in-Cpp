class Solution {
public:
    int reverse(int x) {
        vector <int> nums;
        while(x!=0){
            nums.push_back(x%10);
            x/=10;
        }
        x=0;
        for(int i=0;i<nums.size();i++){
            if((x>INT_MAX/10)||(x<INT_MIN/10)){
                return 0;
            }
            if(((x==INT_MAX/10)&&(nums[i]>7))||((x==INT_MIN/10)&&(nums[i]<-8))){
                return 0;
            }
            
            x=x*10+nums[i];
        }
        return x;
        
    }
    
    
};