#include "SourceData.h"

SourceData::SourceData(const std::string& fname) : fname{ fname } { }

std::fstream& SourceData::get_file() {
    return input_data;
}

std::string SourceData::get_fname() const {
    return fname;
}

void SourceData::open_f(std::ios_base::openmode mode) {
    input_data.open(fname, mode);
}

void SourceData::close_f() {
    input_data.close();
}


