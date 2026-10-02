class Solution {
public:
bool solve(vector<int> &arr){
    sort(begin(arr),end(arr));

    int d=arr[1]-arr[0];
    for(int i=2;i<arr.size();i++){
        if(arr[i]-arr[i-1] != d)
        return false;
    }
    return true;
}
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int m=l.size();
        vector<bool> result;

        for(int i=0;i<m;i++){
            int start=l[i];
            int end=r[i];

            vector<int> arr(begin(nums) + start,begin(nums) +end +1);

            bool isAp=solve(arr);

            result.push_back(isAp);
        }
        return result;
    }
};