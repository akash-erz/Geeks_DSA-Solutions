class Solution {
  public:
    
    void insert(stack<int> &s, int temp){
        if(s.size()==0 || s.top()<=temp){
            s.push(temp);
            return;
        }
        int ele=s.top();
        s.pop();
        insert(s, temp);
        s.push(ele);
    }
    void sortStack(stack<int> &st) {
        // code here
        if(st.size()==1){
            return;
        }
        int temp = st.top();
        st.pop();
        sortStack(st);
        insert(st, temp);
        return;
    }
};
