#pragma once
#include <DataOperations/DataStorage.h>


class DataLoader
{
public:
    DataLoader(DataStorage& data_storage);
    DataLoader() = delete;
    DataLoader(DataLoader&) = delete;
    DataLoader(DataLoader&&) = delete;
    ~DataLoader();

private:
    
    // --- //
    DataStorage& data_storage_;
};
