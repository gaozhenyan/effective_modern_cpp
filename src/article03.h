#pragma once

#include <utility>

template<typename Container, typename Index>
decltype(auto)
authAndAccess_cpp14(Container &&c, Index i) {
    return std::forward<Container>(c)[i];
}

template<typename Container, typename Index>
auto
authAndAccess_cpp11(Container &&c, Index i) -> decltype(std::forward<Container>(c)[i]) {
    return std::forward<Container>(c)[i];
}