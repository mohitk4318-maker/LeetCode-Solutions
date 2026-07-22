class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        int high_alt=0;
        int current =0;

        for(int i=0;i<gain.size();i++){
            current += gain[i];
            high_alt=max(current,high_alt);

        }
        
        return high_alt;
    }
};