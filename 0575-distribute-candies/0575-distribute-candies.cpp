class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int>s;
        int n = candyType.size();
        for(int x : candyType){
            s.insert(x);
        }
        if(s.size()>n/2){
            return n/2;
        }
        else if(s.size()==n){
            return n;
        }
            return s.size();
        
    }
};