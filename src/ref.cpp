#include "../headers/ref.h"
#include <iostream>

int main(int argc, const char **argv) {
    if (argc < 2) {
        std::cerr << "Count of args les then 2\n";
        exit(1);
    }
    Reference r {argv[1]};
    r.ref_coll();
    return 0;
}
