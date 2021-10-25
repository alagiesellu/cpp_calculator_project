
// Generated from /home/leber/CLionProjects/cpp_calculator_project/calculator.g4 by ANTLR 4.9.1


#include "calculatorListener.h"
#include "calculatorVisitor.h"

#include "calculatorParser.h"


using namespace antlrcpp;
using namespace antlr4;

calculatorParser::calculatorParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

calculatorParser::~calculatorParser() {
  delete _interpreter;
}

std::string calculatorParser::getGrammarFileName() const {
  return "calculator.g4";
}

const std::vector<std::string>& calculatorParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& calculatorParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- SessionContext ------------------------------------------------------------------

calculatorParser::SessionContext::SessionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

calculatorParser::HeaderContext* calculatorParser::SessionContext::header() {
  return getRuleContext<calculatorParser::HeaderContext>(0);
}

calculatorParser::EquationContext* calculatorParser::SessionContext::equation() {
  return getRuleContext<calculatorParser::EquationContext>(0);
}


size_t calculatorParser::SessionContext::getRuleIndex() const {
  return calculatorParser::RuleSession;
}

void calculatorParser::SessionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSession(this);
}

void calculatorParser::SessionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSession(this);
}


antlrcpp::Any calculatorParser::SessionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitSession(this);
  else
    return visitor->visitChildren(this);
}

calculatorParser::SessionContext* calculatorParser::session() {
  SessionContext *_localctx = _tracker.createInstance<SessionContext>(_ctx, getState());
  enterRule(_localctx, 0, calculatorParser::RuleSession);

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
      case calculatorParser::HEADER: {
        enterOuterAlt(_localctx, 1);
        setState(26);
        header();
        break;
      }

      case calculatorParser::COS:
      case calculatorParser::SIN:
      case calculatorParser::LPAREN:
      case calculatorParser::VARIABLE:
      case calculatorParser::SCIENTIFIC_NUMBER: {
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

calculatorParser::HeaderContext::HeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* calculatorParser::HeaderContext::HEADER() {
  return getToken(calculatorParser::HEADER, 0);
}


size_t calculatorParser::HeaderContext::getRuleIndex() const {
  return calculatorParser::RuleHeader;
}

void calculatorParser::HeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHeader(this);
}

void calculatorParser::HeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHeader(this);
}


antlrcpp::Any calculatorParser::HeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitHeader(this);
  else
    return visitor->visitChildren(this);
}

calculatorParser::HeaderContext* calculatorParser::header() {
  HeaderContext *_localctx = _tracker.createInstance<HeaderContext>(_ctx, getState());
  enterRule(_localctx, 2, calculatorParser::RuleHeader);

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
    match(calculatorParser::HEADER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EquationContext ------------------------------------------------------------------

calculatorParser::EquationContext::EquationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

calculatorParser::ExpressionContext* calculatorParser::EquationContext::expression() {
  return getRuleContext<calculatorParser::ExpressionContext>(0);
}

calculatorParser::VariableContext* calculatorParser::EquationContext::variable() {
  return getRuleContext<calculatorParser::VariableContext>(0);
}

tree::TerminalNode* calculatorParser::EquationContext::EQ() {
  return getToken(calculatorParser::EQ, 0);
}


size_t calculatorParser::EquationContext::getRuleIndex() const {
  return calculatorParser::RuleEquation;
}

void calculatorParser::EquationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEquation(this);
}

void calculatorParser::EquationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEquation(this);
}


antlrcpp::Any calculatorParser::EquationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitEquation(this);
  else
    return visitor->visitChildren(this);
}

