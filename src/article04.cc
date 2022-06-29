#include "article04.h"

std::vector<Widget> createVec() {
    std::vector<Widget> vec;
    vec.emplace_back();
    return vec;
}

int main() {
    const auto vw = createVec();
    if (!vw.empty()) {
        f_use_typeid(&vw[0]);
        f_use_boost(&vw[0]);
    }

    return 0;
}