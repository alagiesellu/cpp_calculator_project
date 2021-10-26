
// Generated from /home/leber/CLionProjects/cpp_calculator_project/Calculator.g4 by ANTLR 4.9.1


#include "CalculatorListener.h"
#include "CalculatorVisitor.h"

#include "CalculatorParser.h"


using namespace antlrcpp;
using namespace antlr4;

CalculatorParser::CalculatorParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CalculatorParser::~CalculatorParser() {
  delete _interpreter;
}

std::string CalculatorParser::getGrammarFileName() const {
  return "Calculator.g4";
}

const std::vector<std::string>& CalculatorParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& CalculatorParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- SessionContext ------------------------------------------------------------------

CalculatorParser::SessionContext::SessionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CalculatorParser::HeaderContext* CalculatorParser::SessionContext::header() {
  return getRuleContext<CalculatorParser::HeaderContext>(0);
}

CalculatorParser::EquationContext* CalculatorParser::SessionContext::equation() {
  return getRuleContext<CalculatorParser::EquationContext>(0);
}


size_t CalculatorParser::SessionContext::getRuleIndex() const {
  return CalculatorParser::RuleSession;
}

void CalculatorParser::SessionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSession(this);
}

void CalculatorParser::SessionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSession(this);
}


antlrcpp::Any CalculatorParser::SessionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitSession(this);
  else
    return visitor->visitChildren(this);
}

CalculatorParser::SessionContext* CalculatorParser::session() {
  SessionContext *_localctx = _tracker.createInstance<SessionContext>(_ctx, getState());
  enterRule(_localctx, 0, CalculatorParser::RuleSession);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(28);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalculatorParser::HEADER: {
        enterOuterAlt(_localctx, 1);
        setState(26);
        header();
        break;
      }

      case CalculatorParser::COS:
      case CalculatorParser::SIN:
      case CalculatorParser::LPAREN:
      case CalculatorParser::VARIABLE:
      case CalculatorParser::SCIENTIFIC_NUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(27);
        equation();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HeaderContext ------------------------------------------------------------------

CalculatorParser::HeaderContext::HeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CalculatorParser::HeaderContext::HEADER() {
  return getToken(CalculatorParser::HEADER, 0);
}


size_t CalculatorParser::HeaderContext::getRuleIndex() const {
  return CalculatorParser::RuleHeader;
}

void CalculatorParser::HeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHeader(this);
}

void CalculatorParser::HeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHeader(this);
}


antlrcpp::Any CalculatorParser::HeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitHeader(this);
  else
    return visitor->visitChildren(this);
}

CalculatorParser::HeaderContext* CalculatorParser::header() {
  HeaderContext *_localctx = _tracker.createInstance<HeaderContext>(_ctx, getState());
  enterRule(_localctx, 2, CalculatorParser::RuleHeader);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(30);
    match(CalculatorParser::HEADER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EquationContext ------------------------------------------------------------------

CalculatorParser::EquationContext::EquationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CalculatorParser::ExpressionContext* CalculatorParser::EquationContext::expression() {
  return getRuleContext<CalculatorParser::ExpressionContext>(0);
}

CalculatorParser::VariableContext* CalculatorParser::EquationContext::variable() {
  return getRuleContext<CalculatorParser::VariableContext>(0);
}

tree::TerminalNode* CalculatorParser::EquationContext::EQ() {
  return getToken(CalculatorParser::EQ, 0);
}


size_t CalculatorParser::EquationContext::getRuleIndex() const {
  return CalculatorParser::RuleEquation;
}

void CalculatorParser::EquationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEquation(this);
}

void CalculatorParser::EquationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEquation(this);
}


antlrcpp::Any CalculatorParser::EquationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitEquation(this);
  else
    return visitor->visitChildren(this);
}

