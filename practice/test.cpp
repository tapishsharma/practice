#include<bits/stdc++.h>
using namespace std;



class graph
{
public:
    vector<vector<int>> vec;
    int n;

    graph(int x){
    n = x;
    int t = n;
    while(t>0){

        vector<int> a;
        vec.push_back(a);
        t--;
    }
   }

    void addEdge(int x, int y);
    
    void printing()
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << "->";
            for (int j : vec[i])
            {
                cout << j << "-";
            }
            cout << endl;
        }
    } 
   void bfsOfGraph(int n);
   void dfsOfGraph(int n);
   void dfs(int i,vector<int> &visited);
   vector<int> finalDfs;
   void printDfs();

};




void graph::addEdge(int x, int y)
    {
        vec[x].push_back(y);
        vec[y].push_back(x);
    }

void graph::bfsOfGraph(int n){
    vector<int> bfs;
    vector<int> visited(n+1,0);

    for(int i=1;i<=n;i++){
          if(!visited[i]){
            queue<int> q;
            q.push(i);
            visited[i]=1;
            while(!q.empty()){
                int node=q.front();
                q.pop();
                bfs.push_back(node);

                for(auto it :vec[node]){
                    if(!visited[it]){
                        q.push(it);
                        visited[it]=1;
                    }
                }
            }
          }
    }

    for(int i=0;i<bfs.size();i++){
        cout<<bfs[i]<<"-";

    }

    

}


void graph::dfsOfGraph(int n){

    vector<int> visited(n+1,0);
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            dfs(i,visited);
        }
    }
}
void graph::dfs(int i,vector<int> &visited){
    finalDfs.push_back(i);
    visited[i]=1;
    for(auto it:vec[i]){
        if(!visited[it]){
            dfs(it,visited);
        }
    }
}

void graph::printDfs(){
cout<<"DFS OF GRAPH:-"<<endl;
for(int i=0;i<n;i++){
cout<<finalDfs[i]<<"->";

}
}

int main()
{
    graph g1(5);
    
    
    g1.addEdge(1, 2);
    g1.addEdge(1, 3);
    g1.addEdge(1, 4);
    g1.addEdge(2, 5);
    g1.addEdge(3,5);
    g1.addEdge(4, 5);
    cout<<"graph"<<endl;
    g1.printing();
    cout<<endl;
    cout<<"BFS OF GRAPH"<<endl;
    g1.bfsOfGraph(5);
  cout<<endl<<endl;
    g1.dfsOfGraph(5);
    g1.printDfs();


}