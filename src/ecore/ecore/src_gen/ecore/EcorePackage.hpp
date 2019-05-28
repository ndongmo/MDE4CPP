//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECOREPACKAGE_HPP
#define ECOREPACKAGE_HPP

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
	class ETypeParameter;
}

namespace ecore 
{
	/*!
	The Metamodel Package for the ecore metamodel. This package is used to enable the reflection of model elements. It contains all model elements
	which were described in an ecore file.
	*/
	/*!
	 */
	class EcorePackage : virtual public EPackage 
	{
		private:    
			EcorePackage(EcorePackage const&) = delete;
			EcorePackage& operator=(EcorePackage const&) = delete;

		protected:
			EcorePackage(){}

		public:
			//static variables
			static const std::string eNAME;
			static const std::string eNS_URI;
			static const std::string eNS_PREFIX;

			// Begin Class EAnnotation
			//Class and Feature IDs 
			static const unsigned int EANNOTATION_CLASS = 1;
			static const unsigned int EANNOTATION_CLASS_FEATURE_COUNT = 9;
			static const unsigned int EANNOTATION_CLASS_OPERATION_COUNT = 16;
			static const int EANNOTATION_ATTRIBUTE_SOURCE = 504;
			
			static const int EANNOTATION_ATTRIBUTE_CONTENTS = 507;
			static const int EANNOTATION_ATTRIBUTE_DETAILS = 505;
			static const int EANNOTATION_ATTRIBUTE_EMODELELEMENT = 506;
			static const int EANNOTATION_ATTRIBUTE_REFERENCES = 508;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEAnnotation_Class() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getEAnnotation_Attribute_source() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEAnnotation_Attribute_contents() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEAnnotation_Attribute_details() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEAnnotation_Attribute_eModelElement() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEAnnotation_Attribute_references() const = 0;
			
			
			// End Class EAnnotation


			// Begin Class EAttribute
			//Class and Feature IDs 
			static const unsigned int EATTRIBUTE_CLASS = 2;
			static const unsigned int EATTRIBUTE_CLASS_FEATURE_COUNT = 24;
			static const unsigned int EATTRIBUTE_CLASS_OPERATION_COUNT = 18;
			static const int EATTRIBUTE_ATTRIBUTE_ID = 1022;
			
			static const int EATTRIBUTE_ATTRIBUTE_EATTRIBUTETYPE = 1023;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEAttribute_Class() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getEAttribute_Attribute_iD() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEAttribute_Attribute_eAttributeType() const = 0;
			
			
			// End Class EAttribute


			// Begin Class EClass
			//Class and Feature IDs 
			static const unsigned int ECLASS_CLASS = 12;
			static const unsigned int ECLASS_CLASS_FEATURE_COUNT = 27;
			static const unsigned int ECLASS_CLASS_OPERATION_COUNT = 28;
			static const int ECLASS_ATTRIBUTE_ABSTRACT = 6011;
			static const int ECLASS_ATTRIBUTE_INTERFACE = 6012;
			
			static const int ECLASS_ATTRIBUTE_EALLATTRIBUTES = 6015;
			static const int ECLASS_ATTRIBUTE_EALLCONTAINMENTS = 6019;
			static const int ECLASS_ATTRIBUTE_EALLGENERICSUPERTYPES = 6026;
			static const int ECLASS_ATTRIBUTE_EALLOPERATIONS = 6020;
			static const int ECLASS_ATTRIBUTE_EALLREFERENCES = 6016;
			static const int ECLASS_ATTRIBUTE_EALLSTRUCTURALFEATURES = 6021;
			static const int ECLASS_ATTRIBUTE_EALLSUPERTYPES = 6022;
			static const int ECLASS_ATTRIBUTE_EATTRIBUTES = 6018;
			static const int ECLASS_ATTRIBUTE_EGENERICSUPERTYPES = 6025;
			static const int ECLASS_ATTRIBUTE_EIDATTRIBUTE = 6023;
			static const int ECLASS_ATTRIBUTE_EOPERATIONS = 6014;
			static const int ECLASS_ATTRIBUTE_EREFERENCES = 6017;
			static const int ECLASS_ATTRIBUTE_ESTRUCTURALFEATURES = 6024;
			static const int ECLASS_ATTRIBUTE_ESUPERTYPES = 6013;
			
