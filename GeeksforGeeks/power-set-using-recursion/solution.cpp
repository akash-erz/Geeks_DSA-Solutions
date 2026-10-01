class Solution {
  public:
  void solve(string s, string output, vector<string>& st){
      if(s.length()==0){
          st.push_back(output);
          return;
      }
      char ch=s[0];
      s.erase(s.begin());
      solve(s, output, st);       
      solve(s, output + ch, st); 
  }
  
    vector<string> powerSet(string s) {
        // code here
        vector<string>temp;
        solve(s,"", temp);
        return temp;
    }
};
