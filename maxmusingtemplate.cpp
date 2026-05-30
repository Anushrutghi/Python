#include <iostream>
using namespace std;

template <class anu>
anu maximum(anu a, anu b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    cout << maximum(10, 20) << endl;
    cout << maximum(5.5, 2.3) << endl;
    cout << maximum('A', 'Z') << endl;

    return 0;
}