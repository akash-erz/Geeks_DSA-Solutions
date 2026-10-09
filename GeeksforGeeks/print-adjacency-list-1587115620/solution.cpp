class Solution {
  public:
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        // code here
        vector<int> adj[V];
        int edgeCount= edges.size();
        //creating adjececy list
        for(int i=0;i<edgeCount;i++){
            int u=edges[i].first;
            int v=edges[i].second;
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<vector<int>> ans(V);
        for(int i=0;i<V;i++){
            // ans[i].push_back(i);
            for(int j=0; j<adj[i].size();j++){
                ans[i].push_back(adj[i][j]);
            }
        }
        return ans;
    }
};