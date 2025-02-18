#include<iostream>

using namespace std;

class CountManager {
private:
    static int count;

    CountManager() {}

public:
    CountManager(const CountManager&) = delete;
    CountManager& operator=(const CountManager&) = delete;

    static int& getInstance() {
        static CountManager instance;
        return count;
    }

    static void increment() {
        getInstance()++;
    }

    static void decrement() {
        getInstance()--;
    }

    static int getCount() {
        return getInstance();
    }
};

class Student{
    private:
    int ID;
    string name;
    int *grade;
    public:
    Student(){}
    Student(int id, string name) : ID(id) , name(name){
        grade = new int[5];
        for (int i = 0 ; i < 5 ; i ++){
            grade[i] = i;
        }
        CountManager::increment();
    } 

    Student(const Student &s2) : ID(s2.ID) , name(s2.name){
        grade = new int[5];
        for (int i = 0 ; i < 5 ; i ++){
            grade[i] = s2.grade[i];
        }
        CountManager::increment();
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
        
        CountManager::decrement();
    }
};



int main(){

    Student s1(1 , "moataz");
    s1.display();
    Student s2(s1);
    s2.display();

    cout << s1.getGrade() << endl;
    cout << s2.getGrade() << endl;
    return 0;
}