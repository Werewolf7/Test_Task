#ifndef SOURCEDATA_H
#define SOURCEDATA_H

#include "lib.h"
#include "FileManager.h"

class SourceData {
private:
    // File for storing input data
    std::fstream input_data;
    // File name
    std::string fname;
public:
    SourceData() = delete;
    // Designer.
    SourceData(const std::string& fname);
    // Getter of our data file.
    std::fstream& get_file();
    // Getter of the file name, because we do not have direct access to the fields of the SourceData class.
    std::string get_fname() const;
    // Custom open for the file in the desired mode, because we do not have direct access to the fields of the SourceData class.
    void open_f(std::ios_base::openmode mode);
    // Custom close for the file, because we don't have direct access to the fields of the SourceData class.
    void close_f();
};

#endif // SOURCEDATA_H
