#include <iostream>
int main(){
    std::string username;
    std::cin >> username;
    std::string onlydistinct;

    onlydistinct = username[0];
    
    for (int i = 1; i < username.size(); i++){

        bool has_char = false;
        for (char c : onlydistinct){
            if (c == username[i]){
                has_char = true;
                break;
            }
        }

        if (!has_char){
            onlydistinct += username[i];
        }
    }

    if (onlydistinct.size() % 2 == 0){
        std::cout << "CHAT WITH HER!";
    } else {
        std::cout << "IGNORE HIM!";
    }
}