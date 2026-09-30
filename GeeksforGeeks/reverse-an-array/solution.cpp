class Solution {
  public:
  
  void reverseArray(vector<int>& a, int l, int r){
      if(l>=r) return;
      swap(a[l], a[r]);
      reverseArray(a, l+1, r-1);
  }
  
    void reverseArray(vector<int> &arr) {
        // code here
        int n=arr.size();
        reverseArray(arr, 0, n-1);
    }
};