#include <iostream>

using namespace std;

int main() {


    int var1, var2, var3, var4;
    cout << "Input number 1:" << endl;
    cin >> var1;
    cout << "Input number 2:" << endl;
    cin >> var2;
    cout << "Input number 3:" << endl;
    cin >> var3;
    cout << "Input number 4:" << endl;
    cin >> var4;


        if (var1 % 2 == 0) {

            if (var1 > var2 && var1 > var3 && var1 > var4)
                cout << var1 << " - The biggest even number"<< endl;

        }

        else {

            if (var2 % 2 == 0) {

                if (var2 > var1 && var2 > var3 && var2 > var4)
                    cout << var2 << " - The biggest even number" << endl;

            } else {

                if (var3 % 2 == 0) {

                    if (var3 > var1 && var3 > var2 && var3 > var4)
                        cout << var3 << " - The biggest even number" << endl;

                } else {
                    if (var4 % 2 == 0) {

                        if (var4 > var1 && var4 > var2 && var4 > var3)
                            cout << var4 << " - The biggest even number" << endl;
                        else{
                            cout << "not found" << endl;
                        }
                    }
                }
            }
        }


    return 0;
}
