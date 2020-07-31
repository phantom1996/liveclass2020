//mapstl
#include <iostream>
#include<string>
#include <unordered_map>
#include <map>
#include <list>
using namespace std;

int main(){


   // unordered_map<string,int> m;

    map<string,int> m;  //sorted order (key)

    m.insert(make_pair("Pizza",100));
    m.insert(make_pair("fries",50));
    m["apple"] = 240;
    //2nd way

    m["coke"]=80; //if present then update value

    string s = "tizza";

    if(m.count(s)){
        cout<<"Price of  "<<s<<" is "<<m[s]<<endl;
    }
    else{
        cout<<"food not in menu";
    }

    cout<<endl;

    //map ko print krna h

    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }








    //auto x =5;

    //cout<<x;

   // x = "coding"; error

    //auto y = "hello";
    //cout<<endl<<y;


cout<<endl<<endl;

   unordered_map<string,list<string> >m1; //ds

   string s1,s2;
   cin>>s1>>s2;

   m1[s1].push_back(s2);

   m1["modi"].push_back("trumph");
   m1["modi"].push_back("yogi");
   m1["yogi"].push_back("prabhu");
   m1["prabhu"].push_back("modi");
   m1["modi"].push_back("putin");


   for(auto i : m1){
        cout<<i.first<<" -> ";
        for(auto j : i.second){
            cout<<j<<" -> ";
        }
        cout<<endl;
   }

















    return 0;
}
