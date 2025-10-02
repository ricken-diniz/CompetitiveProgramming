#include <iostream>

int main(){

    int cases;
    std::cin >> cases;
    int rounds[cases];

    for (int i = 0; i < cases; i++){

        std::cin >> rounds[i];

    }

    for (int i = 0; i < cases; i++){

        if (rounds[i] == 1 || (rounds[i] - 1) % 3 == 0){
            std::cout << "YES" << std::endl;
        }
        else{
            std::cout << "NO" << std::endl;
        }

    }

}