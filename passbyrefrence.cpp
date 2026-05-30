#include <iostream>
using namespace std;

void pbr(int &x) {
    x = 50;
}

int main() {
    int m = 10;

    cout << "Before: " << m << endl;

    pbr(m);

    cout << "After: " << m << endl;

    return 0;
}