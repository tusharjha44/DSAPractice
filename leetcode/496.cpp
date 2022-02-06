class Solution {
public:
vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    stack<int> st;
    unordered_map<int, int> m;
    for (auto &x : nums2)
    {
        while (st.size() && st.top() < x)
        {
            m[st.top()] = x;
            st.pop();
        }
        st.push(x);
    }
    vector<int> ans;
    for (auto &x : nums1)
        ans.push_back(m.count(x) ? m[x] : -1);
    return ans;
}
};
