class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        
        unordered_set<int> elements(nums.begin(), nums.end());

        int curr = k;
    
        while(true){
            if(elements.find(curr)==elements.end()){
                return curr;
            }

            curr+=k;
        }
    }
};