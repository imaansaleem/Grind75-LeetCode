class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>arr(2);
        unordered_map<int, int>a;
        for(int i=0;i<nums.size();i++)
            a[nums[i]] = i;

        unordered_map<int, int> :: iterator itr;

        for (int m=0;m<nums.size();m++) {
            itr = a.find(target-nums[m]);

            //checking if itr found the value or not
            if(itr!=a.end() && itr->second!=m){
                arr[0] = m;
                arr[1] = itr->second;
                return arr;
            }
        }
        return arr;
    }
};
