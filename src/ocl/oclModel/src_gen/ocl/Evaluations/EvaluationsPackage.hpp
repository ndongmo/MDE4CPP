//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_EVALUATIONSPACKAGE_HPP
#define OCL_EVALUATIONSPACKAGE_HPP

#include "ecore/EPackage.hpp"

namespace ecore 
{
	class EAnnotation;
	class EAttribute;
	class EClass;
	class EDataType;
	class EGenericType;
	class EOperation;
	class EParameter;
	class EReference;
	class EStringToStringMapEntry;
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

namespace ocl::Evaluations 
{
	/*!
	The Metamodel Package for the Evaluations metamodel. This package is used to enable the reflection of model elements. It contains all model elements
	which were described in an ecore file.
	*/
	
	class EvaluationsPackage : virtual public ecore::EPackage 
	{
		private:    
			EvaluationsPackage(EvaluationsPackage const&) = delete;
			EvaluationsPackage& operator=(EvaluationsPackage const&) = delete;

		protected:
			EvaluationsPackage(){}

		public:
			//static variables
			static const std::string eNAME;
			static const std::string eNS_URI;
			static const std::string eNS_PREFIX;

			// Begin Class AssociationClassCallExpEval
			//Class and Feature IDs 
			static const unsigned long ASSOCIATIONCLASSCALLEXPEVAL_CLASS = 96616882;
			static const unsigned int ASSOCIATIONCLASSCALLEXPEVAL_CLASS_FEATURE_COUNT = 10;
			static const unsigned int ASSOCIATIONCLASSCALLEXPEVAL_CLASS_OPERATION_COUNT = 4;
			
			static const int ASSOCIATIONCLASSCALLEXPEVAL_ATTRIBUTE_REFERREDASSOCIATIONCLASS = 309;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getAssociationClassCallExpEval_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getAssociationClassCallExpEval_Attribute_referredAssociationClass() const = 0;
			
			
			// End Class AssociationClassCallExpEval


			// Begin Class AssociationEndCallExpEval
			//Class and Feature IDs 
			static const unsigned long ASSOCIATIONENDCALLEXPEVAL_CLASS = 528258550;
			static const unsigned int ASSOCIATIONENDCALLEXPEVAL_CLASS_FEATURE_COUNT = 10;
			static const unsigned int ASSOCIATIONENDCALLEXPEVAL_CLASS_OPERATION_COUNT = 4;
			
			static const int ASSOCIATIONENDCALLEXPEVAL_ATTRIBUTE_REFERREDASSOCIATIONEND = 409;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getAssociationEndCallExpEval_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getAssociationEndCallExpEval_Attribute_referredAssociationEnd() const = 0;
			
			
			// End Class AssociationEndCallExpEval


			// Begin Class AttributeCallExpEval
			//Class and Feature IDs 
			static const unsigned long ATTRIBUTECALLEXPEVAL_CLASS = 738179271;
			static const unsigned int ATTRIBUTECALLEXPEVAL_CLASS_FEATURE_COUNT = 8;
			static const unsigned int ATTRIBUTECALLEXPEVAL_CLASS_OPERATION_COUNT = 4;
			
			static const int ATTRIBUTECALLEXPEVAL_ATTRIBUTE_REFERREDATTRIBUTE = 507;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getAttributeCallExpEval_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getAttributeCallExpEval_Attribute_referredAttribute() const = 0;
			
			
			// End Class AttributeCallExpEval


			// Begin Class BooleanLiteralExpEval
			//Class and Feature IDs 
			static const unsigned long BOOLEANLITERALEXPEVAL_CLASS = 888886148;
			static const unsigned int BOOLEANLITERALEXPEVAL_CLASS_FEATURE_COUNT = 6;
			static const unsigned int BOOLEANLITERALEXPEVAL_CLASS_OPERATION_COUNT = 5;
			
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getBooleanLiteralExpEval_Class() const = 0;
			
			
			
			
			// End Class BooleanLiteralExpEval


