#include <iostream>

bool is_prime(int x){
    int dividers = 0;

    for (int div = 2; div < x; div++){
        if (x % div == 0){
            dividers++;
        }
    }

    if (dividers == 0){
        return true;
    }
    return false;
}

int main(){

    int prime;
    std::cin >> prime;

    if (prime > 3 && is_prime(prime-2)){
        std::cout << 2 << ' ' << (prime -2);
    }
    else{
        std::cout << -1;
    }

}