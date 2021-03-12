//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCLFACTORY_HPP
#define OCLFACTORY_HPP

#include <map>
#include <memory>

#include "ecore/EFactory.hpp"
#include "ocl/oclPackage.hpp"

namespace ocl 
{
	class oclPackage;
}
namespace ocl::Evaluations 
{
	class AssociationClassCallExpEval;
	class AssociationEndCallExpEval;
	class AttributeCallExpEval;
	class BooleanLiteralExpEval;
	class CollectionItemEval;
	class CollectionLiteralExpEval;
	class CollectionLiteralPartEval;
	class CollectionRangeEval;
	class EnumLiteralExpEval;
	class EvalEnvironment;
	class EvalNameSpace;
	class ExpressionInOclEval;
	class IfExpEval;
	class IntegerLiteralExpEval;
	class IterateExpEval;
	class IteratorExpEval;
	class LetExpEval;
	class LiteralExpEval;
	class LoopExpEval;
	class ModelPropertyCallExpEval;
	class NavigationCallExpEval;
	class NumericLiteralExpEval;
	class OclExpEval;
	class OclMessageArgEval;
	class OclMessageExpEval;
	class OperationCallExpEval;
	class PrimitiveLiteralExpEval;
	class PropertyCallExpEval;
	class RealLiteralExpEval;
	class StringLiteralExpEval;
	class TupleLiteralExpEval;
	class TupleLiteralExpPartEval;
	class UnlimitedNaturalLiteralExpEval;
	class UnspecifiedValueExpEval;
	class VariableDeclEval;
	class VariableExpEval;
}

namespace ocl::Expressions 
{
	class AssociationClassCallExp;
	class BooleanLiteralExp;
	class CallExp;
	class CollectionItem;
	class CollectionLiteralExp;
	class CollectionLiteralPart;
	class CollectionRange;
	class EnumLiteralExp;
	class ExpressionInOcl;
	class FeatureCallExp;
	class IfExp;
	class InfixedExp;
	class IntegerLiteralExp;
	class InvalidLiteralExp;
	class IterateExp;
	class IteratorExp;
	class LetExp;
	class LiteralExp;
	class LoopExp;
	class MessageExp;
	class NavigationCallExp;
	class NullLiteralExp;
	class NumericLiteralExp;
	class OclExpression;
	class OperationCallExp;
	class PrimitiveLiteralExp;
	class PropertyCallExp;
	class RealLiteralExp;
	class StateExp;
	class StringLiteralExp;
	class TupleLiteralExp;
	class TupleLiteralPart;
	class TypeExp;
	class UnlimitedNaturalExp;
	class UnspecifiedValueExp;
	class Variable;
	class VariableExp;
}

namespace ocl::Expressions 
{
	class CallExp;
}

namespace ocl::Expressions 
{
	class IterateExp;
}

namespace ocl::Expressions 
{
	class IfExp;
}

namespace ocl::Expressions 
{
	class CollectionRange;
}

namespace ocl::Expressions 
{
	class IfExp;
}

namespace ocl::Expressions 
{
	class Variable;
}

namespace ocl::Expressions 
{
	class CollectionRange;
}

namespace ocl::Expressions 
{
	class LoopExp;
}

namespace ocl::Expressions 
{
	class LoopExp;
}

namespace ocl::Expressions 
{
	class OperationCallExp;
}

namespace ocl::Expressions 
{
	class NavigationCallExp;
}

namespace ocl::Expressions 
{
	class ExpressionInOcl;
}

namespace ocl::Expressions 
{
	class ExpressionInOcl;
}

namespace ocl::Expressions 
{
	class IfExp;
}

namespace ocl::Expressions 
{
	class ExpressionInOcl;
}

namespace ocl::Expressions 
{
	class ExpressionInOcl;
}

namespace ocl::Types 
{
	class AnyType;
	class BagType;
	class CollectionType;
	class InvalidType;
	class MessageType;
	class NameTypeBinding;
	class OrderedSetType;
	class SequenceType;
	class SetType;
	class TemplateParameterType;
	class TupleType;
	class VoidType;
}

namespace ecore 
{
	class EPackage;
}

namespace ocl::Values 
{
	class BagTypeValue;
	class CollectionValue;
	class Element;
	class LocalSnapshot;
	class NameValueBinding;
	class ObjectValue;
	class OclMessageValue;
	class OclVoidValue;
	class OrderedSetTypeValue;
	class SequenceTypeValue;
	class SetTypeValue;
	class StaticValue;
	class TupleValue;
	class UndefinedValue;
}



namespace ocl 
{
	class oclFactory : virtual public ecore::EFactory 
	{
		private:    
			oclFactory(oclFactory const&) = delete;
			oclFactory& operator=(oclFactory const&) = delete;
		protected:
			oclFactory(){}
		
			//Singleton Instance and Getter
			private:
				static std::shared_ptr<oclFactory> instance;
			public:
				static std::shared_ptr<oclFactory> eInstance();
		
			//Creator functions
			virtual std::shared_ptr<ecore::EObject> create(std::string _className,  std::shared_ptr<ecore::EObject> container=nullptr, const int referenceID = -1) const = 0;
			virtual std::shared_ptr<ecore::EObject> create(const int classID,  std::shared_ptr<ecore::EObject> container = nullptr, const int referenceID = -1) const = 0;
			virtual std::shared_ptr<ecore::EObject> create(std::shared_ptr<ecore::EClass> _class, std::shared_ptr<EObject> _container=nullptr, const int referenceID = -1) const = 0;

			
	};
}
#endif /* end of include guard: OCLFACTORY_HPP */
