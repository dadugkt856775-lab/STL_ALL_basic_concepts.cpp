#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec; // is 0 value
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);
    vec.pop_back();
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    return 0;
}
