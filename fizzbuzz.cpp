#include <iostream>

int main(){

    int n, a, b;
    std::cin >> n >> a >> b;
    long sum = 0;

    if(a == 1 || b == 1){
        std::cout << 0;
        return 0;
    }

    for (int i = 1; i <= n; i++){
        
        sum += i;

    }
    int ax = a;
    int bx = b;
    while(ax <= n){
        if (ax % b != 0){
            sum -= ax;
        }
        ax += a;
    }
    while(bx <= n){
        sum -= bx;
        bx += b;
    }
    
    std::cout << sum;

}