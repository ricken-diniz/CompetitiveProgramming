#include <iostream>

int main() {

    int n;
    int x;
    std::cin >> n >> x;
    int arr[n];

    for (size_t i = 0; i < n; i++)
    {
        
        int x;
        std::cin >> x;
        arr[i] = x;

    }
    if(arr[n - 1] < x){
        std::cout << -1;

    } else {

        int left = 0;
        int right = n - 1;
        int mid;
        while (left < right) {
            mid = (left + right) / 2;

            if (arr[mid] >= x){
                right = mid;
            } else {
                left = mid + 1;
            }

        }

        std::cout << mid;

    }
    
}