calculatorParser::EquationContext* calculatorParser::equation() {
  EquationContext *_localctx = _tracker.createInstance<EquationContext>(_ctx, getState());
  enterRule(_localctx, 4, calculatorParser::RuleEquation);
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
    if (_la == calculatorParser::VARIABLE) {
      setState(32);
      variable();
      setState(33);
      match(calculatorParser::EQ);
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

calculatorParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<calculatorParser::MultiplyingExpressionContext *> calculatorParser::ExpressionContext::multiplyingExpression() {
  return getRuleContexts<calculatorParser::MultiplyingExpressionContext>();
}

calculatorParser::MultiplyingExpressionContext* calculatorParser::ExpressionContext::multiplyingExpression(size_t i) {
  return getRuleContext<calculatorParser::MultiplyingExpressionContext>(i);
}

std::vector<tree::TerminalNode *> calculatorParser::ExpressionContext::PLUS() {
  return getTokens(calculatorParser::PLUS);
}

tree::TerminalNode* calculatorParser::ExpressionContext::PLUS(size_t i) {
  return getToken(calculatorParser::PLUS, i);
}

std::vector<tree::TerminalNode *> calculatorParser::ExpressionContext::MINUS() {
  return getTokens(calculatorParser::MINUS);
}

tree::TerminalNode* calculatorParser::ExpressionContext::MINUS(size_t i) {
  return getToken(calculatorParser::MINUS, i);
}


size_t calculatorParser::ExpressionContext::getRuleIndex() const {
  return calculatorParser::RuleExpression;
}

void calculatorParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void calculatorParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any calculatorParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

calculatorParser::ExpressionContext* calculatorParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 6, calculatorParser::RuleExpression);
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
    while (_la == calculatorParser::PLUS

    || _la == calculatorParser::MINUS) {
      setState(40);
      _la = _input->LA(1);
      if (!(_la == calculatorParser::PLUS

      || _la == calculatorParser::MINUS)) {
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

calculatorParser::MultiplyingExpressionContext::MultiplyingExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<calculatorParser::PowExpressionContext *> calculatorParser::MultiplyingExpressionContext::powExpression() {
  return getRuleContexts<calculatorParser::PowExpressionContext>();
}

calculatorParser::PowExpressionContext* calculatorParser::MultiplyingExpressionContext::powExpression(size_t i) {
  return getRuleContext<calculatorParser::PowExpressionContext>(i);
}

std::vector<tree::TerminalNode *> calculatorParser::MultiplyingExpressionContext::TIMES() {
  return getTokens(calculatorParser::TIMES);
}

tree::TerminalNode* calculatorParser::MultiplyingExpressionContext::TIMES(size_t i) {
  return getToken(calculatorParser::TIMES, i);
}

std::vector<tree::TerminalNode *> calculatorParser::MultiplyingExpressionContext::DIV() {
  return getTokens(calculatorParser::DIV);
}

tree::TerminalNode* calculatorParser::MultiplyingExpressionContext::DIV(size_t i) {
  return getToken(calculatorParser::DIV, i);
}


size_t calculatorParser::MultiplyingExpressionContext::getRuleIndex() const {
  return calculatorParser::RuleMultiplyingExpression;
}

void calculatorParser::MultiplyingExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplyingExpression(this);
}

void calculatorParser::MultiplyingExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplyingExpression(this);
}


antlrcpp::Any calculatorParser::MultiplyingExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitMultiplyingExpression(this);
  else
    return visitor->visitChildren(this);
}

calculatorParser::MultiplyingExpressionContext* calculatorParser::multiplyingExpression() {
  MultiplyingExpressionContext *_localctx = _tracker.createInstance<MultiplyingExpressionContext>(_ctx, getState());
  enterRule(_localctx, 8, calculatorParser::RuleMultiplyingExpression);
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
    while (_la == calculatorParser::TIMES

    || _la == calculatorParser::DIV) {
      setState(48);
      _la = _input->LA(1);
      if (!(_la == calculatorParser::TIMES

      || _la == calculatorParser::DIV)) {
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

calculatorParser::PowExpressionContext::PowExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<calculatorParser::SignedAtomContext *> calculatorParser::PowExpressionContext::signedAtom() {
  return getRuleContexts<calculatorParser::SignedAtomContext>();
}

calculatorParser::SignedAtomContext* calculatorParser::PowExpressionContext::signedAtom(size_t i) {
  return getRuleContext<calculatorParser::SignedAtomContext>(i);
}

std::vector<tree::TerminalNode *> calculatorParser::PowExpressionContext::POW() {
  return getTokens(calculatorParser::POW);
}

tree::TerminalNode* calculatorParser::PowExpressionContext::POW(size_t i) {
  return getToken(calculatorParser::POW, i);
}


size_t calculatorParser::PowExpressionContext::getRuleIndex() const {
  return calculatorParser::RulePowExpression;
}

void calculatorParser::PowExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowExpression(this);
}

void calculatorParser::PowExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowExpression(this);
}


antlrcpp::Any calculatorParser::PowExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitPowExpression(this);
  else
    return visitor->visitChildren(this);
}

