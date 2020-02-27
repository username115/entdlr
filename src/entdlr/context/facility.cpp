#include "facility.h"

namespace Entdlr
{
    Parameter Parameter::create(const Token& token, const std::string& type)
    {
        Parameter out;
        out.filename = token.filename;
        out.line = token.line;
        out.column = token.column;
        out.name = token.name;
        out.type = type;

        return out;
    }

    Method Method::create(const Token& token, const std::string& returnType)
    {
        Method out;
        out.filename = token.filename;
        out.line = token.line;
        out.column = token.column;
        out.name = token.name;
        out.returnType = returnType;

        return out;
    }

    void Method::add(const Parameter& parameter)
    {
        parameters.push_back(parameter);
    }

    Facility Facility::create(const Token& token)
    {
        Facility out;
        out.filename = token.filename;
        out.line = token.line;
        out.column = token.column;
        out.name = token.name;

        return out;
    }

    void Facility::add(const Method& method)
    {
        methods.push_back(method);
    }
};