CalculatorParser::EquationContext* CalculatorParser::equation() {
  EquationContext *_localctx = _tracker.createInstance<EquationContext>(_ctx, getState());
  enterRule(_localctx, 4, CalculatorParser::RuleEquation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(35);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CalculatorParser::VARIABLE) {
      setState(32);
      variable();
      setState(33);
      match(CalculatorParser::EQ);
    }
    setState(37);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

CalculatorParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CalculatorParser::MultiplyingExpressionContext *> CalculatorParser::ExpressionContext::multiplyingExpression() {
  return getRuleContexts<CalculatorParser::MultiplyingExpressionContext>();
}

CalculatorParser::MultiplyingExpressionContext* CalculatorParser::ExpressionContext::multiplyingExpression(size_t i) {
  return getRuleContext<CalculatorParser::MultiplyingExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CalculatorParser::ExpressionContext::PLUS() {
  return getTokens(CalculatorParser::PLUS);
}

tree::TerminalNode* CalculatorParser::ExpressionContext::PLUS(size_t i) {
  return getToken(CalculatorParser::PLUS, i);
}

std::vector<tree::TerminalNode *> CalculatorParser::ExpressionContext::MINUS() {
  return getTokens(CalculatorParser::MINUS);
}

tree::TerminalNode* CalculatorParser::ExpressionContext::MINUS(size_t i) {
  return getToken(CalculatorParser::MINUS, i);
}


size_t CalculatorParser::ExpressionContext::getRuleIndex() const {
  return CalculatorParser::RuleExpression;
}

void CalculatorParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void CalculatorParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any CalculatorParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

CalculatorParser::ExpressionContext* CalculatorParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 6, CalculatorParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(39);
    multiplyingExpression();
    setState(44);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CalculatorParser::PLUS

    || _la == CalculatorParser::MINUS) {
      setState(40);
      _la = _input->LA(1);
      if (!(_la == CalculatorParser::PLUS

      || _la == CalculatorParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(41);
      multiplyingExpression();
      setState(46);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplyingExpressionContext ------------------------------------------------------------------

CalculatorParser::MultiplyingExpressionContext::MultiplyingExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CalculatorParser::PowExpressionContext *> CalculatorParser::MultiplyingExpressionContext::powExpression() {
  return getRuleContexts<CalculatorParser::PowExpressionContext>();
}

CalculatorParser::PowExpressionContext* CalculatorParser::MultiplyingExpressionContext::powExpression(size_t i) {
  return getRuleContext<CalculatorParser::PowExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CalculatorParser::MultiplyingExpressionContext::TIMES() {
  return getTokens(CalculatorParser::TIMES);
}

tree::TerminalNode* CalculatorParser::MultiplyingExpressionContext::TIMES(size_t i) {
  return getToken(CalculatorParser::TIMES, i);
}

std::vector<tree::TerminalNode *> CalculatorParser::MultiplyingExpressionContext::DIV() {
  return getTokens(CalculatorParser::DIV);
}

tree::TerminalNode* CalculatorParser::MultiplyingExpressionContext::DIV(size_t i) {
  return getToken(CalculatorParser::DIV, i);
}


size_t CalculatorParser::MultiplyingExpressionContext::getRuleIndex() const {
  return CalculatorParser::RuleMultiplyingExpression;
}

void CalculatorParser::MultiplyingExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplyingExpression(this);
}

void CalculatorParser::MultiplyingExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplyingExpression(this);
}


antlrcpp::Any CalculatorParser::MultiplyingExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitMultiplyingExpression(this);
  else
    return visitor->visitChildren(this);
}

CalculatorParser::MultiplyingExpressionContext* CalculatorParser::multiplyingExpression() {
  MultiplyingExpressionContext *_localctx = _tracker.createInstance<MultiplyingExpressionContext>(_ctx, getState());
  enterRule(_localctx, 8, CalculatorParser::RuleMultiplyingExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(47);
    powExpression();
    setState(52);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CalculatorParser::TIMES

    || _la == CalculatorParser::DIV) {
      setState(48);
      _la = _input->LA(1);
      if (!(_la == CalculatorParser::TIMES

      || _la == CalculatorParser::DIV)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(49);
      powExpression();
      setState(54);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PowExpressionContext ------------------------------------------------------------------

CalculatorParser::PowExpressionContext::PowExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CalculatorParser::SignedAtomContext *> CalculatorParser::PowExpressionContext::signedAtom() {
  return getRuleContexts<CalculatorParser::SignedAtomContext>();
}

CalculatorParser::SignedAtomContext* CalculatorParser::PowExpressionContext::signedAtom(size_t i) {
  return getRuleContext<CalculatorParser::SignedAtomContext>(i);
}

std::vector<tree::TerminalNode *> CalculatorParser::PowExpressionContext::POW() {
  return getTokens(CalculatorParser::POW);
}

tree::TerminalNode* CalculatorParser::PowExpressionContext::POW(size_t i) {
  return getToken(CalculatorParser::POW, i);
}


size_t CalculatorParser::PowExpressionContext::getRuleIndex() const {
  return CalculatorParser::RulePowExpression;
}

void CalculatorParser::PowExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowExpression(this);
}

void CalculatorParser::PowExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowExpression(this);
}


antlrcpp::Any CalculatorParser::PowExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitPowExpression(this);
  else
    return visitor->visitChildren(this);
}

CalculatorParser::PowExpressionContext* CalculatorParser::powExpression() {
  PowExpressionContext *_localctx = _tracker.createInstance<PowExpressionContext>(_ctx, getState());
  enterRule(_localctx, 10, CalculatorParser::RulePowExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(55);
    signedAtom();
    setState(60);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CalculatorParser::POW) {
      setState(56);
      match(CalculatorParser::POW);
      setState(57);
      signedAtom();
      setState(62);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignedAtomContext ------------------------------------------------------------------

CalculatorParser::SignedAtomContext::SignedAtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CalculatorParser::Func_Context* CalculatorParser::SignedAtomContext::func_() {
  return getRuleContext<CalculatorParser::Func_Context>(0);
}

CalculatorParser::AtomContext* CalculatorParser::SignedAtomContext::atom() {
  return getRuleContext<CalculatorParser::AtomContext>(0);
}


size_t CalculatorParser::SignedAtomContext::getRuleIndex() const {
  return CalculatorParser::RuleSignedAtom;
}

void CalculatorParser::SignedAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSignedAtom(this);
}

void CalculatorParser::SignedAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSignedAtom(this);
}


antlrcpp::Any CalculatorParser::SignedAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitSignedAtom(this);
  else
    return visitor->visitChildren(this);
}

CalculatorParser::SignedAtomContext* CalculatorParser::signedAtom() {
  SignedAtomContext *_localctx = _tracker.createInstance<SignedAtomContext>(_ctx, getState());
  enterRule(_localctx, 12, CalculatorParser::RuleSignedAtom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(65);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalculatorParser::COS:
      case CalculatorParser::SIN: {
        enterOuterAlt(_localctx, 1);
        setState(63);
        func_();
        break;
      }

      case CalculatorParser::LPAREN:
      case CalculatorParser::SCIENTIFIC_NUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(64);
        atom();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

CalculatorParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CalculatorParser::ScientificContext* CalculatorParser::AtomContext::scientific() {
  return getRuleContext<CalculatorParser::ScientificContext>(0);
}

CalculatorParser::ParenticesContext* CalculatorParser::AtomContext::parentices() {
  return getRuleContext<CalculatorParser::ParenticesContext>(0);
}


size_t CalculatorParser::AtomContext::getRuleIndex() const {
  return CalculatorParser::RuleAtom;
}

void CalculatorParser::AtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom(this);
}

void CalculatorParser::AtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom(this);
}


antlrcpp::Any CalculatorParser::AtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitAtom(this);
  else
    return visitor->visitChildren(this);
}