			static const int ECLASS_OPERATION_GETEOPERATION_EINT = 6051;
			static const int ECLASS_OPERATION_GETESTRUCTURALFEATURE_EINT = 6047;
			static const int ECLASS_OPERATION_GETESTRUCTURALFEATURE_ESTRING = 6049;
			static const int ECLASS_OPERATION_GETFEATURECOUNT = 6046;
			static const int ECLASS_OPERATION_GETFEATUREID_ESTRUCTURALFEATURE = 6048;
			static const int ECLASS_OPERATION_GETFEATURETYPE_ESTRUCTURALFEATURE = 6054;
			static const int ECLASS_OPERATION_GETOPERATIONCOUNT = 6050;
			static const int ECLASS_OPERATION_GETOPERATIONID_EOPERATION = 6052;
			static const int ECLASS_OPERATION_GETOVERRIDE_EOPERATION = 6053;
			static const int ECLASS_OPERATION_ISSUPERTYPEOF_ECLASS = 6045;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEClass_Class() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getEClass_Attribute_abstract() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEClass_Attribute_interface() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEClass_Attribute_eAllAttributes() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_Attribute_eAllContainments() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_Attribute_eAllGenericSuperTypes() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_Attribute_eAllOperations() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_Attribute_eAllReferences() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_Attribute_eAllStructuralFeatures() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_Attribute_eAllSuperTypes() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_Attribute_eAttributes() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_Attribute_eGenericSuperTypes() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_Attribute_eIDAttribute() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_Attribute_eOperations() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_Attribute_eReferences() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_Attribute_eStructuralFeatures() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_Attribute_eSuperTypes() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEClass_Operation_getEOperation_EInt() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClass_Operation_getEStructuralFeature_EInt() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClass_Operation_getEStructuralFeature_EString() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClass_Operation_getFeatureCount() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClass_Operation_getFeatureID_EStructuralFeature() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClass_Operation_getFeatureType_EStructuralFeature() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClass_Operation_getOperationCount() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClass_Operation_getOperationID_EOperation() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClass_Operation_getOverride_EOperation() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClass_Operation_isSuperTypeOf_EClass() const = 0;
			
			// End Class EClass


			// Begin Class EClassifier
			//Class and Feature IDs 
			static const unsigned int ECLASSIFIER_CLASS = 13;
			static const unsigned int ECLASSIFIER_CLASS_FEATURE_COUNT = 11;
			static const unsigned int ECLASSIFIER_CLASS_OPERATION_COUNT = 18;
			static const int ECLASSIFIER_ATTRIBUTE_DEFAULTVALUE = 6507;
			static const int ECLASSIFIER_ATTRIBUTE_INSTANCECLASS = 6506;
			static const int ECLASSIFIER_ATTRIBUTE_INSTANCECLASSNAME = 6505;
			static const int ECLASSIFIER_ATTRIBUTE_INSTANCETYPENAME = 6508;
			
			static const int ECLASSIFIER_ATTRIBUTE_EPACKAGE = 6509;
			static const int ECLASSIFIER_ATTRIBUTE_ETYPEPARAMETERS = 6510;
			
			static const int ECLASSIFIER_OPERATION_GETCLASSIFIERID = 6528;
			static const int ECLASSIFIER_OPERATION_ISINSTANCE_EJAVAOBJECT = 6527;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEClassifier_Class() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getEClassifier_Attribute_defaultValue() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEClassifier_Attribute_instanceClass() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEClassifier_Attribute_instanceClassName() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEClassifier_Attribute_instanceTypeName() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEClassifier_Attribute_ePackage() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClassifier_Attribute_eTypeParameters() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEClassifier_Operation_getClassifierID() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClassifier_Operation_isInstance_EJavaObject() const = 0;
			
			// End Class EClassifier


			// Begin Class EDataType
			//Class and Feature IDs 
			static const unsigned int EDATATYPE_CLASS = 14;
			static const unsigned int EDATATYPE_CLASS_FEATURE_COUNT = 12;
			static const unsigned int EDATATYPE_CLASS_OPERATION_COUNT = 18;
			static const int EDATATYPE_ATTRIBUTE_SERIALIZABLE = 7011;
			
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEDataType_Class() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getEDataType_Attribute_serializable() const = 0;
			
			
			
