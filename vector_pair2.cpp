#include<iostream>
#include<vector>
// #include<utility>
using namespace std;
int main(){
    vector<pair<int, char>> vec = {{1,'L'}, {2,'A'}, {3,'B'}};
    vec.push_back({4,'S'});
    vec.emplace_back(8, 'N');

    for(auto p : vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}
