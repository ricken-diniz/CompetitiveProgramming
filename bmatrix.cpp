#include <iostream>
int main(){
    int idx, jdx, value;
    
    for (int i = 0; i < 5; i++){

        for (int j = 0; j < 5; j ++){

            std::cin >> value;
            if (value == 1){
                idx = i;
                jdx = j;
            }

        }
    }
    
    int count = 0;
    while(idx < 2){
        idx ++;
        count ++;
    }
    while(idx > 2){
        idx --;
        count ++;
    }
    while(jdx < 2){
        jdx ++;
        count ++;
    }
    while(jdx > 2){
        jdx--;
        count ++;
    }

    std::cout << count;
}
