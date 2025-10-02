#include <iostream>

int main(){

    int rounds, p1, p2, less, bigger;
    std::cin >> rounds;
    std::string outputs[rounds];
    
    for (int i = 0; i < rounds; i++){

        std::cin >> p1 >> p2;
        bigger = p1;
        less = p2;
        if (p2 > p1) {
            bigger = p2;
            less = p1;
        }

        if ((bigger + less) % 3 == 0 && bigger / 2.f <= less){
            outputs[i] = "YES";
        }
        else{
            outputs[i] = "NO";
        }

    }


    for (int i = 0; i < rounds; i++){
        
        std::cout << outputs[i] << std::endl;   

    }

}