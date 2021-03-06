//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSCS_SEMANTICS_STRUCTUREDCLASSIFIERSPACKAGE_HPP
#define PSCS_SEMANTICS_STRUCTUREDCLASSIFIERSPACKAGE_HPP

#include "ecore/EPackage.hpp"

namespace ecore 
{
	class EAnnotation;
	class EClass;
	class EDataType;
	class EEnum;
	class EEnumLiteral;
	class EGenericType;
	class EOperation;
	class EParameter;
	class EReference;
	class EStringToStringMapEntry;
}

namespace PSCS::Semantics::StructuredClassifiers 
{
	class CS_DefaultRequestPropagationStrategy;
	class CS_DispatchOperationOfInterfaceStrategy;
	class CS_InteractionPoint;
	class CS_Link;
	class CS_NameBased_StructuralFeatureOfInterfaceAccessStrategy;
	class CS_Object;
	class CS_Reference;
	class CS_RequestPropagationStrategy;
	class CS_StructuralFeatureOfInterfaceAccessStrategy;
}

namespace PSCS::Semantics::StructuredClassifiers 
{
	/*!
	The Metamodel Package for the StructuredClassifiers metamodel. This package is used to enable the reflection of model elements. It contains all model elements
	which were described in an ecore file.
	*/
	
	class StructuredClassifiersPackage : virtual public ecore::EPackage 
	{
		private:    
			StructuredClassifiersPackage(StructuredClassifiersPackage const&) = delete;
			StructuredClassifiersPackage& operator=(StructuredClassifiersPackage const&) = delete;

		protected:
			StructuredClassifiersPackage(){}

		public:
			//static variables
			static const std::string eNAME;
			static const std::string eNS_URI;
			static const std::string eNS_PREFIX;

			// Begin Class CS_DefaultRequestPropagationStrategy
			//Class and Feature IDs 
			static const unsigned long CS_DEFAULTREQUESTPROPAGATIONSTRATEGY_CLASS = 114292004;
			static const unsigned int CS_DEFAULTREQUESTPROPAGATIONSTRATEGY_CLASS_FEATURE_COUNT = 0;
			static const unsigned int CS_DEFAULTREQUESTPROPAGATIONSTRATEGY_CLASS_OPERATION_COUNT = 4;
			
			
			static const int CS_DEFAULTREQUESTPROPAGATIONSTRATEGY_OPERATION_SELECT_REFERENCE_SEMANTICVISITOR = 1103;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getCS_DefaultRequestPropagationStrategy_Class() const = 0;
			
			
			
			virtual std::shared_ptr<ecore::EOperation> getCS_DefaultRequestPropagationStrategy_Operation_select_Reference_SemanticVisitor() const = 0;
			
			// End Class CS_DefaultRequestPropagationStrategy


			// Begin Class CS_DispatchOperationOfInterfaceStrategy
			//Class and Feature IDs 
			static const unsigned long CS_DISPATCHOPERATIONOFINTERFACESTRATEGY_CLASS = 732334652;
			static const unsigned int CS_DISPATCHOPERATIONOFINTERFACESTRATEGY_CLASS_FEATURE_COUNT = 0;
			static const unsigned int CS_DISPATCHOPERATIONOFINTERFACESTRATEGY_CLASS_OPERATION_COUNT = 7;
			
			
			static const int CS_DISPATCHOPERATIONOFINTERFACESTRATEGY_OPERATION_OPERATIONSMATCH_OPERATION_OPERATION = 1206;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getCS_DispatchOperationOfInterfaceStrategy_Class() const = 0;
			
			
			
			virtual std::shared_ptr<ecore::EOperation> getCS_DispatchOperationOfInterfaceStrategy_Operation_operationsMatch_Operation_Operation() const = 0;
			
			// End Class CS_DispatchOperationOfInterfaceStrategy


			// Begin Class CS_InteractionPoint
			//Class and Feature IDs 
			static const unsigned long CS_INTERACTIONPOINT_CLASS = 314391515;
			static const unsigned int CS_INTERACTIONPOINT_CLASS_FEATURE_COUNT = 3;
			static const unsigned int CS_INTERACTIONPOINT_CLASS_OPERATION_COUNT = 38;
			
			static const int CS_INTERACTIONPOINT_ATTRIBUTE_DEFININGPORT = 1702;
			static const int CS_INTERACTIONPOINT_ATTRIBUTE_OWNER = 1701;
			
