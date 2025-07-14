class Solution {
  public:
    // Function to find the shortest path from source to all other nodes
    vector<int> shortestPath(vector<vector<int>>& adj, int src) {
        int n = adj.size();
        vector<int> dist(n, -1);
        queue<pair<int, int>> q;
        q.push({src, 0});
        dist[src] = 0;
        while(!q.empty()){
            int node = q.front().first;
            int curDist = q.front().second;
            q.pop();
            for(auto it : adj[node]){
                if(dist[it] == -1){
                    q.push({it, curDist + 1});
                    dist[it] = curDist + 1;
                }
                else{
                    dist[it] = min(dist[it], curDist + 1);
                }
            }
        }
        return dist;
    }
};