			// End Class EDataType


			// Begin Class EEnum
			//Class and Feature IDs 
			static const unsigned int EENUM_CLASS = 20;
			static const unsigned int EENUM_CLASS_FEATURE_COUNT = 13;
			static const unsigned int EENUM_CLASS_OPERATION_COUNT = 21;
			
			static const int EENUM_ATTRIBUTE_ELITERALS = 10012;
			
			static const int EENUM_OPERATION_GETEENUMLITERAL_ESTRING = 10031;
			static const int EENUM_OPERATION_GETEENUMLITERAL_EINT = 10032;
			static const int EENUM_OPERATION_GETEENUMLITERALBYLITERAL_ESTRING = 10033;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEEnum_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getEEnum_Attribute_eLiterals() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEEnum_Operation_getEEnumLiteral_EString() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEEnum_Operation_getEEnumLiteral_EInt() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEEnum_Operation_getEEnumLiteralByLiteral_EString() const = 0;
			
			// End Class EEnum


			// Begin Class EEnumLiteral
			//Class and Feature IDs 
			static const unsigned int EENUMLITERAL_CLASS = 21;
			static const unsigned int EENUMLITERAL_CLASS_FEATURE_COUNT = 9;
			static const unsigned int EENUMLITERAL_CLASS_OPERATION_COUNT = 16;
			static const int EENUMLITERAL_ATTRIBUTE_INSTANCE = 10506;
			static const int EENUMLITERAL_ATTRIBUTE_LITERAL = 10507;
			static const int EENUMLITERAL_ATTRIBUTE_VALUE = 10505;
			
			static const int EENUMLITERAL_ATTRIBUTE_EENUM = 10508;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEEnumLiteral_Class() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getEEnumLiteral_Attribute_instance() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEEnumLiteral_Attribute_literal() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEEnumLiteral_Attribute_value() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEEnumLiteral_Attribute_eEnum() const = 0;
			
			
			// End Class EEnumLiteral


			// Begin Class EFactory
			//Class and Feature IDs 
			static const unsigned int EFACTORY_CLASS = 23;
			static const unsigned int EFACTORY_CLASS_FEATURE_COUNT = 5;
			static const unsigned int EFACTORY_CLASS_OPERATION_COUNT = 19;
			
			static const int EFACTORY_ATTRIBUTE_EPACKAGE = 11504;
			
			static const int EFACTORY_OPERATION_CONVERTTOSTRING_EDATATYPE_EJAVAOBJECT = 11523;
			static const int EFACTORY_OPERATION_CREATE_ECLASS = 11521;
			static const int EFACTORY_OPERATION_CREATEFROMSTRING_EDATATYPE_ESTRING = 11522;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEFactory_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getEFactory_Attribute_ePackage() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEFactory_Operation_convertToString_EDataType_EJavaObject() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEFactory_Operation_create_EClass() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEFactory_Operation_createFromString_EDataType_EString() const = 0;
			
			// End Class EFactory


			// Begin Class EGenericType
			//Class and Feature IDs 
			static const unsigned int EGENERICTYPE_CLASS = 28;
			static const unsigned int EGENERICTYPE_CLASS_FEATURE_COUNT = 6;
			static const unsigned int EGENERICTYPE_CLASS_OPERATION_COUNT = 1;
			
			static const int EGENERICTYPE_ATTRIBUTE_ECLASSIFIER = 14005;
			static const int EGENERICTYPE_ATTRIBUTE_ELOWERBOUND = 14003;
			static const int EGENERICTYPE_ATTRIBUTE_ERAWTYPE = 14002;
			static const int EGENERICTYPE_ATTRIBUTE_ETYPEARGUMENTS = 14001;
			static const int EGENERICTYPE_ATTRIBUTE_ETYPEPARAMETER = 14004;
			static const int EGENERICTYPE_ATTRIBUTE_EUPPERBOUND = 14000;
			
