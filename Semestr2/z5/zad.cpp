#include <iostream>
#include <cstdio>

using namespace std;

class Object
{
public:
    virtual void whoAmI() = 0;
    virtual string toString() = 0;
    virtual Object* clone() = 0;
    virtual ~Object() = default;
};

class StringObject: public Object
{
private:
    char* n;
    size_t size;
public:
    StringObject(char* n, size_t size) {
        this->n=n;
        this->size=size;
    }
    char* get()const {
        return n;
    }
    void whoAmI() override {
        cout<<"String"<<StringObject::get()<<endl;
    }
    string toString() override {
        return get();
    }
    Object* clone() override {
        return new StringObject(*this);
    }

};

class IntObject: public Object
{
private:
    int m;
public:
    IntObject(int m) {
        this->m=m;
    }
    int get()const {
        return m;
    }
    void whoAmI() override {
        cout<<"Int"<<IntObject::get()<<endl;
    }
    string toString() override {
        return "IntObject";
    }
    Object* clone() override {
        return new IntObject(*this);
    }

};

class DoubleObject: public Object
{
private:
    double d;
public:
    DoubleObject(double d) {
        this->d=d;
    }
    int get()const {
        return d;
    }
    void whoAmI() override {
        cout<<"Double"<<DoubleObject::get()<<endl;
    }
    string toString() override {
        return "DoubleObject";
    }
    Object* clone() override {
        return new DoubleObject(*this);
    }
    double getDouble() const {
        return d;
    }

};

double Task(Object *pntr[]) {
    double sum = 0;
    for(int i = 0; i < 4; ++i) {
        if(pntr[i]->toString()=="DoubleObject")
            sum+=dynamic_cast<DoubleObject*>(pntr[i])->getDouble();
    }
    return sum;
}

int main() {
    DoubleObject doub(1);
    Object *ar[4];
    ar[0] = new StringObject("sentence", 8);
    ar[1] = new IntObject(2);
    ar[2] = new DoubleObject(200);
    ar[3] = doub.clone();
    cout<<Task(ar)<<endl;
    for(int i = 0; i < 4; ++i) { delete ar[i]; }

    return 0;
}
