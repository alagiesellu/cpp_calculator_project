
// Generated from /home/leber/CLionProjects/cpp_calculator_project/Calculator.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "CalculatorParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CalculatorParser.
 */
class  CalculatorListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterSession(CalculatorParser::SessionContext *ctx) = 0;
  virtual void exitSession(CalculatorParser::SessionContext *ctx) = 0;

  virtual void enterHeader(CalculatorParser::HeaderContext *ctx) = 0;
  virtual void exitHeader(CalculatorParser::HeaderContext *ctx) = 0;

  virtual void enterEquation(CalculatorParser::EquationContext *ctx) = 0;
  virtual void exitEquation(CalculatorParser::EquationContext *ctx) = 0;

  virtual void enterExpression(CalculatorParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(CalculatorParser::ExpressionContext *ctx) = 0;

  virtual void enterMultiplyingExpression(CalculatorParser::MultiplyingExpressionContext *ctx) = 0;
  virtual void exitMultiplyingExpression(CalculatorParser::MultiplyingExpressionContext *ctx) = 0;

  virtual void enterPowExpression(CalculatorParser::PowExpressionContext *ctx) = 0;
  virtual void exitPowExpression(CalculatorParser::PowExpressionContext *ctx) = 0;

  virtual void enterSignedAtom(CalculatorParser::SignedAtomContext *ctx) = 0;
  virtual void exitSignedAtom(CalculatorParser::SignedAtomContext *ctx) = 0;

  virtual void enterAtom(CalculatorParser::AtomContext *ctx) = 0;
  virtual void exitAtom(CalculatorParser::AtomContext *ctx) = 0;

  virtual void enterVariable(CalculatorParser::VariableContext *ctx) = 0;
  virtual void exitVariable(CalculatorParser::VariableContext *ctx) = 0;

  virtual void enterScientific(CalculatorParser::ScientificContext *ctx) = 0;
  virtual void exitScientific(CalculatorParser::ScientificContext *ctx) = 0;

  virtual void enterParentices(CalculatorParser::ParenticesContext *ctx) = 0;
  virtual void exitParentices(CalculatorParser::ParenticesContext *ctx) = 0;

  virtual void enterFunc_(CalculatorParser::Func_Context *ctx) = 0;
  virtual void exitFunc_(CalculatorParser::Func_Context *ctx) = 0;

  virtual void enterFuncname(CalculatorParser::FuncnameContext *ctx) = 0;
  virtual void exitFuncname(CalculatorParser::FuncnameContext *ctx) = 0;


};