			static const int CS_INTERACTIONPOINT_OPERATION_CHECKALLPARENTS_CLASSIFIER_CLASSIFIER = 1740;
			static const int CS_INTERACTIONPOINT_OPERATION_DISPATCH_OPERATION = 1738;
			static const int CS_INTERACTIONPOINT_OPERATION_SEND_EVENTOCCURRENCE = 1739;
			static const int CS_INTERACTIONPOINT_OPERATION_STARTBEHAVIOR_CLASS_PARAMETERVALUE = 1737;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getCS_InteractionPoint_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getCS_InteractionPoint_Attribute_definingPort() const = 0;
			virtual std::shared_ptr<ecore::EReference> getCS_InteractionPoint_Attribute_owner() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getCS_InteractionPoint_Operation_checkAllParents_Classifier_Classifier() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_InteractionPoint_Operation_dispatch_Operation() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_InteractionPoint_Operation_send_EventOccurrence() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_InteractionPoint_Operation_startBehavior_Class_ParameterValue() const = 0;
			
			// End Class CS_InteractionPoint


			// Begin Class CS_Link
			//Class and Feature IDs 
			static const unsigned long CS_LINK_CLASS = 225228270;
			static const unsigned int CS_LINK_CLASS_FEATURE_COUNT = 3;
			static const unsigned int CS_LINK_CLASS_OPERATION_COUNT = 34;
			
			
			static const int CS_LINK_OPERATION_GETFEATURE_VALUE = 1836;
			static const int CS_LINK_OPERATION_HASVALUEFORAFEATURE_VALUE = 1835;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getCS_Link_Class() const = 0;
			
			
			
			virtual std::shared_ptr<ecore::EOperation> getCS_Link_Operation_getFeature_Value() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Link_Operation_hasValueForAFeature_Value() const = 0;
			
			// End Class CS_Link


			// Begin Class CS_NameBased_StructuralFeatureOfInterfaceAccessStrategy
			//Class and Feature IDs 
			static const unsigned long CS_NAMEBASED_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGY_CLASS = 1596515744;
			static const unsigned int CS_NAMEBASED_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGY_CLASS_FEATURE_COUNT = 0;
			static const unsigned int CS_NAMEBASED_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGY_CLASS_OPERATION_COUNT = 6;
			
			
			static const int CS_NAMEBASED_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGY_OPERATION_READ_CS_OBJECT_STRUCTURALFEATURE = 2104;
			static const int CS_NAMEBASED_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGY_OPERATION_WRITE_CS_OBJECT_EINT = 2105;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getCS_NameBased_StructuralFeatureOfInterfaceAccessStrategy_Class() const = 0;
			
			
			
			virtual std::shared_ptr<ecore::EOperation> getCS_NameBased_StructuralFeatureOfInterfaceAccessStrategy_Operation_read_CS_Object_StructuralFeature() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_NameBased_StructuralFeatureOfInterfaceAccessStrategy_Operation_write_CS_Object_EInt() const = 0;
			
			// End Class CS_NameBased_StructuralFeatureOfInterfaceAccessStrategy


