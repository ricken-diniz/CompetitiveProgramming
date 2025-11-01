#include <iostream>
#include <unordered_map>

int main(){

    int n;
    int x;
    std::cin >> n >> x;
    std::unordered_map<long long, int> nums;
    nums.reserve(n);

    for(int i = 1; i <= n; ++i){
        long long num;
        std::cin >> num;

        if(nums.find(x - num) != nums.end()){ // if nums.end(), the value arent in hashmap
            std::cout << nums[x - num] << " " << i;
            return 0;
        }
        nums[num] = i;
    }

    std::cout << "IMPOSSIBLE";
    return 0;
}
