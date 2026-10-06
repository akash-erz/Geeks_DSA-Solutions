class Solution {
  public:
  
  void solve(vector<string>&s, int zeroS, int oneS, int n, string op){
      if(n==0){
          s.push_back(op);
          return;
      }
      string op1=op;
      op1.push_back('1');
      solve(s, zeroS, oneS+1, n-1, op1);
      
      if(oneS>zeroS){
          string op2=op;
          op2.push_back('0');
          solve(s, zeroS+1, oneS, n-1, op2);
      }
  }
    vector<string> nBitBinary(int n) {
        // code here
        vector<string> temp;
        int zCount=0;
        int oCount=0;
        solve(temp, zCount, oCount, n, "");
        return temp;
    }
};