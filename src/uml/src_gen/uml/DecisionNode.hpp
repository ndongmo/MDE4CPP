//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_DECISIONNODE_HPP
#define UML_DECISIONNODE_HPP

#include <map>

#include <memory>
#include <string>
// forward declarations

class AnyObject;
typedef std::shared_ptr<AnyObject> Any;

//*********************************
// generated Includes
#include <map> // used for Persistence
#include <vector> // used for Persistence
namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace uml
{
	class umlFactory;
}

//Forward Declaration for used types 
namespace uml 
{
	class Activity;
	class ActivityEdge;
	class ActivityGroup;
	class ActivityPartition;
	class Behavior;
	class Classifier;
	class Comment;
	class Dependency;
	class InterruptibleActivityRegion;
	class Namespace;
	class ObjectFlow;
	class StringExpression;
	class StructuredActivityNode;
}

// base class includes
#include "uml/ControlNode.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"



//*********************************
namespace uml 
{
	/*!
	A DecisionNode is a ControlNode that chooses between outgoing ActivityEdges for the routing of tokens.
	<p>From package UML::Activities.</p>
	*/
	
	class DecisionNode: virtual public ControlNode
	{
		public:
 			DecisionNode(const DecisionNode &) {}
			DecisionNode& operator=(DecisionNode const&) = delete;

		protected:
			DecisionNode(){}

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~DecisionNode() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			The decisionInputFlow of a DecisionNode must be an incoming ActivityEdge of the DecisionNode.
			incoming->includes(decisionInputFlow)
			*/
			 
			virtual bool decision_input_flow_incoming(Any diagnostics,std::shared_ptr<std::map < Any, Any>> context) = 0;/*!
			The ActivityEdges incoming to and outgoing from a DecisionNode, other than the decisionInputFlow (if any), must be either all ObjectFlows or all ControlFlows.
			let allEdges: Set(ActivityEdge) = incoming->union(outgoing) in
			let allRelevantEdges: Set(ActivityEdge) = if decisionInputFlow->notEmpty() then allEdges->excluding(decisionInputFlow) else allEdges endif in
			allRelevantEdges->forAll(oclIsKindOf(ControlFlow)) or allRelevantEdges->forAll(oclIsKindOf(ObjectFlow))
			
			*/
			 
			virtual bool edges(Any diagnostics,std::shared_ptr<std::map < Any, Any>> context) = 0;/*!
			If the DecisionNode has a decisionInputFlow and an incoming ControlFlow, then any decisionInput Behavior has one in Parameter whose type is the same as or a supertype of the type of object tokens offered on the decisionInputFlow.
			(decisionInput<>null and decisionInputFlow<>null and incoming->exists(oclIsKindOf(ControlFlow))) implies
				decisionInput.inputParameters()->size()=1
			*/
			 
			virtual bool incoming_control_one_input_parameter(Any diagnostics,std::shared_ptr<std::map < Any, Any>> context) = 0;/*!
			If the DecisionNode has no decisionInputFlow and an incoming ObjectFlow, then any decisionInput Behavior has one in Parameter whose type is the same as or a supertype of the type of object tokens offered on the incoming ObjectFlow.
			(decisionInput<>null and decisionInputFlow=null and incoming->forAll(oclIsKindOf(ObjectFlow))) implies
				decisionInput.inputParameters()->size()=1
			*/
			 
			virtual bool incoming_object_one_input_parameter(Any diagnostics,std::shared_ptr<std::map < Any, Any>> context) = 0;/*!
			A DecisionNode has one or two incoming ActivityEdges and at least one outgoing ActivityEdge.
			(incoming->size() = 1 or incoming->size() = 2) and outgoing->size() > 0
			*/
			 
			virtual bool incoming_outgoing_edges(Any diagnostics,std::shared_ptr<std::map < Any, Any>> context) = 0;/*!
			A decisionInput Behavior has no out parameters, no inout parameters, and one return parameter.
			decisionInput<>null implies 
			  (decisionInput.ownedParameter->forAll(par | 
			     par.direction <> ParameterDirectionKind::out and 
			     par.direction <> ParameterDirectionKind::inout ) and
			   decisionInput.ownedParameter->one(par | 
			     par.direction <> ParameterDirectionKind::return))
			*/
			 
			virtual bool parameters(Any diagnostics,std::shared_ptr<std::map < Any, Any>> context) = 0;/*!
			If the DecisionNode has a decisionInputFlow and an second incoming ObjectFlow, then any decisionInput has two in Parameters, the first of which has a type that is the same as or a supertype of the type of object tokens offered on the non-decisionInputFlow and the second of which has a type that is the same as or a supertype of the type of object tokens offered on the decisionInputFlow.
			(decisionInput<>null and decisionInputFlow<>null and incoming->forAll(oclIsKindOf(ObjectFlow))) implies
				decisionInput.inputParameters()->size()=2
			*/
			 
			virtual bool two_input_parameters(Any diagnostics,std::shared_ptr<std::map < Any, Any>> context) = 0;/*!
			If the DecisionNode has no decisionInputFlow and an incoming ControlFlow, then any decisionInput Behavior has no in parameters.
			(decisionInput<>null and decisionInputFlow=null and incoming->exists(oclIsKindOf(ControlFlow))) implies
			   decisionInput.inputParameters()->isEmpty()
			*/
			 
			virtual bool zero_input_parameters(Any diagnostics,std::shared_ptr<std::map < Any, Any>> context) = 0;
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			A Behavior that is executed to provide an input to guard ValueSpecifications on ActivityEdges outgoing from the DecisionNode.
			<p>From package UML::Activities.</p>
			*/
			
			virtual std::shared_ptr<uml::Behavior> getDecisionInput() const = 0;
			/*!
			A Behavior that is executed to provide an input to guard ValueSpecifications on ActivityEdges outgoing from the DecisionNode.
			<p>From package UML::Activities.</p>
			*/
			
			virtual void setDecisionInput(std::shared_ptr<uml::Behavior>) = 0;
			/*!
			An additional ActivityEdge incoming to the DecisionNode that provides a decision input value for the guards ValueSpecifications on ActivityEdges outgoing from the DecisionNode.
			<p>From package UML::Activities.</p>
			*/
			
			virtual std::shared_ptr<uml::ObjectFlow> getDecisionInputFlow() const = 0;
			/*!
			An additional ActivityEdge incoming to the DecisionNode that provides a decision input value for the guards ValueSpecifications on ActivityEdges outgoing from the DecisionNode.
			<p>From package UML::Activities.</p>
			*/
			
			virtual void setDecisionInputFlow(std::shared_ptr<uml::ObjectFlow>) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			A Behavior that is executed to provide an input to guard ValueSpecifications on ActivityEdges outgoing from the DecisionNode.
			<p>From package UML::Activities.</p>
			*/
			
			std::shared_ptr<uml::Behavior> m_decisionInput;/*!
			An additional ActivityEdge incoming to the DecisionNode that provides a decision input value for the guards ValueSpecifications on ActivityEdges outgoing from the DecisionNode.
			<p>From package UML::Activities.</p>
			*/
			
			std::shared_ptr<uml::ObjectFlow> m_decisionInputFlow;

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::ActivityGroup>> getInGroup() const = 0;/*!
			The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			The Element that owns this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Element> getOwner() const = 0;/*!
			The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::vector<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_DECISIONNODE_HPP */
