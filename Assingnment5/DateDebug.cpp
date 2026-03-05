#include <iostream>
using namespace std;
class Date
{
private:
    int days;
    int months;
    int year;

public:
Date()
{
    days = 0;
    months = 0;
    year = 0;}
Date(int d, int m, int y)
{
    days = d;
    months = m;
    year = y;
}

Date operator+(const Date &d1)
{
    Date temp;
    temp.year = this->year + d1.year;
    temp.months = this->months + d1.months;
    temp.days = this->days + d1.days;
    return temp;
}

Date operator-(const Date &d1)
{
    Date temp;
    temp.year = this->year - d1.year;
    temp.months = this->months - d1.months;
    temp.days = this->days - d1.days;
    return temp;
}

bool operator==(const Date &d1)
{
    if (this->year == d1.year && this->months == d1.months && this->days == d1.days)
        return true;
    return false;
}
bool operator!=(const Date &d1)
{
    if (this->year == d1.year && this->months == d1.months && this->days == d1.days)
        return false;
    return true;
}

void display()
{

    cout << this->days << "/" << this->months << "/" << this->year << endl;
}
};

int main(){

    Date d1(19,8,2003);
    Date d2(30,7,2003);
    d1.display();
    d2.display();
    Date d3 = d2 + d1;
    d3.display();
    return 0;
}