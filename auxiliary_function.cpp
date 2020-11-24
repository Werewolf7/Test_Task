#include "auxiliary_function.h"

std::ostream& operator << (std::ostream& out, const std::pair<double, double>& data) {
    out << data.first << " " << data.second << std::endl;
    return out;
}

void show_data(const std::vector<std::pair<double, double>>& data) {
    int number{ 1 };

    for (const auto& el : data) {
        std::cout << number++ << ". " << el;
    }
}

void input_new_data(std::vector<std::pair<double, double>>& data) {
    int index{};

    std::cout << "Enter the index of the data to replace it with the new one: ";
    std::cin >> index;

    while (!(std::cin >> data[index - 1].first >> data[index - 1].second)) {
        std::cin.clear();
        std::cout << "Incorrect input, enter numbers" << std::endl;
        while (std::cin.get() != '\n') {
            continue;
        }
    }
}
