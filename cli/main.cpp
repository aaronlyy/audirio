#include <iostream>
#include "audirio/audirio.h"

int main() {
    std::cout << "Vor dummy\n";

    audirio::Audirio a;
    std::cout << "Dummy: " << a.dummy() << "\n";

    std::cout << "Nach dummy\n";
    return 0;
}