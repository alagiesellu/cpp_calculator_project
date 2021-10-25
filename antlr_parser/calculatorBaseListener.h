
// Generated from /home/leber/CLionProjects/cpp_calculator_project/calculator.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "calculatorListener.h"


/**
 * This class provides an empty implementation of calculatorListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  calculatorBaseListener : public calculatorListener {
public:

  virtual void enterSession(calculatorParser::SessionContext * /*ctx*/) override { }
  virtual void exitSession(calculatorParser::SessionContext * /*ctx*/) override { }

  virtual void enterHeader(calculatorParser::HeaderContext * /*ctx*/) override { }
  virtual void exitHeader(calculatorParser::HeaderContext * /*ctx*/) override { }

  virtual void enterEquation(calculatorParser::EquationContext * /*ctx*/) override { }
  virtual void exitEquation(calculatorParser::EquationContext * /*ctx*/) override { }

  virtual void enterExpression(calculatorParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(calculatorParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterMultiplyingExpression(calculatorParser::MultiplyingExpressionContext * /*ctx*/) override { }
  virtual void exitMultiplyingExpression(calculatorParser::MultiplyingExpressionContext * /*ctx*/) override { }

  virtual void enterPowExpression(calculatorParser::PowExpressionContext * /*ctx*/) override { }
  virtual void exitPowExpression(calculatorParser::PowExpressionContext * /*ctx*/) override { }

  virtual void enterSignedAtom(calculatorParser::SignedAtomContext * /*ctx*/) override { }
  virtual void exitSignedAtom(calculatorParser::SignedAtomContext * /*ctx*/) override { }

  virtual void enterAtom(calculatorParser::AtomContext * /*ctx*/) override { }
  virtual void exitAtom(calculatorParser::AtomContext * /*ctx*/) override { }

  virtual void enterVariable(calculatorParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(calculatorParser::VariableContext * /*ctx*/) override { }

  virtual void enterScientific(calculatorParser::ScientificContext * /*ctx*/) override { }
  virtual void exitScientific(calculatorParser::ScientificContext * /*ctx*/) override { }

  virtual void enterParentices(calculatorParser::ParenticesContext * /*ctx*/) override { }
  virtual void exitParentices(calculatorParser::ParenticesContext * /*ctx*/) override { }

  virtual void enterFunc_(calculatorParser::Func_Context * /*ctx*/) override { }
  virtual void exitFunc_(calculatorParser::Func_Context * /*ctx*/) override { }

  virtual void enterFuncname(calculatorParser::FuncnameContext * /*ctx*/) override { }
  virtual void exitFuncname(calculatorParser::FuncnameContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