CalculatorParser::AtomContext* CalculatorParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 14, CalculatorParser::RuleAtom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(69);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalculatorParser::SCIENTIFIC_NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(67);
        scientific();
        break;
      }

      case CalculatorParser::LPAREN: {
        enterOuterAlt(_localctx, 2);
        setState(68);
        parentices();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

CalculatorParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CalculatorParser::VariableContext::VARIABLE() {
  return getToken(CalculatorParser::VARIABLE, 0);
}


size_t CalculatorParser::VariableContext::getRuleIndex() const {
  return CalculatorParser::RuleVariable;
}

void CalculatorParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}

void CalculatorParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}


antlrcpp::Any CalculatorParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

CalculatorParser::VariableContext* CalculatorParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 16, CalculatorParser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    match(CalculatorParser::VARIABLE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScientificContext ------------------------------------------------------------------

CalculatorParser::ScientificContext::ScientificContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CalculatorParser::ScientificContext::SCIENTIFIC_NUMBER() {
  return getToken(CalculatorParser::SCIENTIFIC_NUMBER, 0);
}


size_t CalculatorParser::ScientificContext::getRuleIndex() const {
  return CalculatorParser::RuleScientific;
}

void CalculatorParser::ScientificContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScientific(this);
}

void CalculatorParser::ScientificContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScientific(this);
}


antlrcpp::Any CalculatorParser::ScientificContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitScientific(this);
  else
    return visitor->visitChildren(this);
}

CalculatorParser::ScientificContext* CalculatorParser::scientific() {
  ScientificContext *_localctx = _tracker.createInstance<ScientificContext>(_ctx, getState());
  enterRule(_localctx, 18, CalculatorParser::RuleScientific);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    match(CalculatorParser::SCIENTIFIC_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParenticesContext ------------------------------------------------------------------

CalculatorParser::ParenticesContext::ParenticesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CalculatorParser::ParenticesContext::LPAREN() {
  return getToken(CalculatorParser::LPAREN, 0);
}

CalculatorParser::ExpressionContext* CalculatorParser::ParenticesContext::expression() {
  return getRuleContext<CalculatorParser::ExpressionContext>(0);
}

tree::TerminalNode* CalculatorParser::ParenticesContext::RPAREN() {
  return getToken(CalculatorParser::RPAREN, 0);
}


size_t CalculatorParser::ParenticesContext::getRuleIndex() const {
  return CalculatorParser::RuleParentices;
}

void CalculatorParser::ParenticesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParentices(this);
}

void CalculatorParser::ParenticesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParentices(this);
}


