#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {1,2,3,4,5};

    cout<<"Vec.begin is: "<<*(vec.begin())<<endl;
    cout<<"Vec.end is: "<<*(vec.end())<<endl;

    return 0;
}
