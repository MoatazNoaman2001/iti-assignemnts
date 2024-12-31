#include<iostream>
#include<algorithm>
double PI = 3.14;

using namespace std;

struct Employee{
    private:
    int ID;
    public: 
    string Name;
    double Salary;

    void setID(int id);
};

void Employee::setID(int id){
    this->ID = id;
}

void assignEmp(Employee *emp,string name , double Salary = 17000.0){
    emp->Name = name;
    emp->Salary = Salary;
}
void assignEmp(Employee *emp,string name , int Salary = 17000){
    emp->Name = name;
    emp->Salary = Salary;
}
int main(){
    Employee *emps = new Employee[3];
    for (int i=0; i< 3; i++){
        emps[i].setID(i);
        cout << "Enter Employee Name: " << endl;
        cin >> emps[i].Name ;
        cout << "Enter Employee Salary: " << endl;
        cin >> emps[i].Salary;
    }

    for (int i=0; i< 3; i++){
        cout << "Name: " << emps[i].Name  << ", Salary: " <<  emps[i].Salary << endl;
    }
    double PI = 3.14;

    cout << "PI: " << ::PI <<endl;

    std::sort(emps , emps + 3  , [](Employee emp1, Employee emp2) {
        return emp1.Name < emp2.Name;
    });
    return 0;58
}