antlrcpp::Any CalculatorParser::ParenticesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitParentices(this);
  else
    return visitor->visitChildren(this);
}

CalculatorParser::ParenticesContext* CalculatorParser::parentices() {
  ParenticesContext *_localctx = _tracker.createInstance<ParenticesContext>(_ctx, getState());
  enterRule(_localctx, 20, CalculatorParser::RuleParentices);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    match(CalculatorParser::LPAREN);
    setState(76);
    expression();
    setState(77);
    match(CalculatorParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_Context ------------------------------------------------------------------

CalculatorParser::Func_Context::Func_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CalculatorParser::FuncnameContext* CalculatorParser::Func_Context::funcname() {
  return getRuleContext<CalculatorParser::FuncnameContext>(0);
}

CalculatorParser::ParenticesContext* CalculatorParser::Func_Context::parentices() {
  return getRuleContext<CalculatorParser::ParenticesContext>(0);
}


size_t CalculatorParser::Func_Context::getRuleIndex() const {
  return CalculatorParser::RuleFunc_;
}

void CalculatorParser::Func_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_(this);
}

void CalculatorParser::Func_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_(this);
}


antlrcpp::Any CalculatorParser::Func_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitFunc_(this);
  else
    return visitor->visitChildren(this);
}

CalculatorParser::Func_Context* CalculatorParser::func_() {
  Func_Context *_localctx = _tracker.createInstance<Func_Context>(_ctx, getState());
  enterRule(_localctx, 22, CalculatorParser::RuleFunc_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    funcname();
    setState(80);
    parentices();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncnameContext ------------------------------------------------------------------

CalculatorParser::FuncnameContext::FuncnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CalculatorParser::FuncnameContext::COS() {
  return getToken(CalculatorParser::COS, 0);
}

tree::TerminalNode* CalculatorParser::FuncnameContext::SIN() {
  return getToken(CalculatorParser::SIN, 0);
}


size_t CalculatorParser::FuncnameContext::getRuleIndex() const {
  return CalculatorParser::RuleFuncname;
}

void CalculatorParser::FuncnameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncname(this);
}

void CalculatorParser::FuncnameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncname(this);
}


antlrcpp::Any CalculatorParser::FuncnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitFuncname(this);
  else
    return visitor->visitChildren(this);
}

