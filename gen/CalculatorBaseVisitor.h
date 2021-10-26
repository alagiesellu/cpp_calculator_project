
// Generated from /home/leber/CLionProjects/cpp_calculator_project/Calculator.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "CalculatorVisitor.h"


/**
 * This class provides an empty implementation of CalculatorVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CalculatorBaseVisitor : public CalculatorVisitor {
public:

  virtual antlrcpp::Any visitSession(CalculatorParser::SessionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHeader(CalculatorParser::HeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEquation(CalculatorParser::EquationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(CalculatorParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiplyingExpression(CalculatorParser::MultiplyingExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPowExpression(CalculatorParser::PowExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignedAtom(CalculatorParser::SignedAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtom(CalculatorParser::AtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(CalculatorParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScientific(CalculatorParser::ScientificContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParentices(CalculatorParser::ParenticesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_(CalculatorParser::Func_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncname(CalculatorParser::FuncnameContext *ctx) override {
    return visitChildren(ctx);
  }


};

