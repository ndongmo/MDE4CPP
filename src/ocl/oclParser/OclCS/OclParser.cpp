
// Generated from OclParser.g4 by ANTLR 4.7


#include "OclParserListener.h"
#include "OclParserVisitor.h"

#include "OclParser.h"


using namespace antlrcpp;
using namespace OclCS;
using namespace antlr4;

OclParser::OclParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

OclParser::~OclParser() {
  delete _interpreter;
}

std::string OclParser::getGrammarFileName() const {
  return "OclParser.g4";
}

const std::vector<std::string>& OclParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& OclParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ExpressionInOclCSContext ------------------------------------------------------------------

OclParser::ExpressionInOclCSContext::ExpressionInOclCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::OclExpressionCSContext* OclParser::ExpressionInOclCSContext::oclExpressionCS() {
  return getRuleContext<OclParser::OclExpressionCSContext>(0);
}


size_t OclParser::ExpressionInOclCSContext::getRuleIndex() const {
  return OclParser::RuleExpressionInOclCS;
}

void OclParser::ExpressionInOclCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionInOclCS(this);
}

void OclParser::ExpressionInOclCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionInOclCS(this);
}


antlrcpp::Any OclParser::ExpressionInOclCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitExpressionInOclCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::ExpressionInOclCSContext* OclParser::expressionInOclCS() {
  ExpressionInOclCSContext *_localctx = _tracker.createInstance<ExpressionInOclCSContext>(_ctx, getState());
  enterRule(_localctx, 0, OclParser::RuleExpressionInOclCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(124);
    oclExpressionCS(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OclExpressionCSContext ------------------------------------------------------------------

OclParser::OclExpressionCSContext::OclExpressionCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::PrefixedExpContext* OclParser::OclExpressionCSContext::prefixedExp() {
  return getRuleContext<OclParser::PrefixedExpContext>(0);
}

OclParser::OperationCallExpCS_BContext* OclParser::OclExpressionCSContext::operationCallExpCS_B() {
  return getRuleContext<OclParser::OperationCallExpCS_BContext>(0);
}

OclParser::PropertyCallExpCS_BContext* OclParser::OclExpressionCSContext::propertyCallExpCS_B() {
  return getRuleContext<OclParser::PropertyCallExpCS_BContext>(0);
}

OclParser::AssociationClassCallExpCS_BContext* OclParser::OclExpressionCSContext::associationClassCallExpCS_B() {
  return getRuleContext<OclParser::AssociationClassCallExpCS_BContext>(0);
}

OclParser::VariableExpCSContext* OclParser::OclExpressionCSContext::variableExpCS() {
  return getRuleContext<OclParser::VariableExpCSContext>(0);
}

OclParser::LiteralExpCSContext* OclParser::OclExpressionCSContext::literalExpCS() {
  return getRuleContext<OclParser::LiteralExpCSContext>(0);
}

OclParser::LetExpCSContext* OclParser::OclExpressionCSContext::letExpCS() {
  return getRuleContext<OclParser::LetExpCSContext>(0);
}

OclParser::IfExpCSContext* OclParser::OclExpressionCSContext::ifExpCS() {
  return getRuleContext<OclParser::IfExpCSContext>(0);
}

OclParser::OclExpressionCSContext* OclParser::OclExpressionCSContext::oclExpressionCS() {
  return getRuleContext<OclParser::OclExpressionCSContext>(0);
}

OclParser::OperationCallExpCS_AContext* OclParser::OclExpressionCSContext::operationCallExpCS_A() {
  return getRuleContext<OclParser::OperationCallExpCS_AContext>(0);
}

OclParser::PropertyCallExpCS_AContext* OclParser::OclExpressionCSContext::propertyCallExpCS_A() {
  return getRuleContext<OclParser::PropertyCallExpCS_AContext>(0);
}

OclParser::AssociationClassCallExpCS_AContext* OclParser::OclExpressionCSContext::associationClassCallExpCS_A() {
  return getRuleContext<OclParser::AssociationClassCallExpCS_AContext>(0);
}

OclParser::IteratorExpCSContext* OclParser::OclExpressionCSContext::iteratorExpCS() {
  return getRuleContext<OclParser::IteratorExpCSContext>(0);
}

OclParser::IterateExpCSContext* OclParser::OclExpressionCSContext::iterateExpCS() {
  return getRuleContext<OclParser::IterateExpCSContext>(0);
}

OclParser::InfixedExpCSContext* OclParser::OclExpressionCSContext::infixedExpCS() {
  return getRuleContext<OclParser::InfixedExpCSContext>(0);
}

OclParser::OclMessageExpCSContext* OclParser::OclExpressionCSContext::oclMessageExpCS() {
  return getRuleContext<OclParser::OclMessageExpCSContext>(0);
}


size_t OclParser::OclExpressionCSContext::getRuleIndex() const {
  return OclParser::RuleOclExpressionCS;
}

void OclParser::OclExpressionCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOclExpressionCS(this);
}

void OclParser::OclExpressionCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOclExpressionCS(this);
}


antlrcpp::Any OclParser::OclExpressionCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitOclExpressionCS(this);
  else
    return visitor->visitChildren(this);
}


OclParser::OclExpressionCSContext* OclParser::oclExpressionCS() {
   return oclExpressionCS(0);
}

OclParser::OclExpressionCSContext* OclParser::oclExpressionCS(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  OclParser::OclExpressionCSContext *_localctx = _tracker.createInstance<OclExpressionCSContext>(_ctx, parentState);
  OclParser::OclExpressionCSContext *previousContext = _localctx;
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, OclParser::RuleOclExpressionCS, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(135);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      setState(127);
      prefixedExp();
      break;
    }

    case 2: {
      setState(128);
      operationCallExpCS_B();
      break;
    }

    case 3: {
      setState(129);
      propertyCallExpCS_B();
      break;
    }

    case 4: {
      setState(130);
      associationClassCallExpCS_B();
      break;
    }

    case 5: {
      setState(131);
      variableExpCS();
      break;
    }

    case 6: {
      setState(132);
      literalExpCS();
      break;
    }

    case 7: {
      setState(133);
      letExpCS();
      break;
    }

    case 8: {
      setState(134);
      ifExpCS();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(153);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(151);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<OclExpressionCSContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleOclExpressionCS);
          setState(137);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(138);
          operationCallExpCS_A();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<OclExpressionCSContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleOclExpressionCS);
          setState(139);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(140);
          propertyCallExpCS_A();
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<OclExpressionCSContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleOclExpressionCS);
          setState(141);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(142);
          associationClassCallExpCS_A();
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<OclExpressionCSContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleOclExpressionCS);
          setState(143);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(144);
          iteratorExpCS();
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<OclExpressionCSContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleOclExpressionCS);
          setState(145);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(146);
          iterateExpCS();
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<OclExpressionCSContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleOclExpressionCS);
          setState(147);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(148);
          infixedExpCS();
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<OclExpressionCSContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleOclExpressionCS);
          setState(149);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(150);
          oclMessageExpCS();
          break;
        }

        } 
      }
      setState(155);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- VariableExpCSContext ------------------------------------------------------------------

OclParser::VariableExpCSContext::VariableExpCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::VariableExpCSContext::SELF() {
  return getToken(OclParser::SELF, 0);
}

OclParser::SimpleNameCSContext* OclParser::VariableExpCSContext::simpleNameCS() {
  return getRuleContext<OclParser::SimpleNameCSContext>(0);
}


size_t OclParser::VariableExpCSContext::getRuleIndex() const {
  return OclParser::RuleVariableExpCS;
}

void OclParser::VariableExpCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableExpCS(this);
}

void OclParser::VariableExpCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableExpCS(this);
}


antlrcpp::Any OclParser::VariableExpCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitVariableExpCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::VariableExpCSContext* OclParser::variableExpCS() {
  VariableExpCSContext *_localctx = _tracker.createInstance<VariableExpCSContext>(_ctx, getState());
  enterRule(_localctx, 4, OclParser::RuleVariableExpCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(158);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case OclParser::SELF: {
        enterOuterAlt(_localctx, 1);
        setState(156);
        match(OclParser::SELF);
        break;
      }

      case OclParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(157);
        simpleNameCS();
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

//----------------- SimpleNameCSContext ------------------------------------------------------------------

OclParser::SimpleNameCSContext::SimpleNameCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::SimpleNameCSContext::ID() {
  return getToken(OclParser::ID, 0);
}


size_t OclParser::SimpleNameCSContext::getRuleIndex() const {
  return OclParser::RuleSimpleNameCS;
}

void OclParser::SimpleNameCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleNameCS(this);
}

void OclParser::SimpleNameCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleNameCS(this);
}


antlrcpp::Any OclParser::SimpleNameCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitSimpleNameCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::SimpleNameCSContext* OclParser::simpleNameCS() {
  SimpleNameCSContext *_localctx = _tracker.createInstance<SimpleNameCSContext>(_ctx, getState());
  enterRule(_localctx, 6, OclParser::RuleSimpleNameCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    match(OclParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RestrictedKeywordCSContext ------------------------------------------------------------------

OclParser::RestrictedKeywordCSContext::RestrictedKeywordCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::CollectionTypeIdentifierCSContext* OclParser::RestrictedKeywordCSContext::collectionTypeIdentifierCS() {
  return getRuleContext<OclParser::CollectionTypeIdentifierCSContext>(0);
}

OclParser::PrimitiveTypeCSContext* OclParser::RestrictedKeywordCSContext::primitiveTypeCS() {
  return getRuleContext<OclParser::PrimitiveTypeCSContext>(0);
}

OclParser::OclTypeCSContext* OclParser::RestrictedKeywordCSContext::oclTypeCS() {
  return getRuleContext<OclParser::OclTypeCSContext>(0);
}

tree::TerminalNode* OclParser::RestrictedKeywordCSContext::TUPLE() {
  return getToken(OclParser::TUPLE, 0);
}


size_t OclParser::RestrictedKeywordCSContext::getRuleIndex() const {
  return OclParser::RuleRestrictedKeywordCS;
}

void OclParser::RestrictedKeywordCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRestrictedKeywordCS(this);
}

void OclParser::RestrictedKeywordCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRestrictedKeywordCS(this);
}


antlrcpp::Any OclParser::RestrictedKeywordCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitRestrictedKeywordCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::RestrictedKeywordCSContext* OclParser::restrictedKeywordCS() {
  RestrictedKeywordCSContext *_localctx = _tracker.createInstance<RestrictedKeywordCSContext>(_ctx, getState());
  enterRule(_localctx, 8, OclParser::RuleRestrictedKeywordCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(166);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case OclParser::COLLECTION:
      case OclParser::BAG:
      case OclParser::ORDEREDSET:
      case OclParser::SEQUENCE:
      case OclParser::SET: {
        enterOuterAlt(_localctx, 1);
        setState(162);
        collectionTypeIdentifierCS();
        break;
      }

      case OclParser::OCLBOOLEAN:
      case OclParser::OCLINTEGER:
      case OclParser::OCLREAL:
      case OclParser::OCLSTRING:
      case OclParser::OCLUNLIMITEDNAT: {
        enterOuterAlt(_localctx, 2);
        setState(163);
        primitiveTypeCS();
        break;
      }

      case OclParser::OCLANY:
      case OclParser::OCLINVALID:
      case OclParser::OCLMESSAGE:
      case OclParser::OCLVOID: {
        enterOuterAlt(_localctx, 3);
        setState(164);
        oclTypeCS();
        break;
      }

      case OclParser::TUPLE: {
        enterOuterAlt(_localctx, 4);
        setState(165);
        match(OclParser::TUPLE);
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

//----------------- UnreservedSimpleNameCSContext ------------------------------------------------------------------

OclParser::UnreservedSimpleNameCSContext::UnreservedSimpleNameCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::SimpleNameCSContext* OclParser::UnreservedSimpleNameCSContext::simpleNameCS() {
  return getRuleContext<OclParser::SimpleNameCSContext>(0);
}

OclParser::RestrictedKeywordCSContext* OclParser::UnreservedSimpleNameCSContext::restrictedKeywordCS() {
  return getRuleContext<OclParser::RestrictedKeywordCSContext>(0);
}


size_t OclParser::UnreservedSimpleNameCSContext::getRuleIndex() const {
  return OclParser::RuleUnreservedSimpleNameCS;
}

void OclParser::UnreservedSimpleNameCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnreservedSimpleNameCS(this);
}

void OclParser::UnreservedSimpleNameCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnreservedSimpleNameCS(this);
}


antlrcpp::Any OclParser::UnreservedSimpleNameCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitUnreservedSimpleNameCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::UnreservedSimpleNameCSContext* OclParser::unreservedSimpleNameCS() {
  UnreservedSimpleNameCSContext *_localctx = _tracker.createInstance<UnreservedSimpleNameCSContext>(_ctx, getState());
  enterRule(_localctx, 10, OclParser::RuleUnreservedSimpleNameCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(170);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case OclParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(168);
        simpleNameCS();
        break;
      }

      case OclParser::TUPLE:
      case OclParser::COLLECTION:
      case OclParser::BAG:
      case OclParser::ORDEREDSET:
      case OclParser::SEQUENCE:
      case OclParser::SET:
      case OclParser::OCLBOOLEAN:
      case OclParser::OCLINTEGER:
      case OclParser::OCLREAL:
      case OclParser::OCLSTRING:
      case OclParser::OCLUNLIMITEDNAT:
      case OclParser::OCLANY:
      case OclParser::OCLINVALID:
      case OclParser::OCLMESSAGE:
      case OclParser::OCLVOID: {
        enterOuterAlt(_localctx, 2);
        setState(169);
        restrictedKeywordCS();
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

//----------------- PathNameCSContext ------------------------------------------------------------------

OclParser::PathNameCSContext::PathNameCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::SimpleNameCSContext* OclParser::PathNameCSContext::simpleNameCS() {
  return getRuleContext<OclParser::SimpleNameCSContext>(0);
}

OclParser::PathNameCSContext* OclParser::PathNameCSContext::pathNameCS() {
  return getRuleContext<OclParser::PathNameCSContext>(0);
}

tree::TerminalNode* OclParser::PathNameCSContext::COLONCOLON() {
  return getToken(OclParser::COLONCOLON, 0);
}

OclParser::UnreservedSimpleNameCSContext* OclParser::PathNameCSContext::unreservedSimpleNameCS() {
  return getRuleContext<OclParser::UnreservedSimpleNameCSContext>(0);
}


size_t OclParser::PathNameCSContext::getRuleIndex() const {
  return OclParser::RulePathNameCS;
}

void OclParser::PathNameCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPathNameCS(this);
}

void OclParser::PathNameCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPathNameCS(this);
}


antlrcpp::Any OclParser::PathNameCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitPathNameCS(this);
  else
    return visitor->visitChildren(this);
}


OclParser::PathNameCSContext* OclParser::pathNameCS() {
   return pathNameCS(0);
}

OclParser::PathNameCSContext* OclParser::pathNameCS(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  OclParser::PathNameCSContext *_localctx = _tracker.createInstance<PathNameCSContext>(_ctx, parentState);
  OclParser::PathNameCSContext *previousContext = _localctx;
  size_t startState = 12;
  enterRecursionRule(_localctx, 12, OclParser::RulePathNameCS, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(173);
    simpleNameCS();
    _ctx->stop = _input->LT(-1);
    setState(180);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<PathNameCSContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RulePathNameCS);
        setState(175);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(176);
        match(OclParser::COLONCOLON);
        setState(177);
        unreservedSimpleNameCS(); 
      }
      setState(182);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LiteralExpCSContext ------------------------------------------------------------------

OclParser::LiteralExpCSContext::LiteralExpCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::EnumLiteralExpCSContext* OclParser::LiteralExpCSContext::enumLiteralExpCS() {
  return getRuleContext<OclParser::EnumLiteralExpCSContext>(0);
}

OclParser::CollectionLiteralExpCSContext* OclParser::LiteralExpCSContext::collectionLiteralExpCS() {
  return getRuleContext<OclParser::CollectionLiteralExpCSContext>(0);
}

OclParser::TupleLiteralExpCSContext* OclParser::LiteralExpCSContext::tupleLiteralExpCS() {
  return getRuleContext<OclParser::TupleLiteralExpCSContext>(0);
}

OclParser::PrimitiveLiteralExpCSContext* OclParser::LiteralExpCSContext::primitiveLiteralExpCS() {
  return getRuleContext<OclParser::PrimitiveLiteralExpCSContext>(0);
}

OclParser::TypeLiteralExpCSContext* OclParser::LiteralExpCSContext::typeLiteralExpCS() {
  return getRuleContext<OclParser::TypeLiteralExpCSContext>(0);
}


size_t OclParser::LiteralExpCSContext::getRuleIndex() const {
  return OclParser::RuleLiteralExpCS;
}

void OclParser::LiteralExpCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteralExpCS(this);
}

void OclParser::LiteralExpCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteralExpCS(this);
}


antlrcpp::Any OclParser::LiteralExpCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitLiteralExpCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::LiteralExpCSContext* OclParser::literalExpCS() {
  LiteralExpCSContext *_localctx = _tracker.createInstance<LiteralExpCSContext>(_ctx, getState());
  enterRule(_localctx, 14, OclParser::RuleLiteralExpCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(188);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(183);
      enumLiteralExpCS();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(184);
      collectionLiteralExpCS();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(185);
      tupleLiteralExpCS();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(186);
      primitiveLiteralExpCS();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(187);
      typeLiteralExpCS();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumLiteralExpCSContext ------------------------------------------------------------------

OclParser::EnumLiteralExpCSContext::EnumLiteralExpCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::PathNameCSContext* OclParser::EnumLiteralExpCSContext::pathNameCS() {
  return getRuleContext<OclParser::PathNameCSContext>(0);
}

tree::TerminalNode* OclParser::EnumLiteralExpCSContext::COLONCOLON() {
  return getToken(OclParser::COLONCOLON, 0);
}

OclParser::SimpleNameCSContext* OclParser::EnumLiteralExpCSContext::simpleNameCS() {
  return getRuleContext<OclParser::SimpleNameCSContext>(0);
}


size_t OclParser::EnumLiteralExpCSContext::getRuleIndex() const {
  return OclParser::RuleEnumLiteralExpCS;
}

void OclParser::EnumLiteralExpCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumLiteralExpCS(this);
}

void OclParser::EnumLiteralExpCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumLiteralExpCS(this);
}


antlrcpp::Any OclParser::EnumLiteralExpCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitEnumLiteralExpCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::EnumLiteralExpCSContext* OclParser::enumLiteralExpCS() {
  EnumLiteralExpCSContext *_localctx = _tracker.createInstance<EnumLiteralExpCSContext>(_ctx, getState());
  enterRule(_localctx, 16, OclParser::RuleEnumLiteralExpCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    pathNameCS(0);
    setState(191);
    match(OclParser::COLONCOLON);
    setState(192);
    simpleNameCS();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CollectionLiteralExpCSContext ------------------------------------------------------------------

OclParser::CollectionLiteralExpCSContext::CollectionLiteralExpCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::CollectionTypeIdentifierCSContext* OclParser::CollectionLiteralExpCSContext::collectionTypeIdentifierCS() {
  return getRuleContext<OclParser::CollectionTypeIdentifierCSContext>(0);
}

tree::TerminalNode* OclParser::CollectionLiteralExpCSContext::LBRACE() {
  return getToken(OclParser::LBRACE, 0);
}

tree::TerminalNode* OclParser::CollectionLiteralExpCSContext::RBRACE() {
  return getToken(OclParser::RBRACE, 0);
}

OclParser::CollectionLiteralPartsCSContext* OclParser::CollectionLiteralExpCSContext::collectionLiteralPartsCS() {
  return getRuleContext<OclParser::CollectionLiteralPartsCSContext>(0);
}


size_t OclParser::CollectionLiteralExpCSContext::getRuleIndex() const {
  return OclParser::RuleCollectionLiteralExpCS;
}

void OclParser::CollectionLiteralExpCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCollectionLiteralExpCS(this);
}

void OclParser::CollectionLiteralExpCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCollectionLiteralExpCS(this);
}


antlrcpp::Any OclParser::CollectionLiteralExpCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitCollectionLiteralExpCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::CollectionLiteralExpCSContext* OclParser::collectionLiteralExpCS() {
  CollectionLiteralExpCSContext *_localctx = _tracker.createInstance<CollectionLiteralExpCSContext>(_ctx, getState());
  enterRule(_localctx, 18, OclParser::RuleCollectionLiteralExpCS);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    collectionTypeIdentifierCS();

    setState(195);
    match(OclParser::LBRACE);
    setState(197);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << OclParser::IF)
      | (1ULL << OclParser::LET)
      | (1ULL << OclParser::SELF)
      | (1ULL << OclParser::TUPLE)
      | (1ULL << OclParser::NULLEXP)
      | (1ULL << OclParser::INVALID)
      | (1ULL << OclParser::COLLECTION)
      | (1ULL << OclParser::BAG)
      | (1ULL << OclParser::ORDEREDSET)
      | (1ULL << OclParser::SEQUENCE)
      | (1ULL << OclParser::SET)
      | (1ULL << OclParser::OCLBOOLEAN)
      | (1ULL << OclParser::OCLINTEGER)
      | (1ULL << OclParser::OCLREAL)
      | (1ULL << OclParser::OCLSTRING)
      | (1ULL << OclParser::OCLUNLIMITEDNAT)
      | (1ULL << OclParser::OCLANY)
      | (1ULL << OclParser::OCLINVALID)
      | (1ULL << OclParser::OCLMESSAGE)
      | (1ULL << OclParser::OCLVOID)
      | (1ULL << OclParser::INT)
      | (1ULL << OclParser::REAL)
      | (1ULL << OclParser::BOOL)
      | (1ULL << OclParser::STRING_LITERAL)
      | (1ULL << OclParser::STAR))) != 0) || ((((_la - 74) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 74)) & ((1ULL << (OclParser::MINUS - 74))
      | (1ULL << (OclParser::NOT - 74))
      | (1ULL << (OclParser::ID - 74)))) != 0)) {
      setState(196);
      collectionLiteralPartsCS();
    }
    setState(199);
    match(OclParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CollectionTypeIdentifierCSContext ------------------------------------------------------------------

OclParser::CollectionTypeIdentifierCSContext::CollectionTypeIdentifierCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::CollectionTypeIdentifierCSContext::SET() {
  return getToken(OclParser::SET, 0);
}

tree::TerminalNode* OclParser::CollectionTypeIdentifierCSContext::BAG() {
  return getToken(OclParser::BAG, 0);
}

tree::TerminalNode* OclParser::CollectionTypeIdentifierCSContext::SEQUENCE() {
  return getToken(OclParser::SEQUENCE, 0);
}

tree::TerminalNode* OclParser::CollectionTypeIdentifierCSContext::COLLECTION() {
  return getToken(OclParser::COLLECTION, 0);
}

tree::TerminalNode* OclParser::CollectionTypeIdentifierCSContext::ORDEREDSET() {
  return getToken(OclParser::ORDEREDSET, 0);
}


size_t OclParser::CollectionTypeIdentifierCSContext::getRuleIndex() const {
  return OclParser::RuleCollectionTypeIdentifierCS;
}

void OclParser::CollectionTypeIdentifierCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCollectionTypeIdentifierCS(this);
}

void OclParser::CollectionTypeIdentifierCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCollectionTypeIdentifierCS(this);
}


