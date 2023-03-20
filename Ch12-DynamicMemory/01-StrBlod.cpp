/**
* @author: Kinvy
* @email: Kinvy66@163.com
* @date: 2023/3/20 13:43
* @file: 01-StrBlod.cpp
* @description: 
*/
#include <iostream>
#include <vector>
#include <string>
#include <memory>

class StrBlod{
public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlod();
    StrBlod(std::initializer_list<std::string> il);
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    // 添加和删除元素
    void push_back(const std::string &t) { data->push_back(t); }  //
    void pop_back();
    // 元素访问
    std::string& front();
    std::string& back();
    std::string& front() const;
    std::string& back() const;
private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg) const;
};

StrBlod::StrBlod()
    : data(std::make_shared<std::vector<std::string>>()){

}
StrBlod::StrBlod(std::initializer_list<std::string> il)
    : data(std::make_shared<std::vector<std::string>>(il)) {

}

void StrBlod::pop_back() {
    check(0, "pop_back on empty StrBlod");
    data->pop_back();
}

std::string&
StrBlod::front() {
    check(0, "front on empty StrBlod");
    return data->front();
}

std::string&
StrBlod::back() {
    check(0, "back on empty StrBlod");
    return data->back();
}

std::string&
StrBlod::front() const {
    check(0, "front on empty StrBlod");
    return data->front();
}

std::string&
StrBlod::back() const {
    check(0, "back on empty StrBlod");
    return data->back();
}

void
StrBlod::check(size_type i, const std::string &msg) const {
    if (i >= data->size())
        throw std::out_of_range(msg);
}

int main(int argc, char** argv) {

    StrBlod b1 = {"a", "an", "the"};
    const StrBlod cb = {"a", "b", "c"};

    std::cout << cb.front() << std::endl;
    std::cout << cb.back() << std::endl;

    return 0;
}