
// Generated from /home/leber/CLionProjects/cpp_calculator_project/calculator.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "calculatorParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by calculatorParser.
 */
class  calculatorListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterSession(calculatorParser::SessionContext *ctx) = 0;
  virtual void exitSession(calculatorParser::SessionContext *ctx) = 0;

  virtual void enterHeader(calculatorParser::HeaderContext *ctx) = 0;
  virtual void exitHeader(calculatorParser::HeaderContext *ctx) = 0;

  virtual void enterEquation(calculatorParser::EquationContext *ctx) = 0;
  virtual void exitEquation(calculatorParser::EquationContext *ctx) = 0;

  virtual void enterExpression(calculatorParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(calculatorParser::ExpressionContext *ctx) = 0;

  virtual void enterMultiplyingExpression(calculatorParser::MultiplyingExpressionContext *ctx) = 0;
  virtual void exitMultiplyingExpression(calculatorParser::MultiplyingExpressionContext *ctx) = 0;

  virtual void enterPowExpression(calculatorParser::PowExpressionContext *ctx) = 0;
  virtual void exitPowExpression(calculatorParser::PowExpressionContext *ctx) = 0;

  virtual void enterSignedAtom(calculatorParser::SignedAtomContext *ctx) = 0;
  virtual void exitSignedAtom(calculatorParser::SignedAtomContext *ctx) = 0;

  virtual void enterAtom(calculatorParser::AtomContext *ctx) = 0;
  virtual void exitAtom(calculatorParser::AtomContext *ctx) = 0;

  virtual void enterVariable(calculatorParser::VariableContext *ctx) = 0;
  virtual void exitVariable(calculatorParser::VariableContext *ctx) = 0;

  virtual void enterScientific(calculatorParser::ScientificContext *ctx) = 0;
  virtual void exitScientific(calculatorParser::ScientificContext *ctx) = 0;

  virtual void enterParentices(calculatorParser::ParenticesContext *ctx) = 0;
  virtual void exitParentices(calculatorParser::ParenticesContext *ctx) = 0;

  virtual void enterFunc_(calculatorParser::Func_Context *ctx) = 0;
  virtual void exitFunc_(calculatorParser::Func_Context *ctx) = 0;

  virtual void enterFuncname(calculatorParser::FuncnameContext *ctx) = 0;
  virtual void exitFuncname(calculatorParser::FuncnameContext *ctx) = 0;


};

