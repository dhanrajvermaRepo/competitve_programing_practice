#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    vector<int> v;
    vector<int> v1;
    map<int,int> m;
    m.insert({1,1});
    m.insert({2,4});
    m.insert({3,9});
    map<int,int> :: iterator mapIt;
    for(mapIt=m.begin();mapIt!=m.end();++mapIt){
        cout<<"("<<(mapIt->first)<<","<<(mapIt->second)<<")"<<endl;

    }
    cout<<m[50]<<endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for(int i =0;i<3;i++){
        cout<<v[i]<<", ";
    }
    cout<<endl;
    v.assign(5,3);
    // v.pop_back();
      for(int i =0;i<v.size();i++){
        cout<<v[i]<<", ";
    }
   
    cout<<endl;
     v1= v;
     vector<int>:: iterator it;
      for(it =v1.begin();it!=v1.end();it++){
        cout<<(*it)<<", ";
    }
   
    cout<<endl;
    return 0;
}