#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#include "CompoundIntrest.h"

int main(){

    bool quit_program = false;
    char user_char;

    CompoundInterest StudentTest; // class instence named StudentTest

    //while loop to iterate as long as quit_program is false
    while (!quit_program){
        StudentTest.display(); //calls display frunction to display StudentTest's values from CompoundInterest.cpp file

        //promts user to either quit the program or restart the loop
        cout << "Press any key to continue or \"q\" to quit.";
        cin >> user_char;
        
        //if the user inputs "q" or "Q" quit_program changes to true and program ends.
        if ((user_char == 'q') || (user_char == 'Q')){
            quit_program = true;
        }
        else {
            continue; //if user inputs any key other than "q" or "Q", the loop starts over.
        }
    }
    return 0;
}
