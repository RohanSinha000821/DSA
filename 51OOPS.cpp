#include<iostream>
using namespace std;
class student{
    int roll; // by default private members 
    public:
    string name;
    int age;
    bool gender;
    
    void setRoll(int r){
        roll = r;
    }
    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
    }
};
int main(){
    // student a;
    // a.name = 'Rohan';
    // a.age = 21;
    // a.gender = 1; 

    student arr[2];
    for (int i = 0; i < 2; i++)
    {
        int roll;
        cout<<"Roll = ";
        cin>>roll;
        arr[i].setRoll(roll);
        cout<<"Name = ";
        cin>>arr[i].name;
        cout<<"Age = ";
        cin>>arr[i].age;
        cout<<"Gender = ";
        cin>>arr[i].gender;
    }
    
    for (int i = 0; i < 2; i++)
    {
        arr[i].printInfo();
    }
    
    return 0;
}