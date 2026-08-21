#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n = 12345;
    stack<int> s;

    while (n > 0) {
        s.push(n % 10);
        n /= 10;
    }

    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }

    return 0;
}
