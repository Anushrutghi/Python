#include <iostream>
using namespace std;

template <class darshan1, class darshan2, class darshan3>
void display(darshan1 a, darshan2 b, darshan3 c) {
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}

int main() {
    display(10, 5.5, 'A');

    return 0;
}