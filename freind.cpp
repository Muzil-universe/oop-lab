
#include <iostream>
using namespace std;
class teacher;
class student
{
   
        private:
        int marks;
        public:
        student(int n){
            marks=n;
        }
        friend class teacher;
    };
class teacher{
    public:
    void display(student s){
        cout<<"Marks of student is: "<<s.marks<<endl;
    }

};

int main()
{
student s1(80);
teacher t1;
t1.display(s1);
return 0;
}