			// Begin Class CS_Object
			//Class and Feature IDs 
			static const unsigned long CS_OBJECT_CLASS = 1305137753;
			static const unsigned int CS_OBJECT_CLASS_FEATURE_COUNT = 4;
			static const unsigned int CS_OBJECT_CLASS_OPERATION_COUNT = 59;
			
			
			static const int CS_OBJECT_OPERATION_CHECKALLPARENTS_CLASSIFIER_CLASSIFIER = 2260;
			static const int CS_OBJECT_OPERATION_CONTAINS_OBJECT = 2248;
			static const int CS_OBJECT_OPERATION_DIRECTLYCONTAINS_OBJECT = 2249;
			static const int CS_OBJECT_OPERATION_DISPATCHIN_OPERATION_CS_INTERACTIONPOINT = 2240;
			static const int CS_OBJECT_OPERATION_DISPATCHIN_OPERATION_PORT = 2258;
			static const int CS_OBJECT_OPERATION_DISPATCHOUT_OPERATION_CS_INTERACTIONPOINT = 2245;
			static const int CS_OBJECT_OPERATION_DISPATCHOUT_OPERATION_PORT = 2256;
			static const int CS_OBJECT_OPERATION_GETDIRECTCONTAINERS = 2250;
			static const int CS_OBJECT_OPERATION_GETFEATUREVALUE_STRUCTURALFEATURE = 2246;
			static const int CS_OBJECT_OPERATION_GETLINKKIND_CS_LINK_CS_INTERACTIONPOINT = 2253;
			static const int CS_OBJECT_OPERATION_GETLINKS_CS_INTERACTIONPOINT = 2254;
			static const int CS_OBJECT_OPERATION_HASVALUEFORAFEATURE_VALUE = 2255;
			static const int CS_OBJECT_OPERATION_ISDESCENDANT_INTERFACE_INTERFACE = 2261;
			static const int CS_OBJECT_OPERATION_ISOPERATIONPROVIDED_REFERENCE_OPERATION = 2251;
			static const int CS_OBJECT_OPERATION_ISOPERATIONREQUIRED_REFERENCE_OPERATION = 2252;
			static const int CS_OBJECT_OPERATION_REALIZESINTERFACE_CLASS_INTERFACE = 2262;
			static const int CS_OBJECT_OPERATION_SELECTTARGETSFORDISPATCHING_CS_LINK_EBOOLEAN = 2243;
			static const int CS_OBJECT_OPERATION_SELECTTARGETSFORSENDING_CS_LINK_EBOOLEAN = 2242;
			static const int CS_OBJECT_OPERATION_SENDIN_EVENTOCCURRENCE_CS_INTERACTIONPOINT = 2241;
			static const int CS_OBJECT_OPERATION_SENDIN_EVENTOCCURRENCE_PORT = 2259;
			static const int CS_OBJECT_OPERATION_SENDOUT_EVENTOCCURRENCE_CS_INTERACTIONPOINT = 2244;
			static const int CS_OBJECT_OPERATION_SENDOUT_EVENTOCCURRENCE_PORT = 2257;
			static const int CS_OBJECT_OPERATION_SETFEATUREVALUE_STRUCTURALFEATURE_EINT = 2247;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getCS_Object_Class() const = 0;
			
			
			
			virtual std::shared_ptr<ecore::EOperation> getCS_Object_Operation_checkAllParents_Classifier_Classifier() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Object_Operation_contains_Object() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Object_Operation_directlyContains_Object() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Object_Operation_dispatchIn_Operation_CS_InteractionPoint() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Object_Operation_dispatchIn_Operation_Port() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Object_Operation_dispatchOut_Operation_CS_InteractionPoint() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Object_Operation_dispatchOut_Operation_Port() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Object_Operation_getDirectContainers() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Object_Operation_getFeatureValue_StructuralFeature() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Object_Operation_getLinkKind_CS_Link_CS_InteractionPoint() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Object_Operation_getLinks_CS_InteractionPoint() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Object_Operation_hasValueForAFeature_Value() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Object_Operation_isDescendant_Interface_Interface() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Object_Operation_isOperationProvided_Reference_Operation() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Object_Operation_isOperationRequired_Reference_Operation() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Object_Operation_realizesInterface_Class_Interface() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Object_Operation_selectTargetsForDispatching_CS_Link_EBoolean() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Object_Operation_selectTargetsForSending_CS_Link_EBoolean() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Object_Operation_sendIn_EventOccurrence_CS_InteractionPoint() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Object_Operation_sendIn_EventOccurrence_Port() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Object_Operation_sendOut_EventOccurrence_CS_InteractionPoint() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Object_Operation_sendOut_EventOccurrence_Port() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Object_Operation_setFeatureValue_StructuralFeature_EInt() const = 0;
			
			// End Class CS_Object


			// Begin Class CS_Reference
			//Class and Feature IDs 
			static const unsigned long CS_REFERENCE_CLASS = 1875601966;
			static const unsigned int CS_REFERENCE_CLASS_FEATURE_COUNT = 2;
			static const unsigned int CS_REFERENCE_CLASS_OPERATION_COUNT = 44;
			
			static const int CS_REFERENCE_ATTRIBUTE_COMPOSITEREFERENT = 2601;
			
