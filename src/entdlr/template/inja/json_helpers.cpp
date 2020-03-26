#include "json_helpers.h"

namespace Entdlr {
    void to_json(json &j, const Context &c) {
        j = json{
                {"namespaces", c.namespaces}
        };
    }

    void from_json(const json &j, Context &c) {
        j.at("namespaces").get_to(c.namespaces);
    }

    void to_json(json &j, const Namespace &n) {
        j = json{
                {"name",       n.name},
                {"filename",   n.filename},
                {"line",       n.line},
                {"column",     n.column},
                {"enums",      n.enums},
                {"unions",     n.unions},
                {"structs",    n.structs},
                {"facilities", n.facilities}
        };
    }

    void from_json(const json &j, Namespace &n) {
        j.at("name").get_to(n.name);
        j.at("filename").get_to(n.filename);
        j.at("line").get_to(n.line);
        j.at("column").get_to(n.column);
        j.at("enums").get_to(n.enums);
        j.at("unions").get_to(n.unions);
        j.at("structs").get_to(n.structs);
        j.at("facilities").get_to(n.facilities);
    }

    void to_json(json &j, const Struct &s) {
        j = json{
                {"name",     s.name},
                {"filename", s.filename},
                {"line",     s.line},
                {"column",   s.column},
                {"fields",   s.fields},
                {"methods",  s.methods}
        };
    }

    void from_json(const json &j, Struct &s) {
        j.at("name").get_to(s.name);
        j.at("filename").get_to(s.filename);
        j.at("line").get_to(s.line);
        j.at("column").get_to(s.column);
        j.at("fields").get_to(s.fields);
        j.at("methods").get_to(s.methods);
    }

    void to_json(json &j, const Field &f) {
        j = json{
                {"name",       f.name},
                {"filename",   f.filename},
                {"line",       f.line},
                {"column",     f.column},
                {"type",       f.type},
                {"isArray",    f.isArray},
                {"arraySize",  f.arraySize},
                {"attributes", f.attributes}
        };
    }

    void from_json(const json &j, Field &f) {
        j.at("name").get_to(f.name);
        j.at("filename").get_to(f.filename);
        j.at("line").get_to(f.line);
        j.at("column").get_to(f.column);
        j.at("type").get_to(f.type);
        j.at("isArray").get_to(f.isArray);
        j.at("arraySize").get_to(f.arraySize);
        j.at("attributes").get_to(f.attributes);
    }

    void to_json(json &j, const Attribute &a) {
        j = json{
                {"name",     a.name},
                {"filename", a.filename},
                {"line",     a.line},
                {"column",   a.column},
                {"isString", a.isString},
                {"string",   a.string},
                {"isNumber", a.isNumber},
                {"number",   a.number},
        };
    }

    void from_json(const json &j, Attribute &a) {
        j.at("name").get_to(a.name);
        j.at("filename").get_to(a.filename);
        j.at("line").get_to(a.line);
        j.at("column").get_to(a.column);
        j.at("isString").get_to(a.isString);
        j.at("string").get_to(a.string);
        j.at("isNumber").get_to(a.isNumber);
        j.at("number").get_to(a.number);
    }

    void to_json(json &j, const Union &u) {
        j = json{
                {"name",     u.name},
                {"filename", u.filename},
                {"line",     u.line},
                {"column",   u.column},
                {"types",    u.types}
        };
    }

    void from_json(const json &j, Union &u) {
        j.at("name").get_to(u.name);
        j.at("filename").get_to(u.filename);
        j.at("line").get_to(u.line);
        j.at("column").get_to(u.column);
        j.at("types").get_to(u.types);
    }

    void to_json(json &j, const UnionType &t) {
        j = json{
                {"name",      t.name},
                {"filename",  t.filename},
                {"line",      t.line},
                {"column",    t.column},
                {"isArray",   t.isArray},
                {"arraySize", t.arraySize}
        };
    }

    void from_json(const json &j, UnionType &t) {
        j.at("name").get_to(t.name);
        j.at("filename").get_to(t.filename);
        j.at("line").get_to(t.line);
        j.at("column").get_to(t.column);
        j.at("isArray").get_to(t.isArray);
        j.at("arraySize").get_to(t.arraySize);
    }

    void to_json(json &j, const Enum &e) {
        j = json{
                {"name",     e.name},
                {"type",     e.type},
                {"filename", e.filename},
                {"line",     e.line},
                {"column",   e.column},
                {"values",   e.values}
        };
    }

    void from_json(const json &j, Enum &e) {
        j.at("name").get_to(e.name);
        j.at("type").get_to(e.type);
        j.at("filename").get_to(e.filename);
        j.at("line").get_to(e.line);
        j.at("column").get_to(e.column);
        j.at("values").get_to(e.values);
    }

    void to_json(json &j, const EnumValue &e) {
        j = json{
                {"name",     e.name},
                {"filename", e.filename},
                {"line",     e.line},
                {"column",   e.column},
                {"value",    e.value}
        };
    }

    void from_json(const json &j, EnumValue &e) {
        j.at("name").get_to(e.name);
        j.at("filename").get_to(e.filename);
        j.at("line").get_to(e.line);
        j.at("column").get_to(e.column);
        j.at("value").get_to(e.value);
    }

    void to_json(json &j, const Facility &f)
    {
        j = json{
                {"name",     f.name},
                {"filename", f.filename},
                {"line",     f.line},
                {"column",   f.column},
                {"methods",  f.methods}
        };
    }

    void from_json(const json &j, Facility &f)
    {
        j.at("name").get_to(f.name);
        j.at("filename").get_to(f.filename);
        j.at("line").get_to(f.line);
        j.at("column").get_to(f.column);
        j.at("methods").get_to(f.methods);
    }

    void to_json(json& j, const Method& m)
    {
        j = json{
                {"name",       m.name},
                {"filename",   m.filename},
                {"line",       m.line},
                {"column",     m.column},
                {"returnType", m.returnType},
                {"isStatic",   m.isStatic},
                {"parameters", m.parameters}
        };
    }

    void from_json(const json& j, Method& m)
    {
        j.at("name").get_to(m.name);
        j.at("filename").get_to(m.filename);
        j.at("line").get_to(m.line);
        j.at("column").get_to(m.column);
        j.at("returnType").get_to(m.returnType);
        j.at("isStatic").get_to(m.isStatic);
        j.at("parameters").get_to(m.parameters);
    }

    void to_json(json& j, const Parameter& p)
    {
        j = json{
                {"name",     p.name},
                {"filename", p.filename},
                {"line",     p.line},
                {"column",   p.column},
                {"type",     p.type},
                {"constant", p.constant}
        };
    }

    void from_json(const json& j, Parameter& p)
    {
        j.at("name").get_to(p.name);
        j.at("filename").get_to(p.filename);
        j.at("line").get_to(p.line);
        j.at("column").get_to(p.column);
        j.at("type").get_to(p.type);
        j.at("constant").get_to(p.constant);
    }
}