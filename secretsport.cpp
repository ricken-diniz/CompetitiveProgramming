#include <iostream>

int main(){

    int rounds, sets;
    std::cin >> rounds;
    std::string winners;
    std::string outputs[rounds];
    
    for (int i = 0; i < rounds; i++){

        std::cin >> sets >> winners;
        outputs[i] = winners[sets - 1];

    }


    for (int i = 0; i < rounds; i++){
        
        std::cout << outputs[i] << std::endl;   

    }

}