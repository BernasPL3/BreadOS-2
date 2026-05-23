#include <iostream>
#include <string>

int main() {
    std::string cmd;

    std::cout << "LoafTerminal v1.0" << std::endl;

    while(true) {
        std::cout << "breados> ";
        std::getline(std::cin, cmd);

        if(cmd == "exit")
            break;

        std::cout << "Comando: " << cmd << std::endl;
    }

    return 0;
}
