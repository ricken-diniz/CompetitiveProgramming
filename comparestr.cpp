#include <iostream>

void str2lower(std::string &str){
    for (char &c : str){
        c = tolower(c);
    }
}

int main(){

    std::string string1, string2;
    std::cin >> string1 >> string2;
    str2lower(string1);
    str2lower(string2);
            
    if (string1 < string2){
        std::cout << -1;
    }
    else if (string1 > string2){
        std::cout << 1;
    } else {
        std::cout << 0;
    }

}