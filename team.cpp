#include <iostream>

void has_sure(int &count,std::string binary){
    if(binary == "1"){
        count++;
    }
}

int main(){

    int rounds;
    std::cin >> rounds;
    
    int solved_problem = 0;
    std::string d1;
    std::string d2;
    std::string d3;
    
    for (int i = 0; i < rounds; i++){
        
        std::cin >> d1 >> d2 >> d3;

        int count = 0;
        has_sure(count,d1);
        has_sure(count,d2);
        has_sure(count,d3);

        if (count > 1) {
            solved_problem++;
        }
    }

    std::cout << solved_problem;
}