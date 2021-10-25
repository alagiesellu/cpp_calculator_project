
// Generated from /home/leber/CLionProjects/cpp_calculator_project/calculator.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "calculatorParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by calculatorParser.
 */
class  calculatorVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by calculatorParser.
   */
    virtual antlrcpp::Any visitSession(calculatorParser::SessionContext *context) = 0;

    virtual antlrcpp::Any visitHeader(calculatorParser::HeaderContext *context) = 0;

    virtual antlrcpp::Any visitEquation(calculatorParser::EquationContext *context) = 0;

    virtual antlrcpp::Any visitExpression(calculatorParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMultiplyingExpression(calculatorParser::MultiplyingExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPowExpression(calculatorParser::PowExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSignedAtom(calculatorParser::SignedAtomContext *context) = 0;

    virtual antlrcpp::Any visitAtom(calculatorParser::AtomContext *context) = 0;

    virtual antlrcpp::Any visitVariable(calculatorParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitScientific(calculatorParser::ScientificContext *context) = 0;

    virtual antlrcpp::Any visitParentices(calculatorParser::ParenticesContext *context) = 0;

    virtual antlrcpp::Any visitFunc_(calculatorParser::Func_Context *context) = 0;

    virtual antlrcpp::Any visitFuncname(calculatorParser::FuncnameContext *context) = 0;


};

