class Solution {
public:
    vector<string> result;

    void dfs(string cur, int open, int close, int n) {

        if (cur.length() == n * 2) {
            result.push_back(cur);
            return;
        }

        if (open < n)
            dfs(cur + "(", open + 1, close, n);

        if (close < open)
            dfs(cur + ")", open, close + 1, n);
    }

    vector<string> generateParenthesis(int n) {
        dfs("", 0, 0, n);
        return result;
    }
};