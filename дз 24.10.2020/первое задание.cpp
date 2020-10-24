#include <iostream>

using namespace std;

int main() {

    float distanceDay = 10;

    for (int numDay = 1; numDay <= 10; numDay++) {

        cout << numDay << "day distance=" << distanceDay << endl;
        distanceDay = distanceDay + distanceDay / 10;


    }
}