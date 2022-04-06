//CompoundInterest.cpp
#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <conio.h>
using namespace std;
#include "CompoundInterest.h" //to access members from the prototype file

//redefine constructors made from CompoundInterest class functions 
void CompoundInterest :: setInitialInvest(double t_initial_invest){
    t_initial_invest = m_initial_invest;
}
void CompoundInterest :: setMonthlyDepot(double t_monthly_depot){
    t_monthly_depot = m_monthly_depot;
}
void CompoundInterest :: setAnnualInterest(double t_annual_intrest){
    t_annual_intrest = m_annual_interest;
}
void CompoundInterest :: setNumYears(int t_num_years){
    t_num_years = m_num_years;
}
void CompoundInterest :: setYearBalalce(double t_year_balance){
    t_year_balance = m_year_balance;
}
void CompoundInterest :: setYearInterestEarned(double t_year_intrest_earned){
    t_year_intrest_earned = m_year_interest_earned;
}

double CompoundInterest :: getInitialInvest() const {
    return m_initial_invest;
}
double CompoundInterest :: getMonthlyDepot() const {
    return m_monthly_depot;
}
double CompoundInterest :: getAnnualInterest() const {
    return m_annual_interest;
}
int CompoundInterest :: getNumYears() const {
    return m_num_years;
}
double CompoundInterest :: getYearBalance() const {
    return m_year_balance;
}
double CompoundInterest :: getYearInterestEarned() const {
    return m_year_interest_earned;
}
//access and redefine display function from CompoundInterest class
void CompoundInterest :: display(){
    cout << "**********************************\n";
    cout << "*********** Your Data ************\n";
    //prompt user in input values for each variable
    cout << "Initial Investment Amount: ";
    cin >> m_initial_invest;
    cout << "Monthly Deposit: ";
    cin >> m_monthly_depot;
    cout << "Annual Intrest: ";
    cin >> m_annual_interest;
    cout << "Number of Years: ";
    cin >> m_num_years;

    system("pause"); //pauses program until user presses any key and displays "press any key to continue..."

    system("CLS"); //clears consol screen
    
    //display prompt with user's values
    cout << "**********************************\n";
    cout << "*********** Your Data ************\n";
    cout << "Initial Investment Amount: ";
    cout << fixed << setprecision(2) << "$" << m_initial_invest << endl;
    cout << "Monthly Deposit: ";
    cout << fixed << setprecision(2) << "$" << m_monthly_depot << endl;
    cout << "Annual Intrest: ";
    cout << "%" << m_annual_interest << endl;
    cout << "Number of Years: ";
    cout << m_num_years << endl;

    system("pause");
            
    system("CLS");

    // displays output of a table with yearly balances and intrest of each year with out a monthly deposit
    cout << "\tBalance and Intrest Without Addititional Deposits\n";
    cout << "===========================================================\n";
    cout << "Year\t Year End Balance\t Year End Earned Interest\n";
    cout << "-----------------------------------------------------------\n";

    // for loops to inerate values and add rows based on the number of years the user inputted
    for (int i = 1; i <= m_num_years; ++i){
            m_year_balance = m_initial_invest + m_annual_interest / 100;
            m_year_interest_earned = m_annual_interest / 100;
            m_initial_invest = m_year_balance;
        // calculate compound interest and balances
       

        //output the values to each row
        cout << i << setw(15) << left <<  "$" << fixed << setprecision(2) << getYearBalance() << setw(30) << right << "$" << fixed << setprecision(2) << getYearInterestEarned() << endl;
     }

     cout << endl;
     cout << endl; // give space between two tables

     //display a table fo the values with a monthly deposit
     cout << "\tBalance and Intrest With Addititional Deposits\n";
     cout << "===========================================================\n";
     cout << "Year\t Year End Balance\t Year End Earned Interest\n";
     cout << "-----------------------------------------------------------\n";

     //for loop to iterate through the number of years and add rows with the calculated values
     for (int i = 1; i <= m_num_years; ++i){ 
            double temp_val = 0;
         //for loop to calulate the instrest for each month
         for (int i = 1; i <= 12; ++i){
             // calculate yearly intrest and yearly balance
             m_year_interest_earned = (m_initial_invest + m_monthly_depot) * ((m_annual_interest / 100) / 12);
             m_year_balance = m_initial_invest + m_year_interest_earned + m_monthly_depot;
             m_initial_invest = m_year_balance;
             temp_val = temp_val + m_year_interest_earned;
             
         }
            
            cout << i << right << setw(15) << "$" << fixed << setprecision(2) << m_year_balance;
            cout << setw(0) << right << "" << setw(30) << right << "$" << fixed << setprecision(2) << temp_val << endl;                   
     }

           
       
}