			// Begin Class CollectionItemEval
			//Class and Feature IDs 
			static const unsigned long COLLECTIONITEMEVAL_CLASS = 531962577;
			static const unsigned int COLLECTIONITEMEVAL_CLASS_FEATURE_COUNT = 4;
			static const unsigned int COLLECTIONITEMEVAL_CLASS_OPERATION_COUNT = 3;
			
			static const int COLLECTIONITEMEVAL_ATTRIBUTE_ITEM = 1203;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getCollectionItemEval_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getCollectionItemEval_Attribute_item() const = 0;
			
			
			// End Class CollectionItemEval


			// Begin Class CollectionLiteralExpEval
			//Class and Feature IDs 
			static const unsigned long COLLECTIONLITERALEXPEVAL_CLASS = 838178519;
			static const unsigned int COLLECTIONLITERALEXPEVAL_CLASS_FEATURE_COUNT = 7;
			static const unsigned int COLLECTIONLITERALEXPEVAL_CLASS_OPERATION_COUNT = 3;
			
			static const int COLLECTIONLITERALEXPEVAL_ATTRIBUTE_PARTS = 1506;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getCollectionLiteralExpEval_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getCollectionLiteralExpEval_Attribute_parts() const = 0;
			
			
			// End Class CollectionLiteralExpEval


			// Begin Class CollectionLiteralPartEval
			//Class and Feature IDs 
			static const unsigned long COLLECTIONLITERALPARTEVAL_CLASS = 357481470;
			static const unsigned int COLLECTIONLITERALPARTEVAL_CLASS_FEATURE_COUNT = 3;
			static const unsigned int COLLECTIONLITERALPARTEVAL_CLASS_OPERATION_COUNT = 3;
			
			static const int COLLECTIONLITERALPARTEVAL_ATTRIBUTE_ELEMENT = 1702;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getCollectionLiteralPartEval_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getCollectionLiteralPartEval_Attribute_element() const = 0;
			
			
			// End Class CollectionLiteralPartEval


			// Begin Class CollectionRangeEval
			//Class and Feature IDs 
			static const unsigned long COLLECTIONRANGEEVAL_CLASS = 481413085;
			static const unsigned int COLLECTIONRANGEEVAL_CLASS_FEATURE_COUNT = 5;
			static const unsigned int COLLECTIONRANGEEVAL_CLASS_OPERATION_COUNT = 3;
			
			static const int COLLECTIONRANGEEVAL_ATTRIBUTE_FIRST = 1903;
			static const int COLLECTIONRANGEEVAL_ATTRIBUTE_LAST = 1904;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getCollectionRangeEval_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getCollectionRangeEval_Attribute_first() const = 0;
			virtual std::shared_ptr<ecore::EReference> getCollectionRangeEval_Attribute_last() const = 0;
			
			
			// End Class CollectionRangeEval


			// Begin Class EnumLiteralExpEval
			//Class and Feature IDs 
			static const unsigned long ENUMLITERALEXPEVAL_CLASS = 395704758;
			static const unsigned int ENUMLITERALEXPEVAL_CLASS_FEATURE_COUNT = 6;
			static const unsigned int ENUMLITERALEXPEVAL_CLASS_OPERATION_COUNT = 3;
			
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEnumLiteralExpEval_Class() const = 0;
			
			
			
			
			// End Class EnumLiteralExpEval


			// Begin Class EvalEnvironment
			//Class and Feature IDs 
			static const unsigned long EVALENVIRONMENT_CLASS = 1468930881;
			static const unsigned int EVALENVIRONMENT_CLASS_FEATURE_COUNT = 1;
			static const unsigned int EVALENVIRONMENT_CLASS_OPERATION_COUNT = 5;
			
			static const int EVALENVIRONMENT_ATTRIBUTE_BINDINGS = 2500;
			
