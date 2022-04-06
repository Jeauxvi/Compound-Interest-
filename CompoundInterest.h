//Jovi Billiot
//CompoundInetrest.h
#ifndef COMPOUND_INTEREST_H
#define COMPOUND_INTEREST_H

#include <string>
using namespace std;

class CompoundInterest{
    public: //public mutator functions
    void setInitialInvest(double t_initial_invest);
    void setMonthlyDepot(double t_monthly_depot);
    void setAnnualInterest(double t_annual_interest);
    void setNumYears(int t_num_years);
    void setYearBalalce(double t_year_balance);
    void setYearInterestEarned(double t_year_interest_earned);
    //public constant asseccor functions 
    double getInitialInvest() const;
    double getMonthlyDepot() const;
    double getAnnualInterest() const;
    int getNumYears() const;
    double getYearBalance() const;
    double getYearInterestEarned() const;
    // display function for output
    void display();
    
    
    // private variables
    private:
    double m_initial_invest;
    double m_monthly_depot;
    double m_annual_interest;
    double m_year_balance;
    double m_year_interest_earned;
    int m_num_years;

}; // always end class with bracket and semicolon


#endif //end prototype file
