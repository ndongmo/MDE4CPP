#include "fUML/impl/FUMLFactoryImpl.hpp"

#include <cassert>

#include "abstractDataTypes/SubsetUnion.hpp"
#include "ecore/EClass.hpp"

#include "fUML/FUMLPackage.hpp"
#include "fUML/impl/AcceptEventActionActivationImpl.hpp"
#include "fUML/impl/AcceptEventActionEventAccepterImpl.hpp"
#include "fUML/impl/ActionActivationImpl.hpp"
#include "fUML/impl/ActivityEdgeInstanceImpl.hpp"
#include "fUML/impl/ActivityExecutionImpl.hpp"
#include "fUML/impl/ActivityFinalNodeActivationImpl.hpp"
#include "fUML/impl/ActivityNodeActivationImpl.hpp"
#include "fUML/impl/ActivityNodeActivationGroupImpl.hpp"
#include "fUML/impl/ActivityParameterNodeActivationImpl.hpp"
#include "fUML/impl/AddStructuralFeatureValueActionActivationImpl.hpp"
#include "fUML/impl/BooleanValueImpl.hpp"
#include "fUML/impl/CallActionActivationImpl.hpp"
#include "fUML/impl/CallBehaviorActionActivationImpl.hpp"
#include "fUML/impl/CallOperationActionActivationImpl.hpp"
#include "fUML/impl/CentralBufferNodeActivationImpl.hpp"
#include "fUML/impl/ChoiceStrategyImpl.hpp"
#include "fUML/impl/ClassifierBehaviorExecutionImpl.hpp"
#include "fUML/impl/ClassifierBehaviorExecutionActivityImpl.hpp"
#include "fUML/impl/ClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1Impl.hpp"
#include "fUML/impl/ClauseActivationImpl.hpp"
#include "fUML/impl/ClearAssociationActionActivationImpl.hpp"
#include "fUML/impl/ClearStructuralFeatureActionActivationImpl.hpp"
#include "fUML/impl/CompoundValueImpl.hpp"
#include "fUML/impl/ConditionalNodeActivationImpl.hpp"
#include "fUML/impl/ControlNodeActivationImpl.hpp"
#include "fUML/impl/ControlTokenImpl.hpp"
#include "fUML/impl/CreateLinkActionActivationImpl.hpp"
#include "fUML/impl/CreateObjectActionActivationImpl.hpp"
#include "fUML/impl/DataStoreNodeActivationImpl.hpp"
#include "fUML/impl/DataValueImpl.hpp"
#include "fUML/impl/DecisionNodeActivationImpl.hpp"
#include "fUML/impl/DestroyLinkActionActivationImpl.hpp"
#include "fUML/impl/DestroyObjectActionActivationImpl.hpp"
#include "fUML/impl/DispatchStrategyImpl.hpp"
#include "fUML/impl/EnumerationValueImpl.hpp"
#include "fUML/impl/EvaluationImpl.hpp"
#include "fUML/impl/EventAccepterImpl.hpp"
#include "fUML/impl/EventDispatchLoopImpl.hpp"
#include "fUML/impl/EventOccurrenceImpl.hpp"
#include "fUML/impl/ExecutionImpl.hpp"
#include "fUML/impl/ExecutionFactoryImpl.hpp"
#include "fUML/impl/ExecutionFactoryL1Impl.hpp"
#include "fUML/impl/ExecutionFactoryL2Impl.hpp"
#include "fUML/impl/ExecutionFactoryL3Impl.hpp"
#include "fUML/impl/ExecutorImpl.hpp"
#include "fUML/impl/ExpansionActivationGroupImpl.hpp"
#include "fUML/impl/ExpansionNodeActivationImpl.hpp"
#include "fUML/impl/ExpansionRegionActivationImpl.hpp"
#include "fUML/impl/ExtensionalValueImpl.hpp"
#include "fUML/impl/ExtensionalValueListImpl.hpp"
#include "fUML/impl/FIFOGetNextEventStrategyImpl.hpp"
#include "fUML/impl/FeatureValueImpl.hpp"
#include "fUML/impl/FirstChoiceStrategyImpl.hpp"
#include "fUML/impl/FlowFinalNodeActivationImpl.hpp"
#include "fUML/impl/ForkNodeActivationImpl.hpp"
#include "fUML/impl/ForkedTokenImpl.hpp"
#include "fUML/impl/GetNextEventStrategyImpl.hpp"
#include "fUML/impl/InitialNodeActivationImpl.hpp"
#include "fUML/impl/InputPinActivationImpl.hpp"
#include "fUML/impl/InstanceValueEvaluationImpl.hpp"
#include "fUML/impl/IntegerValueImpl.hpp"
#include "fUML/impl/InvocationActionActivationImpl.hpp"
#include "fUML/impl/JoinNodeActivationImpl.hpp"
#include "fUML/impl/LinkImpl.hpp"
#include "fUML/impl/LinkActionActivationImpl.hpp"
#include "fUML/impl/LiteralBooleanEvaluationImpl.hpp"
#include "fUML/impl/LiteralEvaluationImpl.hpp"
#include "fUML/impl/LiteralIntegerEvaluationImpl.hpp"
#include "fUML/impl/LiteralNullEvaluationImpl.hpp"
#include "fUML/impl/LiteralRealEvaluationImpl.hpp"
#include "fUML/impl/LiteralStringEvaluationImpl.hpp"
#include "fUML/impl/LiteralUnlimitedNaturalEvaluationImpl.hpp"
#include "fUML/impl/LocusImpl.hpp"
#include "fUML/impl/LoopNodeActivationImpl.hpp"
#include "fUML/impl/MergeNodeActivationImpl.hpp"
#include "fUML/impl/ObjectImpl.hpp"
#include "fUML/impl/ObjectActivationImpl.hpp"
#include "fUML/impl/ObjectNodeActivationImpl.hpp"
#include "fUML/impl/ObjectTokenImpl.hpp"
#include "fUML/impl/OfferImpl.hpp"
#include "fUML/impl/OpaqueBehaviorExecutionImpl.hpp"
#include "fUML/impl/OutputPinActivationImpl.hpp"
#include "fUML/impl/ParameterValueImpl.hpp"
#include "fUML/impl/PinActivationImpl.hpp"
#include "fUML/impl/PrimitiveValueImpl.hpp"
#include "fUML/impl/ReadExtentActionActivationImpl.hpp"
#include "fUML/impl/ReadIsClassifiedObjectActionActivationImpl.hpp"
#include "fUML/impl/ReadLinkActionActivationImpl.hpp"
#include "fUML/impl/ReadSelfActionActivationImpl.hpp"
#include "fUML/impl/ReadStructuralFeatureActionActivationImpl.hpp"
#include "fUML/impl/RealValueImpl.hpp"
#include "fUML/impl/ReclassifyObjectActionActivationImpl.hpp"
#include "fUML/impl/RedefinitionBasedDispatchStrategyImpl.hpp"
#include "fUML/impl/ReduceActionActivationImpl.hpp"
#include "fUML/impl/ReferenceImpl.hpp"
#include "fUML/impl/RemoveStructuralFeatureValueActivationImpl.hpp"
#include "fUML/impl/SemanticStrategyImpl.hpp"
#include "fUML/impl/SemanticVisitorImpl.hpp"
#include "fUML/impl/SendSignalActionActivationImpl.hpp"
#include "fUML/impl/SignalInstanceImpl.hpp"
#include "fUML/impl/StartClassifierBehaviorActionActivationImpl.hpp"
#include "fUML/impl/StartObjectBehaviorActionActivationImpl.hpp"
#include "fUML/impl/StringValueImpl.hpp"
#include "fUML/impl/StructuralFeatureActionActivationImpl.hpp"
#include "fUML/impl/StructuredActivityNodeActivationImpl.hpp"
#include "fUML/impl/StructuredValueImpl.hpp"
#include "fUML/impl/TestIdentityActionActivationImpl.hpp"
#include "fUML/impl/TokenImpl.hpp"
#include "fUML/impl/TokenSetImpl.hpp"
#include "fUML/impl/UnlimitedNaturalValueImpl.hpp"
#include "fUML/impl/ValueImpl.hpp"
#include "fUML/impl/ValueSpecificActionActivationImpl.hpp"
#include "fUML/impl/ValuesImpl.hpp"
#include "fUML/impl/WriteLinkActionActivationImpl.hpp"
#include "fUML/impl/WriteStructuralFeatureActionActivationImpl.hpp"


using namespace fUML;

//*********************************
// Constructor / Destructor
//*********************************