			static const int EVALENVIRONMENT_OPERATION_ADD_NAMEVALUEBINDING = 2503;
			static const int EVALENVIRONMENT_OPERATION_ADDALL_NAMEVALUEBINDING = 2505;
			static const int EVALENVIRONMENT_OPERATION_FIND_STRING = 2504;
			static const int EVALENVIRONMENT_OPERATION_GETVALUEOF_ESTRING = 2501;
			static const int EVALENVIRONMENT_OPERATION_REPLACE_NAMEVALUEBINDING = 2502;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEvalEnvironment_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getEvalEnvironment_Attribute_bindings() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEvalEnvironment_Operation_add_NameValueBinding() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEvalEnvironment_Operation_addAll_NameValueBinding() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEvalEnvironment_Operation_find_String() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEvalEnvironment_Operation_getValueOf_EString() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEvalEnvironment_Operation_replace_NameValueBinding() const = 0;
			
			// End Class EvalEnvironment


			// Begin Class EvalNameSpace
			//Class and Feature IDs 
			static const unsigned long EVALNAMESPACE_CLASS = 228902947;
			static const unsigned int EVALNAMESPACE_CLASS_FEATURE_COUNT = 2;
			static const unsigned int EVALNAMESPACE_CLASS_OPERATION_COUNT = 3;
			
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEvalNameSpace_Class() const = 0;
			
			
			
			
			// End Class EvalNameSpace


			// Begin Class ExpressionInOclEval
			//Class and Feature IDs 
			static const unsigned long EXPRESSIONINOCLEVAL_CLASS = 1910871737;
			static const unsigned int EXPRESSIONINOCLEVAL_CLASS_FEATURE_COUNT = 2;
			static const unsigned int EXPRESSIONINOCLEVAL_CLASS_OPERATION_COUNT = 0;
			
			static const int EXPRESSIONINOCLEVAL_ATTRIBUTE_CONTEXT = 2800;
			static const int EXPRESSIONINOCLEVAL_ATTRIBUTE_ENVIRONMENT = 2801;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getExpressionInOclEval_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getExpressionInOclEval_Attribute_context() const = 0;
			virtual std::shared_ptr<ecore::EReference> getExpressionInOclEval_Attribute_environment() const = 0;
			
			
			// End Class ExpressionInOclEval


			// Begin Class IfExpEval
			//Class and Feature IDs 
			static const unsigned long IFEXPEVAL_CLASS = 506440572;
			static const unsigned int IFEXPEVAL_CLASS_FEATURE_COUNT = 9;
			static const unsigned int IFEXPEVAL_CLASS_OPERATION_COUNT = 3;
			
			static const int IFEXPEVAL_ATTRIBUTE_CONDITION = 3106;
			static const int IFEXPEVAL_ATTRIBUTE_ELSEEXPRESSION = 3108;
			static const int IFEXPEVAL_ATTRIBUTE_THENEXPRESSION = 3107;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getIfExpEval_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getIfExpEval_Attribute_condition() const = 0;
			virtual std::shared_ptr<ecore::EReference> getIfExpEval_Attribute_elseExpression() const = 0;
			virtual std::shared_ptr<ecore::EReference> getIfExpEval_Attribute_thenExpression() const = 0;
			
			
			// End Class IfExpEval


			// Begin Class IntegerLiteralExpEval
			//Class and Feature IDs 
			static const unsigned long INTEGERLITERALEXPEVAL_CLASS = 937125875;
			static const unsigned int INTEGERLITERALEXPEVAL_CLASS_FEATURE_COUNT = 6;
			static const unsigned int INTEGERLITERALEXPEVAL_CLASS_OPERATION_COUNT = 5;
			
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getIntegerLiteralExpEval_Class() const = 0;
			
			
			
			
			// End Class IntegerLiteralExpEval


			// Begin Class IterateExpEval
			//Class and Feature IDs 
			static const unsigned long ITERATEEXPEVAL_CLASS = 1462447109;
			static const unsigned int ITERATEEXPEVAL_CLASS_FEATURE_COUNT = 10;
			static const unsigned int ITERATEEXPEVAL_CLASS_OPERATION_COUNT = 3;
			
