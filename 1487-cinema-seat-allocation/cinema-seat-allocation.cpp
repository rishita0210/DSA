class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        // Map: Row Number -> Uss row ki seats ka array
        unordered_map<int, vector<int>> matr;

        for(int i = 0; i < reservedSeats.size(); i++){
            int r = reservedSeats[i][0];
            int c = reservedSeats[i][1];
            
          
            if(matr.find(r) == matr.end()){
                matr[r] = vector<int>(11, 1); 
            }
            
            matr[r][c] = 0; 
        }

        // 2. Jo rows map mein hain hi nahi, wo POORI khali hain!
        // Har khali row mein 2 families aa sakti hain.
        int count = (n - matr.size()) * 2;

        // 3. Ab sirf map wali rows par apna logic lagaiye
        for(auto const& [rowNum, row] : matr){
            
            // Wapas 1-based seats check kar rahe hain (2,3,4,5)
            bool left = (row[2] && row[3] && row[4] && row[5]);
            bool middle = (row[4] && row[5] && row[6] && row[7]);
            bool right = (row[6] && row[7] && row[8] && row[9]);
            
            if (left && right) {
                count += 2;
            } 
            else if (left || right || middle) {
                count += 1;
            }
        }

        return count;
    }
};