class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {

        vector<int>result(seq.size());
        int d=0;

        for(int i=0;i<seq.size();i++){

            if(seq[i]=='('){
                d++;
                result[i]=(d%2==0)? 1:0;
            }else{
                d--;
                result[i]=(d%2==0)? 0:1;

            }

        }
        return result;
    }
};