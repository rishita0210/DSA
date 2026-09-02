class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        int counteven=0;
        int countodd=0;

        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2==0) counteven++;
            else{
                countodd++;
            }
        }

        if(counteven==n || countodd==n || n>=2) return true;

        return false;
        
    }
};