calculatorParser::PowExpressionContext* calculatorParser::powExpression() {
  PowExpressionContext *_localctx = _tracker.createInstance<PowExpressionContext>(_ctx, getState());
  enterRule(_localctx, 10, calculatorParser::RulePowExpression);
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
    while (_la == calculatorParser::POW) {
      setState(56);
      match(calculatorParser::POW);
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

calculatorParser::SignedAtomContext::SignedAtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

calculatorParser::Func_Context* calculatorParser::SignedAtomContext::func_() {
  return getRuleContext<calculatorParser::Func_Context>(0);
}

calculatorParser::AtomContext* calculatorParser::SignedAtomContext::atom() {
  return getRuleContext<calculatorParser::AtomContext>(0);
}


size_t calculatorParser::SignedAtomContext::getRuleIndex() const {
  return calculatorParser::RuleSignedAtom;
}

void calculatorParser::SignedAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSignedAtom(this);
}

void calculatorParser::SignedAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSignedAtom(this);
}


antlrcpp::Any calculatorParser::SignedAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitSignedAtom(this);
  else
    return visitor->visitChildren(this);
}

calculatorParser::SignedAtomContext* calculatorParser::signedAtom() {
  SignedAtomContext *_localctx = _tracker.createInstance<SignedAtomContext>(_ctx, getState());
  enterRule(_localctx, 12, calculatorParser::RuleSignedAtom);

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
      case calculatorParser::COS:
      case calculatorParser::SIN: {
        enterOuterAlt(_localctx, 1);
        setState(63);
        func_();
        break;
      }

      case calculatorParser::LPAREN:
      case calculatorParser::SCIENTIFIC_NUMBER: {
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

calculatorParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

calculatorParser::ScientificContext* calculatorParser::AtomContext::scientific() {
  return getRuleContext<calculatorParser::ScientificContext>(0);
}

calculatorParser::ParenticesContext* calculatorParser::AtomContext::parentices() {
  return getRuleContext<calculatorParser::ParenticesContext>(0);
}


size_t calculatorParser::AtomContext::getRuleIndex() const {
  return calculatorParser::RuleAtom;
}

void calculatorParser::AtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom(this);
}

void calculatorParser::AtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom(this);
}


antlrcpp::Any calculatorParser::AtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitAtom(this);
  else
    return visitor->visitChildren(this);
}

calculatorParser::AtomContext* calculatorParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 14, calculatorParser::RuleAtom);

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
      case calculatorParser::SCIENTIFIC_NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(67);
        scientific();
        break;
      }

      case calculatorParser::LPAREN: {
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

calculatorParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* calculatorParser::VariableContext::VARIABLE() {
  return getToken(calculatorParser::VARIABLE, 0);
}


size_t calculatorParser::VariableContext::getRuleIndex() const {
  return calculatorParser::RuleVariable;
}

void calculatorParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}

void calculatorParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}


antlrcpp::Any calculatorParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

calculatorParser::VariableContext* calculatorParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 16, calculatorParser::RuleVariable);

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
    match(calculatorParser::VARIABLE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScientificContext ------------------------------------------------------------------

calculatorParser::ScientificContext::ScientificContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* calculatorParser::ScientificContext::SCIENTIFIC_NUMBER() {
  return getToken(calculatorParser::SCIENTIFIC_NUMBER, 0);
}


size_t calculatorParser::ScientificContext::getRuleIndex() const {
  return calculatorParser::RuleScientific;
}

void calculatorParser::ScientificContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScientific(this);
}

void calculatorParser::ScientificContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScientific(this);
}


antlrcpp::Any calculatorParser::ScientificContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitScientific(this);
  else
    return visitor->visitChildren(this);
}