antlrcpp::Any OclParser::CollectionTypeIdentifierCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitCollectionTypeIdentifierCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::CollectionTypeIdentifierCSContext* OclParser::collectionTypeIdentifierCS() {
  CollectionTypeIdentifierCSContext *_localctx = _tracker.createInstance<CollectionTypeIdentifierCSContext>(_ctx, getState());
  enterRule(_localctx, 20, OclParser::RuleCollectionTypeIdentifierCS);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << OclParser::COLLECTION)
      | (1ULL << OclParser::BAG)
      | (1ULL << OclParser::ORDEREDSET)
      | (1ULL << OclParser::SEQUENCE)
      | (1ULL << OclParser::SET))) != 0))) {
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

//----------------- CollectionLiteralPartsCSContext ------------------------------------------------------------------

OclParser::CollectionLiteralPartsCSContext::CollectionLiteralPartsCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::CollectionLiteralPartCSContext* OclParser::CollectionLiteralPartsCSContext::collectionLiteralPartCS() {
  return getRuleContext<OclParser::CollectionLiteralPartCSContext>(0);
}

tree::TerminalNode* OclParser::CollectionLiteralPartsCSContext::COMMA() {
  return getToken(OclParser::COMMA, 0);
}

OclParser::CollectionLiteralPartsCSContext* OclParser::CollectionLiteralPartsCSContext::collectionLiteralPartsCS() {
  return getRuleContext<OclParser::CollectionLiteralPartsCSContext>(0);
}


size_t OclParser::CollectionLiteralPartsCSContext::getRuleIndex() const {
  return OclParser::RuleCollectionLiteralPartsCS;
}

void OclParser::CollectionLiteralPartsCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCollectionLiteralPartsCS(this);
}

void OclParser::CollectionLiteralPartsCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCollectionLiteralPartsCS(this);
}


antlrcpp::Any OclParser::CollectionLiteralPartsCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitCollectionLiteralPartsCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::CollectionLiteralPartsCSContext* OclParser::collectionLiteralPartsCS() {
  CollectionLiteralPartsCSContext *_localctx = _tracker.createInstance<CollectionLiteralPartsCSContext>(_ctx, getState());
  enterRule(_localctx, 22, OclParser::RuleCollectionLiteralPartsCS);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(203);
    collectionLiteralPartCS();
    setState(206);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OclParser::COMMA) {
      setState(204);
      match(OclParser::COMMA);
      setState(205);
      collectionLiteralPartsCS();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CollectionLiteralPartCSContext ------------------------------------------------------------------

OclParser::CollectionLiteralPartCSContext::CollectionLiteralPartCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::CollectionRangeCSContext* OclParser::CollectionLiteralPartCSContext::collectionRangeCS() {
  return getRuleContext<OclParser::CollectionRangeCSContext>(0);
}

OclParser::OclExpressionCSContext* OclParser::CollectionLiteralPartCSContext::oclExpressionCS() {
  return getRuleContext<OclParser::OclExpressionCSContext>(0);
}


size_t OclParser::CollectionLiteralPartCSContext::getRuleIndex() const {
  return OclParser::RuleCollectionLiteralPartCS;
}

void OclParser::CollectionLiteralPartCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCollectionLiteralPartCS(this);
}

void OclParser::CollectionLiteralPartCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCollectionLiteralPartCS(this);
}


antlrcpp::Any OclParser::CollectionLiteralPartCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitCollectionLiteralPartCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::CollectionLiteralPartCSContext* OclParser::collectionLiteralPartCS() {
  CollectionLiteralPartCSContext *_localctx = _tracker.createInstance<CollectionLiteralPartCSContext>(_ctx, getState());
  enterRule(_localctx, 24, OclParser::RuleCollectionLiteralPartCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(210);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(208);
      collectionRangeCS();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(209);
      oclExpressionCS(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CollectionRangeCSContext ------------------------------------------------------------------

OclParser::CollectionRangeCSContext::CollectionRangeCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<OclParser::OclExpressionCSContext *> OclParser::CollectionRangeCSContext::oclExpressionCS() {
  return getRuleContexts<OclParser::OclExpressionCSContext>();
}

OclParser::OclExpressionCSContext* OclParser::CollectionRangeCSContext::oclExpressionCS(size_t i) {
  return getRuleContext<OclParser::OclExpressionCSContext>(i);
}

tree::TerminalNode* OclParser::CollectionRangeCSContext::RANGE() {
  return getToken(OclParser::RANGE, 0);
}


size_t OclParser::CollectionRangeCSContext::getRuleIndex() const {
  return OclParser::RuleCollectionRangeCS;
}

void OclParser::CollectionRangeCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCollectionRangeCS(this);
}

void OclParser::CollectionRangeCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCollectionRangeCS(this);
}


antlrcpp::Any OclParser::CollectionRangeCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitCollectionRangeCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::CollectionRangeCSContext* OclParser::collectionRangeCS() {
  CollectionRangeCSContext *_localctx = _tracker.createInstance<CollectionRangeCSContext>(_ctx, getState());
  enterRule(_localctx, 26, OclParser::RuleCollectionRangeCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    oclExpressionCS(0);
    setState(213);
    match(OclParser::RANGE);
    setState(214);
    oclExpressionCS(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrefixedExpContext ------------------------------------------------------------------

OclParser::PrefixedExpContext::PrefixedExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::UnaryLiteralExpCSContext* OclParser::PrefixedExpContext::unaryLiteralExpCS() {
  return getRuleContext<OclParser::UnaryLiteralExpCSContext>(0);
}

OclParser::OclExpressionCSContext* OclParser::PrefixedExpContext::oclExpressionCS() {
  return getRuleContext<OclParser::OclExpressionCSContext>(0);
}


size_t OclParser::PrefixedExpContext::getRuleIndex() const {
  return OclParser::RulePrefixedExp;
}

void OclParser::PrefixedExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixedExp(this);
}

void OclParser::PrefixedExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixedExp(this);
}


antlrcpp::Any OclParser::PrefixedExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitPrefixedExp(this);
  else
    return visitor->visitChildren(this);
}

OclParser::PrefixedExpContext* OclParser::prefixedExp() {
  PrefixedExpContext *_localctx = _tracker.createInstance<PrefixedExpContext>(_ctx, getState());
  enterRule(_localctx, 28, OclParser::RulePrefixedExp);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    unaryLiteralExpCS();
    setState(217);
    oclExpressionCS(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InfixedExpCSContext ------------------------------------------------------------------

OclParser::InfixedExpCSContext::InfixedExpCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::BinaryLiteralExpCSContext* OclParser::InfixedExpCSContext::binaryLiteralExpCS() {
  return getRuleContext<OclParser::BinaryLiteralExpCSContext>(0);
}

OclParser::OclExpressionCSContext* OclParser::InfixedExpCSContext::oclExpressionCS() {
  return getRuleContext<OclParser::OclExpressionCSContext>(0);
}


size_t OclParser::InfixedExpCSContext::getRuleIndex() const {
  return OclParser::RuleInfixedExpCS;
}

void OclParser::InfixedExpCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInfixedExpCS(this);
}

void OclParser::InfixedExpCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInfixedExpCS(this);
}


antlrcpp::Any OclParser::InfixedExpCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitInfixedExpCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::InfixedExpCSContext* OclParser::infixedExpCS() {
  InfixedExpCSContext *_localctx = _tracker.createInstance<InfixedExpCSContext>(_ctx, getState());
  enterRule(_localctx, 30, OclParser::RuleInfixedExpCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    binaryLiteralExpCS();
    setState(220);
    oclExpressionCS(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimitiveLiteralExpCSContext ------------------------------------------------------------------

OclParser::PrimitiveLiteralExpCSContext::PrimitiveLiteralExpCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::IntegerLiteralExpCSContext* OclParser::PrimitiveLiteralExpCSContext::integerLiteralExpCS() {
  return getRuleContext<OclParser::IntegerLiteralExpCSContext>(0);
}

OclParser::RealLiteralExpCSContext* OclParser::PrimitiveLiteralExpCSContext::realLiteralExpCS() {
  return getRuleContext<OclParser::RealLiteralExpCSContext>(0);
}

OclParser::StringLiteralExpCSContext* OclParser::PrimitiveLiteralExpCSContext::stringLiteralExpCS() {
  return getRuleContext<OclParser::StringLiteralExpCSContext>(0);
}

OclParser::BooleanLiteralExpCSContext* OclParser::PrimitiveLiteralExpCSContext::booleanLiteralExpCS() {
  return getRuleContext<OclParser::BooleanLiteralExpCSContext>(0);
}

OclParser::UnlimitedNaturalLiteralExpCSContext* OclParser::PrimitiveLiteralExpCSContext::unlimitedNaturalLiteralExpCS() {
  return getRuleContext<OclParser::UnlimitedNaturalLiteralExpCSContext>(0);
}

OclParser::NullLiteralExpCSContext* OclParser::PrimitiveLiteralExpCSContext::nullLiteralExpCS() {
  return getRuleContext<OclParser::NullLiteralExpCSContext>(0);
}

OclParser::InvalidLiteralExpCSContext* OclParser::PrimitiveLiteralExpCSContext::invalidLiteralExpCS() {
  return getRuleContext<OclParser::InvalidLiteralExpCSContext>(0);
}


size_t OclParser::PrimitiveLiteralExpCSContext::getRuleIndex() const {
  return OclParser::RulePrimitiveLiteralExpCS;
}

void OclParser::PrimitiveLiteralExpCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimitiveLiteralExpCS(this);
}

void OclParser::PrimitiveLiteralExpCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimitiveLiteralExpCS(this);
}


antlrcpp::Any OclParser::PrimitiveLiteralExpCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitPrimitiveLiteralExpCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::PrimitiveLiteralExpCSContext* OclParser::primitiveLiteralExpCS() {
  PrimitiveLiteralExpCSContext *_localctx = _tracker.createInstance<PrimitiveLiteralExpCSContext>(_ctx, getState());
  enterRule(_localctx, 32, OclParser::RulePrimitiveLiteralExpCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(229);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(222);
      integerLiteralExpCS();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(223);
      realLiteralExpCS();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(224);
      stringLiteralExpCS();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(225);
      booleanLiteralExpCS();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(226);
      unlimitedNaturalLiteralExpCS();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(227);
      nullLiteralExpCS();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(228);
      invalidLiteralExpCS();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TupleLiteralExpCSContext ------------------------------------------------------------------

OclParser::TupleLiteralExpCSContext::TupleLiteralExpCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::TupleLiteralExpCSContext::TUPLE() {
  return getToken(OclParser::TUPLE, 0);
}

tree::TerminalNode* OclParser::TupleLiteralExpCSContext::LBRACE() {
  return getToken(OclParser::LBRACE, 0);
}

OclParser::VariableDeclarationListCSContext* OclParser::TupleLiteralExpCSContext::variableDeclarationListCS() {
  return getRuleContext<OclParser::VariableDeclarationListCSContext>(0);
}

tree::TerminalNode* OclParser::TupleLiteralExpCSContext::RBRACE() {
  return getToken(OclParser::RBRACE, 0);
}


size_t OclParser::TupleLiteralExpCSContext::getRuleIndex() const {
  return OclParser::RuleTupleLiteralExpCS;
}

void OclParser::TupleLiteralExpCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTupleLiteralExpCS(this);
}

void OclParser::TupleLiteralExpCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTupleLiteralExpCS(this);
}


antlrcpp::Any OclParser::TupleLiteralExpCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitTupleLiteralExpCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::TupleLiteralExpCSContext* OclParser::tupleLiteralExpCS() {
  TupleLiteralExpCSContext *_localctx = _tracker.createInstance<TupleLiteralExpCSContext>(_ctx, getState());
  enterRule(_localctx, 34, OclParser::RuleTupleLiteralExpCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(231);
    match(OclParser::TUPLE);
    setState(232);
    match(OclParser::LBRACE);
    setState(233);
    variableDeclarationListCS();
    setState(234);
    match(OclParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnlimitedNaturalLiteralExpCSContext ------------------------------------------------------------------

OclParser::UnlimitedNaturalLiteralExpCSContext::UnlimitedNaturalLiteralExpCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::UnlimitedNaturalLiteralExpCSContext::INT() {
  return getToken(OclParser::INT, 0);
}

tree::TerminalNode* OclParser::UnlimitedNaturalLiteralExpCSContext::STAR() {
  return getToken(OclParser::STAR, 0);
}


size_t OclParser::UnlimitedNaturalLiteralExpCSContext::getRuleIndex() const {
  return OclParser::RuleUnlimitedNaturalLiteralExpCS;
}

void OclParser::UnlimitedNaturalLiteralExpCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnlimitedNaturalLiteralExpCS(this);
}

void OclParser::UnlimitedNaturalLiteralExpCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnlimitedNaturalLiteralExpCS(this);
}


antlrcpp::Any OclParser::UnlimitedNaturalLiteralExpCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitUnlimitedNaturalLiteralExpCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::UnlimitedNaturalLiteralExpCSContext* OclParser::unlimitedNaturalLiteralExpCS() {
  UnlimitedNaturalLiteralExpCSContext *_localctx = _tracker.createInstance<UnlimitedNaturalLiteralExpCSContext>(_ctx, getState());
  enterRule(_localctx, 36, OclParser::RuleUnlimitedNaturalLiteralExpCS);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(236);
    _la = _input->LA(1);
    if (!(_la == OclParser::INT

    || _la == OclParser::STAR)) {
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

//----------------- IntegerLiteralExpCSContext ------------------------------------------------------------------

OclParser::IntegerLiteralExpCSContext::IntegerLiteralExpCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::IntegerLiteralExpCSContext::INT() {
  return getToken(OclParser::INT, 0);
}


size_t OclParser::IntegerLiteralExpCSContext::getRuleIndex() const {
  return OclParser::RuleIntegerLiteralExpCS;
}

void OclParser::IntegerLiteralExpCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntegerLiteralExpCS(this);
}

void OclParser::IntegerLiteralExpCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntegerLiteralExpCS(this);
}


antlrcpp::Any OclParser::IntegerLiteralExpCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitIntegerLiteralExpCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::IntegerLiteralExpCSContext* OclParser::integerLiteralExpCS() {
  IntegerLiteralExpCSContext *_localctx = _tracker.createInstance<IntegerLiteralExpCSContext>(_ctx, getState());
  enterRule(_localctx, 38, OclParser::RuleIntegerLiteralExpCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    match(OclParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RealLiteralExpCSContext ------------------------------------------------------------------

OclParser::RealLiteralExpCSContext::RealLiteralExpCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::RealLiteralExpCSContext::REAL() {
  return getToken(OclParser::REAL, 0);
}


size_t OclParser::RealLiteralExpCSContext::getRuleIndex() const {
  return OclParser::RuleRealLiteralExpCS;
}

void OclParser::RealLiteralExpCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRealLiteralExpCS(this);
}

void OclParser::RealLiteralExpCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRealLiteralExpCS(this);
}


antlrcpp::Any OclParser::RealLiteralExpCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitRealLiteralExpCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::RealLiteralExpCSContext* OclParser::realLiteralExpCS() {
  RealLiteralExpCSContext *_localctx = _tracker.createInstance<RealLiteralExpCSContext>(_ctx, getState());
  enterRule(_localctx, 40, OclParser::RuleRealLiteralExpCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(240);
    match(OclParser::REAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringLiteralExpCSContext ------------------------------------------------------------------

OclParser::StringLiteralExpCSContext::StringLiteralExpCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::StringLiteralExpCSContext::STRING_LITERAL() {
  return getToken(OclParser::STRING_LITERAL, 0);
}


size_t OclParser::StringLiteralExpCSContext::getRuleIndex() const {
  return OclParser::RuleStringLiteralExpCS;
}

void OclParser::StringLiteralExpCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringLiteralExpCS(this);
}

void OclParser::StringLiteralExpCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringLiteralExpCS(this);
}


antlrcpp::Any OclParser::StringLiteralExpCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitStringLiteralExpCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::StringLiteralExpCSContext* OclParser::stringLiteralExpCS() {
  StringLiteralExpCSContext *_localctx = _tracker.createInstance<StringLiteralExpCSContext>(_ctx, getState());
  enterRule(_localctx, 42, OclParser::RuleStringLiteralExpCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(242);
    match(OclParser::STRING_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanLiteralExpCSContext ------------------------------------------------------------------

OclParser::BooleanLiteralExpCSContext::BooleanLiteralExpCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::BooleanLiteralExpCSContext::BOOL() {
  return getToken(OclParser::BOOL, 0);
}


size_t OclParser::BooleanLiteralExpCSContext::getRuleIndex() const {
  return OclParser::RuleBooleanLiteralExpCS;
}

void OclParser::BooleanLiteralExpCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBooleanLiteralExpCS(this);
}

void OclParser::BooleanLiteralExpCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBooleanLiteralExpCS(this);
}


antlrcpp::Any OclParser::BooleanLiteralExpCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitBooleanLiteralExpCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::BooleanLiteralExpCSContext* OclParser::booleanLiteralExpCS() {
  BooleanLiteralExpCSContext *_localctx = _tracker.createInstance<BooleanLiteralExpCSContext>(_ctx, getState());
  enterRule(_localctx, 44, OclParser::RuleBooleanLiteralExpCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(244);
    match(OclParser::BOOL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeLiteralExpCSContext ------------------------------------------------------------------

OclParser::TypeLiteralExpCSContext::TypeLiteralExpCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::TypeCSContext* OclParser::TypeLiteralExpCSContext::typeCS() {
  return getRuleContext<OclParser::TypeCSContext>(0);
}


size_t OclParser::TypeLiteralExpCSContext::getRuleIndex() const {
  return OclParser::RuleTypeLiteralExpCS;
}

void OclParser::TypeLiteralExpCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeLiteralExpCS(this);
}

void OclParser::TypeLiteralExpCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeLiteralExpCS(this);
}


antlrcpp::Any OclParser::TypeLiteralExpCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitTypeLiteralExpCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::TypeLiteralExpCSContext* OclParser::typeLiteralExpCS() {
  TypeLiteralExpCSContext *_localctx = _tracker.createInstance<TypeLiteralExpCSContext>(_ctx, getState());
  enterRule(_localctx, 46, OclParser::RuleTypeLiteralExpCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(246);
    typeCS();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IteratorExpCSContext ------------------------------------------------------------------

OclParser::IteratorExpCSContext::IteratorExpCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::IteratorExpCSContext::RARROW() {
  return getToken(OclParser::RARROW, 0);
}

OclParser::SimpleNameCSContext* OclParser::IteratorExpCSContext::simpleNameCS() {
  return getRuleContext<OclParser::SimpleNameCSContext>(0);
}

tree::TerminalNode* OclParser::IteratorExpCSContext::LPAREN() {
  return getToken(OclParser::LPAREN, 0);
}

OclParser::OclExpressionCSContext* OclParser::IteratorExpCSContext::oclExpressionCS() {
  return getRuleContext<OclParser::OclExpressionCSContext>(0);
}

tree::TerminalNode* OclParser::IteratorExpCSContext::RPAREN() {
  return getToken(OclParser::RPAREN, 0);
}

std::vector<OclParser::VariableDeclarationCSContext *> OclParser::IteratorExpCSContext::variableDeclarationCS() {
  return getRuleContexts<OclParser::VariableDeclarationCSContext>();
}

OclParser::VariableDeclarationCSContext* OclParser::IteratorExpCSContext::variableDeclarationCS(size_t i) {
  return getRuleContext<OclParser::VariableDeclarationCSContext>(i);
}

tree::TerminalNode* OclParser::IteratorExpCSContext::PIPE() {
  return getToken(OclParser::PIPE, 0);
}

tree::TerminalNode* OclParser::IteratorExpCSContext::COMMA() {
  return getToken(OclParser::COMMA, 0);
}

tree::TerminalNode* OclParser::IteratorExpCSContext::DOT() {
  return getToken(OclParser::DOT, 0);
}

OclParser::ArgumentsCSContext* OclParser::IteratorExpCSContext::argumentsCS() {
  return getRuleContext<OclParser::ArgumentsCSContext>(0);
}

tree::TerminalNode* OclParser::IteratorExpCSContext::LBRACK() {
  return getToken(OclParser::LBRACK, 0);
}

tree::TerminalNode* OclParser::IteratorExpCSContext::RBRACK() {
  return getToken(OclParser::RBRACK, 0);
}


size_t OclParser::IteratorExpCSContext::getRuleIndex() const {
  return OclParser::RuleIteratorExpCS;
}

void OclParser::IteratorExpCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIteratorExpCS(this);
}

void OclParser::IteratorExpCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIteratorExpCS(this);
}


antlrcpp::Any OclParser::IteratorExpCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitIteratorExpCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::IteratorExpCSContext* OclParser::iteratorExpCS() {
  IteratorExpCSContext *_localctx = _tracker.createInstance<IteratorExpCSContext>(_ctx, getState());
  enterRule(_localctx, 48, OclParser::RuleIteratorExpCS);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(281);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(248);
      match(OclParser::RARROW);
      setState(249);
      simpleNameCS();
      setState(250);
      match(OclParser::LPAREN);
      setState(258);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
      case 1: {
        setState(251);
        variableDeclarationCS();
        setState(254);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == OclParser::COMMA) {
          setState(252);
          match(OclParser::COMMA);
          setState(253);
          variableDeclarationCS();
        }
        setState(256);
        match(OclParser::PIPE);
        break;
      }

      }
      setState(260);
      oclExpressionCS(0);
      setState(261);
      match(OclParser::RPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(263);
      match(OclParser::DOT);
      setState(264);
      simpleNameCS();
      setState(265);
      match(OclParser::LPAREN);
      setState(267);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << OclParser::IF)
        | (1ULL << OclParser::LET)
        | (1ULL << OclParser::SELF)
        | (1ULL << OclParser::TUPLE)
        | (1ULL << OclParser::NULLEXP)
        | (1ULL << OclParser::INVALID)
        | (1ULL << OclParser::COLLECTION)
        | (1ULL << OclParser::BAG)
        | (1ULL << OclParser::ORDEREDSET)
        | (1ULL << OclParser::SEQUENCE)
        | (1ULL << OclParser::SET)
        | (1ULL << OclParser::OCLBOOLEAN)
        | (1ULL << OclParser::OCLINTEGER)
        | (1ULL << OclParser::OCLREAL)
        | (1ULL << OclParser::OCLSTRING)
        | (1ULL << OclParser::OCLUNLIMITEDNAT)
        | (1ULL << OclParser::OCLANY)
        | (1ULL << OclParser::OCLINVALID)
        | (1ULL << OclParser::OCLMESSAGE)
        | (1ULL << OclParser::OCLVOID)
        | (1ULL << OclParser::INT)
        | (1ULL << OclParser::REAL)
        | (1ULL << OclParser::BOOL)
        | (1ULL << OclParser::STRING_LITERAL)
        | (1ULL << OclParser::STAR))) != 0) || ((((_la - 74) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 74)) & ((1ULL << (OclParser::MINUS - 74))
        | (1ULL << (OclParser::NOT - 74))
        | (1ULL << (OclParser::ID - 74)))) != 0)) {
        setState(266);
        argumentsCS();
      }
      setState(269);
      match(OclParser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(271);
      match(OclParser::DOT);
      setState(272);
      simpleNameCS();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(273);
      match(OclParser::DOT);
      setState(274);
      simpleNameCS();
      setState(279);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
      case 1: {
        setState(275);
        match(OclParser::LBRACK);
        setState(276);
        argumentsCS();
        setState(277);
        match(OclParser::RBRACK);
        break;
      }

      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IterateExpCSContext ------------------------------------------------------------------

OclParser::IterateExpCSContext::IterateExpCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::IterateExpCSContext::RARROW() {
  return getToken(OclParser::RARROW, 0);
}

tree::TerminalNode* OclParser::IterateExpCSContext::ITERATE() {
  return getToken(OclParser::ITERATE, 0);
}

tree::TerminalNode* OclParser::IterateExpCSContext::LPAREN() {
  return getToken(OclParser::LPAREN, 0);
}

std::vector<OclParser::VariableDeclarationCSContext *> OclParser::IterateExpCSContext::variableDeclarationCS() {
  return getRuleContexts<OclParser::VariableDeclarationCSContext>();
}

OclParser::VariableDeclarationCSContext* OclParser::IterateExpCSContext::variableDeclarationCS(size_t i) {
  return getRuleContext<OclParser::VariableDeclarationCSContext>(i);
}

tree::TerminalNode* OclParser::IterateExpCSContext::PIPE() {
  return getToken(OclParser::PIPE, 0);
}

OclParser::OclExpressionCSContext* OclParser::IterateExpCSContext::oclExpressionCS() {
  return getRuleContext<OclParser::OclExpressionCSContext>(0);
}

tree::TerminalNode* OclParser::IterateExpCSContext::RPAREN() {
  return getToken(OclParser::RPAREN, 0);
}

tree::TerminalNode* OclParser::IterateExpCSContext::SEMI() {
  return getToken(OclParser::SEMI, 0);
}


size_t OclParser::IterateExpCSContext::getRuleIndex() const {
  return OclParser::RuleIterateExpCS;
}

void OclParser::IterateExpCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIterateExpCS(this);
}

void OclParser::IterateExpCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIterateExpCS(this);
}


