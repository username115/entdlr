
// Generated from FlatBuffers.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  FlatBuffersParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, STRING_CONSTANT = 23, BASE_TYPE_NAME = 24, IDENT = 25, 
    HEX_INTEGER_CONSTANT = 26, INTEGER_CONSTANT = 27, FLOAT_CONSTANT = 28, 
    BLOCK_COMMENT = 29, COMMENT = 30, WHITESPACE = 31
  };

  enum {
    RuleSchema = 0, RuleInclude = 1, RuleNamespace_decl = 2, RuleAttribute_decl = 3, 
    RuleType_decl = 4, RuleEnum_decl = 5, RuleRoot_decl = 6, RuleField_decl = 7, 
    RuleRpc_decl = 8, RuleRpc_method = 9, RuleType = 10, RuleEnumval_decl = 11, 
    RuleCommasep_enumval_decl = 12, RuleIdent_with_opt_single_value = 13, 
    RuleCommasep_ident_with_opt_single_value = 14, RuleMetadata = 15, RuleScalar = 16, 
    RuleObject = 17, RuleIdent_with_value = 18, RuleCommasep_ident_with_value = 19, 
    RuleSingle_value = 20, RuleValue = 21, RuleCommasep_value = 22, RuleFile_extension_decl = 23, 
    RuleFile_identifier_decl = 24, RuleNs_ident = 25, RuleInteger_const = 26
  };

  FlatBuffersParser(antlr4::TokenStream *input);
  ~FlatBuffersParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class SchemaContext;
  class IncludeContext;
  class Namespace_declContext;
  class Attribute_declContext;
  class Type_declContext;
  class Enum_declContext;
  class Root_declContext;
  class Field_declContext;
  class Rpc_declContext;
  class Rpc_methodContext;
  class TypeContext;
  class Enumval_declContext;
  class Commasep_enumval_declContext;
  class Ident_with_opt_single_valueContext;
  class Commasep_ident_with_opt_single_valueContext;
  class MetadataContext;
  class ScalarContext;
  class ObjectContext;
  class Ident_with_valueContext;
  class Commasep_ident_with_valueContext;
  class Single_valueContext;
  class ValueContext;
  class Commasep_valueContext;
  class File_extension_declContext;
  class File_identifier_declContext;
  class Ns_identContext;
  class Integer_constContext; 

  class  SchemaContext : public antlr4::ParserRuleContext {
  public:
    SchemaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IncludeContext *> include();
    IncludeContext* include(size_t i);
    std::vector<Namespace_declContext *> namespace_decl();
    Namespace_declContext* namespace_decl(size_t i);
    std::vector<Type_declContext *> type_decl();
    Type_declContext* type_decl(size_t i);
    std::vector<Enum_declContext *> enum_decl();
    Enum_declContext* enum_decl(size_t i);
    std::vector<Root_declContext *> root_decl();
    Root_declContext* root_decl(size_t i);
    std::vector<File_extension_declContext *> file_extension_decl();
    File_extension_declContext* file_extension_decl(size_t i);
    std::vector<File_identifier_declContext *> file_identifier_decl();
    File_identifier_declContext* file_identifier_decl(size_t i);
    std::vector<Attribute_declContext *> attribute_decl();
    Attribute_declContext* attribute_decl(size_t i);
    std::vector<Rpc_declContext *> rpc_decl();
    Rpc_declContext* rpc_decl(size_t i);
    std::vector<ObjectContext *> object();
    ObjectContext* object(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SchemaContext* schema();

  class  IncludeContext : public antlr4::ParserRuleContext {
  public:
    IncludeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_CONSTANT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IncludeContext* include();

  class  Namespace_declContext : public antlr4::ParserRuleContext {
  public:
    Namespace_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENT();
    antlr4::tree::TerminalNode* IDENT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Namespace_declContext* namespace_decl();

  class  Attribute_declContext : public antlr4::ParserRuleContext {
  public:
    Attribute_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_CONSTANT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attribute_declContext* attribute_decl();

  class  Type_declContext : public antlr4::ParserRuleContext {
  public:
    Type_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();
    MetadataContext *metadata();
    std::vector<Field_declContext *> field_decl();
    Field_declContext* field_decl(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_declContext* type_decl();

  class  Enum_declContext : public antlr4::ParserRuleContext {
  public:
    Enum_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MetadataContext *metadata();
    Commasep_enumval_declContext *commasep_enumval_decl();
    antlr4::tree::TerminalNode *IDENT();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enum_declContext* enum_decl();

  class  Root_declContext : public antlr4::ParserRuleContext {
  public:
    Root_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Root_declContext* root_decl();

  class  Field_declContext : public antlr4::ParserRuleContext {
  public:
    Field_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();
    TypeContext *type();
    MetadataContext *metadata();
    ScalarContext *scalar();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Field_declContext* field_decl();

  class  Rpc_declContext : public antlr4::ParserRuleContext {
  public:
    Rpc_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();
    std::vector<Rpc_methodContext *> rpc_method();
    Rpc_methodContext* rpc_method(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rpc_declContext* rpc_decl();

  class  Rpc_methodContext : public antlr4::ParserRuleContext {
  public:
    Rpc_methodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENT();
    antlr4::tree::TerminalNode* IDENT(size_t i);
    MetadataContext *metadata();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rpc_methodContext* rpc_method();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *BASE_TYPE_NAME();
    Ns_identContext *ns_ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  Enumval_declContext : public antlr4::ParserRuleContext {
  public:
    Enumval_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ns_identContext *ns_ident();
    Integer_constContext *integer_const();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enumval_declContext* enumval_decl();

  class  Commasep_enumval_declContext : public antlr4::ParserRuleContext {
  public:
    Commasep_enumval_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Enumval_declContext *> enumval_decl();
    Enumval_declContext* enumval_decl(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Commasep_enumval_declContext* commasep_enumval_decl();

  class  Ident_with_opt_single_valueContext : public antlr4::ParserRuleContext {
  public:
    Ident_with_opt_single_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();
    Single_valueContext *single_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ident_with_opt_single_valueContext* ident_with_opt_single_value();

  class  Commasep_ident_with_opt_single_valueContext : public antlr4::ParserRuleContext {
  public:
    Commasep_ident_with_opt_single_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ident_with_opt_single_valueContext *> ident_with_opt_single_value();
    Ident_with_opt_single_valueContext* ident_with_opt_single_value(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Commasep_ident_with_opt_single_valueContext* commasep_ident_with_opt_single_value();

  class  MetadataContext : public antlr4::ParserRuleContext {
  public:
    MetadataContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Commasep_ident_with_opt_single_valueContext *commasep_ident_with_opt_single_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MetadataContext* metadata();

  class  ScalarContext : public antlr4::ParserRuleContext {
  public:
    ScalarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER_CONSTANT();
    antlr4::tree::TerminalNode *HEX_INTEGER_CONSTANT();
    antlr4::tree::TerminalNode *FLOAT_CONSTANT();
    antlr4::tree::TerminalNode *IDENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScalarContext* scalar();

  class  ObjectContext : public antlr4::ParserRuleContext {
  public:
    ObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Commasep_ident_with_valueContext *commasep_ident_with_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectContext* object();

  class  Ident_with_valueContext : public antlr4::ParserRuleContext {
  public:
    Ident_with_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ident_with_valueContext* ident_with_value();

  class  Commasep_ident_with_valueContext : public antlr4::ParserRuleContext {
  public:
    Commasep_ident_with_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ident_with_valueContext *> ident_with_value();
    Ident_with_valueContext* ident_with_value(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Commasep_ident_with_valueContext* commasep_ident_with_value();

  class  Single_valueContext : public antlr4::ParserRuleContext {
  public:
    Single_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ScalarContext *scalar();
    antlr4::tree::TerminalNode *STRING_CONSTANT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Single_valueContext* single_value();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Single_valueContext *single_value();
    ObjectContext *object();
    Commasep_valueContext *commasep_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueContext* value();

  class  Commasep_valueContext : public antlr4::ParserRuleContext {
  public:
    Commasep_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Commasep_valueContext* commasep_value();

  class  File_extension_declContext : public antlr4::ParserRuleContext {
  public:
    File_extension_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_CONSTANT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_extension_declContext* file_extension_decl();

  class  File_identifier_declContext : public antlr4::ParserRuleContext {
  public:
    File_identifier_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_CONSTANT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_identifier_declContext* file_identifier_decl();

  class  Ns_identContext : public antlr4::ParserRuleContext {
  public:
    Ns_identContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENT();
    antlr4::tree::TerminalNode* IDENT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ns_identContext* ns_ident();

  class  Integer_constContext : public antlr4::ParserRuleContext {
  public:
    Integer_constContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER_CONSTANT();
    antlr4::tree::TerminalNode *HEX_INTEGER_CONSTANT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integer_constContext* integer_const();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};
