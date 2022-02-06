class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &vi)
    {
        int n = vi.size();
        vector<int> nge(n, -1);
        vector<int> res(n, -1);
        vi.resize(2 * n);
        for (int i = n; i < 2 * n; i++)
        {
            vi[i] = vi[i - n];
        }
        stack<int> st;
        for (auto i = 0; i < 2 * n; i++)
        {
            while (!st.empty() && vi[i] > vi[st.top()])
            {

                if (st.top() >= n)
                {
                    st.top() = st.top() - n;
                }

                nge[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        for (int i = 0; i < n; i++)
        {
            if (nge[i] != -1)
            {
                res[i] = vi[nge[i]];
            }
        }
        return res;
    }
};