antlrcpp::Any OclParser::IterateExpCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitIterateExpCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::IterateExpCSContext* OclParser::iterateExpCS() {
  IterateExpCSContext *_localctx = _tracker.createInstance<IterateExpCSContext>(_ctx, getState());
  enterRule(_localctx, 50, OclParser::RuleIterateExpCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(283);
    match(OclParser::RARROW);
    setState(284);
    match(OclParser::ITERATE);
    setState(285);
    match(OclParser::LPAREN);
    setState(289);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(286);
      variableDeclarationCS();
      setState(287);
      match(OclParser::SEMI);
      break;
    }

    }
    setState(291);
    variableDeclarationCS();
    setState(292);
    match(OclParser::PIPE);
    setState(293);
    oclExpressionCS(0);
    setState(294);
    match(OclParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationCSContext ------------------------------------------------------------------

OclParser::VariableDeclarationCSContext::VariableDeclarationCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::SimpleNameCSContext* OclParser::VariableDeclarationCSContext::simpleNameCS() {
  return getRuleContext<OclParser::SimpleNameCSContext>(0);
}

tree::TerminalNode* OclParser::VariableDeclarationCSContext::COLON() {
  return getToken(OclParser::COLON, 0);
}

OclParser::TypeCSContext* OclParser::VariableDeclarationCSContext::typeCS() {
  return getRuleContext<OclParser::TypeCSContext>(0);
}

tree::TerminalNode* OclParser::VariableDeclarationCSContext::ASSIGN() {
  return getToken(OclParser::ASSIGN, 0);
}

OclParser::OclExpressionCSContext* OclParser::VariableDeclarationCSContext::oclExpressionCS() {
  return getRuleContext<OclParser::OclExpressionCSContext>(0);
}


size_t OclParser::VariableDeclarationCSContext::getRuleIndex() const {
  return OclParser::RuleVariableDeclarationCS;
}

void OclParser::VariableDeclarationCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclarationCS(this);
}

void OclParser::VariableDeclarationCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclarationCS(this);
}


antlrcpp::Any OclParser::VariableDeclarationCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclarationCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::VariableDeclarationCSContext* OclParser::variableDeclarationCS() {
  VariableDeclarationCSContext *_localctx = _tracker.createInstance<VariableDeclarationCSContext>(_ctx, getState());
  enterRule(_localctx, 52, OclParser::RuleVariableDeclarationCS);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(296);
    simpleNameCS();
    setState(299);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OclParser::COLON) {
      setState(297);
      match(OclParser::COLON);
      setState(298);
      typeCS();
    }
    setState(303);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      setState(301);
      match(OclParser::ASSIGN);
      setState(302);
      oclExpressionCS(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeCSContext ------------------------------------------------------------------

OclParser::TypeCSContext::TypeCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::PathNameCSContext* OclParser::TypeCSContext::pathNameCS() {
  return getRuleContext<OclParser::PathNameCSContext>(0);
}

OclParser::CollectionTypeCSContext* OclParser::TypeCSContext::collectionTypeCS() {
  return getRuleContext<OclParser::CollectionTypeCSContext>(0);
}

OclParser::TupleTypeCSContext* OclParser::TypeCSContext::tupleTypeCS() {
  return getRuleContext<OclParser::TupleTypeCSContext>(0);
}

OclParser::PrimitiveTypeCSContext* OclParser::TypeCSContext::primitiveTypeCS() {
  return getRuleContext<OclParser::PrimitiveTypeCSContext>(0);
}

OclParser::OclTypeCSContext* OclParser::TypeCSContext::oclTypeCS() {
  return getRuleContext<OclParser::OclTypeCSContext>(0);
}


size_t OclParser::TypeCSContext::getRuleIndex() const {
  return OclParser::RuleTypeCS;
}

void OclParser::TypeCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeCS(this);
}

void OclParser::TypeCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeCS(this);
}


antlrcpp::Any OclParser::TypeCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitTypeCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::TypeCSContext* OclParser::typeCS() {
  TypeCSContext *_localctx = _tracker.createInstance<TypeCSContext>(_ctx, getState());
  enterRule(_localctx, 54, OclParser::RuleTypeCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(310);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case OclParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(305);
        pathNameCS(0);
        break;
      }

      case OclParser::COLLECTION:
      case OclParser::BAG:
      case OclParser::ORDEREDSET:
      case OclParser::SEQUENCE:
      case OclParser::SET: {
        enterOuterAlt(_localctx, 2);
        setState(306);
        collectionTypeCS();
        break;
      }

      case OclParser::TUPLE: {
        enterOuterAlt(_localctx, 3);
        setState(307);
        tupleTypeCS();
        break;
      }

      case OclParser::OCLBOOLEAN:
      case OclParser::OCLINTEGER:
      case OclParser::OCLREAL:
      case OclParser::OCLSTRING:
      case OclParser::OCLUNLIMITEDNAT: {
        enterOuterAlt(_localctx, 4);
        setState(308);
        primitiveTypeCS();
        break;
      }

      case OclParser::OCLANY:
      case OclParser::OCLINVALID:
      case OclParser::OCLMESSAGE:
      case OclParser::OCLVOID: {
        enterOuterAlt(_localctx, 5);
        setState(309);
        oclTypeCS();
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

//----------------- PrimitiveTypeCSContext ------------------------------------------------------------------

OclParser::PrimitiveTypeCSContext::PrimitiveTypeCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::PrimitiveTypeCSContext::OCLBOOLEAN() {
  return getToken(OclParser::OCLBOOLEAN, 0);
}

tree::TerminalNode* OclParser::PrimitiveTypeCSContext::OCLINTEGER() {
  return getToken(OclParser::OCLINTEGER, 0);
}

tree::TerminalNode* OclParser::PrimitiveTypeCSContext::OCLREAL() {
  return getToken(OclParser::OCLREAL, 0);
}

tree::TerminalNode* OclParser::PrimitiveTypeCSContext::OCLSTRING() {
  return getToken(OclParser::OCLSTRING, 0);
}

tree::TerminalNode* OclParser::PrimitiveTypeCSContext::OCLUNLIMITEDNAT() {
  return getToken(OclParser::OCLUNLIMITEDNAT, 0);
}


size_t OclParser::PrimitiveTypeCSContext::getRuleIndex() const {
  return OclParser::RulePrimitiveTypeCS;
}

void OclParser::PrimitiveTypeCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimitiveTypeCS(this);
}

void OclParser::PrimitiveTypeCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimitiveTypeCS(this);
}


antlrcpp::Any OclParser::PrimitiveTypeCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitPrimitiveTypeCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::PrimitiveTypeCSContext* OclParser::primitiveTypeCS() {
  PrimitiveTypeCSContext *_localctx = _tracker.createInstance<PrimitiveTypeCSContext>(_ctx, getState());
  enterRule(_localctx, 56, OclParser::RulePrimitiveTypeCS);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(312);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << OclParser::OCLBOOLEAN)
      | (1ULL << OclParser::OCLINTEGER)
      | (1ULL << OclParser::OCLREAL)
      | (1ULL << OclParser::OCLSTRING)
      | (1ULL << OclParser::OCLUNLIMITEDNAT))) != 0))) {
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

//----------------- OclTypeCSContext ------------------------------------------------------------------

OclParser::OclTypeCSContext::OclTypeCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::OclTypeCSContext::OCLANY() {
  return getToken(OclParser::OCLANY, 0);
}

tree::TerminalNode* OclParser::OclTypeCSContext::OCLINVALID() {
  return getToken(OclParser::OCLINVALID, 0);
}

tree::TerminalNode* OclParser::OclTypeCSContext::OCLMESSAGE() {
  return getToken(OclParser::OCLMESSAGE, 0);
}

tree::TerminalNode* OclParser::OclTypeCSContext::OCLVOID() {
  return getToken(OclParser::OCLVOID, 0);
}


size_t OclParser::OclTypeCSContext::getRuleIndex() const {
  return OclParser::RuleOclTypeCS;
}

void OclParser::OclTypeCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOclTypeCS(this);
}

void OclParser::OclTypeCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOclTypeCS(this);
}


antlrcpp::Any OclParser::OclTypeCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitOclTypeCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::OclTypeCSContext* OclParser::oclTypeCS() {
  OclTypeCSContext *_localctx = _tracker.createInstance<OclTypeCSContext>(_ctx, getState());
  enterRule(_localctx, 58, OclParser::RuleOclTypeCS);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(314);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << OclParser::OCLANY)
      | (1ULL << OclParser::OCLINVALID)
      | (1ULL << OclParser::OCLMESSAGE)
      | (1ULL << OclParser::OCLVOID))) != 0))) {
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

//----------------- CollectionTypeCSContext ------------------------------------------------------------------

OclParser::CollectionTypeCSContext::CollectionTypeCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::CollectionTypeIdentifierCSContext* OclParser::CollectionTypeCSContext::collectionTypeIdentifierCS() {
  return getRuleContext<OclParser::CollectionTypeIdentifierCSContext>(0);
}

tree::TerminalNode* OclParser::CollectionTypeCSContext::LPAREN() {
  return getToken(OclParser::LPAREN, 0);
}

OclParser::TypeCSContext* OclParser::CollectionTypeCSContext::typeCS() {
  return getRuleContext<OclParser::TypeCSContext>(0);
}

tree::TerminalNode* OclParser::CollectionTypeCSContext::RPAREN() {
  return getToken(OclParser::RPAREN, 0);
}


size_t OclParser::CollectionTypeCSContext::getRuleIndex() const {
  return OclParser::RuleCollectionTypeCS;
}

void OclParser::CollectionTypeCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCollectionTypeCS(this);
}

void OclParser::CollectionTypeCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCollectionTypeCS(this);
}


antlrcpp::Any OclParser::CollectionTypeCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitCollectionTypeCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::CollectionTypeCSContext* OclParser::collectionTypeCS() {
  CollectionTypeCSContext *_localctx = _tracker.createInstance<CollectionTypeCSContext>(_ctx, getState());
  enterRule(_localctx, 60, OclParser::RuleCollectionTypeCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(316);
    collectionTypeIdentifierCS();
    setState(317);
    match(OclParser::LPAREN);
    setState(318);
    typeCS();
    setState(319);
    match(OclParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TupleTypeCSContext ------------------------------------------------------------------

OclParser::TupleTypeCSContext::TupleTypeCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::TupleTypeCSContext::TUPLE() {
  return getToken(OclParser::TUPLE, 0);
}

tree::TerminalNode* OclParser::TupleTypeCSContext::LPAREN() {
  return getToken(OclParser::LPAREN, 0);
}

tree::TerminalNode* OclParser::TupleTypeCSContext::RPAREN() {
  return getToken(OclParser::RPAREN, 0);
}

OclParser::VariableDeclarationListCSContext* OclParser::TupleTypeCSContext::variableDeclarationListCS() {
  return getRuleContext<OclParser::VariableDeclarationListCSContext>(0);
}


size_t OclParser::TupleTypeCSContext::getRuleIndex() const {
  return OclParser::RuleTupleTypeCS;
}

void OclParser::TupleTypeCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTupleTypeCS(this);
}

void OclParser::TupleTypeCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTupleTypeCS(this);
}


antlrcpp::Any OclParser::TupleTypeCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitTupleTypeCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::TupleTypeCSContext* OclParser::tupleTypeCS() {
  TupleTypeCSContext *_localctx = _tracker.createInstance<TupleTypeCSContext>(_ctx, getState());
  enterRule(_localctx, 62, OclParser::RuleTupleTypeCS);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(321);
    match(OclParser::TUPLE);
    setState(322);
    match(OclParser::LPAREN);
    setState(324);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OclParser::ID) {
      setState(323);
      variableDeclarationListCS();
    }
    setState(326);
    match(OclParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationListCSContext ------------------------------------------------------------------

OclParser::VariableDeclarationListCSContext::VariableDeclarationListCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::VariableDeclarationCSContext* OclParser::VariableDeclarationListCSContext::variableDeclarationCS() {
  return getRuleContext<OclParser::VariableDeclarationCSContext>(0);
}

tree::TerminalNode* OclParser::VariableDeclarationListCSContext::COMMA() {
  return getToken(OclParser::COMMA, 0);
}

OclParser::VariableDeclarationListCSContext* OclParser::VariableDeclarationListCSContext::variableDeclarationListCS() {
  return getRuleContext<OclParser::VariableDeclarationListCSContext>(0);
}


size_t OclParser::VariableDeclarationListCSContext::getRuleIndex() const {
  return OclParser::RuleVariableDeclarationListCS;
}

void OclParser::VariableDeclarationListCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclarationListCS(this);
}

void OclParser::VariableDeclarationListCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclarationListCS(this);
}


antlrcpp::Any OclParser::VariableDeclarationListCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclarationListCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::VariableDeclarationListCSContext* OclParser::variableDeclarationListCS() {
  VariableDeclarationListCSContext *_localctx = _tracker.createInstance<VariableDeclarationListCSContext>(_ctx, getState());
  enterRule(_localctx, 64, OclParser::RuleVariableDeclarationListCS);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(328);
    variableDeclarationCS();
    setState(331);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OclParser::COMMA) {
      setState(329);
      match(OclParser::COMMA);
      setState(330);
      variableDeclarationListCS();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperationCallExpCS_AContext ------------------------------------------------------------------

OclParser::OperationCallExpCS_AContext::OperationCallExpCS_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::SimpleNameCSContext* OclParser::OperationCallExpCS_AContext::simpleNameCS() {
  return getRuleContext<OclParser::SimpleNameCSContext>(0);
}

OclParser::OclExpressionCSContext* OclParser::OperationCallExpCS_AContext::oclExpressionCS() {
  return getRuleContext<OclParser::OclExpressionCSContext>(0);
}

tree::TerminalNode* OclParser::OperationCallExpCS_AContext::RARROW() {
  return getToken(OclParser::RARROW, 0);
}

tree::TerminalNode* OclParser::OperationCallExpCS_AContext::LPAREN() {
  return getToken(OclParser::LPAREN, 0);
}

tree::TerminalNode* OclParser::OperationCallExpCS_AContext::RPAREN() {
  return getToken(OclParser::RPAREN, 0);
}

OclParser::ArgumentsCSContext* OclParser::OperationCallExpCS_AContext::argumentsCS() {
  return getRuleContext<OclParser::ArgumentsCSContext>(0);
}

tree::TerminalNode* OclParser::OperationCallExpCS_AContext::DOT() {
  return getToken(OclParser::DOT, 0);
}

OclParser::IsMarkedPreCSContext* OclParser::OperationCallExpCS_AContext::isMarkedPreCS() {
  return getRuleContext<OclParser::IsMarkedPreCSContext>(0);
}

OclParser::PathNameCSContext* OclParser::OperationCallExpCS_AContext::pathNameCS() {
  return getRuleContext<OclParser::PathNameCSContext>(0);
}

tree::TerminalNode* OclParser::OperationCallExpCS_AContext::COLONCOLON() {
  return getToken(OclParser::COLONCOLON, 0);
}


size_t OclParser::OperationCallExpCS_AContext::getRuleIndex() const {
  return OclParser::RuleOperationCallExpCS_A;
}

void OclParser::OperationCallExpCS_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperationCallExpCS_A(this);
}

void OclParser::OperationCallExpCS_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperationCallExpCS_A(this);
}


antlrcpp::Any OclParser::OperationCallExpCS_AContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitOperationCallExpCS_A(this);
  else
    return visitor->visitChildren(this);
}

OclParser::OperationCallExpCS_AContext* OclParser::operationCallExpCS_A() {
  OperationCallExpCS_AContext *_localctx = _tracker.createInstance<OperationCallExpCS_AContext>(_ctx, getState());
  enterRule(_localctx, 66, OclParser::RuleOperationCallExpCS_A);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(382);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(333);
      simpleNameCS();
      setState(334);
      oclExpressionCS(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(336);
      match(OclParser::RARROW);
      setState(337);
      simpleNameCS();
      setState(338);
      match(OclParser::LPAREN);
      setState(340);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << OclParser::IF)
        | (1ULL << OclParser::LET)
        | (1ULL << OclParser::SELF)
        | (1ULL << OclParser::TUPLE)
        | (1ULL << OclParser::NULLEXP)
        | (1ULL << OclParser::INVALID)
        | (1ULL << OclParser::COLLECTION)
        | (1ULL << OclParser::BAG)
        | (1ULL << OclParser::ORDEREDSET)
        | (1ULL << OclParser::SEQUENCE)
        | (1ULL << OclParser::SET)
        | (1ULL << OclParser::OCLBOOLEAN)
        | (1ULL << OclParser::OCLINTEGER)
        | (1ULL << OclParser::OCLREAL)
        | (1ULL << OclParser::OCLSTRING)
        | (1ULL << OclParser::OCLUNLIMITEDNAT)
        | (1ULL << OclParser::OCLANY)
        | (1ULL << OclParser::OCLINVALID)
        | (1ULL << OclParser::OCLMESSAGE)
        | (1ULL << OclParser::OCLVOID)
        | (1ULL << OclParser::INT)
        | (1ULL << OclParser::REAL)
        | (1ULL << OclParser::BOOL)
        | (1ULL << OclParser::STRING_LITERAL)
        | (1ULL << OclParser::STAR))) != 0) || ((((_la - 74) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 74)) & ((1ULL << (OclParser::MINUS - 74))
        | (1ULL << (OclParser::NOT - 74))
        | (1ULL << (OclParser::ID - 74)))) != 0)) {
        setState(339);
        argumentsCS();
      }
      setState(342);
      match(OclParser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(344);
      match(OclParser::DOT);
      setState(345);
      simpleNameCS();
      setState(346);
      match(OclParser::LPAREN);
      setState(348);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << OclParser::IF)
        | (1ULL << OclParser::LET)
        | (1ULL << OclParser::SELF)
        | (1ULL << OclParser::TUPLE)
        | (1ULL << OclParser::NULLEXP)
        | (1ULL << OclParser::INVALID)
        | (1ULL << OclParser::COLLECTION)
        | (1ULL << OclParser::BAG)
        | (1ULL << OclParser::ORDEREDSET)
        | (1ULL << OclParser::SEQUENCE)
        | (1ULL << OclParser::SET)
        | (1ULL << OclParser::OCLBOOLEAN)
        | (1ULL << OclParser::OCLINTEGER)
        | (1ULL << OclParser::OCLREAL)
        | (1ULL << OclParser::OCLSTRING)
        | (1ULL << OclParser::OCLUNLIMITEDNAT)
        | (1ULL << OclParser::OCLANY)
        | (1ULL << OclParser::OCLINVALID)
        | (1ULL << OclParser::OCLMESSAGE)
        | (1ULL << OclParser::OCLVOID)
        | (1ULL << OclParser::INT)
        | (1ULL << OclParser::REAL)
        | (1ULL << OclParser::BOOL)
        | (1ULL << OclParser::STRING_LITERAL)
        | (1ULL << OclParser::STAR))) != 0) || ((((_la - 74) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 74)) & ((1ULL << (OclParser::MINUS - 74))
        | (1ULL << (OclParser::NOT - 74))
        | (1ULL << (OclParser::ID - 74)))) != 0)) {
        setState(347);
        argumentsCS();
      }
      setState(350);
      match(OclParser::RPAREN);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(352);
      match(OclParser::DOT);
      setState(353);
      simpleNameCS();
      setState(354);
      isMarkedPreCS();
      setState(355);
      match(OclParser::LPAREN);
      setState(357);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << OclParser::IF)
        | (1ULL << OclParser::LET)
        | (1ULL << OclParser::SELF)
        | (1ULL << OclParser::TUPLE)
        | (1ULL << OclParser::NULLEXP)
        | (1ULL << OclParser::INVALID)
        | (1ULL << OclParser::COLLECTION)
        | (1ULL << OclParser::BAG)
        | (1ULL << OclParser::ORDEREDSET)
        | (1ULL << OclParser::SEQUENCE)
        | (1ULL << OclParser::SET)
        | (1ULL << OclParser::OCLBOOLEAN)
        | (1ULL << OclParser::OCLINTEGER)
        | (1ULL << OclParser::OCLREAL)
        | (1ULL << OclParser::OCLSTRING)
        | (1ULL << OclParser::OCLUNLIMITEDNAT)
        | (1ULL << OclParser::OCLANY)
        | (1ULL << OclParser::OCLINVALID)
        | (1ULL << OclParser::OCLMESSAGE)
        | (1ULL << OclParser::OCLVOID)
        | (1ULL << OclParser::INT)
        | (1ULL << OclParser::REAL)
        | (1ULL << OclParser::BOOL)
        | (1ULL << OclParser::STRING_LITERAL)
        | (1ULL << OclParser::STAR))) != 0) || ((((_la - 74) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 74)) & ((1ULL << (OclParser::MINUS - 74))
        | (1ULL << (OclParser::NOT - 74))
        | (1ULL << (OclParser::ID - 74)))) != 0)) {
        setState(356);
        argumentsCS();
      }
      setState(359);
      match(OclParser::RPAREN);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(361);
      match(OclParser::DOT);
      setState(362);
      pathNameCS(0);
      setState(363);
      match(OclParser::COLONCOLON);
      setState(364);
      simpleNameCS();
      setState(365);
      match(OclParser::LPAREN);
      setState(367);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << OclParser::IF)
        | (1ULL << OclParser::LET)
        | (1ULL << OclParser::SELF)
        | (1ULL << OclParser::TUPLE)
        | (1ULL << OclParser::NULLEXP)
        | (1ULL << OclParser::INVALID)
        | (1ULL << OclParser::COLLECTION)
        | (1ULL << OclParser::BAG)
        | (1ULL << OclParser::ORDEREDSET)
        | (1ULL << OclParser::SEQUENCE)
        | (1ULL << OclParser::SET)
        | (1ULL << OclParser::OCLBOOLEAN)
        | (1ULL << OclParser::OCLINTEGER)
        | (1ULL << OclParser::OCLREAL)
        | (1ULL << OclParser::OCLSTRING)
        | (1ULL << OclParser::OCLUNLIMITEDNAT)
        | (1ULL << OclParser::OCLANY)
        | (1ULL << OclParser::OCLINVALID)
        | (1ULL << OclParser::OCLMESSAGE)
        | (1ULL << OclParser::OCLVOID)
        | (1ULL << OclParser::INT)
        | (1ULL << OclParser::REAL)
        | (1ULL << OclParser::BOOL)
        | (1ULL << OclParser::STRING_LITERAL)
        | (1ULL << OclParser::STAR))) != 0) || ((((_la - 74) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 74)) & ((1ULL << (OclParser::MINUS - 74))
        | (1ULL << (OclParser::NOT - 74))
        | (1ULL << (OclParser::ID - 74)))) != 0)) {
        setState(366);
        argumentsCS();
      }
      setState(369);
      match(OclParser::RPAREN);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(371);
      match(OclParser::DOT);
      setState(372);
      pathNameCS(0);
      setState(373);
      match(OclParser::COLONCOLON);
      setState(374);
      simpleNameCS();
      setState(375);
      isMarkedPreCS();
      setState(376);
      match(OclParser::LPAREN);
      setState(378);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << OclParser::IF)
        | (1ULL << OclParser::LET)
        | (1ULL << OclParser::SELF)
        | (1ULL << OclParser::TUPLE)
        | (1ULL << OclParser::NULLEXP)
        | (1ULL << OclParser::INVALID)
        | (1ULL << OclParser::COLLECTION)
        | (1ULL << OclParser::BAG)
        | (1ULL << OclParser::ORDEREDSET)
        | (1ULL << OclParser::SEQUENCE)
        | (1ULL << OclParser::SET)
        | (1ULL << OclParser::OCLBOOLEAN)
        | (1ULL << OclParser::OCLINTEGER)
        | (1ULL << OclParser::OCLREAL)
        | (1ULL << OclParser::OCLSTRING)
        | (1ULL << OclParser::OCLUNLIMITEDNAT)
        | (1ULL << OclParser::OCLANY)
        | (1ULL << OclParser::OCLINVALID)
        | (1ULL << OclParser::OCLMESSAGE)
        | (1ULL << OclParser::OCLVOID)
        | (1ULL << OclParser::INT)
        | (1ULL << OclParser::REAL)
        | (1ULL << OclParser::BOOL)
        | (1ULL << OclParser::STRING_LITERAL)
        | (1ULL << OclParser::STAR))) != 0) || ((((_la - 74) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 74)) & ((1ULL << (OclParser::MINUS - 74))
        | (1ULL << (OclParser::NOT - 74))
        | (1ULL << (OclParser::ID - 74)))) != 0)) {
        setState(377);
        argumentsCS();
      }
      setState(380);
      match(OclParser::RPAREN);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperationCallExpCS_BContext ------------------------------------------------------------------

