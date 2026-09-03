class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

        int oddcnt=0;
        int evencnt=0;
        int n=nums1.size();

        sort(nums1.begin(),nums1.end());

        for(int i=0;i<n;i++){
            if(nums1[i]%2==0){
                evencnt++;
            }else{
                oddcnt++;
            }
        }

        if(evencnt==n || oddcnt==n) return true;

        else{
            if(nums1[0]%2==0) return false;

            else{
                return true;
            }
        }
        
    }
};