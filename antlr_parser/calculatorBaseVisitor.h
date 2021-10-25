
// Generated from /home/leber/CLionProjects/cpp_calculator_project/calculator.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "calculatorVisitor.h"


/**
 * This class provides an empty implementation of calculatorVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  calculatorBaseVisitor : public calculatorVisitor {
public:

  virtual antlrcpp::Any visitSession(calculatorParser::SessionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHeader(calculatorParser::HeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEquation(calculatorParser::EquationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(calculatorParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiplyingExpression(calculatorParser::MultiplyingExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPowExpression(calculatorParser::PowExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignedAtom(calculatorParser::SignedAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtom(calculatorParser::AtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(calculatorParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScientific(calculatorParser::ScientificContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParentices(calculatorParser::ParenticesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_(calculatorParser::Func_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncname(calculatorParser::FuncnameContext *ctx) override {
    return visitChildren(ctx);
  }


};

