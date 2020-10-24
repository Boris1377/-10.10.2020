#include <iostream>

using namespace std;

int main() {

    float distanceDay = 10;
    int i=0;

    for(int numDay=1;distanceDay <= 80; distanceDay= distanceDay + distanceDay / 10){

        numDay++;
        i = numDay;

    }

    cout << "In " << i << "-st day" <<endl;

}