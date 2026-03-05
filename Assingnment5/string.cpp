#include<cstring>
#include<iostream>
using namespace std;
class MyString{
    private:
    int size;
    char *p;
    public:
    MyString(){
        size=0;
        p=new char('\0');

    }
    MyString(const char *name,int size){
        this->size=size;
        p=new char[size];
        // char *n=new char[strlen(name)+1];
        strcpy(this->p,name);
        p[size] = '\0';
    
    }
    MyString(const MyString &str){
        strcpy(this->p,str.p);
        this->size=str.size;
    }
    ~MyString(){
        delete[] p;

    }
    void display(){
        cout<<this->p<<endl;
        cout<<this->size<<endl;
    }
};
int main(){
    int x;
    cout<<"Enter the size for your string"<<endl;
    cin>>x;
    cout<<"Enter the string"<<endl;
    //char * n=new char[x];
    char*n;
    cin>>n;
    MyString *m1=new MyString(n,x);
    m1->display();

}