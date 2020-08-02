//
//dijkstra

#include <iostream>
#include <map>
#include <list>
#include <string>
#include<queue>
#include <climits>
#include <set>

using namespace std;

template<typename T>
class Graph{

    map<T,list<pair<T,int> > >m;
public:
    void addEdge(T src, T dest, int dist ,bool nondirectional = true){

        m[src].push_back(make_pair(dest,dist));
        if(nondirectional){
            m[dest].push_back(make_pair(src,dist));
        }
    }

    void print(){
        for(auto i: m){
            cout<<i.first<<"-> ";
            for(auto j: i.second){
                cout<<"( "<<j.first<<","<<j.second<<" )";
            }
            cout<<endl;
        }

    }



    void Dijikstra(T src){

        map<T,int> dist;

        for(auto i : m){
            dist[i.first] = INT_MAX;
        }
        dist[src]=0;

        set<pair<int,T> >s;
        //insertio i set
        s.insert(make_pair(0,src));

        while(!s.empty()){

            auto p = *(s.begin()); //picking from front;

            s.erase(s.begin());

            T parent = p.second;
            int parent_tak_ka_distance = p.first;

            for(auto neigh : m[parent] ){
                if(dist[neigh.first] > parent_tak_ka_distance + neigh.second){
                    //check if laready present in set then delete ad then new value

                    auto f = s.find(make_pair(dist[neigh.first],neigh.first));

                    if(f!=s.end()){
                        s.erase(f);
                    }

                    dist[neigh.first] = parent_tak_ka_distance + neigh.second;

                    s.insert(make_pair(dist[neigh.first] , neigh.first));

                }
            }
        }

        for(auto i : dist){
            cout<<"Distance of "<<i.first<<" from "<<src<<" is "<<i.second<<endl;
        }
    }
};

int main(){

    Graph<string>g;
    g.addEdge("Amritsar","Agra",1);
	g.addEdge("Amritsar","Jaipur",4);
	g.addEdge("Delhi","Jaipur",2);
	g.addEdge("Delhi","Agra",1);
	g.addEdge("Bhopal","Agra",2);
	g.addEdge("Bhopal","Mumbai",3);
	g.addEdge("Jaipur","Mumbai",8);

    //g.print();
    g.Dijikstra("Amritsar");
    return 0;
}
