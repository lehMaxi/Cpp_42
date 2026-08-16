#include "Serializer.hpp"
#include <iostream>

int main()
{
    Data data;
    data.value = 42;

    // Serialize the pointer to the Data object
    uintptr_t serialized = Serializer::serialize(&data);
    std::cout << "Serialized pointer: " << serialized << std::endl;

    // Deserialize the pointer back to a Data object
    Data* deserialized = Serializer::deserialize(serialized);
    std::cout << "Deserialized value: " << deserialized->value << std::endl;

    return 0;
}