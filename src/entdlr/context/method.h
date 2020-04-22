#ifndef __ENTDLR_METHOD_H__
#define __ENTDLR_METHOD_H__

#include <string>
#include <vector>

#include "token.h"

namespace Entdlr
{
    class Parameter : public Token
    {
    public:
        std::string type;
        bool constant;

        static Parameter create(const Token& token, const std::string& type, const bool constant = true);
    };

    class Method : public Token
    {
    public:
        std::string returnType;
        std::vector<Parameter> parameters;
        bool isStatic;
        bool constant;
        std::string comment;

        static Method create(const Token& token, const std::string& returnType, const bool& isStatic = false, const bool& constant = false, const std::string& comment = "");
        void add(const Parameter& parameter);
    };
};

#endif // __ENTDLR_METHOD_H__
