#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <cstdint>

struct Data
{
    int value;
};

class Serializer
{
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);

    private:
        Serializer();
        Serializer(const Serializer &other);
        ~Serializer();

        Serializer &operator=(const Serializer &other);
};

#endif