class Solution
{
    public:
        string longestCommonPrefix(vector<string> &strs)
        {
            int n = strs.size();
            if (n == 0) return "";
            if (n == 1) return strs[0];
            sort(strs.begin(), strs.end());
            string ans = "";
            string a = strs[0];
            string b = strs[n - 1];
            for (int i = 0; i < a.size(); ++i)
            {
                if (a[i] != b[i]) break;
                ans.push_back(a[i]);
            }
            return ans;
        }
};