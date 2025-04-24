#include <iostream>
using namespace std;
class student{
    int id;
    string name;
    public:
    student(int i,string n){
        id=i;
        name=n;
    }
    void display(){

        cout<<id<<endl;
        cout<<name<<endl;
    }
};

int main(){

student s[3]={student (120,"ali"),student(122,"noni"),student(222,"khokhar")};
for(int i=0;i<3;i++){
    s[i].display();

}

}