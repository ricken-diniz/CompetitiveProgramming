#include <iostream>

int main(){

    int rounds;
    std::cin >> rounds;
    int n, m, x, y, empty;
    int outputs[rounds];

    for (int i = 0; i < rounds; i++)
    {
        
        std::cin >> n >> m >> x >> y;
        for (int j = 0; j < n; j++)
        {
            std::cin >> empty;
        }
        for (int j = 0; j < m; j++)
        {
            std::cin >> empty;
        }
        outputs[i] = 0;
        outputs[i] += n + m;
    }
    
    for (int i = 0; i < rounds; i++)
    {
        std::cout << outputs[i] << std::endl;
    }
    


}