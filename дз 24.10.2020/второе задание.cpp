#include <iostream>

using namespace std;

int main() {

    float distanceDay = 10;
    float sumDay=0;
    sumDay = distanceDay;

    for(int numDay=2;numDay <=7;numDay++){

        distanceDay=distanceDay+distanceDay/10;
        sumDay = sumDay + distanceDay;

    }

    cout << sumDay;
}
