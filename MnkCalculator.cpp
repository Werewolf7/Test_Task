#include "MnkCalculator.h"

std::pair<double, double> MnkCalculator::operator()(const std::vector<std::pair<double, double>>& data) const {
    double amount_x = std::accumulate(data.cbegin(), data.cend(),
        0,
        [](double sum, const auto& el)
        { sum += el.first; return sum; }
    );
    double amount_y = std::accumulate(data.cbegin(), data.cend(),
        0,
        [](double sum, const auto& el)
        { sum += el.second; return sum; }
    );
    double amount_xx = std::accumulate(data.cbegin(), data.cend(),
        0,
        [](double sum, const auto& el)
        { sum += std::pow(el.first, 2); return sum; }
    );
    double amount_xy = std::accumulate(data.cbegin(), data.cend(),
        0,
        [](double sum, const auto& el)
        { sum += el.first * el.second; return sum; }
    );

    double coefficient_a{
        (data.size() * amount_xy - amount_x * amount_y)
        /
        (data.size() * amount_xx - amount_x * amount_x)
    };
   double coefficient_b{
       (amount_y - coefficient_a * amount_x)
       /
       data.size()
   };

   return { coefficient_a, coefficient_b };
}