			static const int EGENERICTYPE_OPERATION_ISINSTANCE_EJAVAOBJECT = 14006;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEGenericType_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getEGenericType_Attribute_eClassifier() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEGenericType_Attribute_eLowerBound() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEGenericType_Attribute_eRawType() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEGenericType_Attribute_eTypeArguments() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEGenericType_Attribute_eTypeParameter() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEGenericType_Attribute_eUpperBound() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEGenericType_Operation_isInstance_EJavaObject() const = 0;
			
			// End Class EGenericType


			// Begin Class EModelElement
			//Class and Feature IDs 
			static const unsigned int EMODELELEMENT_CLASS = 37;
			static const unsigned int EMODELELEMENT_CLASS_FEATURE_COUNT = 4;
			static const unsigned int EMODELELEMENT_CLASS_OPERATION_COUNT = 16;
			
			static const int EMODELELEMENT_ATTRIBUTE_EANNOTATIONS = 18503;
			
			static const int EMODELELEMENT_OPERATION_GETEANNOTATION_ESTRING = 18519;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEModelElement_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getEModelElement_Attribute_eAnnotations() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEModelElement_Operation_getEAnnotation_EString() const = 0;
			
			// End Class EModelElement


			// Begin Class ENamedElement
			//Class and Feature IDs 
			static const unsigned int ENAMEDELEMENT_CLASS = 38;
			static const unsigned int ENAMEDELEMENT_CLASS_FEATURE_COUNT = 5;
			static const unsigned int ENAMEDELEMENT_CLASS_OPERATION_COUNT = 16;
			static const int ENAMEDELEMENT_ATTRIBUTE_NAME = 19004;
			
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getENamedElement_Class() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getENamedElement_Attribute_name() const = 0;
			
			
			
			// End Class ENamedElement


			// Begin Class EObject
			//Class and Feature IDs 
			static const unsigned int EOBJECT_CLASS = 39;
			static const unsigned int EOBJECT_CLASS_FEATURE_COUNT = 3;
			static const unsigned int EOBJECT_CLASS_OPERATION_COUNT = 15;
			static const int EOBJECT_ATTRIBUTE_METAELEMENTID = 19502;
			
			static const int EOBJECT_ATTRIBUTE_ECONTAINER = 19501;
			static const int EOBJECT_ATTRIBUTE_ECONTENS = 19500;
			
			static const int EOBJECT_OPERATION_EALLCONTENTS = 19510;
			static const int EOBJECT_OPERATION_ECLASS = 19503;
			static const int EOBJECT_OPERATION_ECONTAINER = 19506;
			static const int EOBJECT_OPERATION_ECONTAININGFEATURE = 19507;
			static const int EOBJECT_OPERATION_ECONTAINMENTFEATURE = 19508;
			static const int EOBJECT_OPERATION_ECONTENTS = 19509;
			static const int EOBJECT_OPERATION_ECROSSREFERENCES = 19511;
			static const int EOBJECT_OPERATION_EGET_ESTRUCTURALFEATURE = 19512;
			static const int EOBJECT_OPERATION_EGET_ESTRUCTURALFEATURE_EBOOLEAN = 19513;
			static const int EOBJECT_OPERATION_EINVOKE_EOPERATION_EELIST = 19517;
			static const int EOBJECT_OPERATION_EISPROXY = 19504;
			static const int EOBJECT_OPERATION_EISSET_ESTRUCTURALFEATURE = 19515;
			static const int EOBJECT_OPERATION_ERESOURCE = 19505;
			static const int EOBJECT_OPERATION_ESET_ESTRUCTURALFEATURE_EJAVAOBJECT = 19514;
			static const int EOBJECT_OPERATION_EUNSET_ESTRUCTURALFEATURE = 19516;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEObject_Class() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getEObject_Attribute_metaElementID() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEObject_Attribute_eContainer() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEObject_Attribute_eContens() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEObject_Operation_eAllContents() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_Operation_eClass() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_Operation_eContainer() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_Operation_eContainingFeature() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_Operation_eContainmentFeature() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_Operation_eContents() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_Operation_eCrossReferences() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_Operation_eGet_EStructuralFeature() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_Operation_eGet_EStructuralFeature_EBoolean() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_Operation_eInvoke_EOperation_EEList() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_Operation_eIsProxy() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_Operation_eIsSet_EStructuralFeature() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_Operation_eResource() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_Operation_eSet_EStructuralFeature_EJavaObject() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_Operation_eUnset_EStructuralFeature() const = 0;
			
