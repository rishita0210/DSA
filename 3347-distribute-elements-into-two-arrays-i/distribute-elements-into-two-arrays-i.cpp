class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {

        vector<int>arr1;
        vector<int>arr2;
        vector<int>result;

        
        

        for(int i=0;i<nums.size();i++){

            if(i==0){
                arr1.push_back(nums[0]);
            }else if(i==1){
                arr2.push_back(nums[1]);
            }else{
                if(arr1[arr1.size()-1]>arr2[arr2.size()-1]){
                    arr1.push_back(nums[i]);
                }else{
                    arr2.push_back(nums[i]);
                }
            }

        }

        for(int j=0;j<arr1.size();j++){
            result.push_back(arr1[j]);
        }

        for(int j=0;j<arr2.size();j++){
            result.push_back(arr2[j]);
        }
        return result;
    }
};