OclParser::OperationCallExpCS_BContext::OperationCallExpCS_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::SimpleNameCSContext* OclParser::OperationCallExpCS_BContext::simpleNameCS() {
  return getRuleContext<OclParser::SimpleNameCSContext>(0);
}

tree::TerminalNode* OclParser::OperationCallExpCS_BContext::LPAREN() {
  return getToken(OclParser::LPAREN, 0);
}

tree::TerminalNode* OclParser::OperationCallExpCS_BContext::RPAREN() {
  return getToken(OclParser::RPAREN, 0);
}

OclParser::ArgumentsCSContext* OclParser::OperationCallExpCS_BContext::argumentsCS() {
  return getRuleContext<OclParser::ArgumentsCSContext>(0);
}

OclParser::IsMarkedPreCSContext* OclParser::OperationCallExpCS_BContext::isMarkedPreCS() {
  return getRuleContext<OclParser::IsMarkedPreCSContext>(0);
}

OclParser::PathNameCSContext* OclParser::OperationCallExpCS_BContext::pathNameCS() {
  return getRuleContext<OclParser::PathNameCSContext>(0);
}

OclParser::OclExpressionCSContext* OclParser::OperationCallExpCS_BContext::oclExpressionCS() {
  return getRuleContext<OclParser::OclExpressionCSContext>(0);
}


size_t OclParser::OperationCallExpCS_BContext::getRuleIndex() const {
  return OclParser::RuleOperationCallExpCS_B;
}

void OclParser::OperationCallExpCS_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperationCallExpCS_B(this);
}

void OclParser::OperationCallExpCS_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperationCallExpCS_B(this);
}


antlrcpp::Any OclParser::OperationCallExpCS_BContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitOperationCallExpCS_B(this);
  else
    return visitor->visitChildren(this);
}

OclParser::OperationCallExpCS_BContext* OclParser::operationCallExpCS_B() {
  OperationCallExpCS_BContext *_localctx = _tracker.createInstance<OperationCallExpCS_BContext>(_ctx, getState());
  enterRule(_localctx, 68, OclParser::RuleOperationCallExpCS_B);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(409);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(384);
      simpleNameCS();
      setState(385);
      match(OclParser::LPAREN);
      setState(387);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << OclParser::IF)
        | (1ULL << OclParser::LET)
        | (1ULL << OclParser::SELF)
        | (1ULL << OclParser::TUPLE)
        | (1ULL << OclParser::NULLEXP)
        | (1ULL << OclParser::INVALID)
        | (1ULL << OclParser::COLLECTION)
        | (1ULL << OclParser::BAG)
        | (1ULL << OclParser::ORDEREDSET)
        | (1ULL << OclParser::SEQUENCE)
        | (1ULL << OclParser::SET)
        | (1ULL << OclParser::OCLBOOLEAN)
        | (1ULL << OclParser::OCLINTEGER)
        | (1ULL << OclParser::OCLREAL)
        | (1ULL << OclParser::OCLSTRING)
        | (1ULL << OclParser::OCLUNLIMITEDNAT)
        | (1ULL << OclParser::OCLANY)
        | (1ULL << OclParser::OCLINVALID)
        | (1ULL << OclParser::OCLMESSAGE)
        | (1ULL << OclParser::OCLVOID)
        | (1ULL << OclParser::INT)
        | (1ULL << OclParser::REAL)
        | (1ULL << OclParser::BOOL)
        | (1ULL << OclParser::STRING_LITERAL)
        | (1ULL << OclParser::STAR))) != 0) || ((((_la - 74) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 74)) & ((1ULL << (OclParser::MINUS - 74))
        | (1ULL << (OclParser::NOT - 74))
        | (1ULL << (OclParser::ID - 74)))) != 0)) {
        setState(386);
        argumentsCS();
      }
      setState(389);
      match(OclParser::RPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(391);
      simpleNameCS();
      setState(392);
      isMarkedPreCS();
      setState(393);
      match(OclParser::LPAREN);
      setState(395);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << OclParser::IF)
        | (1ULL << OclParser::LET)
        | (1ULL << OclParser::SELF)
        | (1ULL << OclParser::TUPLE)
        | (1ULL << OclParser::NULLEXP)
        | (1ULL << OclParser::INVALID)
        | (1ULL << OclParser::COLLECTION)
        | (1ULL << OclParser::BAG)
        | (1ULL << OclParser::ORDEREDSET)
        | (1ULL << OclParser::SEQUENCE)
        | (1ULL << OclParser::SET)
        | (1ULL << OclParser::OCLBOOLEAN)
        | (1ULL << OclParser::OCLINTEGER)
        | (1ULL << OclParser::OCLREAL)
        | (1ULL << OclParser::OCLSTRING)
        | (1ULL << OclParser::OCLUNLIMITEDNAT)
        | (1ULL << OclParser::OCLANY)
        | (1ULL << OclParser::OCLINVALID)
        | (1ULL << OclParser::OCLMESSAGE)
        | (1ULL << OclParser::OCLVOID)
        | (1ULL << OclParser::INT)
        | (1ULL << OclParser::REAL)
        | (1ULL << OclParser::BOOL)
        | (1ULL << OclParser::STRING_LITERAL)
        | (1ULL << OclParser::STAR))) != 0) || ((((_la - 74) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 74)) & ((1ULL << (OclParser::MINUS - 74))
        | (1ULL << (OclParser::NOT - 74))
        | (1ULL << (OclParser::ID - 74)))) != 0)) {
        setState(394);
        argumentsCS();
      }
      setState(397);
      match(OclParser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(399);
      pathNameCS(0);
      setState(400);
      match(OclParser::LPAREN);
      setState(402);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << OclParser::IF)
        | (1ULL << OclParser::LET)
        | (1ULL << OclParser::SELF)
        | (1ULL << OclParser::TUPLE)
        | (1ULL << OclParser::NULLEXP)
        | (1ULL << OclParser::INVALID)
        | (1ULL << OclParser::COLLECTION)
        | (1ULL << OclParser::BAG)
        | (1ULL << OclParser::ORDEREDSET)
        | (1ULL << OclParser::SEQUENCE)
        | (1ULL << OclParser::SET)
        | (1ULL << OclParser::OCLBOOLEAN)
        | (1ULL << OclParser::OCLINTEGER)
        | (1ULL << OclParser::OCLREAL)
        | (1ULL << OclParser::OCLSTRING)
        | (1ULL << OclParser::OCLUNLIMITEDNAT)
        | (1ULL << OclParser::OCLANY)
        | (1ULL << OclParser::OCLINVALID)
        | (1ULL << OclParser::OCLMESSAGE)
        | (1ULL << OclParser::OCLVOID)
        | (1ULL << OclParser::INT)
        | (1ULL << OclParser::REAL)
        | (1ULL << OclParser::BOOL)
        | (1ULL << OclParser::STRING_LITERAL)
        | (1ULL << OclParser::STAR))) != 0) || ((((_la - 74) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 74)) & ((1ULL << (OclParser::MINUS - 74))
        | (1ULL << (OclParser::NOT - 74))
        | (1ULL << (OclParser::ID - 74)))) != 0)) {
        setState(401);
        argumentsCS();
      }
      setState(404);
      match(OclParser::RPAREN);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(406);
      simpleNameCS();
      setState(407);
      oclExpressionCS(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertyCallExpCS_AContext ------------------------------------------------------------------

OclParser::PropertyCallExpCS_AContext::PropertyCallExpCS_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::PropertyCallExpCS_AContext::DOT() {
  return getToken(OclParser::DOT, 0);
}

OclParser::SimpleNameCSContext* OclParser::PropertyCallExpCS_AContext::simpleNameCS() {
  return getRuleContext<OclParser::SimpleNameCSContext>(0);
}

OclParser::IsMarkedPreCSContext* OclParser::PropertyCallExpCS_AContext::isMarkedPreCS() {
  return getRuleContext<OclParser::IsMarkedPreCSContext>(0);
}

OclParser::PathNameCSContext* OclParser::PropertyCallExpCS_AContext::pathNameCS() {
  return getRuleContext<OclParser::PathNameCSContext>(0);
}

tree::TerminalNode* OclParser::PropertyCallExpCS_AContext::COLONCOLON() {
  return getToken(OclParser::COLONCOLON, 0);
}


size_t OclParser::PropertyCallExpCS_AContext::getRuleIndex() const {
  return OclParser::RulePropertyCallExpCS_A;
}

void OclParser::PropertyCallExpCS_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyCallExpCS_A(this);
}

void OclParser::PropertyCallExpCS_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyCallExpCS_A(this);
}


antlrcpp::Any OclParser::PropertyCallExpCS_AContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitPropertyCallExpCS_A(this);
  else
    return visitor->visitChildren(this);
}

OclParser::PropertyCallExpCS_AContext* OclParser::propertyCallExpCS_A() {
  PropertyCallExpCS_AContext *_localctx = _tracker.createInstance<PropertyCallExpCS_AContext>(_ctx, getState());
  enterRule(_localctx, 70, OclParser::RulePropertyCallExpCS_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(423);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(411);
      match(OclParser::DOT);
      setState(412);
      simpleNameCS();
      setState(414);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
      case 1: {
        setState(413);
        isMarkedPreCS();
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(416);
      match(OclParser::DOT);
      setState(417);
      pathNameCS(0);
      setState(418);
      match(OclParser::COLONCOLON);
      setState(419);
      simpleNameCS();
      setState(421);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
      case 1: {
        setState(420);
        isMarkedPreCS();
        break;
      }

      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertyCallExpCS_BContext ------------------------------------------------------------------

OclParser::PropertyCallExpCS_BContext::PropertyCallExpCS_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::SimpleNameCSContext* OclParser::PropertyCallExpCS_BContext::simpleNameCS() {
  return getRuleContext<OclParser::SimpleNameCSContext>(0);
}

OclParser::IsMarkedPreCSContext* OclParser::PropertyCallExpCS_BContext::isMarkedPreCS() {
  return getRuleContext<OclParser::IsMarkedPreCSContext>(0);
}

OclParser::PathNameCSContext* OclParser::PropertyCallExpCS_BContext::pathNameCS() {
  return getRuleContext<OclParser::PathNameCSContext>(0);
}


size_t OclParser::PropertyCallExpCS_BContext::getRuleIndex() const {
  return OclParser::RulePropertyCallExpCS_B;
}

void OclParser::PropertyCallExpCS_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyCallExpCS_B(this);
}

void OclParser::PropertyCallExpCS_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyCallExpCS_B(this);
}


antlrcpp::Any OclParser::PropertyCallExpCS_BContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitPropertyCallExpCS_B(this);
  else
    return visitor->visitChildren(this);
}

OclParser::PropertyCallExpCS_BContext* OclParser::propertyCallExpCS_B() {
  PropertyCallExpCS_BContext *_localctx = _tracker.createInstance<PropertyCallExpCS_BContext>(_ctx, getState());
  enterRule(_localctx, 72, OclParser::RulePropertyCallExpCS_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(430);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(425);
      simpleNameCS();
      setState(427);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
      case 1: {
        setState(426);
        isMarkedPreCS();
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(429);
      pathNameCS(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssociationClassCallExpCS_AContext ------------------------------------------------------------------

OclParser::AssociationClassCallExpCS_AContext::AssociationClassCallExpCS_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::AssociationClassCallExpCS_AContext::DOT() {
  return getToken(OclParser::DOT, 0);
}

OclParser::SimpleNameCSContext* OclParser::AssociationClassCallExpCS_AContext::simpleNameCS() {
  return getRuleContext<OclParser::SimpleNameCSContext>(0);
}

tree::TerminalNode* OclParser::AssociationClassCallExpCS_AContext::LBRACE() {
  return getToken(OclParser::LBRACE, 0);
}

OclParser::ArgumentsCSContext* OclParser::AssociationClassCallExpCS_AContext::argumentsCS() {
  return getRuleContext<OclParser::ArgumentsCSContext>(0);
}

tree::TerminalNode* OclParser::AssociationClassCallExpCS_AContext::RBRACE() {
  return getToken(OclParser::RBRACE, 0);
}

OclParser::IsMarkedPreCSContext* OclParser::AssociationClassCallExpCS_AContext::isMarkedPreCS() {
  return getRuleContext<OclParser::IsMarkedPreCSContext>(0);
}


size_t OclParser::AssociationClassCallExpCS_AContext::getRuleIndex() const {
  return OclParser::RuleAssociationClassCallExpCS_A;
}

void OclParser::AssociationClassCallExpCS_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssociationClassCallExpCS_A(this);
}

void OclParser::AssociationClassCallExpCS_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssociationClassCallExpCS_A(this);
}


antlrcpp::Any OclParser::AssociationClassCallExpCS_AContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitAssociationClassCallExpCS_A(this);
  else
    return visitor->visitChildren(this);
}

OclParser::AssociationClassCallExpCS_AContext* OclParser::associationClassCallExpCS_A() {
  AssociationClassCallExpCS_AContext *_localctx = _tracker.createInstance<AssociationClassCallExpCS_AContext>(_ctx, getState());
  enterRule(_localctx, 74, OclParser::RuleAssociationClassCallExpCS_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(432);
    match(OclParser::DOT);
    setState(433);
    simpleNameCS();
    setState(438);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      setState(434);
      match(OclParser::LBRACE);
      setState(435);
      argumentsCS();
      setState(436);
      match(OclParser::RBRACE);
      break;
    }

    }
    setState(441);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      setState(440);
      isMarkedPreCS();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssociationClassCallExpCS_BContext ------------------------------------------------------------------

OclParser::AssociationClassCallExpCS_BContext::AssociationClassCallExpCS_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::SimpleNameCSContext* OclParser::AssociationClassCallExpCS_BContext::simpleNameCS() {
  return getRuleContext<OclParser::SimpleNameCSContext>(0);
}

tree::TerminalNode* OclParser::AssociationClassCallExpCS_BContext::LBRACE() {
  return getToken(OclParser::LBRACE, 0);
}

OclParser::ArgumentsCSContext* OclParser::AssociationClassCallExpCS_BContext::argumentsCS() {
  return getRuleContext<OclParser::ArgumentsCSContext>(0);
}

tree::TerminalNode* OclParser::AssociationClassCallExpCS_BContext::RBRACE() {
  return getToken(OclParser::RBRACE, 0);
}

OclParser::IsMarkedPreCSContext* OclParser::AssociationClassCallExpCS_BContext::isMarkedPreCS() {
  return getRuleContext<OclParser::IsMarkedPreCSContext>(0);
}


size_t OclParser::AssociationClassCallExpCS_BContext::getRuleIndex() const {
  return OclParser::RuleAssociationClassCallExpCS_B;
}

void OclParser::AssociationClassCallExpCS_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssociationClassCallExpCS_B(this);
}

void OclParser::AssociationClassCallExpCS_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssociationClassCallExpCS_B(this);
}


antlrcpp::Any OclParser::AssociationClassCallExpCS_BContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitAssociationClassCallExpCS_B(this);
  else
    return visitor->visitChildren(this);
}

OclParser::AssociationClassCallExpCS_BContext* OclParser::associationClassCallExpCS_B() {
  AssociationClassCallExpCS_BContext *_localctx = _tracker.createInstance<AssociationClassCallExpCS_BContext>(_ctx, getState());
  enterRule(_localctx, 76, OclParser::RuleAssociationClassCallExpCS_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(443);
    simpleNameCS();
    setState(448);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      setState(444);
      match(OclParser::LBRACE);
      setState(445);
      argumentsCS();
      setState(446);
      match(OclParser::RBRACE);
      break;
    }

    }
    setState(451);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      setState(450);
      isMarkedPreCS();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IsMarkedPreCSContext ------------------------------------------------------------------

OclParser::IsMarkedPreCSContext::IsMarkedPreCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::IsMarkedPreCSContext::AT() {
  return getToken(OclParser::AT, 0);
}

tree::TerminalNode* OclParser::IsMarkedPreCSContext::PRE() {
  return getToken(OclParser::PRE, 0);
}


size_t OclParser::IsMarkedPreCSContext::getRuleIndex() const {
  return OclParser::RuleIsMarkedPreCS;
}

void OclParser::IsMarkedPreCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIsMarkedPreCS(this);
}

void OclParser::IsMarkedPreCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIsMarkedPreCS(this);
}


antlrcpp::Any OclParser::IsMarkedPreCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitIsMarkedPreCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::IsMarkedPreCSContext* OclParser::isMarkedPreCS() {
  IsMarkedPreCSContext *_localctx = _tracker.createInstance<IsMarkedPreCSContext>(_ctx, getState());
  enterRule(_localctx, 78, OclParser::RuleIsMarkedPreCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(453);
    match(OclParser::AT);
    setState(454);
    match(OclParser::PRE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentsCSContext ------------------------------------------------------------------

OclParser::ArgumentsCSContext::ArgumentsCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::OclExpressionCSContext* OclParser::ArgumentsCSContext::oclExpressionCS() {
  return getRuleContext<OclParser::OclExpressionCSContext>(0);
}

tree::TerminalNode* OclParser::ArgumentsCSContext::COMMA() {
  return getToken(OclParser::COMMA, 0);
}

OclParser::ArgumentsCSContext* OclParser::ArgumentsCSContext::argumentsCS() {
  return getRuleContext<OclParser::ArgumentsCSContext>(0);
}


size_t OclParser::ArgumentsCSContext::getRuleIndex() const {
  return OclParser::RuleArgumentsCS;
}

void OclParser::ArgumentsCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgumentsCS(this);
}

void OclParser::ArgumentsCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgumentsCS(this);
}


antlrcpp::Any OclParser::ArgumentsCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitArgumentsCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::ArgumentsCSContext* OclParser::argumentsCS() {
  ArgumentsCSContext *_localctx = _tracker.createInstance<ArgumentsCSContext>(_ctx, getState());
  enterRule(_localctx, 80, OclParser::RuleArgumentsCS);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(456);
    oclExpressionCS(0);
    setState(459);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OclParser::COMMA) {
      setState(457);
      match(OclParser::COMMA);
      setState(458);
      argumentsCS();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LetExpCSContext ------------------------------------------------------------------

OclParser::LetExpCSContext::LetExpCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::LetExpCSContext::LET() {
  return getToken(OclParser::LET, 0);
}

OclParser::VariableDeclarationCSContext* OclParser::LetExpCSContext::variableDeclarationCS() {
  return getRuleContext<OclParser::VariableDeclarationCSContext>(0);
}

OclParser::LetExpSubCSContext* OclParser::LetExpCSContext::letExpSubCS() {
  return getRuleContext<OclParser::LetExpSubCSContext>(0);
}


size_t OclParser::LetExpCSContext::getRuleIndex() const {
  return OclParser::RuleLetExpCS;
}

void OclParser::LetExpCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLetExpCS(this);
}

void OclParser::LetExpCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLetExpCS(this);
}


antlrcpp::Any OclParser::LetExpCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitLetExpCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::LetExpCSContext* OclParser::letExpCS() {
  LetExpCSContext *_localctx = _tracker.createInstance<LetExpCSContext>(_ctx, getState());
  enterRule(_localctx, 82, OclParser::RuleLetExpCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(461);
    match(OclParser::LET);
    setState(462);
    variableDeclarationCS();
    setState(463);
    letExpSubCS();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LetExpSubCSContext ------------------------------------------------------------------

OclParser::LetExpSubCSContext::LetExpSubCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::LetExpSubCSContext::COMMA() {
  return getToken(OclParser::COMMA, 0);
}

OclParser::VariableDeclarationCSContext* OclParser::LetExpSubCSContext::variableDeclarationCS() {
  return getRuleContext<OclParser::VariableDeclarationCSContext>(0);
}

OclParser::LetExpSubCSContext* OclParser::LetExpSubCSContext::letExpSubCS() {
  return getRuleContext<OclParser::LetExpSubCSContext>(0);
}

tree::TerminalNode* OclParser::LetExpSubCSContext::IN() {
  return getToken(OclParser::IN, 0);
}

OclParser::OclExpressionCSContext* OclParser::LetExpSubCSContext::oclExpressionCS() {
  return getRuleContext<OclParser::OclExpressionCSContext>(0);
}


size_t OclParser::LetExpSubCSContext::getRuleIndex() const {
  return OclParser::RuleLetExpSubCS;
}

void OclParser::LetExpSubCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLetExpSubCS(this);
}

void OclParser::LetExpSubCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLetExpSubCS(this);
}


