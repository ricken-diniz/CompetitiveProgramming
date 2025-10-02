#include <iostream>

int main(){

    int rounds;
    std::cin >> rounds;
    int a,b,c,d;
    int bigger1,less1,bigger2,less2;
    std::string outputs[rounds];

    for (int i = 0; i < rounds; i++)
    {
        std::cin >> a >> b >> c >> d;

        bigger1 = a;
        less1 = c;
        if (c > a){
            bigger1 = c;
            less1 = a;
        }

        bigger2 = b;
        less2 = d;
        if (d > b){
            bigger1 = d;
            less1 = b;
        }

        if(less1 >= less2){
            outputs[i] = "Gellyfish";
        }
        else {
            outputs[i] = "Flower";
        }
    }
    
    for (int i = 0; i < rounds; i++)
    {
        
        std::cout << outputs[i] << std::endl;

    }
    

}