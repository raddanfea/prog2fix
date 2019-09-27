#include <iostream>
#include <cstdlib>
#include <ctime>
 
using namespace std;

int main() {
    srand(time(0));

    int rounds = 1000;
    int rounds_won = 0;
    int won_without_swap = 0;
     
    for (int i=0; i<rounds; ++i) 
    {
        int prize_door = rand() % 3 + 1;
        int player_choice = rand() % 3 + 1;
        bool door_switch = rand() % 2;
         
        if (!door_switch && (player_choice == prize_door)) 
        {
            ++won_without_swap;
            ++rounds_won;
        } 
        else if (door_switch && (player_choice != prize_door)) 
        {
            ++rounds_won;
        }
    }

    cout << (rounds - rounds_won) << "\t" << "Number of games lost" << endl;
    cout << rounds_won << "\t" << "Number of games won" << endl;
    cout << won_without_swap << "\t" << "Games won without door change" << endl;
    int winWithChange = (rounds_won - won_without_swap);
    cout << winWithChange << "\t" << "Games won with door change" << endl;
    cout << winWithChange * 100 / rounds_won << "\t" << "Percent of games won with door change" << endl;
    cout << won_without_swap * 100 / rounds_won << "\t" << "Percent won without door change" << endl;
     
    return 0;
}