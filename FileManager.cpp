#include "FileManager.h"

void FileManager::add_record_to_end_in_file(SourceData& src_dt) {
    src_dt.open_f(std::ios_base::app);

    std::cout << "Enter the x and y:";

    /*std::string tmp_in_data{ " " };
    std::getline(std::cin, tmp_in_data);
    double tmp_x, tmp_y;
    std::stringstream ss{ tmp_in_data };
    ss >> tmp_x >> tmp_y;*/

    double tmp_x{}, tmp_y{};
    while (!(std::cin >> tmp_x >> tmp_y)) {
        std::cin.clear();
        std::cout << "Incorrect input, enter numbers" << std::endl;
        while (std::cin.get() != '\n') {
            continue;
        }
    }

    src_dt.get_file() << tmp_x << " " << tmp_y << std::endl;
    src_dt.close_f();
}

std::vector<std::pair<double, double>> FileManager::loading_data(SourceData& src_dt) {
    std::vector<std::pair<double, double>> download_data{};
    std::string str{};

    src_dt.open_f(std::ios_base::in);
    double tmp_x{}, tmp_y{};

    while (std::getline(src_dt.get_file(), str)) {
        std::stringstream ss{ str };
        ss >> tmp_x >> tmp_y;
        download_data.push_back({ tmp_x, tmp_y });
    }

    download_data.shrink_to_fit();

    src_dt.close_f();

    return download_data;
}

void FileManager::overwriting_data_in_file(SourceData& src_dt, const std::vector<std::pair<double, double>>& data) {
    src_dt.open_f(std::ios_base::out);

    for (const auto& el : data) {
        src_dt.get_file() << el.first << " " << el.second << std::endl;
    }

    src_dt.close_f();
}

void FileManager::clear_f(SourceData& src_dt) {
    src_dt.open_f(std::ios_base::out);
    src_dt.close_f();
}
