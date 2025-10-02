#include <iostream>

int main() {
	
	int x;
	
	std::cin >> x;

	if (x > 3 && x % 2 == 0) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}
	
}
