class Solution {
  public:
  void solve(vector<string>&temp, string op, string s){
      if(s.length()==0){
          temp.push_back(op);
          return;
      }
     char ch = s[0];
     s.erase(s.begin());

     solve(temp, op + " " + ch, s); 
     solve(temp, op + ch, s);   
  }
  
    vector<string> permutation(string s) {
        // code here
        vector<string> temp;
        string op1(1, s[0]);
        s.erase(s.begin());
        solve(temp,op1, s);
        return temp;
    }
};