antlrcpp::Any OclParser::LetExpSubCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitLetExpSubCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::LetExpSubCSContext* OclParser::letExpSubCS() {
  LetExpSubCSContext *_localctx = _tracker.createInstance<LetExpSubCSContext>(_ctx, getState());
  enterRule(_localctx, 84, OclParser::RuleLetExpSubCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(471);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case OclParser::COMMA: {
        enterOuterAlt(_localctx, 1);
        setState(465);
        match(OclParser::COMMA);
        setState(466);
        variableDeclarationCS();
        setState(467);
        letExpSubCS();
        break;
      }

      case OclParser::IN: {
        enterOuterAlt(_localctx, 2);
        setState(469);
        match(OclParser::IN);
        setState(470);
        oclExpressionCS(0);
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

//----------------- OclMessageExpCSContext ------------------------------------------------------------------

OclParser::OclMessageExpCSContext::OclMessageExpCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::OclMessageExpCSContext::DHAT() {
  return getToken(OclParser::DHAT, 0);
}

OclParser::SimpleNameCSContext* OclParser::OclMessageExpCSContext::simpleNameCS() {
  return getRuleContext<OclParser::SimpleNameCSContext>(0);
}

tree::TerminalNode* OclParser::OclMessageExpCSContext::LPAREN() {
  return getToken(OclParser::LPAREN, 0);
}

tree::TerminalNode* OclParser::OclMessageExpCSContext::RPAREN() {
  return getToken(OclParser::RPAREN, 0);
}

OclParser::OclMessageArgumentsCSContext* OclParser::OclMessageExpCSContext::oclMessageArgumentsCS() {
  return getRuleContext<OclParser::OclMessageArgumentsCSContext>(0);
}

tree::TerminalNode* OclParser::OclMessageExpCSContext::HAT() {
  return getToken(OclParser::HAT, 0);
}


size_t OclParser::OclMessageExpCSContext::getRuleIndex() const {
  return OclParser::RuleOclMessageExpCS;
}

void OclParser::OclMessageExpCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOclMessageExpCS(this);
}

void OclParser::OclMessageExpCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOclMessageExpCS(this);
}


antlrcpp::Any OclParser::OclMessageExpCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitOclMessageExpCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::OclMessageExpCSContext* OclParser::oclMessageExpCS() {
  OclMessageExpCSContext *_localctx = _tracker.createInstance<OclMessageExpCSContext>(_ctx, getState());
  enterRule(_localctx, 86, OclParser::RuleOclMessageExpCS);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(489);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case OclParser::DHAT: {
        enterOuterAlt(_localctx, 1);
        setState(473);
        match(OclParser::DHAT);
        setState(474);
        simpleNameCS();
        setState(475);
        match(OclParser::LPAREN);
        setState(477);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << OclParser::IF)
          | (1ULL << OclParser::LET)
          | (1ULL << OclParser::SELF)
          | (1ULL << OclParser::TUPLE)
          | (1ULL << OclParser::NULLEXP)
          | (1ULL << OclParser::INVALID)
          | (1ULL << OclParser::COLLECTION)
          | (1ULL << OclParser::BAG)
          | (1ULL << OclParser::ORDEREDSET)
          | (1ULL << OclParser::SEQUENCE)
          | (1ULL << OclParser::SET)
          | (1ULL << OclParser::OCLBOOLEAN)
          | (1ULL << OclParser::OCLINTEGER)
          | (1ULL << OclParser::OCLREAL)
          | (1ULL << OclParser::OCLSTRING)
          | (1ULL << OclParser::OCLUNLIMITEDNAT)
          | (1ULL << OclParser::OCLANY)
          | (1ULL << OclParser::OCLINVALID)
          | (1ULL << OclParser::OCLMESSAGE)
          | (1ULL << OclParser::OCLVOID)
          | (1ULL << OclParser::INT)
          | (1ULL << OclParser::REAL)
          | (1ULL << OclParser::BOOL)
          | (1ULL << OclParser::STRING_LITERAL)
          | (1ULL << OclParser::QUESTION)
          | (1ULL << OclParser::STAR))) != 0) || ((((_la - 74) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 74)) & ((1ULL << (OclParser::MINUS - 74))
          | (1ULL << (OclParser::NOT - 74))
          | (1ULL << (OclParser::ID - 74)))) != 0)) {
          setState(476);
          oclMessageArgumentsCS();
        }
        setState(479);
        match(OclParser::RPAREN);
        break;
      }

      case OclParser::HAT: {
        enterOuterAlt(_localctx, 2);
        setState(481);
        match(OclParser::HAT);
        setState(482);
        simpleNameCS();
        setState(483);
        match(OclParser::LPAREN);
        setState(485);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << OclParser::IF)
          | (1ULL << OclParser::LET)
          | (1ULL << OclParser::SELF)
          | (1ULL << OclParser::TUPLE)
          | (1ULL << OclParser::NULLEXP)
          | (1ULL << OclParser::INVALID)
          | (1ULL << OclParser::COLLECTION)
          | (1ULL << OclParser::BAG)
          | (1ULL << OclParser::ORDEREDSET)
          | (1ULL << OclParser::SEQUENCE)
          | (1ULL << OclParser::SET)
          | (1ULL << OclParser::OCLBOOLEAN)
          | (1ULL << OclParser::OCLINTEGER)
          | (1ULL << OclParser::OCLREAL)
          | (1ULL << OclParser::OCLSTRING)
          | (1ULL << OclParser::OCLUNLIMITEDNAT)
          | (1ULL << OclParser::OCLANY)
          | (1ULL << OclParser::OCLINVALID)
          | (1ULL << OclParser::OCLMESSAGE)
          | (1ULL << OclParser::OCLVOID)
          | (1ULL << OclParser::INT)
          | (1ULL << OclParser::REAL)
          | (1ULL << OclParser::BOOL)
          | (1ULL << OclParser::STRING_LITERAL)
          | (1ULL << OclParser::QUESTION)
          | (1ULL << OclParser::STAR))) != 0) || ((((_la - 74) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 74)) & ((1ULL << (OclParser::MINUS - 74))
          | (1ULL << (OclParser::NOT - 74))
          | (1ULL << (OclParser::ID - 74)))) != 0)) {
          setState(484);
          oclMessageArgumentsCS();
        }
        setState(487);
        match(OclParser::RPAREN);
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

//----------------- OclMessageArgumentsCSContext ------------------------------------------------------------------

OclParser::OclMessageArgumentsCSContext::OclMessageArgumentsCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::OclMessageArgCSContext* OclParser::OclMessageArgumentsCSContext::oclMessageArgCS() {
  return getRuleContext<OclParser::OclMessageArgCSContext>(0);
}

tree::TerminalNode* OclParser::OclMessageArgumentsCSContext::COMMA() {
  return getToken(OclParser::COMMA, 0);
}

OclParser::OclMessageArgumentsCSContext* OclParser::OclMessageArgumentsCSContext::oclMessageArgumentsCS() {
  return getRuleContext<OclParser::OclMessageArgumentsCSContext>(0);
}


size_t OclParser::OclMessageArgumentsCSContext::getRuleIndex() const {
  return OclParser::RuleOclMessageArgumentsCS;
}

void OclParser::OclMessageArgumentsCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOclMessageArgumentsCS(this);
}

void OclParser::OclMessageArgumentsCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOclMessageArgumentsCS(this);
}


antlrcpp::Any OclParser::OclMessageArgumentsCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitOclMessageArgumentsCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::OclMessageArgumentsCSContext* OclParser::oclMessageArgumentsCS() {
  OclMessageArgumentsCSContext *_localctx = _tracker.createInstance<OclMessageArgumentsCSContext>(_ctx, getState());
  enterRule(_localctx, 88, OclParser::RuleOclMessageArgumentsCS);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(491);
    oclMessageArgCS();
    setState(494);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OclParser::COMMA) {
      setState(492);
      match(OclParser::COMMA);
      setState(493);
      oclMessageArgumentsCS();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OclMessageArgCSContext ------------------------------------------------------------------

OclParser::OclMessageArgCSContext::OclMessageArgCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::OclMessageArgCSContext::QUESTION() {
  return getToken(OclParser::QUESTION, 0);
}

tree::TerminalNode* OclParser::OclMessageArgCSContext::COLON() {
  return getToken(OclParser::COLON, 0);
}

OclParser::TypeCSContext* OclParser::OclMessageArgCSContext::typeCS() {
  return getRuleContext<OclParser::TypeCSContext>(0);
}

OclParser::OclExpressionCSContext* OclParser::OclMessageArgCSContext::oclExpressionCS() {
  return getRuleContext<OclParser::OclExpressionCSContext>(0);
}


size_t OclParser::OclMessageArgCSContext::getRuleIndex() const {
  return OclParser::RuleOclMessageArgCS;
}

void OclParser::OclMessageArgCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOclMessageArgCS(this);
}

void OclParser::OclMessageArgCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOclMessageArgCS(this);
}


antlrcpp::Any OclParser::OclMessageArgCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitOclMessageArgCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::OclMessageArgCSContext* OclParser::oclMessageArgCS() {
  OclMessageArgCSContext *_localctx = _tracker.createInstance<OclMessageArgCSContext>(_ctx, getState());
  enterRule(_localctx, 90, OclParser::RuleOclMessageArgCS);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(502);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case OclParser::QUESTION: {
        enterOuterAlt(_localctx, 1);
        setState(496);
        match(OclParser::QUESTION);
        setState(499);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == OclParser::COLON) {
          setState(497);
          match(OclParser::COLON);
          setState(498);
          typeCS();
        }
        break;
      }

      case OclParser::IF:
      case OclParser::LET:
      case OclParser::SELF:
      case OclParser::TUPLE:
      case OclParser::NULLEXP:
      case OclParser::INVALID:
      case OclParser::COLLECTION:
      case OclParser::BAG:
      case OclParser::ORDEREDSET:
      case OclParser::SEQUENCE:
      case OclParser::SET:
      case OclParser::OCLBOOLEAN:
      case OclParser::OCLINTEGER:
      case OclParser::OCLREAL:
      case OclParser::OCLSTRING:
      case OclParser::OCLUNLIMITEDNAT:
      case OclParser::OCLANY:
      case OclParser::OCLINVALID:
      case OclParser::OCLMESSAGE:
      case OclParser::OCLVOID:
      case OclParser::INT:
      case OclParser::REAL:
      case OclParser::BOOL:
      case OclParser::STRING_LITERAL:
      case OclParser::STAR:
      case OclParser::MINUS:
      case OclParser::NOT:
      case OclParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(501);
        oclExpressionCS(0);
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

//----------------- IfExpCSContext ------------------------------------------------------------------

OclParser::IfExpCSContext::IfExpCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::IfExpCSContext::IF() {
  return getToken(OclParser::IF, 0);
}

std::vector<OclParser::OclExpressionCSContext *> OclParser::IfExpCSContext::oclExpressionCS() {
  return getRuleContexts<OclParser::OclExpressionCSContext>();
}

OclParser::OclExpressionCSContext* OclParser::IfExpCSContext::oclExpressionCS(size_t i) {
  return getRuleContext<OclParser::OclExpressionCSContext>(i);
}

tree::TerminalNode* OclParser::IfExpCSContext::THEN() {
  return getToken(OclParser::THEN, 0);
}

tree::TerminalNode* OclParser::IfExpCSContext::ELSE() {
  return getToken(OclParser::ELSE, 0);
}

tree::TerminalNode* OclParser::IfExpCSContext::ENDIF() {
  return getToken(OclParser::ENDIF, 0);
}


size_t OclParser::IfExpCSContext::getRuleIndex() const {
  return OclParser::RuleIfExpCS;
}

void OclParser::IfExpCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfExpCS(this);
}

void OclParser::IfExpCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfExpCS(this);
}


antlrcpp::Any OclParser::IfExpCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitIfExpCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::IfExpCSContext* OclParser::ifExpCS() {
  IfExpCSContext *_localctx = _tracker.createInstance<IfExpCSContext>(_ctx, getState());
  enterRule(_localctx, 92, OclParser::RuleIfExpCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(504);
    match(OclParser::IF);
    setState(505);
    oclExpressionCS(0);
    setState(506);
    match(OclParser::THEN);
    setState(507);
    oclExpressionCS(0);
    setState(508);
    match(OclParser::ELSE);
    setState(509);
    oclExpressionCS(0);
    setState(510);
    match(OclParser::ENDIF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NullLiteralExpCSContext ------------------------------------------------------------------

OclParser::NullLiteralExpCSContext::NullLiteralExpCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::NullLiteralExpCSContext::NULLEXP() {
  return getToken(OclParser::NULLEXP, 0);
}


size_t OclParser::NullLiteralExpCSContext::getRuleIndex() const {
  return OclParser::RuleNullLiteralExpCS;
}

void OclParser::NullLiteralExpCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNullLiteralExpCS(this);
}

void OclParser::NullLiteralExpCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNullLiteralExpCS(this);
}


antlrcpp::Any OclParser::NullLiteralExpCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitNullLiteralExpCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::NullLiteralExpCSContext* OclParser::nullLiteralExpCS() {
  NullLiteralExpCSContext *_localctx = _tracker.createInstance<NullLiteralExpCSContext>(_ctx, getState());
  enterRule(_localctx, 94, OclParser::RuleNullLiteralExpCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(512);
    match(OclParser::NULLEXP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InvalidLiteralExpCSContext ------------------------------------------------------------------

OclParser::InvalidLiteralExpCSContext::InvalidLiteralExpCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::InvalidLiteralExpCSContext::INVALID() {
  return getToken(OclParser::INVALID, 0);
}


size_t OclParser::InvalidLiteralExpCSContext::getRuleIndex() const {
  return OclParser::RuleInvalidLiteralExpCS;
}

void OclParser::InvalidLiteralExpCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInvalidLiteralExpCS(this);
}

void OclParser::InvalidLiteralExpCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInvalidLiteralExpCS(this);
}


antlrcpp::Any OclParser::InvalidLiteralExpCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitInvalidLiteralExpCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::InvalidLiteralExpCSContext* OclParser::invalidLiteralExpCS() {
  InvalidLiteralExpCSContext *_localctx = _tracker.createInstance<InvalidLiteralExpCSContext>(_ctx, getState());
  enterRule(_localctx, 96, OclParser::RuleInvalidLiteralExpCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(514);
    match(OclParser::INVALID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryLiteralExpCSContext ------------------------------------------------------------------

OclParser::UnaryLiteralExpCSContext::UnaryLiteralExpCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::UnaryLiteralExpCSContext::MINUS() {
  return getToken(OclParser::MINUS, 0);
}

tree::TerminalNode* OclParser::UnaryLiteralExpCSContext::NOT() {
  return getToken(OclParser::NOT, 0);
}


size_t OclParser::UnaryLiteralExpCSContext::getRuleIndex() const {
  return OclParser::RuleUnaryLiteralExpCS;
}

void OclParser::UnaryLiteralExpCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryLiteralExpCS(this);
}

void OclParser::UnaryLiteralExpCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryLiteralExpCS(this);
}


antlrcpp::Any OclParser::UnaryLiteralExpCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitUnaryLiteralExpCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::UnaryLiteralExpCSContext* OclParser::unaryLiteralExpCS() {
  UnaryLiteralExpCSContext *_localctx = _tracker.createInstance<UnaryLiteralExpCSContext>(_ctx, getState());
  enterRule(_localctx, 98, OclParser::RuleUnaryLiteralExpCS);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(516);
    _la = _input->LA(1);
    if (!(_la == OclParser::MINUS

    || _la == OclParser::NOT)) {
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

//----------------- BinaryLiteralExpCSContext ------------------------------------------------------------------

OclParser::BinaryLiteralExpCSContext::BinaryLiteralExpCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::BinaryLiteralExpCSContext::STAR() {
  return getToken(OclParser::STAR, 0);
}

tree::TerminalNode* OclParser::BinaryLiteralExpCSContext::SLASH() {
  return getToken(OclParser::SLASH, 0);
}

tree::TerminalNode* OclParser::BinaryLiteralExpCSContext::PLUS() {
  return getToken(OclParser::PLUS, 0);
}

tree::TerminalNode* OclParser::BinaryLiteralExpCSContext::MINUS() {
  return getToken(OclParser::MINUS, 0);
}

tree::TerminalNode* OclParser::BinaryLiteralExpCSContext::LT() {
  return getToken(OclParser::LT, 0);
}

tree::TerminalNode* OclParser::BinaryLiteralExpCSContext::LTE() {
  return getToken(OclParser::LTE, 0);
}

tree::TerminalNode* OclParser::BinaryLiteralExpCSContext::GTE() {
  return getToken(OclParser::GTE, 0);
}

tree::TerminalNode* OclParser::BinaryLiteralExpCSContext::GT() {
  return getToken(OclParser::GT, 0);
}

tree::TerminalNode* OclParser::BinaryLiteralExpCSContext::ASSIGN() {
  return getToken(OclParser::ASSIGN, 0);
}

tree::TerminalNode* OclParser::BinaryLiteralExpCSContext::INEQUAL() {
  return getToken(OclParser::INEQUAL, 0);
}

tree::TerminalNode* OclParser::BinaryLiteralExpCSContext::KEYAND() {
  return getToken(OclParser::KEYAND, 0);
}

tree::TerminalNode* OclParser::BinaryLiteralExpCSContext::KEYOR() {
  return getToken(OclParser::KEYOR, 0);
}

tree::TerminalNode* OclParser::BinaryLiteralExpCSContext::IMPLIES() {
  return getToken(OclParser::IMPLIES, 0);
}


size_t OclParser::BinaryLiteralExpCSContext::getRuleIndex() const {
  return OclParser::RuleBinaryLiteralExpCS;
}

void OclParser::BinaryLiteralExpCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryLiteralExpCS(this);
}

void OclParser::BinaryLiteralExpCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryLiteralExpCS(this);
}


antlrcpp::Any OclParser::BinaryLiteralExpCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitBinaryLiteralExpCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::BinaryLiteralExpCSContext* OclParser::binaryLiteralExpCS() {
  BinaryLiteralExpCSContext *_localctx = _tracker.createInstance<BinaryLiteralExpCSContext>(_ctx, getState());
  enterRule(_localctx, 100, OclParser::RuleBinaryLiteralExpCS);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(518);
    _la = _input->LA(1);
    if (!(((((_la - 54) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 54)) & ((1ULL << (OclParser::LT - 54))
      | (1ULL << (OclParser::GT - 54))
      | (1ULL << (OclParser::LTE - 54))
      | (1ULL << (OclParser::GTE - 54))
      | (1ULL << (OclParser::ASSIGN - 54))
      | (1ULL << (OclParser::INEQUAL - 54))
      | (1ULL << (OclParser::STAR - 54))
      | (1ULL << (OclParser::PLUS - 54))
      | (1ULL << (OclParser::KEYOR - 54))
      | (1ULL << (OclParser::KEYAND - 54))
      | (1ULL << (OclParser::IMPLIES - 54))
      | (1ULL << (OclParser::SLASH - 54))
      | (1ULL << (OclParser::MINUS - 54)))) != 0))) {
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

//----------------- PackageDeclarationCSContext ------------------------------------------------------------------

OclParser::PackageDeclarationCSContext::PackageDeclarationCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::PackageDeclarationCSContext::PACKAGE() {
  return getToken(OclParser::PACKAGE, 0);
}

OclParser::PathNameCSContext* OclParser::PackageDeclarationCSContext::pathNameCS() {
  return getRuleContext<OclParser::PathNameCSContext>(0);
}

tree::TerminalNode* OclParser::PackageDeclarationCSContext::ENDPACKAGE() {
  return getToken(OclParser::ENDPACKAGE, 0);
}

std::vector<OclParser::ContextDeclarationCSContext *> OclParser::PackageDeclarationCSContext::contextDeclarationCS() {
  return getRuleContexts<OclParser::ContextDeclarationCSContext>();
}

OclParser::ContextDeclarationCSContext* OclParser::PackageDeclarationCSContext::contextDeclarationCS(size_t i) {
  return getRuleContext<OclParser::ContextDeclarationCSContext>(i);
}


size_t OclParser::PackageDeclarationCSContext::getRuleIndex() const {
  return OclParser::RulePackageDeclarationCS;
}

void OclParser::PackageDeclarationCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPackageDeclarationCS(this);
}

void OclParser::PackageDeclarationCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPackageDeclarationCS(this);
}


antlrcpp::Any OclParser::PackageDeclarationCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitPackageDeclarationCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::PackageDeclarationCSContext* OclParser::packageDeclarationCS() {
  PackageDeclarationCSContext *_localctx = _tracker.createInstance<PackageDeclarationCSContext>(_ctx, getState());
  enterRule(_localctx, 102, OclParser::RulePackageDeclarationCS);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(536);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case OclParser::PACKAGE: {
        enterOuterAlt(_localctx, 1);
        setState(520);
        match(OclParser::PACKAGE);
        setState(521);
        pathNameCS(0);
        setState(525);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == OclParser::CONTEXT) {
          setState(522);
          contextDeclarationCS();
          setState(527);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(528);
        match(OclParser::ENDPACKAGE);
        break;
      }

      case OclParser::EOF:
      case OclParser::CONTEXT: {
        enterOuterAlt(_localctx, 2);
        setState(533);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == OclParser::CONTEXT) {
          setState(530);
          contextDeclarationCS();
          setState(535);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
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

//----------------- ContextDeclarationCSContext ------------------------------------------------------------------

OclParser::ContextDeclarationCSContext::ContextDeclarationCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::PropertyContextDeclCSContext* OclParser::ContextDeclarationCSContext::propertyContextDeclCS() {
  return getRuleContext<OclParser::PropertyContextDeclCSContext>(0);
}

OclParser::ClassifierContextDeclCSContext* OclParser::ContextDeclarationCSContext::classifierContextDeclCS() {
  return getRuleContext<OclParser::ClassifierContextDeclCSContext>(0);
}

OclParser::OperationContextDeclCSContext* OclParser::ContextDeclarationCSContext::operationContextDeclCS() {
  return getRuleContext<OclParser::OperationContextDeclCSContext>(0);
}


size_t OclParser::ContextDeclarationCSContext::getRuleIndex() const {
  return OclParser::RuleContextDeclarationCS;
}

void OclParser::ContextDeclarationCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContextDeclarationCS(this);
}

void OclParser::ContextDeclarationCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContextDeclarationCS(this);
}


antlrcpp::Any OclParser::ContextDeclarationCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitContextDeclarationCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::ContextDeclarationCSContext* OclParser::contextDeclarationCS() {
  ContextDeclarationCSContext *_localctx = _tracker.createInstance<ContextDeclarationCSContext>(_ctx, getState());
  enterRule(_localctx, 104, OclParser::RuleContextDeclarationCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(541);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(538);
      propertyContextDeclCS();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(539);
      classifierContextDeclCS();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(540);
      operationContextDeclCS();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassifierContextDeclCSContext ------------------------------------------------------------------

OclParser::ClassifierContextDeclCSContext::ClassifierContextDeclCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::ClassifierContextDeclCSContext::CONTEXT() {
  return getToken(OclParser::CONTEXT, 0);
}

OclParser::PathNameCSContext* OclParser::ClassifierContextDeclCSContext::pathNameCS() {
  return getRuleContext<OclParser::PathNameCSContext>(0);
}

OclParser::InvOrDefCSContext* OclParser::ClassifierContextDeclCSContext::invOrDefCS() {
  return getRuleContext<OclParser::InvOrDefCSContext>(0);
}

OclParser::SimpleNameCSContext* OclParser::ClassifierContextDeclCSContext::simpleNameCS() {
  return getRuleContext<OclParser::SimpleNameCSContext>(0);
}

tree::TerminalNode* OclParser::ClassifierContextDeclCSContext::COLON() {
  return getToken(OclParser::COLON, 0);
}


size_t OclParser::ClassifierContextDeclCSContext::getRuleIndex() const {
  return OclParser::RuleClassifierContextDeclCS;
}

void OclParser::ClassifierContextDeclCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassifierContextDeclCS(this);
}

void OclParser::ClassifierContextDeclCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassifierContextDeclCS(this);
}


antlrcpp::Any OclParser::ClassifierContextDeclCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitClassifierContextDeclCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::ClassifierContextDeclCSContext* OclParser::classifierContextDeclCS() {
  ClassifierContextDeclCSContext *_localctx = _tracker.createInstance<ClassifierContextDeclCSContext>(_ctx, getState());
  enterRule(_localctx, 106, OclParser::RuleClassifierContextDeclCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(553);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(543);
      match(OclParser::CONTEXT);
      setState(544);
      pathNameCS(0);
      setState(545);
      invOrDefCS();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(547);
      match(OclParser::CONTEXT);
      setState(548);
      simpleNameCS();
      setState(549);
      match(OclParser::COLON);
      setState(550);
      pathNameCS(0);
      setState(551);
      invOrDefCS();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperationContextDeclCSContext ------------------------------------------------------------------

OclParser::OperationContextDeclCSContext::OperationContextDeclCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::OperationContextDeclCSContext::CONTEXT() {
  return getToken(OclParser::CONTEXT, 0);
}

OclParser::OperationCSContext* OclParser::OperationContextDeclCSContext::operationCS() {
  return getRuleContext<OclParser::OperationCSContext>(0);
}

OclParser::PrePostOrBodyDeclCSContext* OclParser::OperationContextDeclCSContext::prePostOrBodyDeclCS() {
  return getRuleContext<OclParser::PrePostOrBodyDeclCSContext>(0);
}


size_t OclParser::OperationContextDeclCSContext::getRuleIndex() const {
  return OclParser::RuleOperationContextDeclCS;
}

void OclParser::OperationContextDeclCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperationContextDeclCS(this);
}

void OclParser::OperationContextDeclCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperationContextDeclCS(this);
}


antlrcpp::Any OclParser::OperationContextDeclCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitOperationContextDeclCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::OperationContextDeclCSContext* OclParser::operationContextDeclCS() {
  OperationContextDeclCSContext *_localctx = _tracker.createInstance<OperationContextDeclCSContext>(_ctx, getState());
  enterRule(_localctx, 108, OclParser::RuleOperationContextDeclCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(555);
    match(OclParser::CONTEXT);
    setState(556);
    operationCS();
    setState(557);
    prePostOrBodyDeclCS();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertyContextDeclCSContext ------------------------------------------------------------------

OclParser::PropertyContextDeclCSContext::PropertyContextDeclCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::PropertyContextDeclCSContext::CONTEXT() {
  return getToken(OclParser::CONTEXT, 0);
}

OclParser::PathNameCSContext* OclParser::PropertyContextDeclCSContext::pathNameCS() {
  return getRuleContext<OclParser::PathNameCSContext>(0);
}

tree::TerminalNode* OclParser::PropertyContextDeclCSContext::COLONCOLON() {
  return getToken(OclParser::COLONCOLON, 0);
}

OclParser::SimpleNameCSContext* OclParser::PropertyContextDeclCSContext::simpleNameCS() {
  return getRuleContext<OclParser::SimpleNameCSContext>(0);
}

tree::TerminalNode* OclParser::PropertyContextDeclCSContext::COLON() {
  return getToken(OclParser::COLON, 0);
}

OclParser::TypeCSContext* OclParser::PropertyContextDeclCSContext::typeCS() {
  return getRuleContext<OclParser::TypeCSContext>(0);
}

OclParser::InitOrDerValueCSContext* OclParser::PropertyContextDeclCSContext::initOrDerValueCS() {
  return getRuleContext<OclParser::InitOrDerValueCSContext>(0);
}


size_t OclParser::PropertyContextDeclCSContext::getRuleIndex() const {
  return OclParser::RulePropertyContextDeclCS;
}

void OclParser::PropertyContextDeclCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyContextDeclCS(this);
}

void OclParser::PropertyContextDeclCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyContextDeclCS(this);
}


antlrcpp::Any OclParser::PropertyContextDeclCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitPropertyContextDeclCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::PropertyContextDeclCSContext* OclParser::propertyContextDeclCS() {
  PropertyContextDeclCSContext *_localctx = _tracker.createInstance<PropertyContextDeclCSContext>(_ctx, getState());
  enterRule(_localctx, 110, OclParser::RulePropertyContextDeclCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(559);
    match(OclParser::CONTEXT);
    setState(560);
    pathNameCS(0);
    setState(561);
    match(OclParser::COLONCOLON);
    setState(562);
    simpleNameCS();
    setState(563);
    match(OclParser::COLON);
    setState(564);
    typeCS();
    setState(565);
    initOrDerValueCS();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefExpressionCSContext ------------------------------------------------------------------

OclParser::DefExpressionCSContext::DefExpressionCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::VariableDeclarationCSContext* OclParser::DefExpressionCSContext::variableDeclarationCS() {
  return getRuleContext<OclParser::VariableDeclarationCSContext>(0);
}

tree::TerminalNode* OclParser::DefExpressionCSContext::ASSIGN() {
  return getToken(OclParser::ASSIGN, 0);
}

OclParser::OclExpressionCSContext* OclParser::DefExpressionCSContext::oclExpressionCS() {
  return getRuleContext<OclParser::OclExpressionCSContext>(0);
}

OclParser::OperationCSContext* OclParser::DefExpressionCSContext::operationCS() {
  return getRuleContext<OclParser::OperationCSContext>(0);
}


size_t OclParser::DefExpressionCSContext::getRuleIndex() const {
  return OclParser::RuleDefExpressionCS;
}

void OclParser::DefExpressionCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefExpressionCS(this);
}

void OclParser::DefExpressionCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefExpressionCS(this);
}


antlrcpp::Any OclParser::DefExpressionCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitDefExpressionCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::DefExpressionCSContext* OclParser::defExpressionCS() {
  DefExpressionCSContext *_localctx = _tracker.createInstance<DefExpressionCSContext>(_ctx, getState());
  enterRule(_localctx, 112, OclParser::RuleDefExpressionCS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(575);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(567);
      variableDeclarationCS();
      setState(568);
      match(OclParser::ASSIGN);
      setState(569);
      oclExpressionCS(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(571);
      operationCS();
      setState(572);
      match(OclParser::ASSIGN);
      setState(573);
      oclExpressionCS(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InvOrDefCSContext ------------------------------------------------------------------

OclParser::InvOrDefCSContext::InvOrDefCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::InvOrDefCSContext::INV() {
  return getToken(OclParser::INV, 0);
}

tree::TerminalNode* OclParser::InvOrDefCSContext::COLON() {
  return getToken(OclParser::COLON, 0);
}

OclParser::OclExpressionCSContext* OclParser::InvOrDefCSContext::oclExpressionCS() {
  return getRuleContext<OclParser::OclExpressionCSContext>(0);
}

OclParser::SimpleNameCSContext* OclParser::InvOrDefCSContext::simpleNameCS() {
  return getRuleContext<OclParser::SimpleNameCSContext>(0);
}

tree::TerminalNode* OclParser::InvOrDefCSContext::DEF() {
  return getToken(OclParser::DEF, 0);
}

OclParser::DefExpressionCSContext* OclParser::InvOrDefCSContext::defExpressionCS() {
  return getRuleContext<OclParser::DefExpressionCSContext>(0);
}

tree::TerminalNode* OclParser::InvOrDefCSContext::STATIC() {
  return getToken(OclParser::STATIC, 0);
}


size_t OclParser::InvOrDefCSContext::getRuleIndex() const {
  return OclParser::RuleInvOrDefCS;
}

void OclParser::InvOrDefCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInvOrDefCS(this);
}

void OclParser::InvOrDefCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInvOrDefCS(this);
}


antlrcpp::Any OclParser::InvOrDefCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitInvOrDefCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::InvOrDefCSContext* OclParser::invOrDefCS() {
  InvOrDefCSContext *_localctx = _tracker.createInstance<InvOrDefCSContext>(_ctx, getState());
  enterRule(_localctx, 114, OclParser::RuleInvOrDefCS);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(592);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case OclParser::INV: {
        enterOuterAlt(_localctx, 1);
        setState(577);
        match(OclParser::INV);
        setState(579);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == OclParser::ID) {
          setState(578);
          simpleNameCS();
        }
        setState(581);
        match(OclParser::COLON);
        setState(582);
        oclExpressionCS(0);
        break;
      }

      case OclParser::STATIC:
      case OclParser::DEF: {
        enterOuterAlt(_localctx, 2);
        setState(584);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == OclParser::STATIC) {
          setState(583);
          match(OclParser::STATIC);
        }
        setState(586);
        match(OclParser::DEF);
        setState(588);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == OclParser::ID) {
          setState(587);
          simpleNameCS();
        }
        setState(590);
        match(OclParser::COLON);
        setState(591);
        defExpressionCS();
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

//----------------- InitOrDerValueCSContext ------------------------------------------------------------------

OclParser::InitOrDerValueCSContext::InitOrDerValueCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::InitOrDerValueCSContext::INIT() {
  return getToken(OclParser::INIT, 0);
}

tree::TerminalNode* OclParser::InitOrDerValueCSContext::COLON() {
  return getToken(OclParser::COLON, 0);
}

OclParser::OclExpressionCSContext* OclParser::InitOrDerValueCSContext::oclExpressionCS() {
  return getRuleContext<OclParser::OclExpressionCSContext>(0);
}

OclParser::InitOrDerValueCSContext* OclParser::InitOrDerValueCSContext::initOrDerValueCS() {
  return getRuleContext<OclParser::InitOrDerValueCSContext>(0);
}

tree::TerminalNode* OclParser::InitOrDerValueCSContext::DERIVE() {
  return getToken(OclParser::DERIVE, 0);
}


size_t OclParser::InitOrDerValueCSContext::getRuleIndex() const {
  return OclParser::RuleInitOrDerValueCS;
}

void OclParser::InitOrDerValueCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitOrDerValueCS(this);
}

void OclParser::InitOrDerValueCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitOrDerValueCS(this);
}


antlrcpp::Any OclParser::InitOrDerValueCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitInitOrDerValueCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::InitOrDerValueCSContext* OclParser::initOrDerValueCS() {
  InitOrDerValueCSContext *_localctx = _tracker.createInstance<InitOrDerValueCSContext>(_ctx, getState());
  enterRule(_localctx, 116, OclParser::RuleInitOrDerValueCS);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(606);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case OclParser::INIT: {
        enterOuterAlt(_localctx, 1);
        setState(594);
        match(OclParser::INIT);
        setState(595);
        match(OclParser::COLON);
        setState(596);
        oclExpressionCS(0);
        setState(598);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == OclParser::INIT

        || _la == OclParser::DERIVE) {
          setState(597);
          initOrDerValueCS();
        }
        break;
      }

      case OclParser::DERIVE: {
        enterOuterAlt(_localctx, 2);
        setState(600);
        match(OclParser::DERIVE);
        setState(601);
        match(OclParser::COLON);
        setState(602);
        oclExpressionCS(0);
        setState(604);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == OclParser::INIT

        || _la == OclParser::DERIVE) {
          setState(603);
          initOrDerValueCS();
        }
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

//----------------- PrePostOrBodyDeclCSContext ------------------------------------------------------------------

OclParser::PrePostOrBodyDeclCSContext::PrePostOrBodyDeclCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OclParser::PrePostOrBodyDeclCSContext::PRE() {
  return getToken(OclParser::PRE, 0);
}

tree::TerminalNode* OclParser::PrePostOrBodyDeclCSContext::COLON() {
  return getToken(OclParser::COLON, 0);
}

OclParser::OclExpressionCSContext* OclParser::PrePostOrBodyDeclCSContext::oclExpressionCS() {
  return getRuleContext<OclParser::OclExpressionCSContext>(0);
}

OclParser::SimpleNameCSContext* OclParser::PrePostOrBodyDeclCSContext::simpleNameCS() {
  return getRuleContext<OclParser::SimpleNameCSContext>(0);
}

OclParser::PrePostOrBodyDeclCSContext* OclParser::PrePostOrBodyDeclCSContext::prePostOrBodyDeclCS() {
  return getRuleContext<OclParser::PrePostOrBodyDeclCSContext>(0);
}

tree::TerminalNode* OclParser::PrePostOrBodyDeclCSContext::POST() {
  return getToken(OclParser::POST, 0);
}

tree::TerminalNode* OclParser::PrePostOrBodyDeclCSContext::BODY() {
  return getToken(OclParser::BODY, 0);
}


size_t OclParser::PrePostOrBodyDeclCSContext::getRuleIndex() const {
  return OclParser::RulePrePostOrBodyDeclCS;
}

void OclParser::PrePostOrBodyDeclCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrePostOrBodyDeclCS(this);
}

void OclParser::PrePostOrBodyDeclCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrePostOrBodyDeclCS(this);
}


antlrcpp::Any OclParser::PrePostOrBodyDeclCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitPrePostOrBodyDeclCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::PrePostOrBodyDeclCSContext* OclParser::prePostOrBodyDeclCS() {
  PrePostOrBodyDeclCSContext *_localctx = _tracker.createInstance<PrePostOrBodyDeclCSContext>(_ctx, getState());
  enterRule(_localctx, 118, OclParser::RulePrePostOrBodyDeclCS);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(635);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case OclParser::PRE: {
        enterOuterAlt(_localctx, 1);
        setState(608);
        match(OclParser::PRE);
        setState(610);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == OclParser::ID) {
          setState(609);
          simpleNameCS();
        }
        setState(612);
        match(OclParser::COLON);
        setState(613);
        oclExpressionCS(0);
        setState(615);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << OclParser::PRE)
          | (1ULL << OclParser::BODY)
          | (1ULL << OclParser::POST))) != 0)) {
          setState(614);
          prePostOrBodyDeclCS();
        }
        break;
      }

      case OclParser::POST: {
        enterOuterAlt(_localctx, 2);
        setState(617);
        match(OclParser::POST);
        setState(619);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == OclParser::ID) {
          setState(618);
          simpleNameCS();
        }
        setState(621);
        match(OclParser::COLON);
        setState(622);
        oclExpressionCS(0);
        setState(624);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << OclParser::PRE)
          | (1ULL << OclParser::BODY)
          | (1ULL << OclParser::POST))) != 0)) {
          setState(623);
          prePostOrBodyDeclCS();
        }
        break;
      }

      case OclParser::BODY: {
        enterOuterAlt(_localctx, 3);
        setState(626);
        match(OclParser::BODY);
        setState(628);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == OclParser::ID) {
          setState(627);
          simpleNameCS();
        }
        setState(630);
        match(OclParser::COLON);
        setState(631);
        oclExpressionCS(0);
        setState(633);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << OclParser::PRE)
          | (1ULL << OclParser::BODY)
          | (1ULL << OclParser::POST))) != 0)) {
          setState(632);
          prePostOrBodyDeclCS();
        }
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

//----------------- OperationCSContext ------------------------------------------------------------------

OclParser::OperationCSContext::OperationCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::PathNameCSContext* OclParser::OperationCSContext::pathNameCS() {
  return getRuleContext<OclParser::PathNameCSContext>(0);
}

tree::TerminalNode* OclParser::OperationCSContext::COLONCOLON() {
  return getToken(OclParser::COLONCOLON, 0);
}

OclParser::SimpleNameCSContext* OclParser::OperationCSContext::simpleNameCS() {
  return getRuleContext<OclParser::SimpleNameCSContext>(0);
}

tree::TerminalNode* OclParser::OperationCSContext::LPAREN() {
  return getToken(OclParser::LPAREN, 0);
}

tree::TerminalNode* OclParser::OperationCSContext::RPAREN() {
  return getToken(OclParser::RPAREN, 0);
}

tree::TerminalNode* OclParser::OperationCSContext::COLON() {
  return getToken(OclParser::COLON, 0);
}

OclParser::ParametersCSContext* OclParser::OperationCSContext::parametersCS() {
  return getRuleContext<OclParser::ParametersCSContext>(0);
}

OclParser::TypeCSContext* OclParser::OperationCSContext::typeCS() {
  return getRuleContext<OclParser::TypeCSContext>(0);
}


size_t OclParser::OperationCSContext::getRuleIndex() const {
  return OclParser::RuleOperationCS;
}

void OclParser::OperationCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperationCS(this);
}

void OclParser::OperationCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperationCS(this);
}


antlrcpp::Any OclParser::OperationCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitOperationCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::OperationCSContext* OclParser::operationCS() {
  OperationCSContext *_localctx = _tracker.createInstance<OperationCSContext>(_ctx, getState());
  enterRule(_localctx, 120, OclParser::RuleOperationCS);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(659);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(637);
      pathNameCS(0);
      setState(638);
      match(OclParser::COLONCOLON);
      setState(639);
      simpleNameCS();
      setState(640);
      match(OclParser::LPAREN);
      setState(642);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == OclParser::ID) {
        setState(641);
        parametersCS();
      }
      setState(644);
      match(OclParser::RPAREN);
      setState(645);
      match(OclParser::COLON);
      setState(647);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << OclParser::TUPLE)
        | (1ULL << OclParser::COLLECTION)
        | (1ULL << OclParser::BAG)
        | (1ULL << OclParser::ORDEREDSET)
        | (1ULL << OclParser::SEQUENCE)
        | (1ULL << OclParser::SET)
        | (1ULL << OclParser::OCLBOOLEAN)
        | (1ULL << OclParser::OCLINTEGER)
        | (1ULL << OclParser::OCLREAL)
        | (1ULL << OclParser::OCLSTRING)
        | (1ULL << OclParser::OCLUNLIMITEDNAT)
        | (1ULL << OclParser::OCLANY)
        | (1ULL << OclParser::OCLINVALID)
        | (1ULL << OclParser::OCLMESSAGE)
        | (1ULL << OclParser::OCLVOID))) != 0) || _la == OclParser::ID) {
        setState(646);
        typeCS();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(649);
      simpleNameCS();
      setState(650);
      match(OclParser::LPAREN);
      setState(652);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == OclParser::ID) {
        setState(651);
        parametersCS();
      }
      setState(654);
      match(OclParser::RPAREN);
      setState(655);
      match(OclParser::COLON);
      setState(657);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << OclParser::TUPLE)
        | (1ULL << OclParser::COLLECTION)
        | (1ULL << OclParser::BAG)
        | (1ULL << OclParser::ORDEREDSET)
        | (1ULL << OclParser::SEQUENCE)
        | (1ULL << OclParser::SET)
        | (1ULL << OclParser::OCLBOOLEAN)
        | (1ULL << OclParser::OCLINTEGER)
        | (1ULL << OclParser::OCLREAL)
        | (1ULL << OclParser::OCLSTRING)
        | (1ULL << OclParser::OCLUNLIMITEDNAT)
        | (1ULL << OclParser::OCLANY)
        | (1ULL << OclParser::OCLINVALID)
        | (1ULL << OclParser::OCLMESSAGE)
        | (1ULL << OclParser::OCLVOID))) != 0) || _la == OclParser::ID) {
        setState(656);
        typeCS();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametersCSContext ------------------------------------------------------------------

OclParser::ParametersCSContext::ParametersCSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OclParser::VariableDeclarationCSContext* OclParser::ParametersCSContext::variableDeclarationCS() {
  return getRuleContext<OclParser::VariableDeclarationCSContext>(0);
}

tree::TerminalNode* OclParser::ParametersCSContext::COMMA() {
  return getToken(OclParser::COMMA, 0);
}

OclParser::ParametersCSContext* OclParser::ParametersCSContext::parametersCS() {
  return getRuleContext<OclParser::ParametersCSContext>(0);
}


size_t OclParser::ParametersCSContext::getRuleIndex() const {
  return OclParser::RuleParametersCS;
}

void OclParser::ParametersCSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParametersCS(this);
}

void OclParser::ParametersCSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OclParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParametersCS(this);
}


antlrcpp::Any OclParser::ParametersCSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OclParserVisitor*>(visitor))
    return parserVisitor->visitParametersCS(this);
  else
    return visitor->visitChildren(this);
}

