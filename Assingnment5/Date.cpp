#include <iostream>
#include "Date.h"
using namespace std;

// Date::Date(int d=0,int m=0,int y=0):days(d),months(m),year(y){}
Date::Date()
{
    days = 0;
    months = 0;
    year = 0;
}
Date::Date(int d, int m, int y)
{   
    // if (m>12)
    // {
    //     y = y+m%12;
    //     m = m/12;
    // }
    

    // if( m==1 ||m==3 ||m==5 ||m==7 ||m==8 ||m==10 ||m==12){
    //     if(d>31){
    //         m = m+d%31;
    //         d = +d/31;
    //     }
    // }
    // else if (m==2)
    // {
    //     if(d>28){
    //         m = m+ d%28;
    //         d = d/28;
    //     }
    // }
    // else{
    //     if(d>30){
    //         m = m+ d%30;
    //         d = d/30;
    //     }
    // }
    
    days = d;
    months = m;
    year = y;
}

Date Date ::operator+(const Date &d1)
{
    int y = this->year + d1.year;
    int m = this->months + d1.months;
    int d = this->days + d1.days;
    Date temp(d,m,y);
    return temp;
}

Date Date::operator-(const Date &d1)
{
    Date temp;
    temp.year = this->year - d1.year;
    temp.months = this->months - d1.months;
    temp.days = this->days - d1.days;
    return temp;
}

bool Date::operator==(const Date &d1)
{
    if (this->year == d1.year && this->months == d1.months && this->days == d1.days)
        return true;
    return false;
}
bool Date::operator!=(const Date &d1)
{
    if (this->year == d1.year && this->months == d1.months && this->days == d1.days)
        return false;
    return true;
}

void Date::display()
{
  
    cout << this->days << "/" << this->months << "/" << this->year << endl;
}
