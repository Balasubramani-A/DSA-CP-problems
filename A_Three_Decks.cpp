class Solution {
  public:
    void topoSort(vector<pair<int, int>> adj[], stack<int> &st, vector<int> &vis, int start){
        vis[start] = 1;
        for(auto it : adj[start]){
            int v = it.first;
            if(!vis[v]){
                topoSort(adj, st, vis, v);
            }
        }
        st.push(start);
    }
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
        // code here
        stack<int> st;
        vector<int> vis(V, 0);
        vector<pair<int, int>> adj[V];
        for(int i = 0; i < E; i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];
            adj[u].push_back({v, wt});
            
        }
        //Step1 Find the topological sort
        for(int i = 0; i < V; i++){
            if(!vis[i]){
                topoSort(adj, st, vis, i);
            }
        }
        
        //Initialize distances and always mark src node dist as 0
        vector<int> dist(V, INT_MAX);
        dist[0] = 0;
        
        // Step 3: Relax edges in topological order
        while(!st.empty()){
            int node = st.top();
            st.pop();
            
            if(dist[node] != INT_MAX){
                for(auto it : adj[node]){
                    int u = it.first;
                    int wt = it.second;
                    if(dist[node] + wt < dist[u]){
                        dist[u] = dist[node] + wt;
                    }
                }
            }
        }
        for(int i = 0; i < V; i++) {
            if(dist[i] == INT_MAX) 
                dist[i] = -1;
        }

        return dist;
    }
};
