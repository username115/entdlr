
// Generated from JavadocLexer.g4 by ANTLR 4.9.2


#include "JavadocLexer.h"


using namespace antlr4;


JavadocLexer::JavadocLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

JavadocLexer::~JavadocLexer() {
  delete _interpreter;
}

std::string JavadocLexer::getGrammarFileName() const {
  return "JavadocLexer.g4";
}

const std::vector<std::string>& JavadocLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& JavadocLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& JavadocLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& JavadocLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& JavadocLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> JavadocLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& JavadocLexer::getATN() const {
  return _atn;
}


bool JavadocLexer::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return NEWLINESempred(dynamic_cast<antlr4::RuleContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}


bool JavadocLexer::NEWLINESempred(antlr4::RuleContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return _input->LA(1) != '/';
    case 1: return _input->LA(1) != '/';
    case 2: return _input->LA(1) != '/';

  default:
    break;
  }
  return true;
}


// Static vars and initialization.
std::vector<dfa::DFA> JavadocLexer::_decisionToDFA;
atn::PredictionContextCache JavadocLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN JavadocLexer::_atn;
std::vector<uint16_t> JavadocLexer::_serializedATN;

std::vector<std::string> JavadocLexer::_ruleNames = {
  "NAME", "NEWLINE", "SPACE", "TEXT_CONTENT", "AT", "STAR", "SLASH", "JAVADOC_START", 
  "JAVADOC_END", "INLINE_TAG_START", "BRACE_OPEN", "BRACE_CLOSE"
};

std::vector<std::string> JavadocLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> JavadocLexer::_modeNames = {
  "DEFAULT_MODE"
};

std::vector<std::string> JavadocLexer::_literalNames = {
  "", "", "", "", "", "'@'", "'*'", "'/'", "", "", "'{@'", "'{'", "'}'"
};

std::vector<std::string> JavadocLexer::_symbolicNames = {
  "", "NAME", "NEWLINE", "SPACE", "TEXT_CONTENT", "AT", "STAR", "SLASH", 
  "JAVADOC_START", "JAVADOC_END", "INLINE_TAG_START", "BRACE_OPEN", "BRACE_CLOSE"
};

dfa::Vocabulary JavadocLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> JavadocLexer::_tokenNames;

JavadocLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x2, 0xe, 0x78, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 
       0x4, 0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 
       0x7, 0x9, 0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 
       0x9, 0xa, 0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 
       0xd, 0x3, 0x2, 0x6, 0x2, 0x1d, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x1e, 
       0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x23, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x6, 0x3, 0x28, 0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0x29, 0x5, 
       0x3, 0x2c, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 
       0x3, 0x32, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x6, 0x3, 0x37, 
       0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0x38, 0x5, 0x3, 0x3b, 0xa, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x5, 0x3, 0x3f, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x6, 0x3, 0x44, 0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0x45, 0x5, 0x3, 
       0x48, 0xa, 0x3, 0x5, 0x3, 0x4a, 0xa, 0x3, 0x3, 0x4, 0x6, 0x4, 0x4d, 
       0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0x4e, 0x3, 0x5, 0x6, 0x5, 0x52, 0xa, 
       0x5, 0xd, 0x5, 0xe, 0x5, 0x53, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 
       0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
       0x3, 0x9, 0x7, 0x9, 0x61, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x64, 0xb, 
       0x9, 0x3, 0xa, 0x5, 0xa, 0x67, 0xa, 0xa, 0x3, 0xa, 0x7, 0xa, 0x6a, 
       0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x6d, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 
       0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
       0xd, 0x3, 0xd, 0x2, 0x2, 0xe, 0x3, 0x3, 0x5, 0x4, 0x7, 0x5, 0x9, 
       0x6, 0xb, 0x7, 0xd, 0x8, 0xf, 0x9, 0x11, 0xa, 0x13, 0xb, 0x15, 0xc, 
       0x17, 0xd, 0x19, 0xe, 0x3, 0x2, 0x5, 0x4, 0x2, 0x43, 0x5c, 0x63, 
       0x7c, 0x4, 0x2, 0xb, 0xb, 0x22, 0x22, 0xa, 0x2, 0xb, 0xc, 0xf, 0xf, 
       0x22, 0x22, 0x2c, 0x2c, 0x31, 0x31, 0x42, 0x5c, 0x63, 0x7d, 0x7f, 
       0x7f, 0x2, 0x88, 0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5, 0x3, 0x2, 
       0x2, 0x2, 0x2, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2, 0x9, 0x3, 0x2, 0x2, 
       0x2, 0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 0x2, 0xd, 0x3, 0x2, 0x2, 0x2, 
       0x2, 0xf, 0x3, 0x2, 0x2, 0x2, 0x2, 0x11, 0x3, 0x2, 0x2, 0x2, 0x2, 
       0x13, 0x3, 0x2, 0x2, 0x2, 0x2, 0x15, 0x3, 0x2, 0x2, 0x2, 0x2, 0x17, 
       0x3, 0x2, 0x2, 0x2, 0x2, 0x19, 0x3, 0x2, 0x2, 0x2, 0x3, 0x1c, 0x3, 
       0x2, 0x2, 0x2, 0x5, 0x49, 0x3, 0x2, 0x2, 0x2, 0x7, 0x4c, 0x3, 0x2, 
       0x2, 0x2, 0x9, 0x51, 0x3, 0x2, 0x2, 0x2, 0xb, 0x55, 0x3, 0x2, 0x2, 
       0x2, 0xd, 0x57, 0x3, 0x2, 0x2, 0x2, 0xf, 0x59, 0x3, 0x2, 0x2, 0x2, 
       0x11, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x13, 0x66, 0x3, 0x2, 0x2, 0x2, 0x15, 
       0x71, 0x3, 0x2, 0x2, 0x2, 0x17, 0x74, 0x3, 0x2, 0x2, 0x2, 0x19, 0x76, 
       0x3, 0x2, 0x2, 0x2, 0x1b, 0x1d, 0x9, 0x2, 0x2, 0x2, 0x1c, 0x1b, 0x3, 
       0x2, 0x2, 0x2, 0x1d, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1c, 0x3, 0x2, 
       0x2, 0x2, 0x1e, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x4, 0x3, 0x2, 0x2, 
       0x2, 0x20, 0x2b, 0x7, 0xc, 0x2, 0x2, 0x21, 0x23, 0x5, 0x7, 0x4, 0x2, 
       0x22, 0x21, 0x3, 0x2, 0x2, 0x2, 0x22, 0x23, 0x3, 0x2, 0x2, 0x2, 0x23, 
       0x27, 0x3, 0x2, 0x2, 0x2, 0x24, 0x25, 0x5, 0xd, 0x7, 0x2, 0x25, 0x26, 
       0x6, 0x3, 0x2, 0x2, 0x26, 0x28, 0x3, 0x2, 0x2, 0x2, 0x27, 0x24, 0x3, 
       0x2, 0x2, 0x2, 0x28, 0x29, 0x3, 0x2, 0x2, 0x2, 0x29, 0x27, 0x3, 0x2, 
       0x2, 0x2, 0x29, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2c, 0x3, 0x2, 0x2, 
       0x2, 0x2b, 0x22, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2c, 0x3, 0x2, 0x2, 0x2, 
       0x2c, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x7, 0xf, 0x2, 0x2, 0x2e, 
       0x2f, 0x7, 0xc, 0x2, 0x2, 0x2f, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x30, 0x32, 
       0x5, 0x7, 0x4, 0x2, 0x31, 0x30, 0x3, 0x2, 0x2, 0x2, 0x31, 0x32, 0x3, 
       0x2, 0x2, 0x2, 0x32, 0x36, 0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 0x5, 0xd, 
       0x7, 0x2, 0x34, 0x35, 0x6, 0x3, 0x3, 0x2, 0x35, 0x37, 0x3, 0x2, 0x2, 
       0x2, 0x36, 0x33, 0x3, 0x2, 0x2, 0x2, 0x37, 0x38, 0x3, 0x2, 0x2, 0x2, 
       0x38, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x3, 0x2, 0x2, 0x2, 0x39, 
       0x3b, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x31, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 
       0x3, 0x2, 0x2, 0x2, 0x3b, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x47, 0x7, 
       0xf, 0x2, 0x2, 0x3d, 0x3f, 0x5, 0x7, 0x4, 0x2, 0x3e, 0x3d, 0x3, 0x2, 
       0x2, 0x2, 0x3e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x43, 0x3, 0x2, 0x2, 
       0x2, 0x40, 0x41, 0x5, 0xd, 0x7, 0x2, 0x41, 0x42, 0x6, 0x3, 0x4, 0x2, 
       0x42, 0x44, 0x3, 0x2, 0x2, 0x2, 0x43, 0x40, 0x3, 0x2, 0x2, 0x2, 0x44, 
       0x45, 0x3, 0x2, 0x2, 0x2, 0x45, 0x43, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 
       0x3, 0x2, 0x2, 0x2, 0x46, 0x48, 0x3, 0x2, 0x2, 0x2, 0x47, 0x3e, 0x3, 
       0x2, 0x2, 0x2, 0x47, 0x48, 0x3, 0x2, 0x2, 0x2, 0x48, 0x4a, 0x3, 0x2, 
       0x2, 0x2, 0x49, 0x20, 0x3, 0x2, 0x2, 0x2, 0x49, 0x2d, 0x3, 0x2, 0x2, 
       0x2, 0x49, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x6, 0x3, 0x2, 0x2, 0x2, 
       0x4b, 0x4d, 0x9, 0x3, 0x2, 0x2, 0x4c, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4d, 
       0x4e, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 
       0x3, 0x2, 0x2, 0x2, 0x4f, 0x8, 0x3, 0x2, 0x2, 0x2, 0x50, 0x52, 0xa, 
       0x4, 0x2, 0x2, 0x51, 0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x3, 0x2, 
       0x2, 0x2, 0x53, 0x51, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x3, 0x2, 0x2, 
       0x2, 0x54, 0xa, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x7, 0x42, 0x2, 0x2, 
       0x56, 0xc, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0x7, 0x2c, 0x2, 0x2, 0x58, 
       0xe, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x7, 0x31, 0x2, 0x2, 0x5a, 0x10, 
       0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0x31, 0x2, 0x2, 0x5c, 0x5d, 
       0x7, 0x2c, 0x2, 0x2, 0x5d, 0x5e, 0x7, 0x2c, 0x2, 0x2, 0x5e, 0x62, 
       0x3, 0x2, 0x2, 0x2, 0x5f, 0x61, 0x5, 0xd, 0x7, 0x2, 0x60, 0x5f, 0x3, 
       0x2, 0x2, 0x2, 0x61, 0x64, 0x3, 0x2, 0x2, 0x2, 0x62, 0x60, 0x3, 0x2, 
       0x2, 0x2, 0x62, 0x63, 0x3, 0x2, 0x2, 0x2, 0x63, 0x12, 0x3, 0x2, 0x2, 
       0x2, 0x64, 0x62, 0x3, 0x2, 0x2, 0x2, 0x65, 0x67, 0x5, 0x7, 0x4, 0x2, 
       0x66, 0x65, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x3, 0x2, 0x2, 0x2, 0x67, 
       0x6b, 0x3, 0x2, 0x2, 0x2, 0x68, 0x6a, 0x5, 0xd, 0x7, 0x2, 0x69, 0x68, 
       0x3, 0x2, 0x2, 0x2, 0x6a, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x69, 0x3, 
       0x2, 0x2, 0x2, 0x6b, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6e, 0x3, 0x2, 
       0x2, 0x2, 0x6d, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x7, 0x2c, 
       0x2, 0x2, 0x6f, 0x70, 0x7, 0x31, 0x2, 0x2, 0x70, 0x14, 0x3, 0x2, 
       0x2, 0x2, 0x71, 0x72, 0x7, 0x7d, 0x2, 0x2, 0x72, 0x73, 0x7, 0x42, 
       0x2, 0x2, 0x73, 0x16, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x7, 0x7d, 
       0x2, 0x2, 0x75, 0x18, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x7, 0x7f, 
       0x2, 0x2, 0x77, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x13, 0x2, 0x1e, 0x22, 
       0x29, 0x2b, 0x31, 0x38, 0x3a, 0x3e, 0x45, 0x47, 0x49, 0x4e, 0x53, 
       0x62, 0x66, 0x6b, 0x2, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

JavadocLexer::Initializer JavadocLexer::_init;