			static const int ITERATEEXPEVAL_ATTRIBUTE_RESULT = 3809;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getIterateExpEval_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getIterateExpEval_Attribute_result() const = 0;
			
			
			// End Class IterateExpEval


			// Begin Class IteratorExpEval
			//Class and Feature IDs 
			static const unsigned long ITERATOREXPEVAL_CLASS = 907082345;
			static const unsigned int ITERATOREXPEVAL_CLASS_FEATURE_COUNT = 9;
			static const unsigned int ITERATOREXPEVAL_CLASS_OPERATION_COUNT = 3;
			
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getIteratorExpEval_Class() const = 0;
			
			
			
			
			// End Class IteratorExpEval


			// Begin Class LetExpEval
			//Class and Feature IDs 
			static const unsigned long LETEXPEVAL_CLASS = 302955328;
			static const unsigned int LETEXPEVAL_CLASS_FEATURE_COUNT = 9;
			static const unsigned int LETEXPEVAL_CLASS_OPERATION_COUNT = 3;
			
			static const int LETEXPEVAL_ATTRIBUTE_IN = 4206;
			static const int LETEXPEVAL_ATTRIBUTE_INITEXPRESSION = 4207;
			static const int LETEXPEVAL_ATTRIBUTE_VARIABLE = 4208;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getLetExpEval_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getLetExpEval_Attribute_in() const = 0;
			virtual std::shared_ptr<ecore::EReference> getLetExpEval_Attribute_initExpression() const = 0;
			virtual std::shared_ptr<ecore::EReference> getLetExpEval_Attribute_variable() const = 0;
			
			
			// End Class LetExpEval


			// Begin Class LiteralExpEval
			//Class and Feature IDs 
			static const unsigned long LITERALEXPEVAL_CLASS = 520640664;
			static const unsigned int LITERALEXPEVAL_CLASS_FEATURE_COUNT = 6;
			static const unsigned int LITERALEXPEVAL_CLASS_OPERATION_COUNT = 3;
			
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getLiteralExpEval_Class() const = 0;
			
			
			
			
			// End Class LiteralExpEval


			// Begin Class LoopExpEval
			//Class and Feature IDs 
			static const unsigned long LOOPEXPEVAL_CLASS = 2027710795;
			static const unsigned int LOOPEXPEVAL_CLASS_FEATURE_COUNT = 9;
			static const unsigned int LOOPEXPEVAL_CLASS_OPERATION_COUNT = 3;
			
			static const int LOOPEXPEVAL_ATTRIBUTE_BODYEVALS = 4707;
			static const int LOOPEXPEVAL_ATTRIBUTE_ITERATORS = 4708;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getLoopExpEval_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getLoopExpEval_Attribute_bodyEvals() const = 0;
			virtual std::shared_ptr<ecore::EReference> getLoopExpEval_Attribute_iterators() const = 0;
			
			
			// End Class LoopExpEval


			// Begin Class ModelPropertyCallExpEval
			//Class and Feature IDs 
			static const unsigned long MODELPROPERTYCALLEXPEVAL_CLASS = 952179936;
			static const unsigned int MODELPROPERTYCALLEXPEVAL_CLASS_FEATURE_COUNT = 7;
			static const unsigned int MODELPROPERTYCALLEXPEVAL_CLASS_OPERATION_COUNT = 4;
			
			
			static const int MODELPROPERTYCALLEXPEVAL_OPERATION_ATPRE = 5010;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getModelPropertyCallExpEval_Class() const = 0;
			
			
			
			virtual std::shared_ptr<ecore::EOperation> getModelPropertyCallExpEval_Operation_atPre() const = 0;
			
			// End Class ModelPropertyCallExpEval


			// Begin Class NavigationCallExpEval
			//Class and Feature IDs 
			static const unsigned long NAVIGATIONCALLEXPEVAL_CLASS = 1496212673;
			static const unsigned int NAVIGATIONCALLEXPEVAL_CLASS_FEATURE_COUNT = 9;
			static const unsigned int NAVIGATIONCALLEXPEVAL_CLASS_OPERATION_COUNT = 4;
			
