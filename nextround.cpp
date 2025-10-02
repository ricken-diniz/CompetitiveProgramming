#include <iostream>
int main(){

    int participants;
    int kth;
    std::cin >> participants >> kth;
    int x = 0;
    int scores[participants];
    int s, best_score;

    for (int i = 0; i < participants; i++){
        std::cin >> s;
        scores[i] = s;
        if (i == kth - 1){
            best_score = s;
        }
    }

    for (int score : scores){
        if (score >= best_score && score > 0){
            x++;
        }
    }
    
    std::cout << x;

}