calculatorParser::ScientificContext* calculatorParser::scientific() {
  ScientificContext *_localctx = _tracker.createInstance<ScientificContext>(_ctx, getState());
  enterRule(_localctx, 18, calculatorParser::RuleScientific);

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
    match(calculatorParser::SCIENTIFIC_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParenticesContext ------------------------------------------------------------------

calculatorParser::ParenticesContext::ParenticesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* calculatorParser::ParenticesContext::LPAREN() {
  return getToken(calculatorParser::LPAREN, 0);
}

calculatorParser::ExpressionContext* calculatorParser::ParenticesContext::expression() {
  return getRuleContext<calculatorParser::ExpressionContext>(0);
}

tree::TerminalNode* calculatorParser::ParenticesContext::RPAREN() {
  return getToken(calculatorParser::RPAREN, 0);
}


size_t calculatorParser::ParenticesContext::getRuleIndex() const {
  return calculatorParser::RuleParentices;
}

void calculatorParser::ParenticesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParentices(this);
}

void calculatorParser::ParenticesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParentices(this);
}


antlrcpp::Any calculatorParser::ParenticesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitParentices(this);
  else
    return visitor->visitChildren(this);
}

calculatorParser::ParenticesContext* calculatorParser::parentices() {
  ParenticesContext *_localctx = _tracker.createInstance<ParenticesContext>(_ctx, getState());
  enterRule(_localctx, 20, calculatorParser::RuleParentices);

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
    match(calculatorParser::LPAREN);
    setState(76);
    expression();
    setState(77);
    match(calculatorParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_Context ------------------------------------------------------------------

calculatorParser::Func_Context::Func_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

calculatorParser::FuncnameContext* calculatorParser::Func_Context::funcname() {
  return getRuleContext<calculatorParser::FuncnameContext>(0);
}

calculatorParser::ParenticesContext* calculatorParser::Func_Context::parentices() {
  return getRuleContext<calculatorParser::ParenticesContext>(0);
}


size_t calculatorParser::Func_Context::getRuleIndex() const {
  return calculatorParser::RuleFunc_;
}

void calculatorParser::Func_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_(this);
}

void calculatorParser::Func_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_(this);
}


antlrcpp::Any calculatorParser::Func_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitFunc_(this);
  else
    return visitor->visitChildren(this);
}

calculatorParser::Func_Context* calculatorParser::func_() {
  Func_Context *_localctx = _tracker.createInstance<Func_Context>(_ctx, getState());
  enterRule(_localctx, 22, calculatorParser::RuleFunc_);

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

calculatorParser::FuncnameContext::FuncnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* calculatorParser::FuncnameContext::COS() {
  return getToken(calculatorParser::COS, 0);
}

tree::TerminalNode* calculatorParser::FuncnameContext::SIN() {
  return getToken(calculatorParser::SIN, 0);
}


size_t calculatorParser::FuncnameContext::getRuleIndex() const {
  return calculatorParser::RuleFuncname;
}

void calculatorParser::FuncnameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncname(this);
}

void calculatorParser::FuncnameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncname(this);
}


antlrcpp::Any calculatorParser::FuncnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitFuncname(this);
  else
    return visitor->visitChildren(this);
}

calculatorParser::FuncnameContext* calculatorParser::funcname() {
  FuncnameContext *_localctx = _tracker.createInstance<FuncnameContext>(_ctx, getState());
  enterRule(_localctx, 24, calculatorParser::RuleFuncname);
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
    if (!(_la == calculatorParser::COS

    || _la == calculatorParser::SIN)) {
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
std::vector<dfa::DFA> calculatorParser::_decisionToDFA;
atn::PredictionContextCache calculatorParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN calculatorParser::_atn;
std::vector<uint16_t> calculatorParser::_serializedATN;

std::vector<std::string> calculatorParser::_ruleNames = {
  "session", "header", "equation", "expression", "multiplyingExpression", 
  "powExpression", "signedAtom", "atom", "variable", "scientific", "parentices", 
  "func_", "funcname"
};

std::vector<std::string> calculatorParser::_literalNames = {
  "", "'----'", "'='", "'cos'", "'sin'", "'('", "')'", "'+'", "'-'", "'*'", 
  "'/'", "'^'"
};

std::vector<std::string> calculatorParser::_symbolicNames = {
  "", "HEADER", "EQ", "COS", "SIN", "LPAREN", "RPAREN", "PLUS", "MINUS", 
  "TIMES", "DIV", "POW", "VARIABLE", "SCIENTIFIC_NUMBER", "WS"
};

dfa::Vocabulary calculatorParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> calculatorParser::_tokenNames;

calculatorParser::Initializer::Initializer() {
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

calculatorParser::Initializer calculatorParser::_init;
