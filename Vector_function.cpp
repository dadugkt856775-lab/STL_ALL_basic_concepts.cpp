#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {1,2,3,4,5};

    vec.erase(vec.begin()+4);
    vec.insert(vec.begin()+2, 100);
    vec.clear();
    
    for(int val : vec){
        cout<< val <<" ";
    }
    cout<<endl;
    cout<<"Size is: "<<vec.size()<<endl;
    cout<<"Capacity is: "<<vec.capacity()<<endl;
    cout<<"Empty is: "<<vec.empty()<<endl;
    return 0;
}
