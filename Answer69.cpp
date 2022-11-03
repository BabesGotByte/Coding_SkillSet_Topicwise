#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

#define MAX 10000

vector<int>graph[MAX+1];
vector<int>visible(MAX+1,0);
vector<int>color(MAX+1,0);


 bool is_bipartite(int node , int c ){
    visible[node]=1;
    color[c]=c;

    for(int child : graph[node]){
        if(visible[child]==0){
            if(is_bipartite(child,c^1)==false)
            return false;
        }
       else if(color[node]==color[child])
       return false;
    }
    return true;    
 }

int main()
{
    fastio;
    // code goes here
    int number_of_node;
    cin>>number_of_node;


    int number_of_edge;
    cin>>number_of_edge;
     
     for(int i=1; i <=number_of_edge; i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
     }

     is_bipartite(1,0)?cout<<"GRAPH IS BIPARTITE"<<endl:cout<<"GRAPH IS NOT BIPARTITE"<<endl;
            

    
    return 0;
}


