#include <clocale>
#include <iostream>

void print_power(int value, int power) {
    int result = 1;
    for (int i = 0; i < power; i++) {
        result *= value;
    }
    std::cout << value << " в степени " << power << " = " << result << std::endl;
}

int main(int argc, char** argv) {
    (void)argc;
    (void)argv;
    // У меня часто отваливается кодировка, поэтому я задаю локаль
    setlocale(LC_ALL, "ru_RU.UTF-8");

    print_power(5, 2);
    print_power(3, 3);
    print_power(4, 4);

    return 0;
}
