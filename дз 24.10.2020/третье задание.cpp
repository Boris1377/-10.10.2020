#include <iostream>

using namespace std;

int main() {

    float distanceDay = 10;

    float sumDaydistance=0;
    sumDaydistance = distanceDay;

    int AOD; // кол-во дней за которое будет выводиться суммарное расстояние

    cout << "Enter amount of days:" ;

    cin >> AOD;

    for(int numDay=2;numDay <=AOD;numDay++){

        distanceDay=distanceDay+distanceDay/10; // нахождение дистанции последущего дня
        sumDaydistance = sumDaydistance + distanceDay;

    }

    cout << sumDaydistance;

}
