#include <clocale>
#include <iostream>

int fib(int n) {
    // if (n == 0) {
    //     return 0;
    // }
    // if (n == 1) {
    //     return 1;
    // }
    if (n<1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

// int main(int argc, char** argv) {
    // (void)argc;
    // (void)argv;
    // всем поохуй на твои аргс аргв если не знаешь не пиши 
    int main (){
    // У меня часто отваливается кодировка, поэтому я задаю локаль
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int n = 0;
    std::cout << "Введите число: ";
    std::cin >> n;

    std::cout << "Числа Фибоначчи:";
    for (int i = 0; i < n; i++) {
        std::cout << " " << fib(i);
    }
    std::cout << std::endl;

    return 0;
}