			// End Class EObject


			// Begin Class EOperation
			//Class and Feature IDs 
			static const unsigned int EOPERATION_CLASS = 40;
			static const unsigned int EOPERATION_CLASS_FEATURE_COUNT = 19;
			static const unsigned int EOPERATION_CLASS_OPERATION_COUNT = 18;
			static const int EOPERATION_ATTRIBUTE_OPERATIONID = 20013;
			
			static const int EOPERATION_ATTRIBUTE_ECONTAININGCLASS = 20014;
			static const int EOPERATION_ATTRIBUTE_EEXCEPTIONS = 20017;
			static const int EOPERATION_ATTRIBUTE_EGENERICEXCEPTIONS = 20018;
			static const int EOPERATION_ATTRIBUTE_EPARAMETERS = 20016;
			static const int EOPERATION_ATTRIBUTE_ETYPEPARAMETERS = 20015;
			
			static const int EOPERATION_OPERATION_GETOPERATIONID = 20035;
			static const int EOPERATION_OPERATION_ISOVERRIDEOF_EOPERATION = 20036;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEOperation_Class() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getEOperation_Attribute_operationID() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEOperation_Attribute_eContainingClass() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEOperation_Attribute_eExceptions() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEOperation_Attribute_eGenericExceptions() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEOperation_Attribute_eParameters() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEOperation_Attribute_eTypeParameters() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEOperation_Operation_getOperationID() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEOperation_Operation_isOverrideOf_EOperation() const = 0;
			
			// End Class EOperation


			// Begin Class EPackage
			//Class and Feature IDs 
			static const unsigned int EPACKAGE_CLASS = 41;
			static const unsigned int EPACKAGE_CLASS_FEATURE_COUNT = 11;
			static const unsigned int EPACKAGE_CLASS_OPERATION_COUNT = 17;
			static const int EPACKAGE_ATTRIBUTE_NSPREFIX = 20506;
			static const int EPACKAGE_ATTRIBUTE_NSURI = 20505;
			
			static const int EPACKAGE_ATTRIBUTE_ECLASSIFIERS = 20508;
			static const int EPACKAGE_ATTRIBUTE_EFACTORYINSTANCE = 20507;
			static const int EPACKAGE_ATTRIBUTE_ESUBPACKAGES = 20509;
			static const int EPACKAGE_ATTRIBUTE_ESUPERPACKAGE = 20510;
			
			static const int EPACKAGE_OPERATION_GETECLASSIFIER_ESTRING = 20527;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEPackage_Class() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getEPackage_Attribute_nsPrefix() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEPackage_Attribute_nsURI() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEPackage_Attribute_eClassifiers() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEPackage_Attribute_eFactoryInstance() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEPackage_Attribute_eSubpackages() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEPackage_Attribute_eSuperPackage() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEPackage_Operation_getEClassifier_EString() const = 0;
			
			// End Class EPackage


			// Begin Class EParameter
			//Class and Feature IDs 
			static const unsigned int EPARAMETER_CLASS = 42;
			static const unsigned int EPARAMETER_CLASS_FEATURE_COUNT = 14;
			static const unsigned int EPARAMETER_CLASS_OPERATION_COUNT = 16;
			
			static const int EPARAMETER_ATTRIBUTE_EOPERATION = 21013;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEParameter_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getEParameter_Attribute_eOperation() const = 0;
			
			
			// End Class EParameter


			// Begin Class EReference
			//Class and Feature IDs 
			static const unsigned int EREFERENCE_CLASS = 43;
			static const unsigned int EREFERENCE_CLASS_FEATURE_COUNT = 28;
			static const unsigned int EREFERENCE_CLASS_OPERATION_COUNT = 18;
			static const int EREFERENCE_ATTRIBUTE_CONTAINER = 21523;
			static const int EREFERENCE_ATTRIBUTE_CONTAINMENT = 21522;
			static const int EREFERENCE_ATTRIBUTE_RESOLVEPROXIES = 21524;
			
