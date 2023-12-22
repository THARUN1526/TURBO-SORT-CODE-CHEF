#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int a;
    std::cin >> a;
    
    std::vector<int> k;
    for (int i = 0; i < a; ++i) {
        int b;
        std::cin >> b;
        k.push_back(b);
    }
    
    std::sort(k.begin(), k.end());
    
    for (int i : k) {
        std::cout << i << std::endl;
    }
    
    return 0;
}
