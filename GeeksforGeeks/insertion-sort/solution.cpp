class Solution {
  public:
  void insertP(vector<int>&v, int temp){
      if(v.size()==0 || v[v.size()-1]<=temp){
          v.push_back(temp);
          return;
      }
      int val=v[v.size()-1];
      v.pop_back();
      insertP(v, temp);
      v.push_back(val);

  }
  
    void insertionSort(vector<int>& v) {
        if(v.size()==1)return;
           int temp=v[v.size()-1];
           v.pop_back();
           insertionSort(v);
           insertP(v, temp);
        
    }
};