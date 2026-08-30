class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        int minn=nums[0];
        int maxx=nums[0];
        int mi=0;
        int mx=0;
        int ans=0;
        int n=nums.size();

        for(int i=1;i<nums.size();i++){

            if(nums[i]<minn){
                minn=nums[i];
                mi=i;
            }
            if(nums[i]>maxx){
                maxx=nums[i];
                mx=i;
            }

        }

         ans = min({
            max(mi, mx) + 1,       // both from left
            n - min(mi, mx),       // both from right
            mi + 1 + n - mx,       // min left, max right
            mx + 1 + n - mi        // max left, min right
        });

        return ans;


        
    }
};