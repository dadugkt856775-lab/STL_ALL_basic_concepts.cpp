#include<iostream>
#include<algorithm>
using namespace std;
int main (){
    int arr [5] = {23,29,30,45,90};

    sort(arr, arr + 5);

    for(int val : arr) {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
