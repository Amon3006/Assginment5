#include<iostream>
using namespace std;
class Time{
    private:
    int hr;
    int min;
    int sec;
    public:
    Time(int h=0,int m=0,int s=0):hr(h),min(m),sec(s){
        if(s>60){
            sec=s%60;
            m=m+s/60;


        }
        if(m>60){
            min=m%60;
            hr=h+m/60;
        }
    }
    
    void display(){
        cout<<this->hr<<":"<<this->min<<":"<<this->sec<<endl;
    }
    // Time operator-(Time &t3){
    //     Time temp;
    //     temp.hr = this->hr-t3.hr;
    //     temp.min = this->min-t3.min;
    //     temp.sec = this->sec-t3.sec;
    //     return temp;
    // }
    Time operator-(Time &t3){
        int h = this->hr-t3.hr;
        int m = this->min-t3.min;
        int s = this->sec-t3.sec;
        Time temp(h,m,s);
        return temp;
    }

    bool operator>(Time &t3){
        int a = (this->hr*3600)+(this->min*60)+this->sec;
        int b = (t3.hr*3600)+(t3.min*60)+t3.sec;
        return a>b;
    }

    ~Time(){}
};
int main(){
    Time t1(3,70,100);
    Time t2(2,100,90);
    Time t3;
    t1.display();
    t2.display();
    t3=t1-t2;
    t3.display();
    if(t1>t3) {
        cout<<"ok";
    }
    else{
        cout<<"notok";
    }
}