class Solution {
  public:
  int count=0;
    int towerOfHanoi(int n, int from, int to, int aux) {
        // code here
        if(n==1){
            count++;
            return count;
        }
        towerOfHanoi(n-1, from, aux, to);
        count++;
        towerOfHanoi(n-1, aux, to, from);
        return count;
    }
};