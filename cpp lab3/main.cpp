#include<iostream>

using namespace std;

class Student{
    private:
    int ID;
    string name;
    int *grade;
    public:
    Student(){}
    Student(int id, string name) : ID(id) , name(name){
        grade = new int[5];
    } 

    void display(){
        cout<< "ID: " << ID << ", name: " << name << ", grades: [" << grade[0]<< ", " << grade[1] << ", " << grade[2] << ", " <<
         grade[3] << ", " << grade[4] << "]" << endl; 
    }
    int *getGrade(){
        return grade;
    }
    ~Student(){
        delete grade;
    }

};

int main(){

    Student s1(1 , "moataz") , s2;
    s1.display();
    s2 = s1;
    s2.display();

    cout << s1.getGrade() << endl;
    cout << s2.getGrade() << endl;
    return 0;
}