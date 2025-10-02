#include <iostream>

int main(){

    int rounds;
    std::cin >> rounds;
    int n, s, dx, dy, x, y;
    int outputs[rounds];

    for (int i = 0; i < rounds; i++)
    {

        int count = 0;
        std::cin >> n, s;
        std::cout << n << std::endl;

        for (int j = 0; j < n; j++)
        {
            std::cout << j << std::endl;

            std::cin >> dx >> dy >> x >> y;

            if(x == y || (x + y) == (s - 1)){

                count++;

            }

        }
        
        outputs[i] = count;
    }

    for (int i = 0; i < rounds; i++)
    {
        std::cout << outputs[i] << std::endl;
    }

}