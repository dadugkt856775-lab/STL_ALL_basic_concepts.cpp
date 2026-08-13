#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec(3,10);
   
    for(int val : vec){
        cout<< val <<" ";
    }
    cout<<endl;
    return 0;
}
