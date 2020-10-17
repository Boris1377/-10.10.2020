#include <iostream>

using namespace std;

int main() {

    int n1, n2;

    cout << "Input number 1:" << endl;
    cin >> n1;
    cout << "Input number 2:" << endl;
    cin >> n2;

    if (n1 > 30 || n2 > 30)
        cout << "yes" << endl;

    else
        cout << "no" << endl;

    return 0;
}
