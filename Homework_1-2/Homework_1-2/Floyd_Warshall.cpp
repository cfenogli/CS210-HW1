#include <vector>
#include <iostream>

#define INF 999

using namespace std;

struct Solution {
    vector<vector<int> > P;
    vector<vector<int> > D;
    vector<vector<int> > s_paths;
};

void print(vector <vector<int> > dist); 

void print_spaths(Solution soln, int v_q, int v_r)
{
    if (soln.P[v_q][v_r] != 0)
    {
        cout << "start vertex v" << v_q << " ->";
        print_spaths(soln,v_q,soln.P[v_q][v_r]);
        cout << "v" << soln.P[v_q][v_r] << " -> ";
        print_spaths(soln,soln.P[v_q][v_r],v_r);
        cout << "end vertex v" << v_r;
    }

}


Solution floyd_warshall (vector<vector<int> > graph)  
{
    Solution floyds_solution;
    
    // Initialize vectors to size 0 
    vector<vector<int> > dist( graph.size() , vector<int> (graph[0].size(), 0));
    vector<vector<int> > path( graph.size() , vector<int> (graph[0].size(), 0));

    for (int i = 0; i < graph.size(); i++)  
        for (int j = 0; j < graph[i].size(); j++)  
            dist[i][j] = graph[i][j]; 


    for (int k = 0; k < dist.size(); k++)  
    {  
        // Pick all vertices as source one by one  
        for (int i = 0; i < dist.size(); i++)  
        {  
            // Pick all vertices as destination for the  
            // above picked source
            for (int j = 0; j < dist.size(); j++)  
            {  
                // If vertex k is on the shortest path from  
                // i to j, then update the value of dist[i][j]  
                if (dist[i][k] + dist[k][j] < dist[i][j])  
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                    path[i][j] = k;
                }
            }  
        }  
    }  

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

    Solution soln1;
    Solution soln2;

    vector<vector<int> > graph1 = { {0,1,INF,1,5},
                                    {9,0,3,2,INF},
                                    {INF,INF,0,4,INF},
                                    {INF,INF,2,0,3},
                                    {3,INF,INF,INF,0}};

    vector<vector<int> > graph2 = { {0,4,5},
                                    {2,0,INF},
                                    {INF,-2,0}};


    soln1 = floyd_warshall(graph1);
    soln2 = floyd_warshall(graph2);

    print(soln1.D);
    cout << "\n";
    print(soln1.P);
    cout << "\n";


    for (int i = 0; i < soln1.P.size(); i++)
    {
        for (int j = 0; j < soln1.P[i].size(); j++)
        {
            print_spaths(soln1, i, j);
            cout << "\n";
        }
    }


    print(soln2.D);
    cout << "\n";
    print(soln2.P);
    cout << "\n";

        for (int i = 0; i < soln2.P.size(); i++)
    {
        for (int j = 0; j < soln2.P[i].size(); j++)
        {
            print_spaths(soln2, i, j);
            cout << "\n";
        }
    }

    return 0;
}