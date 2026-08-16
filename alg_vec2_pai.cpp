#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
    vector<pair<int, int>> vec = {{4,3},{2,5},{8,1},{9,2}};

    sort(vec.begin(), vec.end());

    for(auto p : vec) {
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    return 0;
}
