#include <vector>
#include <iostream>

#define INF 999

using namespace std;
/*
 ****************************************************
*    Call this one vectorception                     *
*    Ford-Warshall?                                  *
*    Bellman-Floyd?                                  *
*    How both these algo's gonna have two creators?  *
 **************************************************** 
*/

struct Solution {
    vector<vector<int> > P;
    vector<vector<int> > D;
    vector<vector<int> > s_paths;
};

void print(vector <vector<int> > dist); 


Solution floyd_warshall (vector<vector<int> > graph)  
{
    Solution floyds_solution;
    
    // Initialize vectors to size 0 
    vector<vector<int> > dist( graph.size() , vector<int> (graph[0].size(), 0));
    vector<vector<int> > path( graph.size() , vector<int> (graph[0].size(), 0));

    floyds_solution.D = dist;
    floyds_solution.P = path;
    floyds_solution.s_paths = path;

    return floyds_solution;
}

void print(vector< vector<int> > dist)  
{  

    for (int i = 0; i < dist.size(); i++)  
    {  
        for (int j = 0; j < dist[i].size(); j++)  
        {  
            if (dist[i][j] == INF) {

                cout<<"INF"<<" ";  
            }
            else
            {
                cout<<dist[i][j]<<" ";  
            }
        }  
        cout<<endl;  
    }  
}  

int main () 
{

    vector< vector<int> > dist( 10 , vector<int> (10, 0));

    print(floyd_warshall(dist).D);
    print(floyd_warshall(dist).P);
    print(floyd_warshall(dist).s_paths);

    return 0;
}