class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {

        string ans="";
        int n=s.size();

        for(int i=0;i<n;i++){
            int onecnt=0;
            string curr="";

            for(int j=i;j<n;j++){
                curr+=s[j];

                if(s[j]=='1') onecnt++;

                if(onecnt>k) break;

                if(onecnt==k){
                    if(ans== "" || curr.size()<ans.size() || (curr.size()==ans.size() && curr<ans)){
                        ans=curr;
                    }
                }

            }
        }
        return ans;
    }
};