			static const int CS_REFERENCE_OPERATION__COPY = 2645;
			static const int CS_REFERENCE_OPERATION_COPY = 2636;
			static const int CS_REFERENCE_OPERATION_DISPATCHIN_OPERATION_CS_INTERACTIONPOINT = 2637;
			static const int CS_REFERENCE_OPERATION_DISPATCHIN_OPERATION_PORT = 2641;
			static const int CS_REFERENCE_OPERATION_DISPATCHOUT_OPERATION_PORT = 2640;
			static const int CS_REFERENCE_OPERATION_DISPATCHOUT_OPERATION_CS_INTERACTIONPOINT = 2643;
			static const int CS_REFERENCE_OPERATION_SENDIN_EVENTOCCURRENCE_CS_INTERACTIONPOINT = 2638;
			static const int CS_REFERENCE_OPERATION_SENDIN_EVENTOCCURRENCE_PORT = 2642;
			static const int CS_REFERENCE_OPERATION_SENDOUT_EVENTOCCURRENCE_PORT = 2639;
			static const int CS_REFERENCE_OPERATION_SENDOUT_EVENTOCCURRENCE_CS_INTERACTIONPOINT = 2644;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getCS_Reference_Class() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getCS_Reference_Attribute_compositeReferent() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getCS_Reference_Operation__copy() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Reference_Operation_copy() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Reference_Operation_dispatchIn_Operation_CS_InteractionPoint() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Reference_Operation_dispatchIn_Operation_Port() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Reference_Operation_dispatchOut_Operation_Port() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Reference_Operation_dispatchOut_Operation_CS_InteractionPoint() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Reference_Operation_sendIn_EventOccurrence_CS_InteractionPoint() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Reference_Operation_sendIn_EventOccurrence_Port() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Reference_Operation_sendOut_EventOccurrence_Port() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_Reference_Operation_sendOut_EventOccurrence_CS_InteractionPoint() const = 0;
			
			// End Class CS_Reference


			// Begin Class CS_RequestPropagationStrategy
			//Class and Feature IDs 
			static const unsigned long CS_REQUESTPROPAGATIONSTRATEGY_CLASS = 1044958815;
			static const unsigned int CS_REQUESTPROPAGATIONSTRATEGY_CLASS_FEATURE_COUNT = 0;
			static const unsigned int CS_REQUESTPROPAGATIONSTRATEGY_CLASS_OPERATION_COUNT = 3;
			
			
			static const int CS_REQUESTPROPAGATIONSTRATEGY_OPERATION_GETNAME = 2801;
			static const int CS_REQUESTPROPAGATIONSTRATEGY_OPERATION_SELECT_REFERENCE_SEMANTICVISITOR = 2802;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getCS_RequestPropagationStrategy_Class() const = 0;
			
			
			
			virtual std::shared_ptr<ecore::EOperation> getCS_RequestPropagationStrategy_Operation_getName() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_RequestPropagationStrategy_Operation_select_Reference_SemanticVisitor() const = 0;
			
			// End Class CS_RequestPropagationStrategy


			// Begin Class CS_StructuralFeatureOfInterfaceAccessStrategy
			//Class and Feature IDs 
			static const unsigned long CS_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGY_CLASS = 1746875136;
			static const unsigned int CS_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGY_CLASS_FEATURE_COUNT = 0;
			static const unsigned int CS_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGY_CLASS_OPERATION_COUNT = 4;
			
			
			static const int CS_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGY_OPERATION_GETNAME = 3001;
			static const int CS_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGY_OPERATION_READ_CS_OBJECT_STRUCTURALFEATURE = 3002;
			static const int CS_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGY_OPERATION_WRITE_CS_OBJECT_INTEGER = 3003;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getCS_StructuralFeatureOfInterfaceAccessStrategy_Class() const = 0;
			
			
			
			virtual std::shared_ptr<ecore::EOperation> getCS_StructuralFeatureOfInterfaceAccessStrategy_Operation_getName() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_StructuralFeatureOfInterfaceAccessStrategy_Operation_read_CS_Object_StructuralFeature() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getCS_StructuralFeatureOfInterfaceAccessStrategy_Operation_write_CS_Object_Integer() const = 0;
			
			// End Class CS_StructuralFeatureOfInterfaceAccessStrategy

			static const int CS_LINKKIND_CLASS = 19;
			
			virtual std::shared_ptr<ecore::EEnum> getCS_LinkKind_Class() const = 0;
			

			

			//Singleton Instance and Getter
			private:
				static std::shared_ptr<StructuredClassifiersPackage> instance;
			public:
				static std::shared_ptr<StructuredClassifiersPackage> eInstance();
	};
}
#endif /* end of include guard: PSCS_SEMANTICS_STRUCTUREDCLASSIFIERSPACKAGE_HPP */
