#include <iostream>
using namespace std;

int main()
{
    int salary, tax_percentage, annual_income, annual_net_income;
    
    cout << "Enter your salary"<<endl;
    cin >> salary;
    cout << "Enter your tax percentage"<<endl;
    cin >> tax_percentage;
    
    annual_income = salary * 12;
    annual_net_income = annual_income - (annual_income * tax_percentage/100);
    
    cout << "Your annual net income is " << annual_net_income<<endl;
    return 0;
}

