
// Generated from /home/leber/CLionProjects/cpp_calculator_project/Calculator.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "CalculatorListener.h"


/**
 * This class provides an empty implementation of CalculatorListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CalculatorBaseListener : public CalculatorListener {
public:

  virtual void enterSession(CalculatorParser::SessionContext * /*ctx*/) override { }
  virtual void exitSession(CalculatorParser::SessionContext * /*ctx*/) override { }

  virtual void enterHeader(CalculatorParser::HeaderContext * /*ctx*/) override { }
  virtual void exitHeader(CalculatorParser::HeaderContext * /*ctx*/) override { }

  virtual void enterEquation(CalculatorParser::EquationContext * /*ctx*/) override { }
  virtual void exitEquation(CalculatorParser::EquationContext * /*ctx*/) override { }

  virtual void enterExpression(CalculatorParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(CalculatorParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterMultiplyingExpression(CalculatorParser::MultiplyingExpressionContext * /*ctx*/) override { }
  virtual void exitMultiplyingExpression(CalculatorParser::MultiplyingExpressionContext * /*ctx*/) override { }

  virtual void enterPowExpression(CalculatorParser::PowExpressionContext * /*ctx*/) override { }
  virtual void exitPowExpression(CalculatorParser::PowExpressionContext * /*ctx*/) override { }

  virtual void enterSignedAtom(CalculatorParser::SignedAtomContext * /*ctx*/) override { }
  virtual void exitSignedAtom(CalculatorParser::SignedAtomContext * /*ctx*/) override { }

  virtual void enterAtom(CalculatorParser::AtomContext * /*ctx*/) override { }
  virtual void exitAtom(CalculatorParser::AtomContext * /*ctx*/) override { }

  virtual void enterVariable(CalculatorParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(CalculatorParser::VariableContext * /*ctx*/) override { }

  virtual void enterScientific(CalculatorParser::ScientificContext * /*ctx*/) override { }
  virtual void exitScientific(CalculatorParser::ScientificContext * /*ctx*/) override { }

  virtual void enterParentices(CalculatorParser::ParenticesContext * /*ctx*/) override { }
  virtual void exitParentices(CalculatorParser::ParenticesContext * /*ctx*/) override { }

  virtual void enterFunc_(CalculatorParser::Func_Context * /*ctx*/) override { }
  virtual void exitFunc_(CalculatorParser::Func_Context * /*ctx*/) override { }

  virtual void enterFuncname(CalculatorParser::FuncnameContext * /*ctx*/) override { }
  virtual void exitFuncname(CalculatorParser::FuncnameContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

