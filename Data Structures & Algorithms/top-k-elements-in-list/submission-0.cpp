class Solution {
public:
static bool cmp(pair<int,int> a, pair<int,int> b) {
    return a.second < b.second;
}
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>> v(m.begin(), m.end());
        sort(v.begin(), v.end(), cmp);
        int n = (int)v.size();
        vector<int> ans;
        for (int i = n - 1; i >= n - k; i--) {
            ans.push_back(v[i].first);
        }

        return ans;
    }
};