OclParser::ParametersCSContext* OclParser::parametersCS() {
  ParametersCSContext *_localctx = _tracker.createInstance<ParametersCSContext>(_ctx, getState());
  enterRule(_localctx, 122, OclParser::RuleParametersCS);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(661);
    variableDeclarationCS();
    setState(664);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OclParser::COMMA) {
      setState(662);
      match(OclParser::COMMA);
      setState(663);
      parametersCS();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool OclParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return oclExpressionCSSempred(dynamic_cast<OclExpressionCSContext *>(context), predicateIndex);
    case 6: return pathNameCSSempred(dynamic_cast<PathNameCSContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool OclParser::oclExpressionCSSempred(OclExpressionCSContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 14);
    case 1: return precpred(_ctx, 12);
    case 2: return precpred(_ctx, 10);
    case 3: return precpred(_ctx, 8);
    case 4: return precpred(_ctx, 7);
    case 5: return precpred(_ctx, 6);
    case 6: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool OclParser::pathNameCSSempred(PathNameCSContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> OclParser::_decisionToDFA;
atn::PredictionContextCache OclParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN OclParser::_atn;
std::vector<uint16_t> OclParser::_serializedATN;

std::vector<std::string> OclParser::_ruleNames = {
  "expressionInOclCS", "oclExpressionCS", "variableExpCS", "simpleNameCS", 
  "restrictedKeywordCS", "unreservedSimpleNameCS", "pathNameCS", "literalExpCS", 
  "enumLiteralExpCS", "collectionLiteralExpCS", "collectionTypeIdentifierCS", 
  "collectionLiteralPartsCS", "collectionLiteralPartCS", "collectionRangeCS", 
  "prefixedExp", "infixedExpCS", "primitiveLiteralExpCS", "tupleLiteralExpCS", 
  "unlimitedNaturalLiteralExpCS", "integerLiteralExpCS", "realLiteralExpCS", 
  "stringLiteralExpCS", "booleanLiteralExpCS", "typeLiteralExpCS", "iteratorExpCS", 
  "iterateExpCS", "variableDeclarationCS", "typeCS", "primitiveTypeCS", 
  "oclTypeCS", "collectionTypeCS", "tupleTypeCS", "variableDeclarationListCS", 
  "operationCallExpCS_A", "operationCallExpCS_B", "propertyCallExpCS_A", 
  "propertyCallExpCS_B", "associationClassCallExpCS_A", "associationClassCallExpCS_B", 
  "isMarkedPreCS", "argumentsCS", "letExpCS", "letExpSubCS", "oclMessageExpCS", 
  "oclMessageArgumentsCS", "oclMessageArgCS", "ifExpCS", "nullLiteralExpCS", 
  "invalidLiteralExpCS", "unaryLiteralExpCS", "binaryLiteralExpCS", "packageDeclarationCS", 
  "contextDeclarationCS", "classifierContextDeclCS", "operationContextDeclCS", 
  "propertyContextDeclCS", "defExpressionCS", "invOrDefCS", "initOrDerValueCS", 
  "prePostOrBodyDeclCS", "operationCS", "parametersCS"
};

std::vector<std::string> OclParser::_literalNames = {
};

std::vector<std::string> OclParser::_symbolicNames = {
  "", "COMMENTS", "IF", "THEN", "ELSE", "ENDIF", "IN", "PRE", "LET", "ITERATE", 
  "SELF", "TUPLE", "NULLEXP", "INVALID", "PACKAGE", "ENDPACKAGE", "CONTEXT", 
  "STATIC", "DEF", "INV", "BODY", "POST", "INIT", "DERIVE", "COLLECTION", 
  "BAG", "ORDEREDSET", "SEQUENCE", "SET", "OCLBOOLEAN", "OCLINTEGER", "OCLREAL", 
  "OCLSTRING", "OCLUNLIMITEDNAT", "OCLANY", "OCLINVALID", "OCLMESSAGE", 
  "OCLVOID", "OCLSTATE", "INT", "REAL", "BOOL", "STRING_LITERAL", "COLON", 
  "COLONCOLON", "COMMA", "SEMI", "LPAREN", "RPAREN", "LBRACE", "RBRACE", 
  "LBRACK", "RBRACK", "RARROW", "LT", "GT", "LTE", "GTE", "ASSIGN", "INEQUAL", 
  "QUESTION", "STAR", "PLUS_ASSIGN", "PLUS", "KEYOR", "KEYAND", "IMPLIES", 
  "RANGE", "DOT", "AT", "SLASH", "UNDERSCORE", "DHAT", "HAT", "MINUS", "NOT", 
  "PIPE", "ID", "WS", "ERRCHAR"
};

dfa::Vocabulary OclParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> OclParser::_tokenNames;

OclParser::Initializer::Initializer() {
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
    0x3, 0x51, 0x29d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x8a, 0xa, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x7, 0x3, 0x9a, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x9d, 0xb, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x5, 0x4, 0xa1, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xa9, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 
    0x5, 0x7, 0xad, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x7, 0x8, 0xb5, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0xb8, 0xb, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xbf, 
    0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x5, 0xb, 0xc8, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xd1, 0xa, 0xd, 0x3, 0xe, 
    0x3, 0xe, 0x5, 0xe, 0xd5, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x5, 0x12, 0xe8, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x5, 0x1a, 0x101, 0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x105, 
    0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x10e, 0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x11a, 0xa, 0x1a, 0x5, 0x1a, 0x11c, 0xa, 
    0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x5, 0x1b, 0x124, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x12e, 0xa, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x132, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x139, 0xa, 0x1d, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x147, 
    0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 
    0x22, 0x14e, 0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x157, 0xa, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x15f, 
    0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 
    0x23, 0x3, 0x23, 0x5, 0x23, 0x168, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 
    0x23, 0x172, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x17d, 
    0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x181, 0xa, 0x23, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x186, 0xa, 0x24, 0x3, 0x24, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x18e, 0xa, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x195, 
    0xa, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 
    0x24, 0x19c, 0xa, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 
    0x1a1, 0xa, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x5, 0x25, 0x1a8, 0xa, 0x25, 0x5, 0x25, 0x1aa, 0xa, 0x25, 0x3, 0x26, 
    0x3, 0x26, 0x5, 0x26, 0x1ae, 0xa, 0x26, 0x3, 0x26, 0x5, 0x26, 0x1b1, 
    0xa, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 
    0x27, 0x5, 0x27, 0x1b9, 0xa, 0x27, 0x3, 0x27, 0x5, 0x27, 0x1bc, 0xa, 
    0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 
    0x1c3, 0xa, 0x28, 0x3, 0x28, 0x5, 0x28, 0x1c6, 0xa, 0x28, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x1ce, 
    0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 
    0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x1da, 
    0xa, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x1e0, 
    0xa, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
    0x2d, 0x5, 0x2d, 0x1e8, 0xa, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 
    0x1ec, 0xa, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x1f1, 
    0xa, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x1f6, 0xa, 0x2f, 
    0x3, 0x2f, 0x5, 0x2f, 0x1f9, 0xa, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 
    0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 
    0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x7, 0x35, 0x20e, 0xa, 0x35, 0xc, 0x35, 
    0xe, 0x35, 0x211, 0xb, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x7, 0x35, 
    0x216, 0xa, 0x35, 0xc, 0x35, 0xe, 0x35, 0x219, 0xb, 0x35, 0x5, 0x35, 
    0x21b, 0xa, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x220, 
    0xa, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 
    0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 0x22c, 
    0xa, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 0x3, 
    0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 
    0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
    0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x242, 0xa, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 
    0x5, 0x3b, 0x246, 0xa, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 
    0x24b, 0xa, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x24f, 0xa, 0x3b, 
    0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x253, 0xa, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x259, 0xa, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x25f, 0xa, 0x3c, 0x5, 0x3c, 0x261, 
    0xa, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 0x265, 0xa, 0x3d, 0x3, 0x3d, 
    0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 0x26a, 0xa, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 
    0x5, 0x3d, 0x26e, 0xa, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 
    0x273, 0xa, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 0x277, 0xa, 0x3d, 
    0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 0x27c, 0xa, 0x3d, 0x5, 0x3d, 
    0x27e, 0xa, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
    0x5, 0x3e, 0x285, 0xa, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x5, 0x3e, 
    0x28a, 0xa, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x5, 0x3e, 0x28f, 
    0xa, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x5, 0x3e, 0x294, 0xa, 0x3e, 
    0x5, 0x3e, 0x296, 0xa, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 
    0x29b, 0xa, 0x3f, 0x3, 0x3f, 0x2, 0x4, 0x4, 0xe, 0x40, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
    0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 
    0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 
    0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x2, 
    0x8, 0x3, 0x2, 0x1a, 0x1e, 0x4, 0x2, 0x29, 0x29, 0x3f, 0x3f, 0x3, 0x2, 
    0x1f, 0x23, 0x3, 0x2, 0x24, 0x27, 0x3, 0x2, 0x4c, 0x4d, 0x7, 0x2, 0x38, 
    0x3d, 0x3f, 0x3f, 0x41, 0x44, 0x48, 0x48, 0x4c, 0x4c, 0x2, 0x2cc, 0x2, 
    0x7e, 0x3, 0x2, 0x2, 0x2, 0x4, 0x89, 0x3, 0x2, 0x2, 0x2, 0x6, 0xa0, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa, 0xa8, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0xac, 0x3, 0x2, 0x2, 0x2, 0xe, 0xae, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0xbe, 0x3, 0x2, 0x2, 0x2, 0x12, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0xc4, 0x3, 0x2, 0x2, 0x2, 0x16, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x18, 0xcd, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0xd4, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xd6, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0xda, 0x3, 0x2, 0x2, 0x2, 0x20, 0xdd, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x24, 0xe9, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0xee, 0x3, 0x2, 0x2, 0x2, 0x28, 0xf0, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0xf2, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xf4, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0xf6, 0x3, 0x2, 0x2, 0x2, 0x30, 0xf8, 0x3, 0x2, 0x2, 0x2, 0x32, 0x11b, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x36, 0x12a, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x138, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x13a, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x13e, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x143, 0x3, 0x2, 0x2, 0x2, 0x42, 0x14a, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x180, 0x3, 0x2, 0x2, 0x2, 0x46, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x1a9, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x1b2, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x50, 0x1c7, 0x3, 
    0x2, 0x2, 0x2, 0x52, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x54, 0x1cf, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x58, 0x1eb, 0x3, 0x2, 0x2, 
    0x2, 0x5a, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x1f8, 0x3, 0x2, 0x2, 0x2, 
    0x5e, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x60, 0x202, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x204, 0x3, 0x2, 0x2, 0x2, 0x64, 0x206, 0x3, 0x2, 0x2, 0x2, 0x66, 0x208, 
    0x3, 0x2, 0x2, 0x2, 0x68, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x21f, 0x3, 
    0x2, 0x2, 0x2, 0x6c, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x22d, 0x3, 0x2, 
    0x2, 0x2, 0x70, 0x231, 0x3, 0x2, 0x2, 0x2, 0x72, 0x241, 0x3, 0x2, 0x2, 
    0x2, 0x74, 0x252, 0x3, 0x2, 0x2, 0x2, 0x76, 0x260, 0x3, 0x2, 0x2, 0x2, 
    0x78, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x295, 0x3, 0x2, 0x2, 0x2, 0x7c, 
    0x297, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x5, 0x4, 0x3, 0x2, 0x7f, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x8, 0x3, 0x1, 0x2, 0x81, 0x8a, 0x5, 
    0x1e, 0x10, 0x2, 0x82, 0x8a, 0x5, 0x46, 0x24, 0x2, 0x83, 0x8a, 0x5, 
    0x4a, 0x26, 0x2, 0x84, 0x8a, 0x5, 0x4e, 0x28, 0x2, 0x85, 0x8a, 0x5, 
    0x6, 0x4, 0x2, 0x86, 0x8a, 0x5, 0x10, 0x9, 0x2, 0x87, 0x8a, 0x5, 0x54, 
    0x2b, 0x2, 0x88, 0x8a, 0x5, 0x5e, 0x30, 0x2, 0x89, 0x80, 0x3, 0x2, 0x2, 
    0x2, 0x89, 0x82, 0x3, 0x2, 0x2, 0x2, 0x89, 0x83, 0x3, 0x2, 0x2, 0x2, 
    0x89, 0x84, 0x3, 0x2, 0x2, 0x2, 0x89, 0x85, 0x3, 0x2, 0x2, 0x2, 0x89, 
    0x86, 0x3, 0x2, 0x2, 0x2, 0x89, 0x87, 0x3, 0x2, 0x2, 0x2, 0x89, 0x88, 
    0x3, 0x2, 0x2, 0x2, 0x8a, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0xc, 
    0x10, 0x2, 0x2, 0x8c, 0x9a, 0x5, 0x44, 0x23, 0x2, 0x8d, 0x8e, 0xc, 0xe, 
    0x2, 0x2, 0x8e, 0x9a, 0x5, 0x48, 0x25, 0x2, 0x8f, 0x90, 0xc, 0xc, 0x2, 
    0x2, 0x90, 0x9a, 0x5, 0x4c, 0x27, 0x2, 0x91, 0x92, 0xc, 0xa, 0x2, 0x2, 
    0x92, 0x9a, 0x5, 0x32, 0x1a, 0x2, 0x93, 0x94, 0xc, 0x9, 0x2, 0x2, 0x94, 
    0x9a, 0x5, 0x34, 0x1b, 0x2, 0x95, 0x96, 0xc, 0x8, 0x2, 0x2, 0x96, 0x9a, 
    0x5, 0x20, 0x11, 0x2, 0x97, 0x98, 0xc, 0x4, 0x2, 0x2, 0x98, 0x9a, 0x5, 
    0x58, 0x2d, 0x2, 0x99, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x99, 0x8d, 0x3, 0x2, 
    0x2, 0x2, 0x99, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x99, 0x91, 0x3, 0x2, 0x2, 
    0x2, 0x99, 0x93, 0x3, 0x2, 0x2, 0x2, 0x99, 0x95, 0x3, 0x2, 0x2, 0x2, 
    0x99, 0x97, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9b, 
    0x99, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x9d, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa1, 0x7, 
    0xc, 0x2, 0x2, 0x9f, 0xa1, 0x5, 0x8, 0x5, 0x2, 0xa0, 0x9e, 0x3, 0x2, 
    0x2, 0x2, 0xa0, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa1, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0xa2, 0xa3, 0x7, 0x4f, 0x2, 0x2, 0xa3, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0xa4, 0xa9, 0x5, 0x16, 0xc, 0x2, 0xa5, 0xa9, 0x5, 0x3a, 0x1e, 0x2, 0xa6, 
    0xa9, 0x5, 0x3c, 0x1f, 0x2, 0xa7, 0xa9, 0x7, 0xd, 0x2, 0x2, 0xa8, 0xa4, 
    0x3, 0x2, 0x2, 0x2, 0xa8, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa6, 0x3, 
    0x2, 0x2, 0x2, 0xa8, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0xaa, 0xad, 0x5, 0x8, 0x5, 0x2, 0xab, 0xad, 0x5, 0xa, 0x6, 
    0x2, 0xac, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xac, 0xab, 0x3, 0x2, 0x2, 0x2, 
    0xad, 0xd, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x8, 0x8, 0x1, 0x2, 0xaf, 
    0xb0, 0x5, 0x8, 0x5, 0x2, 0xb0, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 
    0xc, 0x3, 0x2, 0x2, 0xb2, 0xb3, 0x7, 0x2e, 0x2, 0x2, 0xb3, 0xb5, 0x5, 
    0xc, 0x7, 0x2, 0xb4, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb8, 0x3, 0x2, 
    0x2, 0x2, 0xb6, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 
    0x2, 0xb7, 0xf, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb6, 0x3, 0x2, 0x2, 0x2, 
    0xb9, 0xbf, 0x5, 0x12, 0xa, 0x2, 0xba, 0xbf, 0x5, 0x14, 0xb, 0x2, 0xbb, 
    0xbf, 0x5, 0x24, 0x13, 0x2, 0xbc, 0xbf, 0x5, 0x22, 0x12, 0x2, 0xbd, 
    0xbf, 0x5, 0x30, 0x19, 0x2, 0xbe, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xba, 
    0x3, 0x2, 0x2, 0x2, 0xbe, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbc, 0x3, 
    0x2, 0x2, 0x2, 0xbe, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbf, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0xc0, 0xc1, 0x5, 0xe, 0x8, 0x2, 0xc1, 0xc2, 0x7, 0x2e, 0x2, 
    0x2, 0xc2, 0xc3, 0x5, 0x8, 0x5, 0x2, 0xc3, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0xc4, 0xc5, 0x5, 0x16, 0xc, 0x2, 0xc5, 0xc7, 0x7, 0x33, 0x2, 0x2, 0xc6, 
    0xc8, 0x5, 0x18, 0xd, 0x2, 0xc7, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 
    0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x7, 
    0x34, 0x2, 0x2, 0xca, 0x15, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x9, 0x2, 
    0x2, 0x2, 0xcc, 0x17, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xd0, 0x5, 0x1a, 0xe, 
    0x2, 0xce, 0xcf, 0x7, 0x2f, 0x2, 0x2, 0xcf, 0xd1, 0x5, 0x18, 0xd, 0x2, 
    0xd0, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd1, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd5, 0x5, 0x1c, 0xf, 0x2, 0xd3, 0xd5, 
    0x5, 0x4, 0x3, 0x2, 0xd4, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd3, 0x3, 
    0x2, 0x2, 0x2, 0xd5, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x5, 0x4, 
    0x3, 0x2, 0xd7, 0xd8, 0x7, 0x45, 0x2, 0x2, 0xd8, 0xd9, 0x5, 0x4, 0x3, 
    0x2, 0xd9, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x5, 0x64, 0x33, 0x2, 
    0xdb, 0xdc, 0x5, 0x4, 0x3, 0x2, 0xdc, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xdd, 
    0xde, 0x5, 0x66, 0x34, 0x2, 0xde, 0xdf, 0x5, 0x4, 0x3, 0x2, 0xdf, 0x21, 
    0x3, 0x2, 0x2, 0x2, 0xe0, 0xe8, 0x5, 0x28, 0x15, 0x2, 0xe1, 0xe8, 0x5, 
    0x2a, 0x16, 0x2, 0xe2, 0xe8, 0x5, 0x2c, 0x17, 0x2, 0xe3, 0xe8, 0x5, 
    0x2e, 0x18, 0x2, 0xe4, 0xe8, 0x5, 0x26, 0x14, 0x2, 0xe5, 0xe8, 0x5, 
    0x60, 0x31, 0x2, 0xe6, 0xe8, 0x5, 0x62, 0x32, 0x2, 0xe7, 0xe0, 0x3, 
    0x2, 0x2, 0x2, 0xe7, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe2, 0x3, 0x2, 
    0x2, 0x2, 0xe7, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe4, 0x3, 0x2, 0x2, 
    0x2, 0xe7, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe6, 0x3, 0x2, 0x2, 0x2, 
    0xe8, 0x23, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x7, 0xd, 0x2, 0x2, 0xea, 
    0xeb, 0x7, 0x33, 0x2, 0x2, 0xeb, 0xec, 0x5, 0x42, 0x22, 0x2, 0xec, 0xed, 
    0x7, 0x34, 0x2, 0x2, 0xed, 0x25, 0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0x9, 
    0x3, 0x2, 0x2, 0xef, 0x27, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x7, 0x29, 
    0x2, 0x2, 0xf1, 0x29, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x7, 0x2a, 0x2, 
    0x2, 0xf3, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 0x7, 0x2c, 0x2, 0x2, 
    0xf5, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x7, 0x2b, 0x2, 0x2, 0xf7, 
    0x2f, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0x5, 0x38, 0x1d, 0x2, 0xf9, 0x31, 
    0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x7, 0x37, 0x2, 0x2, 0xfb, 0xfc, 0x5, 
    0x8, 0x5, 0x2, 0xfc, 0x104, 0x7, 0x31, 0x2, 0x2, 0xfd, 0x100, 0x5, 0x36, 
    0x1c, 0x2, 0xfe, 0xff, 0x7, 0x2f, 0x2, 0x2, 0xff, 0x101, 0x5, 0x36, 
    0x1c, 0x2, 0x100, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 0x3, 0x2, 
    0x2, 0x2, 0x101, 0x102, 0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x7, 0x4e, 
    0x2, 0x2, 0x103, 0x105, 0x3, 0x2, 0x2, 0x2, 0x104, 0xfd, 0x3, 0x2, 0x2, 
    0x2, 0x104, 0x105, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x3, 0x2, 0x2, 
    0x2, 0x106, 0x107, 0x5, 0x4, 0x3, 0x2, 0x107, 0x108, 0x7, 0x32, 0x2, 
    0x2, 0x108, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 0x7, 0x46, 0x2, 
    0x2, 0x10a, 0x10b, 0x5, 0x8, 0x5, 0x2, 0x10b, 0x10d, 0x7, 0x31, 0x2, 
    0x2, 0x10c, 0x10e, 0x5, 0x52, 0x2a, 0x2, 0x10d, 0x10c, 0x3, 0x2, 0x2, 
    0x2, 0x10d, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x3, 0x2, 0x2, 
    0x2, 0x10f, 0x110, 0x7, 0x32, 0x2, 0x2, 0x110, 0x11c, 0x3, 0x2, 0x2, 
    0x2, 0x111, 0x112, 0x7, 0x46, 0x2, 0x2, 0x112, 0x11c, 0x5, 0x8, 0x5, 
    0x2, 0x113, 0x114, 0x7, 0x46, 0x2, 0x2, 0x114, 0x119, 0x5, 0x8, 0x5, 
    0x2, 0x115, 0x116, 0x7, 0x35, 0x2, 0x2, 0x116, 0x117, 0x5, 0x52, 0x2a, 
    0x2, 0x117, 0x118, 0x7, 0x36, 0x2, 0x2, 0x118, 0x11a, 0x3, 0x2, 0x2, 
    0x2, 0x119, 0x115, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 0x3, 0x2, 0x2, 
    0x2, 0x11a, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11b, 0xfa, 0x3, 0x2, 0x2, 0x2, 
    0x11b, 0x109, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x111, 0x3, 0x2, 0x2, 0x2, 
    0x11b, 0x113, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x33, 0x3, 0x2, 0x2, 0x2, 0x11d, 
    0x11e, 0x7, 0x37, 0x2, 0x2, 0x11e, 0x11f, 0x7, 0xb, 0x2, 0x2, 0x11f, 
    0x123, 0x7, 0x31, 0x2, 0x2, 0x120, 0x121, 0x5, 0x36, 0x1c, 0x2, 0x121, 
    0x122, 0x7, 0x30, 0x2, 0x2, 0x122, 0x124, 0x3, 0x2, 0x2, 0x2, 0x123, 
    0x120, 0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 0x3, 0x2, 0x2, 0x2, 0x124, 
    0x125, 0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x5, 0x36, 0x1c, 0x2, 0x126, 
    0x127, 0x7, 0x4e, 0x2, 0x2, 0x127, 0x128, 0x5, 0x4, 0x3, 0x2, 0x128, 
    0x129, 0x7, 0x32, 0x2, 0x2, 0x129, 0x35, 0x3, 0x2, 0x2, 0x2, 0x12a, 
    0x12d, 0x5, 0x8, 0x5, 0x2, 0x12b, 0x12c, 0x7, 0x2d, 0x2, 0x2, 0x12c, 
    0x12e, 0x5, 0x38, 0x1d, 0x2, 0x12d, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12d, 
    0x12e, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x131, 0x3, 0x2, 0x2, 0x2, 0x12f, 
    0x130, 0x7, 0x3c, 0x2, 0x2, 0x130, 0x132, 0x5, 0x4, 0x3, 0x2, 0x131, 
    0x12f, 0x3, 0x2, 0x2, 0x2, 0x131, 0x132, 0x3, 0x2, 0x2, 0x2, 0x132, 
    0x37, 0x3, 0x2, 0x2, 0x2, 0x133, 0x139, 0x5, 0xe, 0x8, 0x2, 0x134, 0x139, 
    0x5, 0x3e, 0x20, 0x2, 0x135, 0x139, 0x5, 0x40, 0x21, 0x2, 0x136, 0x139, 
    0x5, 0x3a, 0x1e, 0x2, 0x137, 0x139, 0x5, 0x3c, 0x1f, 0x2, 0x138, 0x133, 
    0x3, 0x2, 0x2, 0x2, 0x138, 0x134, 0x3, 0x2, 0x2, 0x2, 0x138, 0x135, 
    0x3, 0x2, 0x2, 0x2, 0x138, 0x136, 0x3, 0x2, 0x2, 0x2, 0x138, 0x137, 
    0x3, 0x2, 0x2, 0x2, 0x139, 0x39, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13b, 0x9, 
    0x4, 0x2, 0x2, 0x13b, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 0x9, 0x5, 
    0x2, 0x2, 0x13d, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x13f, 0x5, 0x16, 
    0xc, 0x2, 0x13f, 0x140, 0x7, 0x31, 0x2, 0x2, 0x140, 0x141, 0x5, 0x38, 
    0x1d, 0x2, 0x141, 0x142, 0x7, 0x32, 0x2, 0x2, 0x142, 0x3f, 0x3, 0x2, 
    0x2, 0x2, 0x143, 0x144, 0x7, 0xd, 0x2, 0x2, 0x144, 0x146, 0x7, 0x31, 
    0x2, 0x2, 0x145, 0x147, 0x5, 0x42, 0x22, 0x2, 0x146, 0x145, 0x3, 0x2, 
    0x2, 0x2, 0x146, 0x147, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x3, 0x2, 
    0x2, 0x2, 0x148, 0x149, 0x7, 0x32, 0x2, 0x2, 0x149, 0x41, 0x3, 0x2, 
    0x2, 0x2, 0x14a, 0x14d, 0x5, 0x36, 0x1c, 0x2, 0x14b, 0x14c, 0x7, 0x2f, 
    0x2, 0x2, 0x14c, 0x14e, 0x5, 0x42, 0x22, 0x2, 0x14d, 0x14b, 0x3, 0x2, 
    0x2, 0x2, 0x14d, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x43, 0x3, 0x2, 0x2, 
    0x2, 0x14f, 0x150, 0x5, 0x8, 0x5, 0x2, 0x150, 0x151, 0x5, 0x4, 0x3, 
    0x2, 0x151, 0x181, 0x3, 0x2, 0x2, 0x2, 0x152, 0x153, 0x7, 0x37, 0x2, 
    0x2, 0x153, 0x154, 0x5, 0x8, 0x5, 0x2, 0x154, 0x156, 0x7, 0x31, 0x2, 
    0x2, 0x155, 0x157, 0x5, 0x52, 0x2a, 0x2, 0x156, 0x155, 0x3, 0x2, 0x2, 
    0x2, 0x156, 0x157, 0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 0x3, 0x2, 0x2, 
    0x2, 0x158, 0x159, 0x7, 0x32, 0x2, 0x2, 0x159, 0x181, 0x3, 0x2, 0x2, 
    0x2, 0x15a, 0x15b, 0x7, 0x46, 0x2, 0x2, 0x15b, 0x15c, 0x5, 0x8, 0x5, 
    0x2, 0x15c, 0x15e, 0x7, 0x31, 0x2, 0x2, 0x15d, 0x15f, 0x5, 0x52, 0x2a, 
    0x2, 0x15e, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15f, 0x3, 0x2, 0x2, 
    0x2, 0x15f, 0x160, 0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 0x7, 0x32, 0x2, 
    0x2, 0x161, 0x181, 0x3, 0x2, 0x2, 0x2, 0x162, 0x163, 0x7, 0x46, 0x2, 
    0x2, 0x163, 0x164, 0x5, 0x8, 0x5, 0x2, 0x164, 0x165, 0x5, 0x50, 0x29, 
    0x2, 0x165, 0x167, 0x7, 0x31, 0x2, 0x2, 0x166, 0x168, 0x5, 0x52, 0x2a, 
    0x2, 0x167, 0x166, 0x3, 0x2, 0x2, 0x2, 0x167, 0x168, 0x3, 0x2, 0x2, 
    0x2, 0x168, 0x169, 0x3, 0x2, 0x2, 0x2, 0x169, 0x16a, 0x7, 0x32, 0x2, 
    0x2, 0x16a, 0x181, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16c, 0x7, 0x46, 0x2, 
    0x2, 0x16c, 0x16d, 0x5, 0xe, 0x8, 0x2, 0x16d, 0x16e, 0x7, 0x2e, 0x2, 
    0x2, 0x16e, 0x16f, 0x5, 0x8, 0x5, 0x2, 0x16f, 0x171, 0x7, 0x31, 0x2, 
    0x2, 0x170, 0x172, 0x5, 0x52, 0x2a, 0x2, 0x171, 0x170, 0x3, 0x2, 0x2, 
    0x2, 0x171, 0x172, 0x3, 0x2, 0x2, 0x2, 0x172, 0x173, 0x3, 0x2, 0x2, 
    0x2, 0x173, 0x174, 0x7, 0x32, 0x2, 0x2, 0x174, 0x181, 0x3, 0x2, 0x2, 
    0x2, 0x175, 0x176, 0x7, 0x46, 0x2, 0x2, 0x176, 0x177, 0x5, 0xe, 0x8, 
    0x2, 0x177, 0x178, 0x7, 0x2e, 0x2, 0x2, 0x178, 0x179, 0x5, 0x8, 0x5, 
    0x2, 0x179, 0x17a, 0x5, 0x50, 0x29, 0x2, 0x17a, 0x17c, 0x7, 0x31, 0x2, 
    0x2, 0x17b, 0x17d, 0x5, 0x52, 0x2a, 0x2, 0x17c, 0x17b, 0x3, 0x2, 0x2, 
    0x2, 0x17c, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x17e, 0x3, 0x2, 0x2, 
    0x2, 0x17e, 0x17f, 0x7, 0x32, 0x2, 0x2, 0x17f, 0x181, 0x3, 0x2, 0x2, 
    0x2, 0x180, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x180, 0x152, 0x3, 0x2, 0x2, 
    0x2, 0x180, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x180, 0x162, 0x3, 0x2, 0x2, 
    0x2, 0x180, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x180, 0x175, 0x3, 0x2, 0x2, 
    0x2, 0x181, 0x45, 0x3, 0x2, 0x2, 0x2, 0x182, 0x183, 0x5, 0x8, 0x5, 0x2, 
    0x183, 0x185, 0x7, 0x31, 0x2, 0x2, 0x184, 0x186, 0x5, 0x52, 0x2a, 0x2, 
    0x185, 0x184, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x3, 0x2, 0x2, 0x2, 
    0x186, 0x187, 0x3, 0x2, 0x2, 0x2, 0x187, 0x188, 0x7, 0x32, 0x2, 0x2, 
    0x188, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18a, 0x5, 0x8, 0x5, 0x2, 
    0x18a, 0x18b, 0x5, 0x50, 0x29, 0x2, 0x18b, 0x18d, 0x7, 0x31, 0x2, 0x2, 
    0x18c, 0x18e, 0x5, 0x52, 0x2a, 0x2, 0x18d, 0x18c, 0x3, 0x2, 0x2, 0x2, 
    0x18d, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18f, 0x3, 0x2, 0x2, 0x2, 
    0x18f, 0x190, 0x7, 0x32, 0x2, 0x2, 0x190, 0x19c, 0x3, 0x2, 0x2, 0x2, 
    0x191, 0x192, 0x5, 0xe, 0x8, 0x2, 0x192, 0x194, 0x7, 0x31, 0x2, 0x2, 
    0x193, 0x195, 0x5, 0x52, 0x2a, 0x2, 0x194, 0x193, 0x3, 0x2, 0x2, 0x2, 
    0x194, 0x195, 0x3, 0x2, 0x2, 0x2, 0x195, 0x196, 0x3, 0x2, 0x2, 0x2, 
    0x196, 0x197, 0x7, 0x32, 0x2, 0x2, 0x197, 0x19c, 0x3, 0x2, 0x2, 0x2, 
    0x198, 0x199, 0x5, 0x8, 0x5, 0x2, 0x199, 0x19a, 0x5, 0x4, 0x3, 0x2, 
    0x19a, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x182, 0x3, 0x2, 0x2, 0x2, 
    0x19b, 0x189, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x191, 0x3, 0x2, 0x2, 0x2, 
    0x19b, 0x198, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x47, 0x3, 0x2, 0x2, 0x2, 0x19d, 
    0x19e, 0x7, 0x46, 0x2, 0x2, 0x19e, 0x1a0, 0x5, 0x8, 0x5, 0x2, 0x19f, 
    0x1a1, 0x5, 0x50, 0x29, 0x2, 0x1a0, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x1a0, 
    0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1a2, 
    0x1a3, 0x7, 0x46, 0x2, 0x2, 0x1a3, 0x1a4, 0x5, 0xe, 0x8, 0x2, 0x1a4, 
    0x1a5, 0x7, 0x2e, 0x2, 0x2, 0x1a5, 0x1a7, 0x5, 0x8, 0x5, 0x2, 0x1a6, 
    0x1a8, 0x5, 0x50, 0x29, 0x2, 0x1a7, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a7, 
    0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1a9, 
    0x19d, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1aa, 
    0x49, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ad, 0x5, 0x8, 0x5, 0x2, 0x1ac, 0x1ae, 
    0x5, 0x50, 0x29, 0x2, 0x1ad, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1ae, 
    0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b1, 
    0x5, 0xe, 0x8, 0x2, 0x1b0, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1af, 
    0x3, 0x2, 0x2, 0x2, 0x1b1, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b3, 0x7, 
    0x46, 0x2, 0x2, 0x1b3, 0x1b8, 0x5, 0x8, 0x5, 0x2, 0x1b4, 0x1b5, 0x7, 
    0x33, 0x2, 0x2, 0x1b5, 0x1b6, 0x5, 0x52, 0x2a, 0x2, 0x1b6, 0x1b7, 0x7, 
    0x34, 0x2, 0x2, 0x1b7, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b4, 0x3, 
    0x2, 0x2, 0x2, 0x1b8, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1bb, 0x3, 
    0x2, 0x2, 0x2, 0x1ba, 0x1bc, 0x5, 0x50, 0x29, 0x2, 0x1bb, 0x1ba, 0x3, 
    0x2, 0x2, 0x2, 0x1bb, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0x1bd, 0x1c2, 0x5, 0x8, 0x5, 0x2, 0x1be, 0x1bf, 0x7, 0x33, 
    0x2, 0x2, 0x1bf, 0x1c0, 0x5, 0x52, 0x2a, 0x2, 0x1c0, 0x1c1, 0x7, 0x34, 
    0x2, 0x2, 0x1c1, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1be, 0x3, 0x2, 
    0x2, 0x2, 0x1c2, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c5, 0x3, 0x2, 
    0x2, 0x2, 0x1c4, 0x1c6, 0x5, 0x50, 0x29, 0x2, 0x1c5, 0x1c4, 0x3, 0x2, 
    0x2, 0x2, 0x1c5, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x4f, 0x3, 0x2, 0x2, 
    0x2, 0x1c7, 0x1c8, 0x7, 0x47, 0x2, 0x2, 0x1c8, 0x1c9, 0x7, 0x9, 0x2, 
    0x2, 0x1c9, 0x51, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1cd, 0x5, 0x4, 0x3, 0x2, 
    0x1cb, 0x1cc, 0x7, 0x2f, 0x2, 0x2, 0x1cc, 0x1ce, 0x5, 0x52, 0x2a, 0x2, 
    0x1cd, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1ce, 0x3, 0x2, 0x2, 0x2, 
    0x1ce, 0x53, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1d0, 0x7, 0xa, 0x2, 0x2, 0x1d0, 
    0x1d1, 0x5, 0x36, 0x1c, 0x2, 0x1d1, 0x1d2, 0x5, 0x56, 0x2c, 0x2, 0x1d2, 
    0x55, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d4, 0x7, 0x2f, 0x2, 0x2, 0x1d4, 
    0x1d5, 0x5, 0x36, 0x1c, 0x2, 0x1d5, 0x1d6, 0x5, 0x56, 0x2c, 0x2, 0x1d6, 
    0x1da, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d8, 0x7, 0x8, 0x2, 0x2, 0x1d8, 
    0x1da, 0x5, 0x4, 0x3, 0x2, 0x1d9, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d9, 
    0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x57, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dc, 
    0x7, 0x4a, 0x2, 0x2, 0x1dc, 0x1dd, 0x5, 0x8, 0x5, 0x2, 0x1dd, 0x1df, 
    0x7, 0x31, 0x2, 0x2, 0x1de, 0x1e0, 0x5, 0x5a, 0x2e, 0x2, 0x1df, 0x1de, 
    0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1e1, 
    0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e2, 0x7, 0x32, 0x2, 0x2, 0x1e2, 0x1ec, 
    0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e4, 0x7, 0x4b, 0x2, 0x2, 0x1e4, 0x1e5, 
    0x5, 0x8, 0x5, 0x2, 0x1e5, 0x1e7, 0x7, 0x31, 0x2, 0x2, 0x1e6, 0x1e8, 
    0x5, 0x5a, 0x2e, 0x2, 0x1e7, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e8, 
    0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1ea, 
    0x7, 0x32, 0x2, 0x2, 0x1ea, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1db, 
    0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x59, 0x3, 
    0x2, 0x2, 0x2, 0x1ed, 0x1f0, 0x5, 0x5c, 0x2f, 0x2, 0x1ee, 0x1ef, 0x7, 
    0x2f, 0x2, 0x2, 0x1ef, 0x1f1, 0x5, 0x5a, 0x2e, 0x2, 0x1f0, 0x1ee, 0x3, 
    0x2, 0x2, 0x2, 0x1f0, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x5b, 0x3, 0x2, 
    0x2, 0x2, 0x1f2, 0x1f5, 0x7, 0x3e, 0x2, 0x2, 0x1f3, 0x1f4, 0x7, 0x2d, 
    0x2, 0x2, 0x1f4, 0x1f6, 0x5, 0x38, 0x1d, 0x2, 0x1f5, 0x1f3, 0x3, 0x2, 
    0x2, 0x2, 0x1f5, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f9, 0x3, 0x2, 
    0x2, 0x2, 0x1f7, 0x1f9, 0x5, 0x4, 0x3, 0x2, 0x1f8, 0x1f2, 0x3, 0x2, 
    0x2, 0x2, 0x1f8, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x5d, 0x3, 0x2, 0x2, 
    0x2, 0x1fa, 0x1fb, 0x7, 0x4, 0x2, 0x2, 0x1fb, 0x1fc, 0x5, 0x4, 0x3, 
    0x2, 0x1fc, 0x1fd, 0x7, 0x5, 0x2, 0x2, 0x1fd, 0x1fe, 0x5, 0x4, 0x3, 
    0x2, 0x1fe, 0x1ff, 0x7, 0x6, 0x2, 0x2, 0x1ff, 0x200, 0x5, 0x4, 0x3, 
    0x2, 0x200, 0x201, 0x7, 0x7, 0x2, 0x2, 0x201, 0x5f, 0x3, 0x2, 0x2, 0x2, 
    0x202, 0x203, 0x7, 0xe, 0x2, 0x2, 0x203, 0x61, 0x3, 0x2, 0x2, 0x2, 0x204, 
    0x205, 0x7, 0xf, 0x2, 0x2, 0x205, 0x63, 0x3, 0x2, 0x2, 0x2, 0x206, 0x207, 
    0x9, 0x6, 0x2, 0x2, 0x207, 0x65, 0x3, 0x2, 0x2, 0x2, 0x208, 0x209, 0x9, 
    0x7, 0x2, 0x2, 0x209, 0x67, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20b, 0x7, 0x10, 
    0x2, 0x2, 0x20b, 0x20f, 0x5, 0xe, 0x8, 0x2, 0x20c, 0x20e, 0x5, 0x6a, 
    0x36, 0x2, 0x20d, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x211, 0x3, 0x2, 
    0x2, 0x2, 0x20f, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x210, 0x3, 0x2, 
    0x2, 0x2, 0x210, 0x212, 0x3, 0x2, 0x2, 0x2, 0x211, 0x20f, 0x3, 0x2, 
    0x2, 0x2, 0x212, 0x213, 0x7, 0x11, 0x2, 0x2, 0x213, 0x21b, 0x3, 0x2, 
    0x2, 0x2, 0x214, 0x216, 0x5, 0x6a, 0x36, 0x2, 0x215, 0x214, 0x3, 0x2, 
    0x2, 0x2, 0x216, 0x219, 0x3, 0x2, 0x2, 0x2, 0x217, 0x215, 0x3, 0x2, 
    0x2, 0x2, 0x217, 0x218, 0x3, 0x2, 0x2, 0x2, 0x218, 0x21b, 0x3, 0x2, 
    0x2, 0x2, 0x219, 0x217, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x20a, 0x3, 0x2, 
    0x2, 0x2, 0x21a, 0x217, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x69, 0x3, 0x2, 0x2, 
    0x2, 0x21c, 0x220, 0x5, 0x70, 0x39, 0x2, 0x21d, 0x220, 0x5, 0x6c, 0x37, 
    0x2, 0x21e, 0x220, 0x5, 0x6e, 0x38, 0x2, 0x21f, 0x21c, 0x3, 0x2, 0x2, 
    0x2, 0x21f, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x21e, 0x3, 0x2, 0x2, 
    0x2, 0x220, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x221, 0x222, 0x7, 0x12, 0x2, 
    0x2, 0x222, 0x223, 0x5, 0xe, 0x8, 0x2, 0x223, 0x224, 0x5, 0x74, 0x3b, 
    0x2, 0x224, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x225, 0x226, 0x7, 0x12, 0x2, 
    0x2, 0x226, 0x227, 0x5, 0x8, 0x5, 0x2, 0x227, 0x228, 0x7, 0x2d, 0x2, 
    0x2, 0x228, 0x229, 0x5, 0xe, 0x8, 0x2, 0x229, 0x22a, 0x5, 0x74, 0x3b, 
    0x2, 0x22a, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x221, 0x3, 0x2, 0x2, 
    0x2, 0x22b, 0x225, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x6d, 0x3, 0x2, 0x2, 0x2, 
    0x22d, 0x22e, 0x7, 0x12, 0x2, 0x2, 0x22e, 0x22f, 0x5, 0x7a, 0x3e, 0x2, 
    0x22f, 0x230, 0x5, 0x78, 0x3d, 0x2, 0x230, 0x6f, 0x3, 0x2, 0x2, 0x2, 
    0x231, 0x232, 0x7, 0x12, 0x2, 0x2, 0x232, 0x233, 0x5, 0xe, 0x8, 0x2, 
    0x233, 0x234, 0x7, 0x2e, 0x2, 0x2, 0x234, 0x235, 0x5, 0x8, 0x5, 0x2, 
    0x235, 0x236, 0x7, 0x2d, 0x2, 0x2, 0x236, 0x237, 0x5, 0x38, 0x1d, 0x2, 
    0x237, 0x238, 0x5, 0x76, 0x3c, 0x2, 0x238, 0x71, 0x3, 0x2, 0x2, 0x2, 
    0x239, 0x23a, 0x5, 0x36, 0x1c, 0x2, 0x23a, 0x23b, 0x7, 0x3c, 0x2, 0x2, 
    0x23b, 0x23c, 0x5, 0x4, 0x3, 0x2, 0x23c, 0x242, 0x3, 0x2, 0x2, 0x2, 
    0x23d, 0x23e, 0x5, 0x7a, 0x3e, 0x2, 0x23e, 0x23f, 0x7, 0x3c, 0x2, 0x2, 
    0x23f, 0x240, 0x5, 0x4, 0x3, 0x2, 0x240, 0x242, 0x3, 0x2, 0x2, 0x2, 
    0x241, 0x239, 0x3, 0x2, 0x2, 0x2, 0x241, 0x23d, 0x3, 0x2, 0x2, 0x2, 
    0x242, 0x73, 0x3, 0x2, 0x2, 0x2, 0x243, 0x245, 0x7, 0x15, 0x2, 0x2, 
    0x244, 0x246, 0x5, 0x8, 0x5, 0x2, 0x245, 0x244, 0x3, 0x2, 0x2, 0x2, 
    0x245, 0x246, 0x3, 0x2, 0x2, 0x2, 0x246, 0x247, 0x3, 0x2, 0x2, 0x2, 
    0x247, 0x248, 0x7, 0x2d, 0x2, 0x2, 0x248, 0x253, 0x5, 0x4, 0x3, 0x2, 
    0x249, 0x24b, 0x7, 0x13, 0x2, 0x2, 0x24a, 0x249, 0x3, 0x2, 0x2, 0x2, 
    0x24a, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x24c, 0x3, 0x2, 0x2, 0x2, 
    0x24c, 0x24e, 0x7, 0x14, 0x2, 0x2, 0x24d, 0x24f, 0x5, 0x8, 0x5, 0x2, 
    0x24e, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x24f, 0x3, 0x2, 0x2, 0x2, 
    0x24f, 0x250, 0x3, 0x2, 0x2, 0x2, 0x250, 0x251, 0x7, 0x2d, 0x2, 0x2, 
    0x251, 0x253, 0x5, 0x72, 0x3a, 0x2, 0x252, 0x243, 0x3, 0x2, 0x2, 0x2, 
    0x252, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x253, 0x75, 0x3, 0x2, 0x2, 0x2, 0x254, 
    0x255, 0x7, 0x18, 0x2, 0x2, 0x255, 0x256, 0x7, 0x2d, 0x2, 0x2, 0x256, 
    0x258, 0x5, 0x4, 0x3, 0x2, 0x257, 0x259, 0x5, 0x76, 0x3c, 0x2, 0x258, 
    0x257, 0x3, 0x2, 0x2, 0x2, 0x258, 0x259, 0x3, 0x2, 0x2, 0x2, 0x259, 
    0x261, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25b, 0x7, 0x19, 0x2, 0x2, 0x25b, 
    0x25c, 0x7, 0x2d, 0x2, 0x2, 0x25c, 0x25e, 0x5, 0x4, 0x3, 0x2, 0x25d, 
    0x25f, 0x5, 0x76, 0x3c, 0x2, 0x25e, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x25e, 
    0x25f, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x261, 0x3, 0x2, 0x2, 0x2, 0x260, 
    0x254, 0x3, 0x2, 0x2, 0x2, 0x260, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x261, 
    0x77, 0x3, 0x2, 0x2, 0x2, 0x262, 0x264, 0x7, 0x9, 0x2, 0x2, 0x263, 0x265, 
    0x5, 0x8, 0x5, 0x2, 0x264, 0x263, 0x3, 0x2, 0x2, 0x2, 0x264, 0x265, 
    0x3, 0x2, 0x2, 0x2, 0x265, 0x266, 0x3, 0x2, 0x2, 0x2, 0x266, 0x267, 
    0x7, 0x2d, 0x2, 0x2, 0x267, 0x269, 0x5, 0x4, 0x3, 0x2, 0x268, 0x26a, 
    0x5, 0x78, 0x3d, 0x2, 0x269, 0x268, 0x3, 0x2, 0x2, 0x2, 0x269, 0x26a, 
    0x3, 0x2, 0x2, 0x2, 0x26a, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x26d, 
    0x7, 0x17, 0x2, 0x2, 0x26c, 0x26e, 0x5, 0x8, 0x5, 0x2, 0x26d, 0x26c, 
    0x3, 0x2, 0x2, 0x2, 0x26d, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x26e, 0x26f, 
    0x3, 0x2, 0x2, 0x2, 0x26f, 0x270, 0x7, 0x2d, 0x2, 0x2, 0x270, 0x272, 
    0x5, 0x4, 0x3, 0x2, 0x271, 0x273, 0x5, 0x78, 0x3d, 0x2, 0x272, 0x271, 
    0x3, 0x2, 0x2, 0x2, 0x272, 0x273, 0x3, 0x2, 0x2, 0x2, 0x273, 0x27e, 
    0x3, 0x2, 0x2, 0x2, 0x274, 0x276, 0x7, 0x16, 0x2, 0x2, 0x275, 0x277, 
    0x5, 0x8, 0x5, 0x2, 0x276, 0x275, 0x3, 0x2, 0x2, 0x2, 0x276, 0x277, 
    0x3, 0x2, 0x2, 0x2, 0x277, 0x278, 0x3, 0x2, 0x2, 0x2, 0x278, 0x279, 
    0x7, 0x2d, 0x2, 0x2, 0x279, 0x27b, 0x5, 0x4, 0x3, 0x2, 0x27a, 0x27c, 
    0x5, 0x78, 0x3d, 0x2, 0x27b, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x27c, 
    0x3, 0x2, 0x2, 0x2, 0x27c, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x262, 
    0x3, 0x2, 0x2, 0x2, 0x27d, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x274, 
    0x3, 0x2, 0x2, 0x2, 0x27e, 0x79, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x280, 0x5, 
    0xe, 0x8, 0x2, 0x280, 0x281, 0x7, 0x2e, 0x2, 0x2, 0x281, 0x282, 0x5, 
    0x8, 0x5, 0x2, 0x282, 0x284, 0x7, 0x31, 0x2, 0x2, 0x283, 0x285, 0x5, 
    0x7c, 0x3f, 0x2, 0x284, 0x283, 0x3, 0x2, 0x2, 0x2, 0x284, 0x285, 0x3, 
    0x2, 0x2, 0x2, 0x285, 0x286, 0x3, 0x2, 0x2, 0x2, 0x286, 0x287, 0x7, 
    0x32, 0x2, 0x2, 0x287, 0x289, 0x7, 0x2d, 0x2, 0x2, 0x288, 0x28a, 0x5, 
    0x38, 0x1d, 0x2, 0x289, 0x288, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28a, 0x3, 
    0x2, 0x2, 0x2, 0x28a, 0x296, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x28c, 0x5, 
    0x8, 0x5, 0x2, 0x28c, 0x28e, 0x7, 0x31, 0x2, 0x2, 0x28d, 0x28f, 0x5, 
    0x7c, 0x3f, 0x2, 0x28e, 0x28d, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x28f, 0x3, 
    0x2, 0x2, 0x2, 0x28f, 0x290, 0x3, 0x2, 0x2, 0x2, 0x290, 0x291, 0x7, 
    0x32, 0x2, 0x2, 0x291, 0x293, 0x7, 0x2d, 0x2, 0x2, 0x292, 0x294, 0x5, 
    0x38, 0x1d, 0x2, 0x293, 0x292, 0x3, 0x2, 0x2, 0x2, 0x293, 0x294, 0x3, 
    0x2, 0x2, 0x2, 0x294, 0x296, 0x3, 0x2, 0x2, 0x2, 0x295, 0x27f, 0x3, 
    0x2, 0x2, 0x2, 0x295, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x296, 0x7b, 0x3, 0x2, 
    0x2, 0x2, 0x297, 0x29a, 0x5, 0x36, 0x1c, 0x2, 0x298, 0x299, 0x7, 0x2f, 
    0x2, 0x2, 0x299, 0x29b, 0x5, 0x7c, 0x3f, 0x2, 0x29a, 0x298, 0x3, 0x2, 
    0x2, 0x2, 0x29a, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x7d, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x89, 0x99, 0x9b, 0xa0, 0xa8, 0xac, 0xb6, 0xbe, 0xc7, 0xd0, 
    0xd4, 0xe7, 0x100, 0x104, 0x10d, 0x119, 0x11b, 0x123, 0x12d, 0x131, 
    0x138, 0x146, 0x14d, 0x156, 0x15e, 0x167, 0x171, 0x17c, 0x180, 0x185, 
    0x18d, 0x194, 0x19b, 0x1a0, 0x1a7, 0x1a9, 0x1ad, 0x1b0, 0x1b8, 0x1bb, 
    0x1c2, 0x1c5, 0x1cd, 0x1d9, 0x1df, 0x1e7, 0x1eb, 0x1f0, 0x1f5, 0x1f8, 
    0x20f, 0x217, 0x21a, 0x21f, 0x22b, 0x241, 0x245, 0x24a, 0x24e, 0x252, 
    0x258, 0x25e, 0x260, 0x264, 0x269, 0x26d, 0x272, 0x276, 0x27b, 0x27d, 
    0x284, 0x289, 0x28e, 0x293, 0x295, 0x29a, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

OclParser::Initializer OclParser::_init;
