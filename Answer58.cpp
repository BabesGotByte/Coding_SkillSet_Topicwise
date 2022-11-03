#include <bits/stdc++.h> 

void prepareadjlist(unordered_map < int, set<int> > & adjlist, vector<pair<int, int>> & edges){
        for(int i=0; i < edges.size(); i++){
            
            int u = edges[i].first;
            int v = edges[i].second;
            adjlist[u].insert(v);   
            adjlist[v].insert(u);

        }
}


void bfs (unordered_map < int, set<int> > & adjlist, vector<int> & ans,
    unordered_map <int,bool> & visited, int node){
    
    queue <int> q;
    q.push(node);
    visited[node]=1;
    
    while(!q.empty()){
        int frontnode = q.front();
        q.pop();
        
        // store frontnode
        ans.push_back(frontnode);
        
        //traverse.
        for(auto i:adjlist[frontnode]){
            if(!visited[i])
            {
                q.push(i);
                visited[i]=1;
              }   
          }
        }
     }
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
     unordered_map<int, set<int> > adjlist;
     vector<int> ans;
     unordered_map<int,bool> visited;
    
     prepareadjlist(adjlist,edges);
     for (int i=0;i<vertex;i++){
         if (!visited[i])
         {
                bfs(adjlist,ans,visited,i);
         }
     }
        return ans ;   
}
 

    
    