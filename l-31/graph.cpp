//graph
#include <iostream>
#include <map>
#include <list>
#include <string>
#include<queue>
#include <climits>
using namespace std;


template<typename T>

class Graph{

    map<T,list<T> >m;

public:
    void AddEdge(T src, T dest, bool nondirectional = true){

        m[src].push_back(dest);
        if(nondirectional){
            m[dest].push_back(src);
        }
    }

    void print(){
        for(auto i: m){
            cout<<i.first<<"-> ";
            for(auto j: i.second){
                cout<<j<<"-> ";
            }
            cout<<endl;
        }

    }

    void BFS(T src){
        queue<T> q;
        q.push(src);

        map<T,bool> visited;

        visited[src]=true;

        while(!q.empty()){
            T temp = q.front();
            cout<<temp<<" ";

            q.pop();

            for(auto neigh : m[temp]){
                if(!visited[neigh]){
                    q.push(neigh);
                    visited[neigh]=true;
                }
            }

        }
    }


    void SSSP(T src,T dest){

        queue<T> q;

        map<T,int> dist;

        for(auto i: m){
            dist[i.first] = INT_MAX;
        }

        q.push(src);

        dist[src]=0;
        while(!q.empty()){
            T parent = q.front();
            q.pop();

            for(auto children : m[parent]){
                if(dist[children]== INT_MAX){
                    dist[children] = 1 + dist[parent];
                    q.push(children);
                }
            }
        }

        for(auto i : dist){
            cout<<"Distance of "<<src<<" to "<<i.first<<" is "<<i.second<<endl;
        }

    }

};




int main(){

    Graph<int> g;
    g.AddEdge(0,1);
    g.AddEdge(0,4);
    g.AddEdge(1,2);
    g.AddEdge(2,3);
    g.AddEdge(2,4);
    g.AddEdge(3,4);
    g.AddEdge(3,5);
  //  g.AddEdge(15,16);
   // g.AddEdge(16,17);
    //g.print();
   //g.BFS(0);

    g.SSSP(0,5);
    return 0;
}
