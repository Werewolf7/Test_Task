#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include "lib.h"
#include "SourceData.h"

class SourceData;

class FileManager {
public:
    // Function for adding one pair of values to the end of the file.
    void add_record_to_end_in_file(SourceData& src_dt);
    // Uploading data from a file.
    std::vector<std::pair<double, double>> loading_data(SourceData& src_dt);
    // Overwriting the file (making the necessary changes).
    void overwriting_data_in_file(SourceData& src_dt, const std::vector<std::pair<double, double>>& data);
    // Clearing the file.
    void clear_f(SourceData& src_dt);
};

#endif // FILEMANAGER_H
