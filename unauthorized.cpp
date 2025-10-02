#include <iostream>
int main(){

    bool logged = false;
    int rounds;
    std::cin >> rounds;
    std::string operation;

    int unauthorized_opts = 0;
    for (int i = 0; i < rounds; i++){

        std::cin >> operation;

        if (operation == "login"){
            logged = true;
        } else if (operation == "logout"){
            logged = false;
        }

        if (operation == "private" && !logged){
            unauthorized_opts++;
        }

    }

    std::cout << unauthorized_opts;

}