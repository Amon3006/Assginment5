#include<iostream>
#include "Date.h"
using namespace std;

int main(){
    Date d1(19,8,2003);
    Date d2(30,7,2003);
    d1.display();
    d2.display();
    Date d3 = d2 + d1;
    d3.display();
    return 0;
}