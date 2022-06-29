#include "article02.h"

int main() {
    auto il_int = {1, 2, 3};
    int i = 10;
    const int ci = 12;
    const int &cri = ci;
    auto v1 = i;
    auto v2 = ci;
    auto v3 = cri;
    auto &rv1 = i;
    auto &rv2 = ci;
    auto &rv3 = cri;
    auto *pv1 = &i;
    auto *pv2 = &ci;
    auto *pv3 = &cri;
    auto &&urv1 = i;
    auto &&urv2 = ci;
    auto &&urv3 = cri;
    auto &&urv4 = 20;

    return 0;
}