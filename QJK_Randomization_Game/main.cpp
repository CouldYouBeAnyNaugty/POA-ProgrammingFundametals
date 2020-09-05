#include <iostream>
#include <cstdlib> /*This includes the rand() and srand() functions*/
#include <ctime> /*This includes the time() functions*/
#include <limits.h> /*This includes INT_MAX and stuff*/
#include <string.h>
#include <windows.h>
#include <unistd.h>




/*
 * We have Queen King and Jack, Computer will randomize them, and you have to find the Queen
 * If you found the Queen, you will earn double amount of what you put in bet. But if you couldn't 
 * find the queen, you will lose you bet. 
 */
using namespace std;
const int min_Cash = 100;
const int min_bet = 10;
const int sleep_time = 2000;


void randomizing (char Arr[]){
    srand(time(0));
    int queen_index = 0;
    int Random = rand() % 3;
    for (int i = 0; i<3; i++){
        if (Arr[i] == 'Q'){
            queen_index = i;
            break;
        }   
    }
    char tem = Arr[queen_index];
    Arr[queen_index] = Arr[Random];
    Arr[Random] = tem;
}



int main(){
    cout << "*****************( Welcome to Our Casino )*****************" << endl;
    cout << endl;
    char PlatForm[3] = {'K', 'Q', 'J'};
    int starting_cash, betting_cash,pos; 
    cout << "Enter the Starting Cash:\t $" ; 
    bool WrongRange = false;
    do{
        while (!(cin >> starting_cash)){
            cout << "   ERROR! please Enter the cash in numbers:\t $";
            cin.clear();
            cin.ignore(INT_MAX, '\n');
        }
        WrongRange = (starting_cash < min_Cash);
        if (WrongRange){
            cout << "   Error! you should have at least $" << min_Cash << " to play. Try again: \t $";
        }
    }while (WrongRange);
    
    bool WrongRange0;
    cout << "Enter the betting Cash:\t\t $" ;
    do
    {
        while (!(cin >> betting_cash)){
            cout << "   ERROR!! please Enter the cash in numbers:\t $";
            cin.clear();
            cin.ignore(INT_MAX, '\n');
        }
        WrongRange = (betting_cash > starting_cash);
        if (WrongRange){
            cout << "   ERROR! you can't bet more than you have. Try again: \t$";
        }
        WrongRange0 = (betting_cash < min_bet);
        if (WrongRange0){
            cout << "   ERROR! you sould bet at least $" << min_bet << " to play. Try again.\t$" ;
        }
    } while (WrongRange || WrongRange0);

    
    int retry;
    do{
        cout << "\n\n\n";
        cout << "*************( First Order )***************"<<endl;; 
        cout << "\t\t";
        for (int i = 0; i < 3; i++){
            cout << PlatForm[i] << " | ";
        }
        cout<<endl;
        sleep(1);
        randomizing(PlatForm);
        cout << "Randomizing..." <<endl;
        sleep(1.5);
        cout << "***************( Find QUEEN )***************"<<endl;; 
        sleep(0.5);    
        cout << "\t\t# | # | # |" << endl;
        sleep(0.5);
        cout << endl;
        cout << "Enter the position of QUEEN: \t#";
        do {
            while(!(cin >> pos)){
                cout << "   ERROR!! please Enter the position in numbers:\t $";
                cin.clear();
                cin.ignore(INT_MAX, '\n');
            }
            WrongRange = (pos > 3);
            if (WrongRange){
                cout << "   ERORR! you can't enter number greater than 3, Try again: \t#";
            } 
            WrongRange0 = (pos < 1);
            if (WrongRange0){
                cout << "   ERORR! you can't enter number Smaller than 3, Try again: \t#";
            }
        }while(WrongRange || WrongRange0);
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "****************( SUMMARY )******************" << endl;
        cout << "\tFollowing is the Randomized Platform: " << endl;
        cout << "\t\t";
        for (int i = 0; i < 3; i++){
            cout << PlatForm[i] << " | ";
        }
        cout << endl;
        if (PlatForm[pos-1] == 'Q'){
            starting_cash += (2*betting_cash);
            cout << "YOU WON!!!" << endl;
            cout << "Winnings in this round: $" << 2*betting_cash << endl;
            cout << "Total Cash in hand: $" << starting_cash << endl;
        }
        else{
            cout << "YOU LOST!!!" << endl;
            starting_cash -= betting_cash;
            cout << "Total Cash lost in this round: $" << betting_cash << endl;
            cout << "Total Cash in hand: $" << starting_cash << endl;
        }
        cout << "Do you wan to play again?? ENTER 0 for yes or 1 for no:\t#";
        do {
            while (!(cin >> retry)){
                cout << "   ERROR!! please Enter a number:\t#";
                cin.clear();
                cin.ignore(INT_MAX, '\n');
            }
            WrongRange = ( retry > 1 || retry < 0);
            if (WrongRange){
                cout << "   ERRROR! please enter either 0 or 1:\t#";
            }
        }while(WrongRange);
    }while(retry == 0);


}