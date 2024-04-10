#include <iostream>
#include "Date.h"

using namespace std;

int main() {
    Date d1{0, 1, 2020};
    Date d2{15, 14, 2019};
    Date d3{50, 12, 1500};

    d1.displayDate();
    d2.displayDate();
    d3.displayDate();

    return 0;
}
