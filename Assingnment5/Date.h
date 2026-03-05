class Date
{
private:
    int days;
    int months;
    int year;

public:
    Date();
    Date(int d, int m, int y);
    Date operator+(const Date &d1);
    Date operator-(const Date &d1);
    bool operator==(const Date &d1);
    bool operator!=(const Date &d1);
    void display();
};