CalculatorParser::FuncnameContext* CalculatorParser::funcname() {
  FuncnameContext *_localctx = _tracker.createInstance<FuncnameContext>(_ctx, getState());
  enterRule(_localctx, 24, CalculatorParser::RuleFuncname);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    _la = _input->LA(1);
    if (!(_la == CalculatorParser::COS

    || _la == CalculatorParser::SIN)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> CalculatorParser::_decisionToDFA;
atn::PredictionContextCache CalculatorParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CalculatorParser::_atn;
std::vector<uint16_t> CalculatorParser::_serializedATN;

std::vector<std::string> CalculatorParser::_ruleNames = {
  "session", "header", "equation", "expression", "multiplyingExpression", 
  "powExpression", "signedAtom", "atom", "variable", "scientific", "parentices", 
  "func_", "funcname"
};

std::vector<std::string> CalculatorParser::_literalNames = {
  "", "'----'", "'='", "'cos'", "'sin'", "'('", "')'", "'+'", "'-'", "'*'", 
  "'/'", "'^'"
};

std::vector<std::string> CalculatorParser::_symbolicNames = {
  "", "HEADER", "EQ", "COS", "SIN", "LPAREN", "RPAREN", "PLUS", "MINUS", 
  "TIMES", "DIV", "POW", "VARIABLE", "SCIENTIFIC_NUMBER", "WS"
};

dfa::Vocabulary CalculatorParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CalculatorParser::_tokenNames;

CalculatorParser::Initializer::Initializer() {
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

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x10, 0x57, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x3, 
    0x2, 0x3, 0x2, 0x5, 0x2, 0x1f, 0xa, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x26, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x2d, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 
    0x30, 0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x35, 0xa, 0x6, 
    0xc, 0x6, 0xe, 0x6, 0x38, 0xb, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 
    0x7, 0x3d, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x40, 0xb, 0x7, 0x3, 0x8, 0x3, 
    0x8, 0x5, 0x8, 0x44, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x48, 0xa, 
    0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x2, 0x2, 0xf, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
    0x16, 0x18, 0x1a, 0x2, 0x5, 0x3, 0x2, 0x9, 0xa, 0x3, 0x2, 0xb, 0xc, 
    0x3, 0x2, 0x5, 0x6, 0x2, 0x50, 0x2, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x4, 0x20, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x25, 0x3, 0x2, 0x2, 0x2, 0x8, 0x29, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0x31, 0x3, 0x2, 0x2, 0x2, 0xc, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x43, 0x3, 0x2, 0x2, 0x2, 0x10, 0x47, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x49, 0x3, 0x2, 0x2, 0x2, 0x14, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x16, 0x4d, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0x51, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x54, 0x3, 
    0x2, 0x2, 0x2, 0x1c, 0x1f, 0x5, 0x4, 0x3, 0x2, 0x1d, 0x1f, 0x5, 0x6, 
    0x4, 0x2, 0x1e, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0x1f, 0x3, 0x3, 0x2, 0x2, 0x2, 0x20, 0x21, 0x7, 0x3, 0x2, 0x2, 
    0x21, 0x5, 0x3, 0x2, 0x2, 0x2, 0x22, 0x23, 0x5, 0x12, 0xa, 0x2, 0x23, 
    0x24, 0x7, 0x4, 0x2, 0x2, 0x24, 0x26, 0x3, 0x2, 0x2, 0x2, 0x25, 0x22, 
    0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x3, 0x2, 0x2, 0x2, 0x26, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0x27, 0x28, 0x5, 0x8, 0x5, 0x2, 0x28, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x29, 0x2e, 0x5, 0xa, 0x6, 0x2, 0x2a, 0x2b, 0x9, 0x2, 0x2, 
    0x2, 0x2b, 0x2d, 0x5, 0xa, 0x6, 0x2, 0x2c, 0x2a, 0x3, 0x2, 0x2, 0x2, 
    0x2d, 0x30, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x2f, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x9, 0x3, 0x2, 0x2, 0x2, 0x30, 0x2e, 
    0x3, 0x2, 0x2, 0x2, 0x31, 0x36, 0x5, 0xc, 0x7, 0x2, 0x32, 0x33, 0x9, 
    0x3, 0x2, 0x2, 0x33, 0x35, 0x5, 0xc, 0x7, 0x2, 0x34, 0x32, 0x3, 0x2, 
    0x2, 0x2, 0x35, 0x38, 0x3, 0x2, 0x2, 0x2, 0x36, 0x34, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x37, 0x3, 0x2, 0x2, 0x2, 0x37, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x36, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3e, 0x5, 0xe, 0x8, 0x2, 0x3a, 
    0x3b, 0x7, 0xd, 0x2, 0x2, 0x3b, 0x3d, 0x5, 0xe, 0x8, 0x2, 0x3c, 0x3a, 
    0x3, 0x2, 0x2, 0x2, 0x3d, 0x40, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3c, 0x3, 
    0x2, 0x2, 0x2, 0x3e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3f, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x40, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x41, 0x44, 0x5, 0x18, 0xd, 
    0x2, 0x42, 0x44, 0x5, 0x10, 0x9, 0x2, 0x43, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x43, 0x42, 0x3, 0x2, 0x2, 0x2, 0x44, 0xf, 0x3, 0x2, 0x2, 0x2, 0x45, 
    0x48, 0x5, 0x14, 0xb, 0x2, 0x46, 0x48, 0x5, 0x16, 0xc, 0x2, 0x47, 0x45, 
    0x3, 0x2, 0x2, 0x2, 0x47, 0x46, 0x3, 0x2, 0x2, 0x2, 0x48, 0x11, 0x3, 
    0x2, 0x2, 0x2, 0x49, 0x4a, 0x7, 0xe, 0x2, 0x2, 0x4a, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x4b, 0x4c, 0x7, 0xf, 0x2, 0x2, 0x4c, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x4d, 0x4e, 0x7, 0x7, 0x2, 0x2, 0x4e, 0x4f, 0x5, 0x8, 0x5, 0x2, 
    0x4f, 0x50, 0x7, 0x8, 0x2, 0x2, 0x50, 0x17, 0x3, 0x2, 0x2, 0x2, 0x51, 
    0x52, 0x5, 0x1a, 0xe, 0x2, 0x52, 0x53, 0x5, 0x16, 0xc, 0x2, 0x53, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x9, 0x4, 0x2, 0x2, 0x55, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0x9, 0x1e, 0x25, 0x2e, 0x36, 0x3e, 0x43, 0x47, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CalculatorParser::Initializer CalculatorParser::_init;
