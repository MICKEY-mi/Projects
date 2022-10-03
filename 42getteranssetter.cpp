#include<bits/stdc++.h>
using namespace std;

class Hero{
    int level;
    string name;
    int score;

    public:

void setlevel(int l){
    level = l;
}
void setname(string name){
    this -> name = name;
}
void setscore(int s){
    score = s;
}  

int getlevel(){
   return level; 
}
string getname(){
    return name;
}
int getscore(){
    return score;
}  

};

int main(){
    Hero abc;
    
    
    abc.setlevel(2);
    abc.setname("paul");
    abc.setscore(12);
    cout<<abc.getlevel()<<endl<<abc.getname()<<endl<<abc.getscore();
    Hero h2(abc);
    //h2.setlevel(5);
    cout<<endl<<h2.getlevel();
return 0;
}