			static const int EREFERENCE_ATTRIBUTE_EKEYS = 21527;
			static const int EREFERENCE_ATTRIBUTE_EOPPOSITE = 21525;
			static const int EREFERENCE_ATTRIBUTE_EREFERENCETYPE = 21526;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEReference_Class() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getEReference_Attribute_container() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEReference_Attribute_containment() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEReference_Attribute_resolveProxies() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEReference_Attribute_eKeys() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEReference_Attribute_eOpposite() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEReference_Attribute_eReferenceType() const = 0;
			
			
			// End Class EReference


			// Begin Class EStringToStringMapEntry
			//Class and Feature IDs 
			static const unsigned int ESTRINGTOSTRINGMAPENTRY_CLASS = 49;
			static const unsigned int ESTRINGTOSTRINGMAPENTRY_CLASS_FEATURE_COUNT = 2;
			static const unsigned int ESTRINGTOSTRINGMAPENTRY_CLASS_OPERATION_COUNT = 0;
			static const int ESTRINGTOSTRINGMAPENTRY_ATTRIBUTE_KEY = 24500;
			static const int ESTRINGTOSTRINGMAPENTRY_ATTRIBUTE_VALUE = 24501;
			
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEStringToStringMapEntry_Class() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getEStringToStringMapEntry_Attribute_key() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEStringToStringMapEntry_Attribute_value() const = 0;
			
			
			
			// End Class EStringToStringMapEntry


			// Begin Class EStructuralFeature
			//Class and Feature IDs 
			static const unsigned int ESTRUCTURALFEATURE_CLASS = 50;
			static const unsigned int ESTRUCTURALFEATURE_CLASS_FEATURE_COUNT = 22;
			static const unsigned int ESTRUCTURALFEATURE_CLASS_OPERATION_COUNT = 18;
			static const int ESTRUCTURALFEATURE_ATTRIBUTE_CHANGEABLE = 25013;
			static const int ESTRUCTURALFEATURE_ATTRIBUTE_DEFAULTVALUE = 25017;
			static const int ESTRUCTURALFEATURE_ATTRIBUTE_DEFAULTVALUELITERAL = 25016;
			static const int ESTRUCTURALFEATURE_ATTRIBUTE_DERIVED = 25019;
			static const int ESTRUCTURALFEATURE_ATTRIBUTE_FEATUREID = 25020;
			static const int ESTRUCTURALFEATURE_ATTRIBUTE_TRANSIENT = 25015;
			static const int ESTRUCTURALFEATURE_ATTRIBUTE_UNSETTABLE = 25018;
			static const int ESTRUCTURALFEATURE_ATTRIBUTE_VOLATILE = 25014;
			
			static const int ESTRUCTURALFEATURE_ATTRIBUTE_ECONTAININGCLASS = 25021;
			
			static const int ESTRUCTURALFEATURE_OPERATION_GETCONTAINERCLASS = 25039;
			static const int ESTRUCTURALFEATURE_OPERATION_GETFEATUREID = 25038;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEStructuralFeature_Class() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_Attribute_changeable() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_Attribute_defaultValue() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_Attribute_defaultValueLiteral() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_Attribute_derived() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_Attribute_featureID() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_Attribute_transient() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_Attribute_unsettable() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_Attribute_volatile() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEStructuralFeature_Attribute_eContainingClass() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEStructuralFeature_Operation_getContainerClass() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEStructuralFeature_Operation_getFeatureID() const = 0;
			
			// End Class EStructuralFeature


			// Begin Class ETypeParameter
			//Class and Feature IDs 
			static const unsigned int ETYPEPARAMETER_CLASS = 52;
			static const unsigned int ETYPEPARAMETER_CLASS_FEATURE_COUNT = 6;
			static const unsigned int ETYPEPARAMETER_CLASS_OPERATION_COUNT = 16;
			
			static const int ETYPEPARAMETER_ATTRIBUTE_EBOUNDS = 26005;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getETypeParameter_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getETypeParameter_Attribute_eBounds() const = 0;
			
			
			// End Class ETypeParameter


