#ifndef AUXILIARY_FUNCTION_H
#define AUXILIARY_FUNCTION_H

#include "lib.h"
#include "SourceData.h"

// To output std:: pair.
std::ostream& operator << (std::ostream& out, const std::pair<double, double>& data);

// Display data in the format: number. x y.
void show_data(const std::vector<std::pair<double, double>>& data);

// Changing data at the index position.
void input_new_data(std::vector<std::pair<double, double>>& data);

#endif // AUXILIARY_FUNCTION_H
