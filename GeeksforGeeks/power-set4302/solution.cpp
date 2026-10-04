class Solution {
  public:
  void solve(string st, string op, vector<string>&ans){
      if(st.size()==0){
          ans.push_back(op);
          return;
      }
      char ch=st[0];
      st.erase(st.begin());
      solve(st, op, ans);
      solve(st, op+ch, ans);
  }
    vector<string> powerSet(string &s) {
        // Code here
        vector<string> temp;
        solve(s, "", temp);
        sort(temp.begin(), temp.end());
        return temp;
    }
};