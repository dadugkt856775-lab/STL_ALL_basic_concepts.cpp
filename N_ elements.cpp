#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr[] = {10, 20, 10, 30, 20, 40, 10};

    set<int> s;

    for (int x : arr)
        s.insert(x);

    cout << "Unique elements = " << s.size();

    return 0;
}