			static const int NAVIGATIONCALLEXPEVAL_ATTRIBUTE_NAVIGATIONSOURCE = 5407;
			static const int NAVIGATIONCALLEXPEVAL_ATTRIBUTE_QUALIFIERS = 5408;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getNavigationCallExpEval_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getNavigationCallExpEval_Attribute_navigationSource() const = 0;
			virtual std::shared_ptr<ecore::EReference> getNavigationCallExpEval_Attribute_qualifiers() const = 0;
			
			
			// End Class NavigationCallExpEval


			// Begin Class NumericLiteralExpEval
			//Class and Feature IDs 
			static const unsigned long NUMERICLITERALEXPEVAL_CLASS = 1683283489;
			static const unsigned int NUMERICLITERALEXPEVAL_CLASS_FEATURE_COUNT = 6;
			static const unsigned int NUMERICLITERALEXPEVAL_CLASS_OPERATION_COUNT = 3;
			
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getNumericLiteralExpEval_Class() const = 0;
			
			
			
			
			// End Class NumericLiteralExpEval


			// Begin Class OclExpEval
			//Class and Feature IDs 
			static const unsigned long OCLEXPEVAL_CLASS = 731240084;
			static const unsigned int OCLEXPEVAL_CLASS_FEATURE_COUNT = 6;
			static const unsigned int OCLEXPEVAL_CLASS_OPERATION_COUNT = 3;
			
			static const int OCLEXPEVAL_ATTRIBUTE_BEFOREENVIRONMENT = 5903;
			static const int OCLEXPEVAL_ATTRIBUTE_ENVIRONMENT = 5902;
			static const int OCLEXPEVAL_ATTRIBUTE_MODEL = 5905;
			static const int OCLEXPEVAL_ATTRIBUTE_RESULTVALUE = 5904;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getOclExpEval_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getOclExpEval_Attribute_beforeEnvironment() const = 0;
			virtual std::shared_ptr<ecore::EReference> getOclExpEval_Attribute_environment() const = 0;
			virtual std::shared_ptr<ecore::EReference> getOclExpEval_Attribute_model() const = 0;
			virtual std::shared_ptr<ecore::EReference> getOclExpEval_Attribute_resultValue() const = 0;
			
			
			// End Class OclExpEval


			// Begin Class OclMessageArgEval
			//Class and Feature IDs 
			static const unsigned long OCLMESSAGEARGEVAL_CLASS = 1513124741;
			static const unsigned int OCLMESSAGEARGEVAL_CLASS_FEATURE_COUNT = 5;
			static const unsigned int OCLMESSAGEARGEVAL_CLASS_OPERATION_COUNT = 3;
			
			static const int OCLMESSAGEARGEVAL_ATTRIBUTE_EXPRESSION = 6103;
			static const int OCLMESSAGEARGEVAL_ATTRIBUTE_UNSPECIFIED = 6102;
			static const int OCLMESSAGEARGEVAL_ATTRIBUTE_VARIABLE = 6104;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getOclMessageArgEval_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getOclMessageArgEval_Attribute_expression() const = 0;
			virtual std::shared_ptr<ecore::EReference> getOclMessageArgEval_Attribute_unspecified() const = 0;
			virtual std::shared_ptr<ecore::EReference> getOclMessageArgEval_Attribute_variable() const = 0;
			
			
			// End Class OclMessageArgEval


			// Begin Class OclMessageExpEval
			//Class and Feature IDs 
			static const unsigned long OCLMESSAGEEXPEVAL_CLASS = 67948642;
			static const unsigned int OCLMESSAGEEXPEVAL_CLASS_FEATURE_COUNT = 9;
			static const unsigned int OCLMESSAGEEXPEVAL_CLASS_OPERATION_COUNT = 3;
			static const int OCLMESSAGEEXPEVAL_ATTRIBUTE_NAME = 6208;
			
