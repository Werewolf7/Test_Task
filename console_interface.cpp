#include "console_interface.h"
#include "FileManager.h"
#include "MnkCalculator.h"
#include "auxiliary_function.h"

void display_menu() {
    std::cout << std::endl
        << "1. Add data" << std::endl
        << "2. Editing data" << std::endl
        << "3. Display data" << std::endl
        << "4. Approximation of input data" << std::endl
        << "5. Clearing the file" << std::endl
        << "To complete, enter any other number" << std::endl;
}



void start_menu() {
    int paragraph{};

    std::string fname{};
    std::cout << "Enter the file name to work with: ";
    std::cin >> fname;

    SourceData stc_dt{ fname };
    FileManager fm;
    MnkCalculator mc;

    while (true) {
        display_menu();
        std::cin >> paragraph;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (paragraph == 1) {
            fm.add_record_to_end_in_file(stc_dt);
        }
        else if (paragraph == 2) {
            auto v = fm.loading_data(stc_dt);
            input_new_data(v);
            fm.overwriting_data_in_file(stc_dt, v);
        }
        else if (paragraph == 3) {
            show_data(fm.loading_data(stc_dt));
        }
        else if (paragraph == 4) {
            std::cout << "a and b: " << mc(fm.loading_data(stc_dt));
        }
        else if (paragraph == 5) {
            fm.clear_f(stc_dt);
        }
        else {
            break;
        }
    }
}