FUMLFactoryImpl::FUMLFactoryImpl()
{
	m_idMap.insert(std::make_pair("AcceptEventActionActivation", FUMLPackage::ACCEPTEVENTACTIONACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("AcceptEventActionEventAccepter", FUMLPackage::ACCEPTEVENTACTIONEVENTACCEPTER_CLASS));
	m_idMap.insert(std::make_pair("ActivityEdgeInstance", FUMLPackage::ACTIVITYEDGEINSTANCE_CLASS));
	m_idMap.insert(std::make_pair("ActivityExecution", FUMLPackage::ACTIVITYEXECUTION_CLASS));
	m_idMap.insert(std::make_pair("ActivityFinalNodeActivation", FUMLPackage::ACTIVITYFINALNODEACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("ActivityNodeActivationGroup", FUMLPackage::ACTIVITYNODEACTIVATIONGROUP_CLASS));
	m_idMap.insert(std::make_pair("ActivityParameterNodeActivation", FUMLPackage::ACTIVITYPARAMETERNODEACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("AddStructuralFeatureValueActionActivation", FUMLPackage::ADDSTRUCTURALFEATUREVALUEACTIONACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("BooleanValue", FUMLPackage::BOOLEANVALUE_CLASS));
	m_idMap.insert(std::make_pair("CallBehaviorActionActivation", FUMLPackage::CALLBEHAVIORACTIONACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("CallOperationActionActivation", FUMLPackage::CALLOPERATIONACTIONACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("CentralBufferNodeActivation", FUMLPackage::CENTRALBUFFERNODEACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("ClassifierBehaviorExecution", FUMLPackage::CLASSIFIERBEHAVIOREXECUTION_CLASS));
	m_idMap.insert(std::make_pair("ClassifierBehaviorExecutionActivity", FUMLPackage::CLASSIFIERBEHAVIOREXECUTIONACTIVITY_CLASS));
	m_idMap.insert(std::make_pair("ClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1", FUMLPackage::CLASSIFIERBEHAVIOREXECUTIONACTIVITY_OWNEDBEHAVIORACTIVITY1_CLASS));
	m_idMap.insert(std::make_pair("ClauseActivation", FUMLPackage::CLAUSEACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("ClearAssociationActionActivation", FUMLPackage::CLEARASSOCIATIONACTIONACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("ClearStructuralFeatureActionActivation", FUMLPackage::CLEARSTRUCTURALFEATUREACTIONACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("ConditionalNodeActivation", FUMLPackage::CONDITIONALNODEACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("ControlToken", FUMLPackage::CONTROLTOKEN_CLASS));
	m_idMap.insert(std::make_pair("CreateLinkActionActivation", FUMLPackage::CREATELINKACTIONACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("CreateObjectActionActivation", FUMLPackage::CREATEOBJECTACTIONACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("DataStoreNodeActivation", FUMLPackage::DATASTORENODEACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("DataValue", FUMLPackage::DATAVALUE_CLASS));
	m_idMap.insert(std::make_pair("DecisionNodeActivation", FUMLPackage::DECISIONNODEACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("DestroyLinkActionActivation", FUMLPackage::DESTROYLINKACTIONACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("DestroyObjectActionActivation", FUMLPackage::DESTROYOBJECTACTIONACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("DispatchStrategy", FUMLPackage::DISPATCHSTRATEGY_CLASS));
	m_idMap.insert(std::make_pair("EnumerationValue", FUMLPackage::ENUMERATIONVALUE_CLASS));
	m_idMap.insert(std::make_pair("EventDispatchLoop", FUMLPackage::EVENTDISPATCHLOOP_CLASS));
	m_idMap.insert(std::make_pair("EventOccurrence", FUMLPackage::EVENTOCCURRENCE_CLASS));
	m_idMap.insert(std::make_pair("ExecutionFactoryL1", FUMLPackage::EXECUTIONFACTORYL1_CLASS));
	m_idMap.insert(std::make_pair("ExecutionFactoryL2", FUMLPackage::EXECUTIONFACTORYL2_CLASS));
	m_idMap.insert(std::make_pair("ExecutionFactoryL3", FUMLPackage::EXECUTIONFACTORYL3_CLASS));
	m_idMap.insert(std::make_pair("Executor", FUMLPackage::EXECUTOR_CLASS));
	m_idMap.insert(std::make_pair("ExpansionActivationGroup", FUMLPackage::EXPANSIONACTIVATIONGROUP_CLASS));
	m_idMap.insert(std::make_pair("ExpansionNodeActivation", FUMLPackage::EXPANSIONNODEACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("ExpansionRegionActivation", FUMLPackage::EXPANSIONREGIONACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("ExtensionalValueList", FUMLPackage::EXTENSIONALVALUELIST_CLASS));
	m_idMap.insert(std::make_pair("FIFOGetNextEventStrategy", FUMLPackage::FIFOGETNEXTEVENTSTRATEGY_CLASS));
	m_idMap.insert(std::make_pair("FeatureValue", FUMLPackage::FEATUREVALUE_CLASS));
	m_idMap.insert(std::make_pair("FirstChoiceStrategy", FUMLPackage::FIRSTCHOICESTRATEGY_CLASS));
	m_idMap.insert(std::make_pair("FlowFinalNodeActivation", FUMLPackage::FLOWFINALNODEACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("ForkNodeActivation", FUMLPackage::FORKNODEACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("ForkedToken", FUMLPackage::FORKEDTOKEN_CLASS));
	m_idMap.insert(std::make_pair("InitialNodeActivation", FUMLPackage::INITIALNODEACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("InputPinActivation", FUMLPackage::INPUTPINACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("InstanceValueEvaluation", FUMLPackage::INSTANCEVALUEEVALUATION_CLASS));
	m_idMap.insert(std::make_pair("IntegerValue", FUMLPackage::INTEGERVALUE_CLASS));
	m_idMap.insert(std::make_pair("JoinNodeActivation", FUMLPackage::JOINNODEACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("Link", FUMLPackage::LINK_CLASS));
	m_idMap.insert(std::make_pair("LiteralBooleanEvaluation", FUMLPackage::LITERALBOOLEANEVALUATION_CLASS));
	m_idMap.insert(std::make_pair("LiteralIntegerEvaluation", FUMLPackage::LITERALINTEGEREVALUATION_CLASS));
	m_idMap.insert(std::make_pair("LiteralNullEvaluation", FUMLPackage::LITERALNULLEVALUATION_CLASS));
	m_idMap.insert(std::make_pair("LiteralRealEvaluation", FUMLPackage::LITERALREALEVALUATION_CLASS));
	m_idMap.insert(std::make_pair("LiteralStringEvaluation", FUMLPackage::LITERALSTRINGEVALUATION_CLASS));
	m_idMap.insert(std::make_pair("LiteralUnlimitedNaturalEvaluation", FUMLPackage::LITERALUNLIMITEDNATURALEVALUATION_CLASS));
	m_idMap.insert(std::make_pair("Locus", FUMLPackage::LOCUS_CLASS));
	m_idMap.insert(std::make_pair("LoopNodeActivation", FUMLPackage::LOOPNODEACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("MergeNodeActivation", FUMLPackage::MERGENODEACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("Object", FUMLPackage::OBJECT_CLASS));
	m_idMap.insert(std::make_pair("ObjectActivation", FUMLPackage::OBJECTACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("ObjectToken", FUMLPackage::OBJECTTOKEN_CLASS));
	m_idMap.insert(std::make_pair("Offer", FUMLPackage::OFFER_CLASS));
	m_idMap.insert(std::make_pair("OutputPinActivation", FUMLPackage::OUTPUTPINACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("ParameterValue", FUMLPackage::PARAMETERVALUE_CLASS));
	m_idMap.insert(std::make_pair("ReadExtentActionActivation", FUMLPackage::READEXTENTACTIONACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("ReadIsClassifiedObjectActionActivation", FUMLPackage::READISCLASSIFIEDOBJECTACTIONACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("ReadLinkActionActivation", FUMLPackage::READLINKACTIONACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("ReadSelfActionActivation", FUMLPackage::READSELFACTIONACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("ReadStructuralFeatureActionActivation", FUMLPackage::READSTRUCTURALFEATUREACTIONACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("RealValue", FUMLPackage::REALVALUE_CLASS));
	m_idMap.insert(std::make_pair("ReclassifyObjectActionActivation", FUMLPackage::RECLASSIFYOBJECTACTIONACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("RedefinitionBasedDispatchStrategy", FUMLPackage::REDEFINITIONBASEDDISPATCHSTRATEGY_CLASS));
	m_idMap.insert(std::make_pair("ReduceActionActivation", FUMLPackage::REDUCEACTIONACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("Reference", FUMLPackage::REFERENCE_CLASS));
	m_idMap.insert(std::make_pair("RemoveStructuralFeatureValueActivation", FUMLPackage::REMOVESTRUCTURALFEATUREVALUEACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("SendSignalActionActivation", FUMLPackage::SENDSIGNALACTIONACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("SignalInstance", FUMLPackage::SIGNALINSTANCE_CLASS));
	m_idMap.insert(std::make_pair("StartClassifierBehaviorActionActivation", FUMLPackage::STARTCLASSIFIERBEHAVIORACTIONACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("StartObjectBehaviorActionActivation", FUMLPackage::STARTOBJECTBEHAVIORACTIONACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("StringValue", FUMLPackage::STRINGVALUE_CLASS));
	m_idMap.insert(std::make_pair("StructuredActivityNodeActivation", FUMLPackage::STRUCTUREDACTIVITYNODEACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("TestIdentityActionActivation", FUMLPackage::TESTIDENTITYACTIONACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("TokenSet", FUMLPackage::TOKENSET_CLASS));
	m_idMap.insert(std::make_pair("UnlimitedNaturalValue", FUMLPackage::UNLIMITEDNATURALVALUE_CLASS));
	m_idMap.insert(std::make_pair("ValueSpecificActionActivation", FUMLPackage::VALUESPECIFICACTIONACTIVATION_CLASS));
	m_idMap.insert(std::make_pair("Values", FUMLPackage::VALUES_CLASS));
}

FUMLFactoryImpl::~FUMLFactoryImpl()
{
}

FUMLFactory* FUMLFactoryImpl::create()
{
	return new FUMLFactoryImpl();
}

//*********************************
// creators
//*********************************

std::shared_ptr<ecore::EObject> FUMLFactoryImpl::create(const int metaElementID, std::shared_ptr<ecore::EObject> container /*= nullptr*/, const int referenceID/* = -1*/) const
{
	switch(metaElementID)
	{
		case FUMLPackage::ACCEPTEVENTACTIONACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createAcceptEventActionActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::AcceptEventActionActivation>(this->createAcceptEventActionActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::ACCEPTEVENTACTIONEVENTACCEPTER_CLASS:
		{
				return this->createAcceptEventActionEventAccepter();
			
		}
		case FUMLPackage::ACTIVITYEDGEINSTANCE_CLASS:
		{
			if (nullptr == container)
			{
				return this->createActivityEdgeInstance();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::ActivityEdgeInstance>(this->createActivityEdgeInstance_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::ACTIVITYEXECUTION_CLASS:
		{
				return this->createActivityExecution();
			
		}
		case FUMLPackage::ACTIVITYFINALNODEACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createActivityFinalNodeActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::ActivityFinalNodeActivation>(this->createActivityFinalNodeActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::ACTIVITYNODEACTIVATIONGROUP_CLASS:
		{
			if (nullptr == container)
			{
				return this->createActivityNodeActivationGroup();
			}
			else
			{
				switch(referenceID)
				{
					//ActivityNodeActivationGroup has activityExecution as a containment
					case  FUMLPackage::ACTIVITYNODEACTIVATIONGROUP_ATTRIBUTE_ACTIVITYEXECUTION:
					{
						auto castedContainer = std::dynamic_pointer_cast<fUML::ActivityExecution>(container);
						return this->createActivityNodeActivationGroup_in_ActivityExecution(castedContainer,metaElementID);
					}
					//ActivityNodeActivationGroup has containingNodeActivation as a containment
					case  FUMLPackage::ACTIVITYNODEACTIVATIONGROUP_ATTRIBUTE_CONTAININGNODEACTIVATION:
					{
						auto castedContainer = std::dynamic_pointer_cast<fUML::StructuredActivityNodeActivation>(container);
						return this->createActivityNodeActivationGroup_in_ContainingNodeActivation(castedContainer,metaElementID);
					}
					default:
						std::cerr << __PRETTY_FUNCTION__ << "ERROR: Reference type not found." << std::endl;
				}
			}
		}
		case FUMLPackage::ACTIVITYPARAMETERNODEACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createActivityParameterNodeActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::ActivityParameterNodeActivation>(this->createActivityParameterNodeActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::ADDSTRUCTURALFEATUREVALUEACTIONACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createAddStructuralFeatureValueActionActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::AddStructuralFeatureValueActionActivation>(this->createAddStructuralFeatureValueActionActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::BOOLEANVALUE_CLASS:
		{
				return this->createBooleanValue();
			
		}
		case FUMLPackage::CALLBEHAVIORACTIONACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createCallBehaviorActionActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::CallBehaviorActionActivation>(this->createCallBehaviorActionActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::CALLOPERATIONACTIONACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createCallOperationActionActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::CallOperationActionActivation>(this->createCallOperationActionActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::CENTRALBUFFERNODEACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createCentralBufferNodeActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::CentralBufferNodeActivation>(this->createCentralBufferNodeActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::CLASSIFIERBEHAVIOREXECUTION_CLASS:
		{
				return this->createClassifierBehaviorExecution();
			
		}
		case FUMLPackage::CLASSIFIERBEHAVIOREXECUTIONACTIVITY_CLASS:
		{
				return this->createClassifierBehaviorExecutionActivity();
			
		}
		case FUMLPackage::CLASSIFIERBEHAVIOREXECUTIONACTIVITY_OWNEDBEHAVIORACTIVITY1_CLASS:
		{
				return this->createClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1();
			
		}
		case FUMLPackage::CLAUSEACTIVATION_CLASS:
		{
				return this->createClauseActivation();
			
		}
		case FUMLPackage::CLEARASSOCIATIONACTIONACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createClearAssociationActionActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::ClearAssociationActionActivation>(this->createClearAssociationActionActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::CLEARSTRUCTURALFEATUREACTIONACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createClearStructuralFeatureActionActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::ClearStructuralFeatureActionActivation>(this->createClearStructuralFeatureActionActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::CONDITIONALNODEACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createConditionalNodeActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::ConditionalNodeActivation>(this->createConditionalNodeActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::CONTROLTOKEN_CLASS:
		{
				return this->createControlToken();
			
		}
		case FUMLPackage::CREATELINKACTIONACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createCreateLinkActionActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::CreateLinkActionActivation>(this->createCreateLinkActionActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::CREATEOBJECTACTIONACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createCreateObjectActionActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::CreateObjectActionActivation>(this->createCreateObjectActionActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::DATASTORENODEACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createDataStoreNodeActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::DataStoreNodeActivation>(this->createDataStoreNodeActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::DATAVALUE_CLASS:
		{
				return this->createDataValue();
			
		}
		case FUMLPackage::DECISIONNODEACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createDecisionNodeActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::DecisionNodeActivation>(this->createDecisionNodeActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::DESTROYLINKACTIONACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createDestroyLinkActionActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::DestroyLinkActionActivation>(this->createDestroyLinkActionActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::DESTROYOBJECTACTIONACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createDestroyObjectActionActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::DestroyObjectActionActivation>(this->createDestroyObjectActionActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::DISPATCHSTRATEGY_CLASS:
		{
				return this->createDispatchStrategy();
			
		}
		case FUMLPackage::ENUMERATIONVALUE_CLASS:
		{
				return this->createEnumerationValue();
			
		}
		case FUMLPackage::EVENTDISPATCHLOOP_CLASS:
		{
				return this->createEventDispatchLoop();
			
		}
		case FUMLPackage::EVENTOCCURRENCE_CLASS:
		{
				return this->createEventOccurrence();
			
		}
		case FUMLPackage::EXECUTIONFACTORYL1_CLASS:
		{
			if (nullptr == container)
			{
				return this->createExecutionFactoryL1();
			}
			else
			{
				std::shared_ptr<fUML::Locus> castedContainer = std::dynamic_pointer_cast<fUML::Locus>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::ExecutionFactoryL1>(this->createExecutionFactoryL1_in_Locus(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::EXECUTIONFACTORYL2_CLASS:
		{
			if (nullptr == container)
			{
				return this->createExecutionFactoryL2();
			}
			else
			{
				std::shared_ptr<fUML::Locus> castedContainer = std::dynamic_pointer_cast<fUML::Locus>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::ExecutionFactoryL2>(this->createExecutionFactoryL2_in_Locus(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::EXECUTIONFACTORYL3_CLASS:
		{
			if (nullptr == container)
			{
				return this->createExecutionFactoryL3();
			}
			else
			{
				std::shared_ptr<fUML::Locus> castedContainer = std::dynamic_pointer_cast<fUML::Locus>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::ExecutionFactoryL3>(this->createExecutionFactoryL3_in_Locus(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::EXECUTOR_CLASS:
		{
			if (nullptr == container)
			{
				return this->createExecutor();
			}
			else
			{
				std::shared_ptr<fUML::Locus> castedContainer = std::dynamic_pointer_cast<fUML::Locus>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::Executor>(this->createExecutor_in_Locus(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::EXPANSIONACTIVATIONGROUP_CLASS:
		{
			if (nullptr == container)
			{
				return this->createExpansionActivationGroup();
			}
			else
			{
				switch(referenceID)
				{
					//ExpansionActivationGroup has activityExecution as a containment
					case  FUMLPackage::ACTIVITYNODEACTIVATIONGROUP_ATTRIBUTE_ACTIVITYEXECUTION:
					{
						auto castedContainer = std::dynamic_pointer_cast<fUML::ActivityExecution>(container);
						return this->createExpansionActivationGroup_in_ActivityExecution(castedContainer,metaElementID);
					}
					//ExpansionActivationGroup has containingNodeActivation as a containment
					case  FUMLPackage::ACTIVITYNODEACTIVATIONGROUP_ATTRIBUTE_CONTAININGNODEACTIVATION:
					{
						auto castedContainer = std::dynamic_pointer_cast<fUML::StructuredActivityNodeActivation>(container);
						return this->createExpansionActivationGroup_in_ContainingNodeActivation(castedContainer,metaElementID);
					}
					default:
						std::cerr << __PRETTY_FUNCTION__ << "ERROR: Reference type not found." << std::endl;
				}
			}
		}
		case FUMLPackage::EXPANSIONNODEACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createExpansionNodeActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::ExpansionNodeActivation>(this->createExpansionNodeActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::EXPANSIONREGIONACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createExpansionRegionActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::ExpansionRegionActivation>(this->createExpansionRegionActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::EXTENSIONALVALUELIST_CLASS:
		{
				return this->createExtensionalValueList();
			
		}
		case FUMLPackage::FIFOGETNEXTEVENTSTRATEGY_CLASS:
		{
				return this->createFIFOGetNextEventStrategy();
			
		}
		case FUMLPackage::FEATUREVALUE_CLASS:
		{
				return this->createFeatureValue();
			
		}
		case FUMLPackage::FIRSTCHOICESTRATEGY_CLASS:
		{
				return this->createFirstChoiceStrategy();
			
		}
		case FUMLPackage::FLOWFINALNODEACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createFlowFinalNodeActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::FlowFinalNodeActivation>(this->createFlowFinalNodeActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::FORKNODEACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createForkNodeActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::ForkNodeActivation>(this->createForkNodeActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::FORKEDTOKEN_CLASS:
		{
				return this->createForkedToken();
			
		}
		case FUMLPackage::INITIALNODEACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createInitialNodeActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::InitialNodeActivation>(this->createInitialNodeActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::INPUTPINACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createInputPinActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::InputPinActivation>(this->createInputPinActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::INSTANCEVALUEEVALUATION_CLASS:
		{
				return this->createInstanceValueEvaluation();
			
		}
		case FUMLPackage::INTEGERVALUE_CLASS:
		{
				return this->createIntegerValue();
			
		}
		case FUMLPackage::JOINNODEACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createJoinNodeActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::JoinNodeActivation>(this->createJoinNodeActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::LINK_CLASS:
		{
				return this->createLink();
			
		}
		case FUMLPackage::LITERALBOOLEANEVALUATION_CLASS:
		{
				return this->createLiteralBooleanEvaluation();
			
		}
		case FUMLPackage::LITERALINTEGEREVALUATION_CLASS:
		{
				return this->createLiteralIntegerEvaluation();
			
		}
		case FUMLPackage::LITERALNULLEVALUATION_CLASS:
		{
				return this->createLiteralNullEvaluation();
			
		}
		case FUMLPackage::LITERALREALEVALUATION_CLASS:
		{
				return this->createLiteralRealEvaluation();
			
		}
		case FUMLPackage::LITERALSTRINGEVALUATION_CLASS:
		{
				return this->createLiteralStringEvaluation();
			
		}
		case FUMLPackage::LITERALUNLIMITEDNATURALEVALUATION_CLASS:
		{
				return this->createLiteralUnlimitedNaturalEvaluation();
			
		}
		case FUMLPackage::LOCUS_CLASS:
		{
				return this->createLocus();
			
		}
		case FUMLPackage::LOOPNODEACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createLoopNodeActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::LoopNodeActivation>(this->createLoopNodeActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::MERGENODEACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createMergeNodeActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::MergeNodeActivation>(this->createMergeNodeActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::OBJECT_CLASS:
		{
				return this->createObject();
			
		}
		case FUMLPackage::OBJECTACTIVATION_CLASS:
		{
				return this->createObjectActivation();
			
		}
		case FUMLPackage::OBJECTTOKEN_CLASS:
		{
				return this->createObjectToken();
			
		}
		case FUMLPackage::OFFER_CLASS:
		{
				return this->createOffer();
			
		}
		case FUMLPackage::OUTPUTPINACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createOutputPinActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::OutputPinActivation>(this->createOutputPinActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::PARAMETERVALUE_CLASS:
		{
				return this->createParameterValue();
			
		}
		case FUMLPackage::READEXTENTACTIONACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createReadExtentActionActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::ReadExtentActionActivation>(this->createReadExtentActionActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::READISCLASSIFIEDOBJECTACTIONACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createReadIsClassifiedObjectActionActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::ReadIsClassifiedObjectActionActivation>(this->createReadIsClassifiedObjectActionActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::READLINKACTIONACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createReadLinkActionActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::ReadLinkActionActivation>(this->createReadLinkActionActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::READSELFACTIONACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createReadSelfActionActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::ReadSelfActionActivation>(this->createReadSelfActionActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::READSTRUCTURALFEATUREACTIONACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createReadStructuralFeatureActionActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::ReadStructuralFeatureActionActivation>(this->createReadStructuralFeatureActionActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::REALVALUE_CLASS:
		{
				return this->createRealValue();
			
		}
		case FUMLPackage::RECLASSIFYOBJECTACTIONACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createReclassifyObjectActionActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::ReclassifyObjectActionActivation>(this->createReclassifyObjectActionActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::REDEFINITIONBASEDDISPATCHSTRATEGY_CLASS:
		{
				return this->createRedefinitionBasedDispatchStrategy();
			
		}
		case FUMLPackage::REDUCEACTIONACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createReduceActionActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::ReduceActionActivation>(this->createReduceActionActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::REFERENCE_CLASS:
		{
				return this->createReference();
			
		}
		case FUMLPackage::REMOVESTRUCTURALFEATUREVALUEACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createRemoveStructuralFeatureValueActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::RemoveStructuralFeatureValueActivation>(this->createRemoveStructuralFeatureValueActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::SENDSIGNALACTIONACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createSendSignalActionActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::SendSignalActionActivation>(this->createSendSignalActionActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::SIGNALINSTANCE_CLASS:
		{
				return this->createSignalInstance();
			
		}
		case FUMLPackage::STARTCLASSIFIERBEHAVIORACTIONACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createStartClassifierBehaviorActionActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::StartClassifierBehaviorActionActivation>(this->createStartClassifierBehaviorActionActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::STARTOBJECTBEHAVIORACTIONACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createStartObjectBehaviorActionActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::StartObjectBehaviorActionActivation>(this->createStartObjectBehaviorActionActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::STRINGVALUE_CLASS:
		{
				return this->createStringValue();
			
		}
		case FUMLPackage::STRUCTUREDACTIVITYNODEACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createStructuredActivityNodeActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::StructuredActivityNodeActivation>(this->createStructuredActivityNodeActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::TESTIDENTITYACTIONACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createTestIdentityActionActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::TestIdentityActionActivation>(this->createTestIdentityActionActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::TOKENSET_CLASS:
		{
				return this->createTokenSet();
			
		}
		case FUMLPackage::UNLIMITEDNATURALVALUE_CLASS:
		{
				return this->createUnlimitedNaturalValue();
			
		}
		case FUMLPackage::VALUESPECIFICACTIONACTIVATION_CLASS:
		{
			if (nullptr == container)
			{
				return this->createValueSpecificActionActivation();
			}
			else
			{
				std::shared_ptr<fUML::ActivityNodeActivationGroup> castedContainer = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(container);
				assert(castedContainer);
				return std::shared_ptr<fUML::ValueSpecificActionActivation>(this->createValueSpecificActionActivation_in_Group(castedContainer,metaElementID));
			}
		}
		case FUMLPackage::VALUES_CLASS:
		{
				return this->createValues();
			
		}
	default:
	   	    std::cerr << __PRETTY_FUNCTION__ << " ID " << metaElementID <<" not found" << std::endl;
	}
	return nullptr;
}

std::shared_ptr<ecore::EObject> FUMLFactoryImpl::create(std::shared_ptr<ecore::EClass> _class, std::shared_ptr<ecore::EObject> container /*= nullptr*/, const int referenceID/* = -1*/) const
{
	if(_class->isAbstract())
    {
    	return nullptr;
   	}
	int _elementID = _class->getMetaElementID();
	return create(_elementID, container, referenceID);
}

std::shared_ptr<ecore::EObject> FUMLFactoryImpl::create(std::string _className, std::shared_ptr<ecore::EObject> container /*= nullptr*/, const int referenceID/* = -1*/) const
{
	auto iter = m_idMap.find(_className);
	if(iter != m_idMap.end())
    {
		//get the ID
        int id = iter->second;
		return create(id,container,referenceID);
    }
    return nullptr;
}

std::shared_ptr<AcceptEventActionActivation> FUMLFactoryImpl::createAcceptEventActionActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<AcceptEventActionActivationImpl> element(new AcceptEventActionActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisAcceptEventActionActivationPtr(element);
	return element;
}
std::shared_ptr<AcceptEventActionActivation> FUMLFactoryImpl::createAcceptEventActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<AcceptEventActionActivationImpl> element(new AcceptEventActionActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisAcceptEventActionActivationPtr(element);
	return element;
	
}
std::shared_ptr<AcceptEventActionEventAccepter> FUMLFactoryImpl::createAcceptEventActionEventAccepter(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<AcceptEventActionEventAccepterImpl> element(new AcceptEventActionEventAccepterImpl());
	element->setMetaElementID(metaElementID);
	element->setThisAcceptEventActionEventAccepterPtr(element);
	return element;
}
std::shared_ptr<ActivityEdgeInstance> FUMLFactoryImpl::createActivityEdgeInstance(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ActivityEdgeInstanceImpl> element(new ActivityEdgeInstanceImpl());
	element->setMetaElementID(metaElementID);
	element->setThisActivityEdgeInstancePtr(element);
	return element;
}
std::shared_ptr<ActivityEdgeInstance> FUMLFactoryImpl::createActivityEdgeInstance_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<ActivityEdgeInstanceImpl> element(new ActivityEdgeInstanceImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getEdgeInstances()->push_back(element);
	}
	element->setThisActivityEdgeInstancePtr(element);
	return element;
	
}
std::shared_ptr<ActivityExecution> FUMLFactoryImpl::createActivityExecution(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ActivityExecutionImpl> element(new ActivityExecutionImpl());
	element->setMetaElementID(metaElementID);
	element->setThisActivityExecutionPtr(element);
	return element;
}
std::shared_ptr<ActivityFinalNodeActivation> FUMLFactoryImpl::createActivityFinalNodeActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ActivityFinalNodeActivationImpl> element(new ActivityFinalNodeActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisActivityFinalNodeActivationPtr(element);
	return element;
}
std::shared_ptr<ActivityFinalNodeActivation> FUMLFactoryImpl::createActivityFinalNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<ActivityFinalNodeActivationImpl> element(new ActivityFinalNodeActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisActivityFinalNodeActivationPtr(element);
	return element;
	
}
std::shared_ptr<ActivityNodeActivationGroup> FUMLFactoryImpl::createActivityNodeActivationGroup(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ActivityNodeActivationGroupImpl> element(new ActivityNodeActivationGroupImpl());
	element->setMetaElementID(metaElementID);
	element->setThisActivityNodeActivationGroupPtr(element);
	return element;
}
std::shared_ptr<ActivityNodeActivationGroup> FUMLFactoryImpl::createActivityNodeActivationGroup_in_ActivityExecution(std::weak_ptr<fUML::ActivityExecution > par_activityExecution, const int metaElementID) const
{
	std::shared_ptr<ActivityNodeActivationGroupImpl> element(new ActivityNodeActivationGroupImpl(par_activityExecution));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_activityExecution.lock())
	{
			wp->setActivationGroup(element);
	}
	element->setThisActivityNodeActivationGroupPtr(element);
	return element;
	
}
std::shared_ptr<ActivityNodeActivationGroup> FUMLFactoryImpl::createActivityNodeActivationGroup_in_ContainingNodeActivation(std::weak_ptr<fUML::StructuredActivityNodeActivation > par_containingNodeActivation, const int metaElementID) const
{
	std::shared_ptr<ActivityNodeActivationGroupImpl> element(new ActivityNodeActivationGroupImpl(par_containingNodeActivation));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_containingNodeActivation.lock())
	{
			wp->setActivationGroup(element);
	}
	element->setThisActivityNodeActivationGroupPtr(element);
	return element;
	
}
std::shared_ptr<ActivityParameterNodeActivation> FUMLFactoryImpl::createActivityParameterNodeActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ActivityParameterNodeActivationImpl> element(new ActivityParameterNodeActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisActivityParameterNodeActivationPtr(element);
	return element;
}
std::shared_ptr<ActivityParameterNodeActivation> FUMLFactoryImpl::createActivityParameterNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<ActivityParameterNodeActivationImpl> element(new ActivityParameterNodeActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisActivityParameterNodeActivationPtr(element);
	return element;
	
}
std::shared_ptr<AddStructuralFeatureValueActionActivation> FUMLFactoryImpl::createAddStructuralFeatureValueActionActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<AddStructuralFeatureValueActionActivationImpl> element(new AddStructuralFeatureValueActionActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisAddStructuralFeatureValueActionActivationPtr(element);
	return element;
}
std::shared_ptr<AddStructuralFeatureValueActionActivation> FUMLFactoryImpl::createAddStructuralFeatureValueActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<AddStructuralFeatureValueActionActivationImpl> element(new AddStructuralFeatureValueActionActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisAddStructuralFeatureValueActionActivationPtr(element);
	return element;
	
}
std::shared_ptr<BooleanValue> FUMLFactoryImpl::createBooleanValue(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<BooleanValueImpl> element(new BooleanValueImpl());
	element->setMetaElementID(metaElementID);
	element->setThisBooleanValuePtr(element);
	return element;
}
std::shared_ptr<CallBehaviorActionActivation> FUMLFactoryImpl::createCallBehaviorActionActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<CallBehaviorActionActivationImpl> element(new CallBehaviorActionActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisCallBehaviorActionActivationPtr(element);
	return element;
}
std::shared_ptr<CallBehaviorActionActivation> FUMLFactoryImpl::createCallBehaviorActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<CallBehaviorActionActivationImpl> element(new CallBehaviorActionActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisCallBehaviorActionActivationPtr(element);
	return element;
	
}
std::shared_ptr<CallOperationActionActivation> FUMLFactoryImpl::createCallOperationActionActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<CallOperationActionActivationImpl> element(new CallOperationActionActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisCallOperationActionActivationPtr(element);
	return element;
}
std::shared_ptr<CallOperationActionActivation> FUMLFactoryImpl::createCallOperationActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<CallOperationActionActivationImpl> element(new CallOperationActionActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisCallOperationActionActivationPtr(element);
	return element;
	
}
std::shared_ptr<CentralBufferNodeActivation> FUMLFactoryImpl::createCentralBufferNodeActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<CentralBufferNodeActivationImpl> element(new CentralBufferNodeActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisCentralBufferNodeActivationPtr(element);
	return element;
}
std::shared_ptr<CentralBufferNodeActivation> FUMLFactoryImpl::createCentralBufferNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<CentralBufferNodeActivationImpl> element(new CentralBufferNodeActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisCentralBufferNodeActivationPtr(element);
	return element;
	
}
std::shared_ptr<ClassifierBehaviorExecution> FUMLFactoryImpl::createClassifierBehaviorExecution(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ClassifierBehaviorExecutionImpl> element(new ClassifierBehaviorExecutionImpl());
	element->setMetaElementID(metaElementID);
	element->setThisClassifierBehaviorExecutionPtr(element);
	return element;
}
std::shared_ptr<ClassifierBehaviorExecutionActivity> FUMLFactoryImpl::createClassifierBehaviorExecutionActivity(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ClassifierBehaviorExecutionActivityImpl> element(new ClassifierBehaviorExecutionActivityImpl());
	element->setMetaElementID(metaElementID);
	element->setThisClassifierBehaviorExecutionActivityPtr(element);
	return element;
}
std::shared_ptr<ClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1> FUMLFactoryImpl::createClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1Impl> element(new ClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1Impl());
	element->setMetaElementID(metaElementID);
	element->setThisClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1Ptr(element);
	return element;
}
std::shared_ptr<ClauseActivation> FUMLFactoryImpl::createClauseActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ClauseActivationImpl> element(new ClauseActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisClauseActivationPtr(element);
	return element;
}
std::shared_ptr<ClearAssociationActionActivation> FUMLFactoryImpl::createClearAssociationActionActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ClearAssociationActionActivationImpl> element(new ClearAssociationActionActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisClearAssociationActionActivationPtr(element);
	return element;
}
std::shared_ptr<ClearAssociationActionActivation> FUMLFactoryImpl::createClearAssociationActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<ClearAssociationActionActivationImpl> element(new ClearAssociationActionActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisClearAssociationActionActivationPtr(element);
	return element;
	
}
std::shared_ptr<ClearStructuralFeatureActionActivation> FUMLFactoryImpl::createClearStructuralFeatureActionActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ClearStructuralFeatureActionActivationImpl> element(new ClearStructuralFeatureActionActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisClearStructuralFeatureActionActivationPtr(element);
	return element;
}
std::shared_ptr<ClearStructuralFeatureActionActivation> FUMLFactoryImpl::createClearStructuralFeatureActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<ClearStructuralFeatureActionActivationImpl> element(new ClearStructuralFeatureActionActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisClearStructuralFeatureActionActivationPtr(element);
	return element;
	
}
std::shared_ptr<ConditionalNodeActivation> FUMLFactoryImpl::createConditionalNodeActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ConditionalNodeActivationImpl> element(new ConditionalNodeActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisConditionalNodeActivationPtr(element);
	return element;
}
std::shared_ptr<ConditionalNodeActivation> FUMLFactoryImpl::createConditionalNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<ConditionalNodeActivationImpl> element(new ConditionalNodeActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisConditionalNodeActivationPtr(element);
	return element;
	
}
std::shared_ptr<ControlToken> FUMLFactoryImpl::createControlToken(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ControlTokenImpl> element(new ControlTokenImpl());
	element->setMetaElementID(metaElementID);
	element->setThisControlTokenPtr(element);
	return element;
}
std::shared_ptr<CreateLinkActionActivation> FUMLFactoryImpl::createCreateLinkActionActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<CreateLinkActionActivationImpl> element(new CreateLinkActionActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisCreateLinkActionActivationPtr(element);
	return element;
}
std::shared_ptr<CreateLinkActionActivation> FUMLFactoryImpl::createCreateLinkActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<CreateLinkActionActivationImpl> element(new CreateLinkActionActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisCreateLinkActionActivationPtr(element);
	return element;
	
}
std::shared_ptr<CreateObjectActionActivation> FUMLFactoryImpl::createCreateObjectActionActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<CreateObjectActionActivationImpl> element(new CreateObjectActionActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisCreateObjectActionActivationPtr(element);
	return element;
}
std::shared_ptr<CreateObjectActionActivation> FUMLFactoryImpl::createCreateObjectActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<CreateObjectActionActivationImpl> element(new CreateObjectActionActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisCreateObjectActionActivationPtr(element);
	return element;
	
}
std::shared_ptr<DataStoreNodeActivation> FUMLFactoryImpl::createDataStoreNodeActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<DataStoreNodeActivationImpl> element(new DataStoreNodeActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisDataStoreNodeActivationPtr(element);
	return element;
}
std::shared_ptr<DataStoreNodeActivation> FUMLFactoryImpl::createDataStoreNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<DataStoreNodeActivationImpl> element(new DataStoreNodeActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisDataStoreNodeActivationPtr(element);
	return element;
	
}
std::shared_ptr<DataValue> FUMLFactoryImpl::createDataValue(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<DataValueImpl> element(new DataValueImpl());
	element->setMetaElementID(metaElementID);
	element->setThisDataValuePtr(element);
	return element;
}
std::shared_ptr<DecisionNodeActivation> FUMLFactoryImpl::createDecisionNodeActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<DecisionNodeActivationImpl> element(new DecisionNodeActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisDecisionNodeActivationPtr(element);
	return element;
}
std::shared_ptr<DecisionNodeActivation> FUMLFactoryImpl::createDecisionNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<DecisionNodeActivationImpl> element(new DecisionNodeActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisDecisionNodeActivationPtr(element);
	return element;
	
}
std::shared_ptr<DestroyLinkActionActivation> FUMLFactoryImpl::createDestroyLinkActionActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<DestroyLinkActionActivationImpl> element(new DestroyLinkActionActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisDestroyLinkActionActivationPtr(element);
	return element;
}
std::shared_ptr<DestroyLinkActionActivation> FUMLFactoryImpl::createDestroyLinkActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<DestroyLinkActionActivationImpl> element(new DestroyLinkActionActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisDestroyLinkActionActivationPtr(element);
	return element;
	
}
std::shared_ptr<DestroyObjectActionActivation> FUMLFactoryImpl::createDestroyObjectActionActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<DestroyObjectActionActivationImpl> element(new DestroyObjectActionActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisDestroyObjectActionActivationPtr(element);
	return element;
}
std::shared_ptr<DestroyObjectActionActivation> FUMLFactoryImpl::createDestroyObjectActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<DestroyObjectActionActivationImpl> element(new DestroyObjectActionActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisDestroyObjectActionActivationPtr(element);
	return element;
	
}
std::shared_ptr<DispatchStrategy> FUMLFactoryImpl::createDispatchStrategy(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<DispatchStrategyImpl> element(new DispatchStrategyImpl());
	element->setMetaElementID(metaElementID);
	element->setThisDispatchStrategyPtr(element);
	return element;
}
std::shared_ptr<EnumerationValue> FUMLFactoryImpl::createEnumerationValue(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<EnumerationValueImpl> element(new EnumerationValueImpl());
	element->setMetaElementID(metaElementID);
	element->setThisEnumerationValuePtr(element);
	return element;
}
std::shared_ptr<EventDispatchLoop> FUMLFactoryImpl::createEventDispatchLoop(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<EventDispatchLoopImpl> element(new EventDispatchLoopImpl());
	element->setMetaElementID(metaElementID);
	element->setThisEventDispatchLoopPtr(element);
	return element;
}
std::shared_ptr<EventOccurrence> FUMLFactoryImpl::createEventOccurrence(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<EventOccurrenceImpl> element(new EventOccurrenceImpl());
	element->setMetaElementID(metaElementID);
	element->setThisEventOccurrencePtr(element);
	return element;
}
std::shared_ptr<ExecutionFactoryL1> FUMLFactoryImpl::createExecutionFactoryL1(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ExecutionFactoryL1Impl> element(new ExecutionFactoryL1Impl());
	element->setMetaElementID(metaElementID);
	element->setThisExecutionFactoryL1Ptr(element);
	return element;
}
std::shared_ptr<ExecutionFactoryL1> FUMLFactoryImpl::createExecutionFactoryL1_in_Locus(std::weak_ptr<fUML::Locus > par_locus, const int metaElementID) const
{
	std::shared_ptr<ExecutionFactoryL1Impl> element(new ExecutionFactoryL1Impl(par_locus));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_locus.lock())
	{
			wp->setFactory(element);
	}
	element->setThisExecutionFactoryL1Ptr(element);
	return element;
	
}
std::shared_ptr<ExecutionFactoryL2> FUMLFactoryImpl::createExecutionFactoryL2(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ExecutionFactoryL2Impl> element(new ExecutionFactoryL2Impl());
	element->setMetaElementID(metaElementID);
	element->setThisExecutionFactoryL2Ptr(element);
	return element;
}
std::shared_ptr<ExecutionFactoryL2> FUMLFactoryImpl::createExecutionFactoryL2_in_Locus(std::weak_ptr<fUML::Locus > par_locus, const int metaElementID) const
{
	std::shared_ptr<ExecutionFactoryL2Impl> element(new ExecutionFactoryL2Impl(par_locus));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_locus.lock())
	{
			wp->setFactory(element);
	}
	element->setThisExecutionFactoryL2Ptr(element);
	return element;
	
}
std::shared_ptr<ExecutionFactoryL3> FUMLFactoryImpl::createExecutionFactoryL3(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ExecutionFactoryL3Impl> element(new ExecutionFactoryL3Impl());
	element->setMetaElementID(metaElementID);
	element->setThisExecutionFactoryL3Ptr(element);
	return element;
}
std::shared_ptr<ExecutionFactoryL3> FUMLFactoryImpl::createExecutionFactoryL3_in_Locus(std::weak_ptr<fUML::Locus > par_locus, const int metaElementID) const
{
	std::shared_ptr<ExecutionFactoryL3Impl> element(new ExecutionFactoryL3Impl(par_locus));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_locus.lock())
	{
			wp->setFactory(element);
	}
	element->setThisExecutionFactoryL3Ptr(element);
	return element;
	
}
std::shared_ptr<Executor> FUMLFactoryImpl::createExecutor(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ExecutorImpl> element(new ExecutorImpl());
	element->setMetaElementID(metaElementID);
	element->setThisExecutorPtr(element);
	return element;
}
std::shared_ptr<Executor> FUMLFactoryImpl::createExecutor_in_Locus(std::weak_ptr<fUML::Locus > par_locus, const int metaElementID) const
{
	std::shared_ptr<ExecutorImpl> element(new ExecutorImpl(par_locus));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_locus.lock())
	{
			wp->setExecutor(element);
	}
	element->setThisExecutorPtr(element);
	return element;
	
}
std::shared_ptr<ExpansionActivationGroup> FUMLFactoryImpl::createExpansionActivationGroup(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ExpansionActivationGroupImpl> element(new ExpansionActivationGroupImpl());
	element->setMetaElementID(metaElementID);
	element->setThisExpansionActivationGroupPtr(element);
	return element;
}
std::shared_ptr<ExpansionActivationGroup> FUMLFactoryImpl::createExpansionActivationGroup_in_ActivityExecution(std::weak_ptr<fUML::ActivityExecution > par_activityExecution, const int metaElementID) const
{
	std::shared_ptr<ExpansionActivationGroupImpl> element(new ExpansionActivationGroupImpl(par_activityExecution));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_activityExecution.lock())
	{
			wp->setActivationGroup(element);
	}
	element->setThisExpansionActivationGroupPtr(element);
	return element;
	
}
std::shared_ptr<ExpansionActivationGroup> FUMLFactoryImpl::createExpansionActivationGroup_in_ContainingNodeActivation(std::weak_ptr<fUML::StructuredActivityNodeActivation > par_containingNodeActivation, const int metaElementID) const
{
	std::shared_ptr<ExpansionActivationGroupImpl> element(new ExpansionActivationGroupImpl(par_containingNodeActivation));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_containingNodeActivation.lock())
	{
			wp->setActivationGroup(element);
	}
	element->setThisExpansionActivationGroupPtr(element);
	return element;
	
}
std::shared_ptr<ExpansionNodeActivation> FUMLFactoryImpl::createExpansionNodeActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ExpansionNodeActivationImpl> element(new ExpansionNodeActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisExpansionNodeActivationPtr(element);
	return element;
}
std::shared_ptr<ExpansionNodeActivation> FUMLFactoryImpl::createExpansionNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<ExpansionNodeActivationImpl> element(new ExpansionNodeActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisExpansionNodeActivationPtr(element);
	return element;
	
}
std::shared_ptr<ExpansionRegionActivation> FUMLFactoryImpl::createExpansionRegionActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ExpansionRegionActivationImpl> element(new ExpansionRegionActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisExpansionRegionActivationPtr(element);
	return element;
}
std::shared_ptr<ExpansionRegionActivation> FUMLFactoryImpl::createExpansionRegionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<ExpansionRegionActivationImpl> element(new ExpansionRegionActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisExpansionRegionActivationPtr(element);
	return element;
	
}
std::shared_ptr<ExtensionalValueList> FUMLFactoryImpl::createExtensionalValueList(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ExtensionalValueListImpl> element(new ExtensionalValueListImpl());
	element->setMetaElementID(metaElementID);
	element->setThisExtensionalValueListPtr(element);
	return element;
}
std::shared_ptr<FIFOGetNextEventStrategy> FUMLFactoryImpl::createFIFOGetNextEventStrategy(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<FIFOGetNextEventStrategyImpl> element(new FIFOGetNextEventStrategyImpl());
	element->setMetaElementID(metaElementID);
	element->setThisFIFOGetNextEventStrategyPtr(element);
	return element;
}
std::shared_ptr<FeatureValue> FUMLFactoryImpl::createFeatureValue(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<FeatureValueImpl> element(new FeatureValueImpl());
	element->setMetaElementID(metaElementID);
	element->setThisFeatureValuePtr(element);
	return element;
}
std::shared_ptr<FirstChoiceStrategy> FUMLFactoryImpl::createFirstChoiceStrategy(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<FirstChoiceStrategyImpl> element(new FirstChoiceStrategyImpl());
	element->setMetaElementID(metaElementID);
	element->setThisFirstChoiceStrategyPtr(element);
	return element;
}
std::shared_ptr<FlowFinalNodeActivation> FUMLFactoryImpl::createFlowFinalNodeActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<FlowFinalNodeActivationImpl> element(new FlowFinalNodeActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisFlowFinalNodeActivationPtr(element);
	return element;
}
std::shared_ptr<FlowFinalNodeActivation> FUMLFactoryImpl::createFlowFinalNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<FlowFinalNodeActivationImpl> element(new FlowFinalNodeActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisFlowFinalNodeActivationPtr(element);
	return element;
	
}
std::shared_ptr<ForkNodeActivation> FUMLFactoryImpl::createForkNodeActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ForkNodeActivationImpl> element(new ForkNodeActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisForkNodeActivationPtr(element);
	return element;
}
std::shared_ptr<ForkNodeActivation> FUMLFactoryImpl::createForkNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<ForkNodeActivationImpl> element(new ForkNodeActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisForkNodeActivationPtr(element);
	return element;
	
}
std::shared_ptr<ForkedToken> FUMLFactoryImpl::createForkedToken(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ForkedTokenImpl> element(new ForkedTokenImpl());
	element->setMetaElementID(metaElementID);
	element->setThisForkedTokenPtr(element);
	return element;
}
std::shared_ptr<InitialNodeActivation> FUMLFactoryImpl::createInitialNodeActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<InitialNodeActivationImpl> element(new InitialNodeActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisInitialNodeActivationPtr(element);
	return element;
}
std::shared_ptr<InitialNodeActivation> FUMLFactoryImpl::createInitialNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<InitialNodeActivationImpl> element(new InitialNodeActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisInitialNodeActivationPtr(element);
	return element;
	
}
std::shared_ptr<InputPinActivation> FUMLFactoryImpl::createInputPinActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<InputPinActivationImpl> element(new InputPinActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisInputPinActivationPtr(element);
	return element;
}
std::shared_ptr<InputPinActivation> FUMLFactoryImpl::createInputPinActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<InputPinActivationImpl> element(new InputPinActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisInputPinActivationPtr(element);
	return element;
	
}
std::shared_ptr<InstanceValueEvaluation> FUMLFactoryImpl::createInstanceValueEvaluation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<InstanceValueEvaluationImpl> element(new InstanceValueEvaluationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisInstanceValueEvaluationPtr(element);
	return element;
}
std::shared_ptr<IntegerValue> FUMLFactoryImpl::createIntegerValue(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<IntegerValueImpl> element(new IntegerValueImpl());
	element->setMetaElementID(metaElementID);
	element->setThisIntegerValuePtr(element);
	return element;
}
std::shared_ptr<JoinNodeActivation> FUMLFactoryImpl::createJoinNodeActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<JoinNodeActivationImpl> element(new JoinNodeActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisJoinNodeActivationPtr(element);
	return element;
}
std::shared_ptr<JoinNodeActivation> FUMLFactoryImpl::createJoinNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<JoinNodeActivationImpl> element(new JoinNodeActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisJoinNodeActivationPtr(element);
	return element;
	
}
std::shared_ptr<Link> FUMLFactoryImpl::createLink(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<LinkImpl> element(new LinkImpl());
	element->setMetaElementID(metaElementID);
	element->setThisLinkPtr(element);
	return element;
}
std::shared_ptr<LiteralBooleanEvaluation> FUMLFactoryImpl::createLiteralBooleanEvaluation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<LiteralBooleanEvaluationImpl> element(new LiteralBooleanEvaluationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisLiteralBooleanEvaluationPtr(element);
	return element;
}
std::shared_ptr<LiteralIntegerEvaluation> FUMLFactoryImpl::createLiteralIntegerEvaluation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<LiteralIntegerEvaluationImpl> element(new LiteralIntegerEvaluationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisLiteralIntegerEvaluationPtr(element);
	return element;
}
std::shared_ptr<LiteralNullEvaluation> FUMLFactoryImpl::createLiteralNullEvaluation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<LiteralNullEvaluationImpl> element(new LiteralNullEvaluationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisLiteralNullEvaluationPtr(element);
	return element;
}
std::shared_ptr<LiteralRealEvaluation> FUMLFactoryImpl::createLiteralRealEvaluation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<LiteralRealEvaluationImpl> element(new LiteralRealEvaluationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisLiteralRealEvaluationPtr(element);
	return element;
}
std::shared_ptr<LiteralStringEvaluation> FUMLFactoryImpl::createLiteralStringEvaluation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<LiteralStringEvaluationImpl> element(new LiteralStringEvaluationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisLiteralStringEvaluationPtr(element);
	return element;
}
std::shared_ptr<LiteralUnlimitedNaturalEvaluation> FUMLFactoryImpl::createLiteralUnlimitedNaturalEvaluation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<LiteralUnlimitedNaturalEvaluationImpl> element(new LiteralUnlimitedNaturalEvaluationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisLiteralUnlimitedNaturalEvaluationPtr(element);
	return element;
}
std::shared_ptr<Locus> FUMLFactoryImpl::createLocus(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<LocusImpl> element(new LocusImpl());
	element->setMetaElementID(metaElementID);
	element->setThisLocusPtr(element);
	return element;
}
std::shared_ptr<LoopNodeActivation> FUMLFactoryImpl::createLoopNodeActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<LoopNodeActivationImpl> element(new LoopNodeActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisLoopNodeActivationPtr(element);
	return element;
}
std::shared_ptr<LoopNodeActivation> FUMLFactoryImpl::createLoopNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<LoopNodeActivationImpl> element(new LoopNodeActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisLoopNodeActivationPtr(element);
	return element;
	
}
std::shared_ptr<MergeNodeActivation> FUMLFactoryImpl::createMergeNodeActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<MergeNodeActivationImpl> element(new MergeNodeActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisMergeNodeActivationPtr(element);
	return element;
}
std::shared_ptr<MergeNodeActivation> FUMLFactoryImpl::createMergeNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<MergeNodeActivationImpl> element(new MergeNodeActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisMergeNodeActivationPtr(element);
	return element;
	
}
std::shared_ptr<Object> FUMLFactoryImpl::createObject(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ObjectImpl> element(new ObjectImpl());
	element->setMetaElementID(metaElementID);
	element->setThisObjectPtr(element);
	return element;
}
std::shared_ptr<ObjectActivation> FUMLFactoryImpl::createObjectActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ObjectActivationImpl> element(new ObjectActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisObjectActivationPtr(element);
	return element;
}
std::shared_ptr<ObjectToken> FUMLFactoryImpl::createObjectToken(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ObjectTokenImpl> element(new ObjectTokenImpl());
	element->setMetaElementID(metaElementID);
	element->setThisObjectTokenPtr(element);
	return element;
}
std::shared_ptr<Offer> FUMLFactoryImpl::createOffer(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<OfferImpl> element(new OfferImpl());
	element->setMetaElementID(metaElementID);
	element->setThisOfferPtr(element);
	return element;
}
std::shared_ptr<OutputPinActivation> FUMLFactoryImpl::createOutputPinActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<OutputPinActivationImpl> element(new OutputPinActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisOutputPinActivationPtr(element);
	return element;
}
std::shared_ptr<OutputPinActivation> FUMLFactoryImpl::createOutputPinActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<OutputPinActivationImpl> element(new OutputPinActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisOutputPinActivationPtr(element);
	return element;
	
}
std::shared_ptr<ParameterValue> FUMLFactoryImpl::createParameterValue(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ParameterValueImpl> element(new ParameterValueImpl());
	element->setMetaElementID(metaElementID);
	element->setThisParameterValuePtr(element);
	return element;
}
std::shared_ptr<ReadExtentActionActivation> FUMLFactoryImpl::createReadExtentActionActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ReadExtentActionActivationImpl> element(new ReadExtentActionActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisReadExtentActionActivationPtr(element);
	return element;
}
std::shared_ptr<ReadExtentActionActivation> FUMLFactoryImpl::createReadExtentActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<ReadExtentActionActivationImpl> element(new ReadExtentActionActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisReadExtentActionActivationPtr(element);
	return element;
	
}
std::shared_ptr<ReadIsClassifiedObjectActionActivation> FUMLFactoryImpl::createReadIsClassifiedObjectActionActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ReadIsClassifiedObjectActionActivationImpl> element(new ReadIsClassifiedObjectActionActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisReadIsClassifiedObjectActionActivationPtr(element);
	return element;
}
std::shared_ptr<ReadIsClassifiedObjectActionActivation> FUMLFactoryImpl::createReadIsClassifiedObjectActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<ReadIsClassifiedObjectActionActivationImpl> element(new ReadIsClassifiedObjectActionActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisReadIsClassifiedObjectActionActivationPtr(element);
	return element;
	
}
std::shared_ptr<ReadLinkActionActivation> FUMLFactoryImpl::createReadLinkActionActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ReadLinkActionActivationImpl> element(new ReadLinkActionActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisReadLinkActionActivationPtr(element);
	return element;
}
std::shared_ptr<ReadLinkActionActivation> FUMLFactoryImpl::createReadLinkActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<ReadLinkActionActivationImpl> element(new ReadLinkActionActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisReadLinkActionActivationPtr(element);
	return element;
	
}
std::shared_ptr<ReadSelfActionActivation> FUMLFactoryImpl::createReadSelfActionActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ReadSelfActionActivationImpl> element(new ReadSelfActionActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisReadSelfActionActivationPtr(element);
	return element;
}
std::shared_ptr<ReadSelfActionActivation> FUMLFactoryImpl::createReadSelfActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<ReadSelfActionActivationImpl> element(new ReadSelfActionActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisReadSelfActionActivationPtr(element);
	return element;
	
}
std::shared_ptr<ReadStructuralFeatureActionActivation> FUMLFactoryImpl::createReadStructuralFeatureActionActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ReadStructuralFeatureActionActivationImpl> element(new ReadStructuralFeatureActionActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisReadStructuralFeatureActionActivationPtr(element);
	return element;
}
std::shared_ptr<ReadStructuralFeatureActionActivation> FUMLFactoryImpl::createReadStructuralFeatureActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<ReadStructuralFeatureActionActivationImpl> element(new ReadStructuralFeatureActionActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisReadStructuralFeatureActionActivationPtr(element);
	return element;
	
}
std::shared_ptr<RealValue> FUMLFactoryImpl::createRealValue(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<RealValueImpl> element(new RealValueImpl());
	element->setMetaElementID(metaElementID);
	element->setThisRealValuePtr(element);
	return element;
}
std::shared_ptr<ReclassifyObjectActionActivation> FUMLFactoryImpl::createReclassifyObjectActionActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ReclassifyObjectActionActivationImpl> element(new ReclassifyObjectActionActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisReclassifyObjectActionActivationPtr(element);
	return element;
}
std::shared_ptr<ReclassifyObjectActionActivation> FUMLFactoryImpl::createReclassifyObjectActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<ReclassifyObjectActionActivationImpl> element(new ReclassifyObjectActionActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisReclassifyObjectActionActivationPtr(element);
	return element;
	
}
std::shared_ptr<RedefinitionBasedDispatchStrategy> FUMLFactoryImpl::createRedefinitionBasedDispatchStrategy(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<RedefinitionBasedDispatchStrategyImpl> element(new RedefinitionBasedDispatchStrategyImpl());
	element->setMetaElementID(metaElementID);
	element->setThisRedefinitionBasedDispatchStrategyPtr(element);
	return element;
}
std::shared_ptr<ReduceActionActivation> FUMLFactoryImpl::createReduceActionActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ReduceActionActivationImpl> element(new ReduceActionActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisReduceActionActivationPtr(element);
	return element;
}
std::shared_ptr<ReduceActionActivation> FUMLFactoryImpl::createReduceActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<ReduceActionActivationImpl> element(new ReduceActionActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisReduceActionActivationPtr(element);
	return element;
	
}
std::shared_ptr<Reference> FUMLFactoryImpl::createReference(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ReferenceImpl> element(new ReferenceImpl());
	element->setMetaElementID(metaElementID);
	element->setThisReferencePtr(element);
	return element;
}
std::shared_ptr<RemoveStructuralFeatureValueActivation> FUMLFactoryImpl::createRemoveStructuralFeatureValueActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<RemoveStructuralFeatureValueActivationImpl> element(new RemoveStructuralFeatureValueActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisRemoveStructuralFeatureValueActivationPtr(element);
	return element;
}
std::shared_ptr<RemoveStructuralFeatureValueActivation> FUMLFactoryImpl::createRemoveStructuralFeatureValueActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<RemoveStructuralFeatureValueActivationImpl> element(new RemoveStructuralFeatureValueActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisRemoveStructuralFeatureValueActivationPtr(element);
	return element;
	
}
std::shared_ptr<SendSignalActionActivation> FUMLFactoryImpl::createSendSignalActionActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<SendSignalActionActivationImpl> element(new SendSignalActionActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisSendSignalActionActivationPtr(element);
	return element;
}
std::shared_ptr<SendSignalActionActivation> FUMLFactoryImpl::createSendSignalActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<SendSignalActionActivationImpl> element(new SendSignalActionActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisSendSignalActionActivationPtr(element);
	return element;
	
}
std::shared_ptr<SignalInstance> FUMLFactoryImpl::createSignalInstance(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<SignalInstanceImpl> element(new SignalInstanceImpl());
	element->setMetaElementID(metaElementID);
	element->setThisSignalInstancePtr(element);
	return element;
}
std::shared_ptr<StartClassifierBehaviorActionActivation> FUMLFactoryImpl::createStartClassifierBehaviorActionActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<StartClassifierBehaviorActionActivationImpl> element(new StartClassifierBehaviorActionActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisStartClassifierBehaviorActionActivationPtr(element);
	return element;
}
std::shared_ptr<StartClassifierBehaviorActionActivation> FUMLFactoryImpl::createStartClassifierBehaviorActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<StartClassifierBehaviorActionActivationImpl> element(new StartClassifierBehaviorActionActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisStartClassifierBehaviorActionActivationPtr(element);
	return element;
	
}
std::shared_ptr<StartObjectBehaviorActionActivation> FUMLFactoryImpl::createStartObjectBehaviorActionActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<StartObjectBehaviorActionActivationImpl> element(new StartObjectBehaviorActionActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisStartObjectBehaviorActionActivationPtr(element);
	return element;
}
std::shared_ptr<StartObjectBehaviorActionActivation> FUMLFactoryImpl::createStartObjectBehaviorActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<StartObjectBehaviorActionActivationImpl> element(new StartObjectBehaviorActionActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisStartObjectBehaviorActionActivationPtr(element);
	return element;
	
}
std::shared_ptr<StringValue> FUMLFactoryImpl::createStringValue(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<StringValueImpl> element(new StringValueImpl());
	element->setMetaElementID(metaElementID);
	element->setThisStringValuePtr(element);
	return element;
}
std::shared_ptr<StructuredActivityNodeActivation> FUMLFactoryImpl::createStructuredActivityNodeActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<StructuredActivityNodeActivationImpl> element(new StructuredActivityNodeActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisStructuredActivityNodeActivationPtr(element);
	return element;
}
std::shared_ptr<StructuredActivityNodeActivation> FUMLFactoryImpl::createStructuredActivityNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<StructuredActivityNodeActivationImpl> element(new StructuredActivityNodeActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisStructuredActivityNodeActivationPtr(element);
	return element;
	
}
std::shared_ptr<TestIdentityActionActivation> FUMLFactoryImpl::createTestIdentityActionActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<TestIdentityActionActivationImpl> element(new TestIdentityActionActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisTestIdentityActionActivationPtr(element);
	return element;
}
std::shared_ptr<TestIdentityActionActivation> FUMLFactoryImpl::createTestIdentityActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<TestIdentityActionActivationImpl> element(new TestIdentityActionActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisTestIdentityActionActivationPtr(element);
	return element;
	
}
std::shared_ptr<TokenSet> FUMLFactoryImpl::createTokenSet(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<TokenSetImpl> element(new TokenSetImpl());
	element->setMetaElementID(metaElementID);
	element->setThisTokenSetPtr(element);
	return element;
}
std::shared_ptr<UnlimitedNaturalValue> FUMLFactoryImpl::createUnlimitedNaturalValue(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<UnlimitedNaturalValueImpl> element(new UnlimitedNaturalValueImpl());
	element->setMetaElementID(metaElementID);
	element->setThisUnlimitedNaturalValuePtr(element);
	return element;
}
std::shared_ptr<ValueSpecificActionActivation> FUMLFactoryImpl::createValueSpecificActionActivation(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ValueSpecificActionActivationImpl> element(new ValueSpecificActionActivationImpl());
	element->setMetaElementID(metaElementID);
	element->setThisValueSpecificActionActivationPtr(element);
	return element;
}
std::shared_ptr<ValueSpecificActionActivation> FUMLFactoryImpl::createValueSpecificActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group, const int metaElementID) const
{
	std::shared_ptr<ValueSpecificActionActivationImpl> element(new ValueSpecificActionActivationImpl(par_group));
	element->setMetaElementID(metaElementID);
	if(auto wp = par_group.lock())
	{
			wp->getNodeActivations()->push_back(element);
	}
	element->setThisValueSpecificActionActivationPtr(element);
	return element;
	
}
std::shared_ptr<Values> FUMLFactoryImpl::createValues(const int metaElementID/*=-1*/) const
{
	std::shared_ptr<ValuesImpl> element(new ValuesImpl());
	element->setMetaElementID(metaElementID);
	element->setThisValuesPtr(element);
	return element;
}

std::shared_ptr<FUMLPackage> FUMLFactoryImpl::getFUMLPackage() const
{
	return FUMLPackage::eInstance();
}
