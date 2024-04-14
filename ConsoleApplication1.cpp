#include <iostream>

void drawTriangle(int n) {
    for (int i = 0; i < n; i++) {
       
        for (int j = 0; j < n - i - 1; j++) {
            std::cout << " ";
        }
        
        for (int k = 0; k < 2 * i + 1; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main() {
    int height;
    std::cout << " ";
    std::cin >> height;

    drawTriangle(height);

    return 0;
}
