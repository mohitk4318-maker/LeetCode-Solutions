class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int n=nums.size();

        int first_largest=0;
        int sec_largest=0;

        for(int &num: nums)
        {
            if(num>first_largest)
            {
                sec_largest=first_largest;
                first_largest=num;
            }
            else
             sec_largest=max( sec_largest,num);
        }
        
        return ( first_largest-1) * (  sec_largest-1);
    }
};