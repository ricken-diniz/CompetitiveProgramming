#include <iostream>
#include <cmath>

void str2bin (int &number, std::string bin){
    number = 0;
    for (int i = 0; i < bin.size(); i++){

        if (bin[i] == '1'){

            number += std::pow(2, ((bin.size() - 1) - i));

        }

    }
}

int main(){

    int m, n;
    std::cin >> m >> n;
    int switches[m];
    int bin = 0; 
    int old_bin = 0;
    int new_bin = 0;
    bool has_unnecessary = false;
    std::string binary;

    for (int i = 0; i < m; i++){
        
        std::cin >> binary;
        str2bin(new_bin, binary);

        bin = bin | new_bin;

        if (bin == old_bin){
            has_unnecessary = true;
        } else {
            old_bin = bin;
        }

    }
    
    if (has_unnecessary){
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

}