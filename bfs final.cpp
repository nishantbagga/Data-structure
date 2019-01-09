#include <stdio.h>

#include<iostream>

#include <queue>

using namespace std;

void bfs(int m, int n, int *adj[], bool *visited){

    visited[m] = true;

    //cout << m << endl;

    queue<int> q;

    q.push(m);
    while( ! q.empty() ){
        int x = q.front();
        cout << x << "  ";

        q.pop();
        for( int i = 0; i < n; i++ ){

            if( visited[i]!=1 && adj[x][i]==1 ){

                visited[i] = true;

                //cout << " i = " << i << endl;

                q.push(i);

            }

            

        }		

    }
    
}

int main(){

    

    int n;
  cout<<"enter the number of nodes";
  cout<<"\n";
    cin >> n;

    int *adj[n];

    int edges;
cout<<"enter the no of edges";
cout<<"\n";
    cin >> edges;

    for(int i = 0; i < n ;i++){

        adj[i] = new int[n];

    }

    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){

            adj[i][j] = 0;

        }

    }

    

    for( int i = 0; i < edges; i++){

        int src , dest;

        

        cin >> src >> dest; // src and dest must be less than n

        

        adj[src][dest] = 1;
	   adj[dest][src] = 1;

        

    }

    

        for(int i = 0; i < n; i++){

            for(int j = 0; j < n; j++){

                cout << adj[i][j] << "  ";

            }

            cout << endl;

        }

    bool visited[n];

    for(int i = 0; i < n; i++){

        

        visited[i] = false;

    }

    int m;

    cin >> m;

    bfs(m, n, adj, visited);


}




