#include<iostream>

using namespace std;

class Fraction
{
private:
int num, dem;
public:
    Fraction();
    Fraction(int num, int dem) : num(num) , dem(dem){}
    ~Fraction();

    void setNum(int num);
    int getNum();

    void setDem(int num);
    int getDem();

    void dispaly();

    Fraction add (Fraction fac);
    Fraction sub (Fraction fac);
};

void Fraction::setNum(int num){
    this->num = num;
}
void Fraction::setDem(int dem){
    this->dem = dem;
}
int Fraction::getDem(){
    return this->dem;
}
int Fraction::getNum(){
    return this->num;
}
void Fraction::dispaly(){
    cout << this->num << "/" << this->dem << endl;
}
Fraction Fraction::add(Fraction fact){
    return Fraction((this->num * fact.dem + this->dem * fact.num ) , (this->dem * fact.dem));
}
Fraction Fraction::sub(Fraction fact){
    return Fraction((this->num * fact.dem - this->dem * fact.num ) , (this->dem * fact.dem));
}
Fraction::~Fraction()
{
}


int main(){
    Fraction f1 (1 , 2) , f2(1 , 2);
    Fraction f3 = f1.add(f2);
    f3.dispaly();

    return 0;
}