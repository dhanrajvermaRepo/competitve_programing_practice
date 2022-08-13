#include<iostream>
#include<map>
using namespace std;

int main(){
    string someString;
    map<string,int> words;
    getline(cin,someString);
    int wordCount =0;
     string tempWord="";
    for(int i=0;i<someString.length();i++){
        if(someString[i]==' ' || someString[i]==','){
            words[tempWord]+=1;
            tempWord="";
        }else{
            tempWord+=someString[i];
        }
    }

    words[tempWord]+=1;

     std::map<std::string, int>::iterator it = words.begin();
     while(it!=words.end()){
        cout<<it->first<<", "<<it->second<<endl;
        it++;
     }
    return 0;
}