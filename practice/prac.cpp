#include<bits/stdc++.h>
using namespace std;



class graph
{
public:

    vector<vector<int>> vec;
 
    int n;


    

    void addEdge(int x, int y);
    
    void printing();
graph(int n);
vector<int> bfsOfGraph(int n,vector<vector<int>> vec);
  
   

};

graph::graph(int n){
    while(n--){
        vector<int>a;
        vec.push_back(a);
    }
}




void graph::addEdge(int x, int y)
    {
        vec[x].push_back(y);
        vec[y].push_back(x);
    }


    void graph::printing()
    {
        for (int i = 0; i < n; i++)
        {
            cout << i << "->";
            for (int j : vec[i])
            {
                cout << j << "-";
            }
            cout << endl;
        }
    }


vector<int> bfsOfGraph(int n,vector<vector<int>> vec){
    vector<int> bfs;
    vector<int> visited(n+1,0);

}


int main()
{
    graph g1(5);
    
    
    g1.addEdge(1, 2);
    g1.addEdge(1, 3);   
    g1.addEdge(1, 4);
    g1.addEdge(2, 5);
    g1.addEdge(4, 5);



    g1.printing();
}