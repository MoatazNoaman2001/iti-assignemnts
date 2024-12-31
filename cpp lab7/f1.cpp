#include<iostream>

class parent{
    private:
    int x=2;
    protected:
    int y=5;
    public:
    int z=7;
};

class child1: protected parent{
    public:
    void print(){
        printf("%i %i" , y, z);
    }    
};

class child2: protected child1{
    public:
    void print(){
        printf("%i %i" , y, z);
    }
};
int main(){
    child2 c;
    c.print();
}