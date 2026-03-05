#include<iostream>
#include<cstring>
using namespace std;

class Player{
    private:
    int age;
    char* name;
    char* country;

    public:
    Player(){
        age =0;
        name = new char('\0');
        country = new char('\0');
    }

    Player(int age , const char* name, const char* country){
            this->age = age;
            name = new char[100];
            country = new char[100];

            strcpy(this->name,name);
            strcpy(this->country,country);
    }

    
    void display(){
        cout<<"Age :"<<this->age<<endl
        <<"Name :"<<name<<endl
        <<"country :"<<country<<endl;
    }


    void Accept(){
        cout<<"enter age of the player :";
        cin>>this->age;
        cout<<"enter name of the player :";
        cin>>this->name;
        cout<<"enter country of the player :";
        cin>>this->country;
    };

    friend  void age_sort(Player *arr, int size);
    friend  void name_sort(Player *arr, int size);
    friend  void print_array(Player *arr, int size);
    
};


void age_sort(Player *arr, int size){
    for(int i=0;i<size;i++){
        for (int j = 0; j< size - i-1; j++)
        {
            if (arr[j].age > arr[j+1].age) 
                swap(arr[j],arr[j+1]);
        }
    }
}


void name_sort(Player *arr, int size){
    for(int i=0;i<size;i++){
        for (int j = 0; j< size - i-1; j++)
        {
            if (arr[j].name[0] > arr[j+1].name[0]) 
                swap(arr[j],arr[j+1]);
        }
    }
}

void print_array(Player *arr, int size){
    for (int i = 0; i < size; i++)
    {
        arr[i].display();
    }
    
}



int main(){
    int size;
    cin>>size;
    Player *arr=new Player[size];
    for (int i = 0; i < size; i++)
    {
        cout<<"for player number : "<<i+1<<endl;
        arr[i].Accept();
    }
    
    age_sort(arr,size);
    print_array(arr,size);
    cout<<endl;
    name_sort(arr,size);
    print_array(arr,size);

}


