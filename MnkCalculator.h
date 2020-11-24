#ifndef MNKCALCULATOR_H
#define MNKCALCULATOR_H

#include "lib.h"

// Implementation as a functor
class MnkCalculator {
public:
    // Counting a, b.
    std::pair<double, double> operator()(const std::vector<std::pair<double, double>>& data) const;
};

#endif // MNKCALCULATOR_H
