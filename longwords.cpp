#include <iostream>

int main(){

    int rounds;

    std::cin >> rounds;
    std::string inputs[rounds];


    for (int i = 0; i < rounds; i++){

        std::cin >> inputs[i];
        
    }
    
    for (int i = 0; i < rounds; i++){

        if (inputs[i].size() > 10) {
    
            std::cout << inputs[i][0] << inputs[i].size() - 2 << inputs[i][inputs[i].size()-1] << std::endl;
    
        } 
        else {
            std::cout << inputs[i] << std::endl;
        }

    }
    

}