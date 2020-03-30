#include "enum.h"

#include <iostream>

using std::cout; using std::endl;

namespace Entdlr
{
    EnumValue EnumValue::create(const Token& token, const int64_t& value)
    {
        EnumValue out;
        out.filename = token.filename;
        out.line = token.line;
        out.column = token.column;
        out.name = token.name;
        out.value = value;

        return out;
    }

    Enum Enum::create(const Token& token, const std::string& type, const std::vector<Attribute>& attributes)
    {
        Enum out;
        out.filename = token.filename;
        out.line = token.line;
        out.column = token.column;
        out.name = token.name;
        out.nextValue = 0;
        out.type = type;
        out.attributes = attributes;

        return out;
    }

    void Enum::add(const Token& token, const std::optional<int64_t> value)
    {
        if (token.name != "")
        {
            if (value)
            {
                values.push_back(EnumValue::create(token, *value));
                nextValue = *value + 1;
            }

            else
            {
                const auto newValue = nextValue++;
                values.push_back(EnumValue::create(token, newValue));
            }
        }
    }
};