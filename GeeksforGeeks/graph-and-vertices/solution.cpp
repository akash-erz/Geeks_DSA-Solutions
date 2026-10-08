class Solution {
  public:
    
    long long POW(long long c, long long e){
        if(e==0){
            return 1;
        }
        if(e%2==0) return POW(c*c, e/2);
        else return c*POW(c*c, e/2);
        
    }
    long long count(int n) {
        // code here
        int e = n*(n-1)/2;
        return POW(2, e);
    }
};