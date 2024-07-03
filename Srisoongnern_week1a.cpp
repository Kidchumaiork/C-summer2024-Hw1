#include <iostream>
#include <iomanip>
using namespace std;

class Employee
{
private:
    double hourly_pay;
    double num_hours;

public:
    Employee(double pay, double hours) : hourly_pay(pay), num_hours(hours) {}

    double getGross() const
    {
        return hourly_pay * num_hours;
    }

    double getFedTax() const
    {
        return 0.15 * getGross();
    }

    double getStateTax() const
    {
        return 0.07 * getGross();
    }

    double getNet() const
    {
        return getGross() - getFedTax() - getStateTax();
    }
};

int main()
{
    double hourlyPay, hoursWorked;

    cout << "Enter hourly pay: ";
    cin >> hourlyPay;
    cout << "Enter the number of hours worked: ";
    cin >> hoursWorked;

    Employee emp(hourlyPay, hoursWorked);

    cout << fixed << setprecision(2);

    cout << "Gross pay = " << emp.getGross() << "\n";
    cout << "Federal tax = " << emp.getFedTax() << "\n";
    cout << "State tax = " << emp.getStateTax() << "\n";
    cout << "Net pay = " << emp.getNet() << "\n";

    return 0;
}