			// Begin Class ETypedElement
			//Class and Feature IDs 
			static const unsigned int ETYPEDELEMENT_CLASS = 53;
			static const unsigned int ETYPEDELEMENT_CLASS_FEATURE_COUNT = 13;
			static const unsigned int ETYPEDELEMENT_CLASS_OPERATION_COUNT = 16;
			static const int ETYPEDELEMENT_ATTRIBUTE_LOWERBOUND = 26507;
			static const int ETYPEDELEMENT_ATTRIBUTE_MANY = 26509;
			static const int ETYPEDELEMENT_ATTRIBUTE_ORDERED = 26505;
			static const int ETYPEDELEMENT_ATTRIBUTE_REQUIRED = 26510;
			static const int ETYPEDELEMENT_ATTRIBUTE_UNIQUE = 26506;
			static const int ETYPEDELEMENT_ATTRIBUTE_UPPERBOUND = 26508;
			
			static const int ETYPEDELEMENT_ATTRIBUTE_EGENERICTYPE = 26512;
			static const int ETYPEDELEMENT_ATTRIBUTE_ETYPE = 26511;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getETypedElement_Class() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getETypedElement_Attribute_lowerBound() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getETypedElement_Attribute_many() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getETypedElement_Attribute_ordered() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getETypedElement_Attribute_required() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getETypedElement_Attribute_unique() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getETypedElement_Attribute_upperBound() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getETypedElement_Attribute_eGenericType() const = 0;
			virtual std::shared_ptr<ecore::EReference> getETypedElement_Attribute_eType() const = 0;
			
			
			// End Class ETypedElement

			static const int EBIGDECIMAL_CLASS = 3;
			static const int EBIGINTEGER_CLASS = 4;
			static const int EBOOLEAN_CLASS = 5;
			static const int EBOOLEANOBJECT_CLASS = 6;
			static const int EBYTE_CLASS = 7;
			static const int EBYTEARRAY_CLASS = 8;
			static const int EBYTEOBJECT_CLASS = 9;
			static const int ECHAR_CLASS = 10;
			static const int ECHARACTEROBJECT_CLASS = 11;
			static const int EDATE_CLASS = 15;
			static const int EDIAGNOSTICCHAIN_CLASS = 16;
			static const int EDOUBLE_CLASS = 17;
			static const int EDOUBLEOBJECT_CLASS = 18;
			static const int EELIST_CLASS = 19;
			static const int EENUMERATOR_CLASS = 22;
			static const int EFEATUREMAP_CLASS = 24;
			static const int EFEATUREMAPENTRY_CLASS = 25;
			static const int EFLOAT_CLASS = 26;
			static const int EFLOATOBJECT_CLASS = 27;
			static const int EINT_CLASS = 29;
			static const int EINTEGEROBJECT_CLASS = 30;
			static const int EINVOCATIONTARGETEXCEPTION_CLASS = 31;
			static const int EJAVACLASS_CLASS = 32;
			static const int EJAVAOBJECT_CLASS = 33;
			static const int ELONG_CLASS = 34;
			static const int ELONGOBJECT_CLASS = 35;
			static const int EMAP_CLASS = 36;
			static const int ERESOURCE_CLASS = 44;
			static const int ERESOURCESET_CLASS = 45;
			static const int ESHORT_CLASS = 46;
			static const int ESHORTOBJECT_CLASS = 47;
			static const int ESTRING_CLASS = 48;
			static const int ETREEITERATOR_CLASS = 51;
			
			virtual std::shared_ptr<ecore::EDataType> getEBigDecimal_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEBigInteger_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEBoolean_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEBooleanObject_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEByte_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEByteArray_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEByteObject_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEChar_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getECharacterObject_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEDate_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEDiagnosticChain_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEDouble_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEDoubleObject_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEEList_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEEnumerator_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEFeatureMap_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEFeatureMapEntry_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEFloat_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEFloatObject_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEInt_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEIntegerObject_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEInvocationTargetException_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEJavaClass_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEJavaObject_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getELong_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getELongObject_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEMap_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEResource_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEResourceSet_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEShort_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEShortObject_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEString_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getETreeIterator_Class() const = 0;
			

			//Singleton Instance and Getter
			private:
				static std::shared_ptr<EcorePackage> instance;
			public:
				static std::shared_ptr<EcorePackage> eInstance();

			//prevent from hiding functions
			using EPackage::getEAnnotation;
			using EPackage::getEClassifier;
	};
}
#endif /* end of include guard: ECOREPACKAGE_HPP */
