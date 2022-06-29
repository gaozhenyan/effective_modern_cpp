#pragma once

#include <vector>
#include <iostream>

#include <boost/type_index.hpp>

class Widget {

};


std::vector<Widget> createVec();

template<typename T>
void f_use_typeid(const T &param) {
    std::cout << "T= " << typeid(T).name() << std::endl;
    std::cout << "parm = " << typeid(param).name() << std::endl;
}

template<typename T>
void f_use_boost(const T &param) {
    using boost::typeindex::type_id_with_cvr;
    std::cout << "T= " << type_id_with_cvr<T>().pretty_name() << std::endl;
    std::cout << "parm = " << type_id_with_cvr<decltype(param)>().pretty_name() << std::endl;
}