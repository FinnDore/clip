#include <iostream>
#include <string>

int main() {
    std::string textToCoppy;
    for (std::string line; std::getline(std::cin, line);) {
        textToCoppy += line + "\n";
    }
    
    return 0;
}
