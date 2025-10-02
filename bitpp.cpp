#include <iostream>

void update_x(int &x, std::string operation){
    if(operation == "++"){
        x++;
    }
    else if (operation == "--"){
        x--;
    }
    
}

int main(){

    int rounds;
    std::cin >> rounds;
    int x = 0;
    std::string increment;
    std::string operation;

    for (int i = 0; i < rounds; i++){
        
        std::cin >> increment;

        if (increment[0] == '-' || increment[0] == '+'){
            operation = increment[0];
            operation += increment[1];
        }
        else {
            operation = increment[1];
            operation += increment[2];
        }

        update_x(x, operation);

    }
    
    std::cout << x;

}