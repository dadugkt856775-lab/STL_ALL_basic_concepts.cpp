#include<iostream>
#include<string>
using namespace std;

class student{
    public:
    string name;
    double* cgpaPtr;

    student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    student(student &obj){
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    void getInfo(){
        cout<<"Name = "<<name<<endl;
        cout<<"CGPA = "<<*cgpaPtr<<endl;
    }
};
int main(){
    student s1("Lubna", 9.77);
    student s2(s1);

    s1.getInfo();
    *(s2.cgpaPtr)=9.2;
    // s1.getInfo();

    s2.name = "Dadu";
    s2.getInfo();
    return 0;
}
