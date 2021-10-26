
// Generated from /home/leber/CLionProjects/cpp_calculator_project/Calculator.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "CalculatorParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CalculatorParser.
 */
class  CalculatorVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CalculatorParser.
   */
    virtual antlrcpp::Any visitSession(CalculatorParser::SessionContext *context) = 0;

    virtual antlrcpp::Any visitHeader(CalculatorParser::HeaderContext *context) = 0;

    virtual antlrcpp::Any visitEquation(CalculatorParser::EquationContext *context) = 0;

    virtual antlrcpp::Any visitExpression(CalculatorParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMultiplyingExpression(CalculatorParser::MultiplyingExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPowExpression(CalculatorParser::PowExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSignedAtom(CalculatorParser::SignedAtomContext *context) = 0;

    virtual antlrcpp::Any visitAtom(CalculatorParser::AtomContext *context) = 0;

    virtual antlrcpp::Any visitVariable(CalculatorParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitScientific(CalculatorParser::ScientificContext *context) = 0;

    virtual antlrcpp::Any visitParentices(CalculatorParser::ParenticesContext *context) = 0;

    virtual antlrcpp::Any visitFunc_(CalculatorParser::Func_Context *context) = 0;

    virtual antlrcpp::Any visitFuncname(CalculatorParser::FuncnameContext *context) = 0;


};