			static const int OCLMESSAGEEXPEVAL_ATTRIBUTE_ARGUMENTS = 6207;
			static const int OCLMESSAGEEXPEVAL_ATTRIBUTE_TARGET = 6206;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getOclMessageExpEval_Class() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getOclMessageExpEval_Attribute_name() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getOclMessageExpEval_Attribute_arguments() const = 0;
			virtual std::shared_ptr<ecore::EReference> getOclMessageExpEval_Attribute_target() const = 0;
			
			
			// End Class OclMessageExpEval


			// Begin Class OperationCallExpEval
			//Class and Feature IDs 
			static const unsigned long OPERATIONCALLEXPEVAL_CLASS = 1550289763;
			static const unsigned int OPERATIONCALLEXPEVAL_CLASS_FEATURE_COUNT = 9;
			static const unsigned int OPERATIONCALLEXPEVAL_CLASS_OPERATION_COUNT = 4;
			
			static const int OPERATIONCALLEXPEVAL_ATTRIBUTE_ARGUMENTS = 6608;
			static const int OPERATIONCALLEXPEVAL_ATTRIBUTE_REFERREDOPERATION = 6607;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getOperationCallExpEval_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getOperationCallExpEval_Attribute_arguments() const = 0;
			virtual std::shared_ptr<ecore::EReference> getOperationCallExpEval_Attribute_referredOperation() const = 0;
			
			
			// End Class OperationCallExpEval


			// Begin Class PrimitiveLiteralExpEval
			//Class and Feature IDs 
			static const unsigned long PRIMITIVELITERALEXPEVAL_CLASS = 2064904225;
			static const unsigned int PRIMITIVELITERALEXPEVAL_CLASS_FEATURE_COUNT = 6;
			static const unsigned int PRIMITIVELITERALEXPEVAL_CLASS_OPERATION_COUNT = 3;
			
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getPrimitiveLiteralExpEval_Class() const = 0;
			
			
			
			
			// End Class PrimitiveLiteralExpEval


			// Begin Class PropertyCallExpEval
			//Class and Feature IDs 
			static const unsigned long PROPERTYCALLEXPEVAL_CLASS = 1055543809;
			static const unsigned int PROPERTYCALLEXPEVAL_CLASS_FEATURE_COUNT = 7;
			static const unsigned int PROPERTYCALLEXPEVAL_CLASS_OPERATION_COUNT = 3;
			
			static const int PROPERTYCALLEXPEVAL_ATTRIBUTE_SOURCE = 7206;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getPropertyCallExpEval_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getPropertyCallExpEval_Attribute_source() const = 0;
			
			
			// End Class PropertyCallExpEval


			// Begin Class RealLiteralExpEval
			//Class and Feature IDs 
			static const unsigned long REALLITERALEXPEVAL_CLASS = 1116784610;
			static const unsigned int REALLITERALEXPEVAL_CLASS_FEATURE_COUNT = 6;
			static const unsigned int REALLITERALEXPEVAL_CLASS_OPERATION_COUNT = 5;
			
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getRealLiteralExpEval_Class() const = 0;
			
			
			
			
			// End Class RealLiteralExpEval


			// Begin Class StringLiteralExpEval
			//Class and Feature IDs 
			static const unsigned long STRINGLITERALEXPEVAL_CLASS = 608295728;
			static const unsigned int STRINGLITERALEXPEVAL_CLASS_FEATURE_COUNT = 6;
			static const unsigned int STRINGLITERALEXPEVAL_CLASS_OPERATION_COUNT = 5;
			
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getStringLiteralExpEval_Class() const = 0;
			
			
			
			
			// End Class StringLiteralExpEval


			// Begin Class TupleLiteralExpEval
			//Class and Feature IDs 
			static const unsigned long TUPLELITERALEXPEVAL_CLASS = 1343806720;
			static const unsigned int TUPLELITERALEXPEVAL_CLASS_FEATURE_COUNT = 7;
			static const unsigned int TUPLELITERALEXPEVAL_CLASS_OPERATION_COUNT = 3;
			
