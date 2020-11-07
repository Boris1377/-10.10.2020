#include <iostream>
#include <ctime>
using namespace std;

int initGame();
int main() {

    int gameQuantity=initGame();
    int figurePlayers=0;
    int playersWin=0;
    int compWin=0;
    int brawScore=0;

    printf("%s\n", "1-Stone 2-Scissors 3-Paper");

    for(int i=0 ; i<gameQuantity ;i++){



        printf("%s", "Inter your chose:");
        cin >> figurePlayers;

        srand(time(0));
        printf("%s" , "Computer chose:");
        int figureComp = 1 + rand()%3;
        printf("%d\n" , figureComp);



        if(figurePlayers == figureComp){

            printf("%s\n", "Braw!");
            int brawScore=brawScore + 1;

        }

        else if(figurePlayers == 1 && figureComp == 2){

            printf("%s\n", "Player win!");
            int playersWin= playersWin + 1;

        }

        else if(figurePlayers == 1 && figureComp == 3){

            printf("%s\n", "Computer win!");
            int compWin= compWin + 1;

        }

        else if(figurePlayers == 2 && figureComp == 1){

            printf("%s\n", "Computer win!");
            int compWin= compWin + 1;

        }

        else if(figurePlayers == 2 && figureComp == 3){

            printf("%s\n", "Player win!");
            int playersWin= playersWin + 1;

        }

        else if(figurePlayers == 3 && figureComp == 1){

            printf("%s\n", "Player win!");
            int playersWin= playersWin + 1;

        }

        else if(figurePlayers == 3 && figureComp == 2){

            printf("%s\n", "Computer win!");
            int compWin= compWin + 1;

        }

    }

    printf("%s", "Players win:");
    printf("%d\n", playersWin);

    printf("%s", "Computer win:");
    printf("%d\n", compWin);

    printf("%s", "Braw:");
    printf("%d\n", brawScore);

    return 0;
}

/*
int random(){

    srand(time(0));
    for(int i = 0; i<10 ; i++){

        printf("%d" , 1 + rand()%3);

    }

}*/

int initGame(){

    int gameQuantity=0;
    printf("%s", "Inter game quantity: ");
    cin >> gameQuantity;
    printf("%s\n", "WELCOME THE GAME");

    return gameQuantity;

}
