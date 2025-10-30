#include <iostream>

int main(){

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++){

        long long n;
        int q;
        std::cin >> n >> q;
        long long nums[n];
        nums[0] = 0;
    
        for (int i = 1; i <= n; i++){
    
            long long x;
            std::cin >> x;
            nums[i] = nums[i - 1] + x;
    
        }
    
        for (int i = 0; i < q; i++){
    
            long long l;
            long long r;
            long long k;
            std::cin >> l >> r >> k;
        
            long long right = nums[r];
            long long left = nums[l - 1];
            long long totalSum = nums[n] - (right - left) + k * (r - l + 1);
        
            if (totalSum & 1) std::cout << "YES" << std::endl;
            else std::cout << "NO" << std::endl;

        
        }

    }

    
}