			static const int TUPLELITERALEXPEVAL_ATTRIBUTE_TUPLEPART = 8506;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getTupleLiteralExpEval_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getTupleLiteralExpEval_Attribute_tuplePart() const = 0;
			
			
			// End Class TupleLiteralExpEval


			// Begin Class TupleLiteralExpPartEval
			//Class and Feature IDs 
			static const unsigned long TUPLELITERALEXPPARTEVAL_CLASS = 1391982024;
			static const unsigned int TUPLELITERALEXPPARTEVAL_CLASS_FEATURE_COUNT = 2;
			static const unsigned int TUPLELITERALEXPPARTEVAL_CLASS_OPERATION_COUNT = 3;
			
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getTupleLiteralExpPartEval_Class() const = 0;
			
			
			
			
			// End Class TupleLiteralExpPartEval


			// Begin Class UnlimitedNaturalLiteralExpEval
			//Class and Feature IDs 
			static const unsigned long UNLIMITEDNATURALLITERALEXPEVAL_CLASS = 1733278569;
			static const unsigned int UNLIMITEDNATURALLITERALEXPEVAL_CLASS_FEATURE_COUNT = 6;
			static const unsigned int UNLIMITEDNATURALLITERALEXPEVAL_CLASS_OPERATION_COUNT = 5;
			
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getUnlimitedNaturalLiteralExpEval_Class() const = 0;
			
			
			
			
			// End Class UnlimitedNaturalLiteralExpEval


			// Begin Class UnspecifiedValueExpEval
			//Class and Feature IDs 
			static const unsigned long UNSPECIFIEDVALUEEXPEVAL_CLASS = 55905302;
			static const unsigned int UNSPECIFIEDVALUEEXPEVAL_CLASS_FEATURE_COUNT = 2;
			static const unsigned int UNSPECIFIEDVALUEEXPEVAL_CLASS_OPERATION_COUNT = 3;
			
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getUnspecifiedValueExpEval_Class() const = 0;
			
			
			
			
			// End Class UnspecifiedValueExpEval


			// Begin Class VariableDeclEval
			//Class and Feature IDs 
			static const unsigned long VARIABLEDECLEVAL_CLASS = 1333409127;
			static const unsigned int VARIABLEDECLEVAL_CLASS_FEATURE_COUNT = 2;
			static const unsigned int VARIABLEDECLEVAL_CLASS_OPERATION_COUNT = 0;
			
			static const int VARIABLEDECLEVAL_ATTRIBUTE_INITEXP = 9700;
			static const int VARIABLEDECLEVAL_ATTRIBUTE_NAME = 9701;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getVariableDeclEval_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getVariableDeclEval_Attribute_initExp() const = 0;
			virtual std::shared_ptr<ecore::EReference> getVariableDeclEval_Attribute_name() const = 0;
			
			
			// End Class VariableDeclEval


			// Begin Class VariableExpEval
			//Class and Feature IDs 
			static const unsigned long VARIABLEEXPEVAL_CLASS = 317258607;
			static const unsigned int VARIABLEEXPEVAL_CLASS_FEATURE_COUNT = 7;
			static const unsigned int VARIABLEEXPEVAL_CLASS_OPERATION_COUNT = 3;
			
			static const int VARIABLEEXPEVAL_ATTRIBUTE_REFERREDVARIABLE = 9906;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getVariableExpEval_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getVariableExpEval_Attribute_referredVariable() const = 0;
			
			
			// End Class VariableExpEval

			
			

			

			//Singleton Instance and Getter
			private:
				static std::shared_ptr<EvaluationsPackage> instance;
			public:
				static std::shared_ptr<EvaluationsPackage> eInstance();
	};
}
#endif /* end of include guard: OCL_EVALUATIONSPACKAGE_HPP */
