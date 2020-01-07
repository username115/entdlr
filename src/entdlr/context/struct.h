#ifndef __ENTDLR_STRUCT_H__
#define __ENTDLR_STRUCT_H__

#include <string>
#include <vector>

namespace Entdlr
{
    class Field
    {
    public:
        std::string name;
        std::string type;
        bool isArray;
        uint32_t arraySize;

        static Field create(const std::string& name, const std::string& type, const bool& isArray, const uint32_t& arraySize);
    };

    class Struct
    {
    public:
        std::string name;
        std::vector<Field> fields;

        static Struct create(const std::string& name);
        void add(const Field& field);
    };
};

#endif // __ENTDLR_STRUCT_H__