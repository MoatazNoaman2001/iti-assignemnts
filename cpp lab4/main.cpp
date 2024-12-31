#include<iostream>
#include<fstream>


using namespace std;
class Complex {
    private:
    int real;
    int comp;
    public:

    Complex(){

    }
    Complex(int real, int comp) : real(real) , comp(comp){}
    
    Complex operator +(Complex &c){
        Complex c3;
        c3.real = this->real + c.real;
        c3.comp = this->comp + c.comp;
        return c3;
    }
    friend Complex operator +(int num , Complex &c);
    Complex operator -(Complex &c){
        Complex c3;
        c3.real = this->real - c.real;
        c3.comp = this->comp - c.comp;
        return c3;
    }
    Complex operator *(Complex &c){
        Complex c3;
        c3.real = this->real * c.real;
        c3.comp = this->comp * c.comp;
        return c3;
    }
    Complex operator /(Complex &c){
        Complex c3;
        c3.real = this->real / c.real;
        c3.comp = this->comp / c.comp;
        return c3;
    }
    Complex operator ++(){
        //Complex c3;
        this->real++;
        this->comp++;
        return *this;
    }
    Complex operator ++(int n){
        Complex c3 = *this;
        this->real++;
        this->comp++;
        return c3;
    }
    Complex operator =(Complex &c){
        Complex c3;
        c3.real = c.real;
        c3.comp = c.comp;
        return c3;
    }
    int operator ==(Complex &c){
        return this->real == c.real && this->comp == c.comp;
    }
};

class Fraction {
private:
    int num;
    int den;
public:
    Fraction(int n = 0, int d = 1) : num(n), den(d) {}

    friend ostream& operator<<(ostream& stream, const Fraction& f) {
        stream << f.num << "/" << f.den;
        return stream;
    }

    friend istream& operator>>(istream& stream, Fraction& f) {
        stream >> f.num;
        stream >> f.den;
        return stream;
    }
};