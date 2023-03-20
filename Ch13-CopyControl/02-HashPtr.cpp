/**
* @author: Kinvy
* @email: Kinvy66@163.com
* @date: 2023/3/14 9:57
* @file: 02-HashPtr.cpp
* @description: 
*/
#include <iostream>
#include <string>

class HashPtr {
public:
    // default ctor
    explicit HashPtr(const std::string &s = std::string()):
        ps(new std::string(s)), i(0) {
        std::cout << "default ctor" << std::endl;
    }

    // copy ctor
    HashPtr(const HashPtr& rhs):
        ps(new std::string(*rhs.ps)), i(rhs.i){
        std::cout << "copy ctor" << std::endl;
    }

    // copy assign
    HashPtr& operator=(const HashPtr& rhs) {
        std::cout << "copy assign" << std::endl;
        // deal self assign
        if (&rhs == this) {
            return *this;
        }
        auto newp = new std::string(*rhs.ps);
        delete ps;
        ps = newp;
        i = rhs.i;
        return *this;
    }

    ~HashPtr() {
        std::cout << "de" << std::endl;
        delete ps;
    }
private:
    std::string *ps;
    int i;
    friend void swap(HashPtr& lhs, HashPtr& rhs);
};

void swap(HashPtr& lhs, HashPtr& rhs) {
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
}

HashPtr f(HashPtr hp) {
    HashPtr ret = hp;

    return ret;
}

void test01(){
    HashPtr p("value");
    f(p);
    HashPtr q(p);
}

int main(int argc, char** argv) {
    test01();
    return 0;
}