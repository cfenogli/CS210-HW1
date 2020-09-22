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

void print(vector<vector<int>> dist); 


void floyd_warshall (vector<vector<int>> graph)  
{
    // Initialize vectors to size 0 
    vector<vector<int>> dist( graph.size() , vector<int> (graph[0].size(), 0));
    vector<vector<int>> path( graph.size() , vector<int> (graph[0].size(), 0));
}

void print(vector<vector<int>> dist)  
{  

    for (int i = 0; i < dist.size(); i++)  
    {  
        for (int j = 0; j < dist[i].size(); j++)  
        {  
            if (dist[i][j] == INF) {

                cout<<"INF"<<"     ";  
            }
            else
            {
                cout<<dist[i][j]<<"     ";  
            }
        }  
        cout<<endl;  
    }  
}  

int main () 
{

    
    return 0;
}