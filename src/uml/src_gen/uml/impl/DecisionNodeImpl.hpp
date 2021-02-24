//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_DECISIONNODEDECISIONNODEIMPL_HPP
#define UML_DECISIONNODEDECISIONNODEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../DecisionNode.hpp"

#include "uml/impl/ControlNodeImpl.hpp"

//*********************************
namespace uml 
{
	class DecisionNodeImpl : virtual public ControlNodeImpl, virtual public DecisionNode 
	{
		public: 
			DecisionNodeImpl(const DecisionNodeImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			DecisionNodeImpl& operator=(DecisionNodeImpl const&);

		protected:
			friend class umlFactoryImpl;
			DecisionNodeImpl();
			virtual std::shared_ptr<DecisionNode> getThisDecisionNodePtr() const;
			virtual void setThisDecisionNodePtr(std::weak_ptr<DecisionNode> thisDecisionNodePtr);

			//Additional constructors for the containments back reference
			DecisionNodeImpl(std::weak_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			DecisionNodeImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			DecisionNodeImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			DecisionNodeImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~DecisionNodeImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			The decisionInputFlow of a DecisionNode must be an incoming ActivityEdge of the DecisionNode.
			incoming->includes(decisionInputFlow)
			*/
			 
			virtual bool decision_input_flow_incoming(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			The ActivityEdges incoming to and outgoing from a DecisionNode, other than the decisionInputFlow (if any), must be either all ObjectFlows or all ControlFlows.
			let allEdges: Set(ActivityEdge) = incoming->union(outgoing) in
			let allRelevantEdges: Set(ActivityEdge) = if decisionInputFlow->notEmpty() then allEdges->excluding(decisionInputFlow) else allEdges endif in
			allRelevantEdges->forAll(oclIsKindOf(ControlFlow)) or allRelevantEdges->forAll(oclIsKindOf(ObjectFlow))
			
			*/
			 
			virtual bool edges(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			If the DecisionNode has a decisionInputFlow and an incoming ControlFlow, then any decisionInput Behavior has one in Parameter whose type is the same as or a supertype of the type of object tokens offered on the decisionInputFlow.
			(decisionInput<>null and decisionInputFlow<>null and incoming->exists(oclIsKindOf(ControlFlow))) implies
				decisionInput.inputParameters()->size()=1
			*/
			 
			virtual bool incoming_control_one_input_parameter(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			If the DecisionNode has no decisionInputFlow and an incoming ObjectFlow, then any decisionInput Behavior has one in Parameter whose type is the same as or a supertype of the type of object tokens offered on the incoming ObjectFlow.
			(decisionInput<>null and decisionInputFlow=null and incoming->forAll(oclIsKindOf(ObjectFlow))) implies
				decisionInput.inputParameters()->size()=1
			*/
			 
			virtual bool incoming_object_one_input_parameter(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			A DecisionNode has one or two incoming ActivityEdges and at least one outgoing ActivityEdge.
			(incoming->size() = 1 or incoming->size() = 2) and outgoing->size() > 0
			*/
			 
			virtual bool incoming_outgoing_edges(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			A decisionInput Behavior has no out parameters, no inout parameters, and one return parameter.
			decisionInput<>null implies 
			  (decisionInput.ownedParameter->forAll(par | 
			     par.direction <> ParameterDirectionKind::out and 
			     par.direction <> ParameterDirectionKind::inout ) and
			   decisionInput.ownedParameter->one(par | 
			     par.direction <> ParameterDirectionKind::return))
			*/
			 
			virtual bool parameters(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			If the DecisionNode has a decisionInputFlow and an second incoming ObjectFlow, then any decisionInput has two in Parameters, the first of which has a type that is the same as or a supertype of the type of object tokens offered on the non-decisionInputFlow and the second of which has a type that is the same as or a supertype of the type of object tokens offered on the decisionInputFlow.
			(decisionInput<>null and decisionInputFlow<>null and incoming->forAll(oclIsKindOf(ObjectFlow))) implies
				decisionInput.inputParameters()->size()=2
			*/
			 
			virtual bool two_input_parameters(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			If the DecisionNode has no decisionInputFlow and an incoming ControlFlow, then any decisionInput Behavior has no in parameters.
			(decisionInput<>null and decisionInputFlow=null and incoming->exists(oclIsKindOf(ControlFlow))) implies
			   decisionInput.inputParameters()->isEmpty()
			*/
			 
			virtual bool zero_input_parameters(Any diagnostics,std::map <   Any, Any >  context) ;
			
			
			
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
			
			virtual std::shared_ptr<uml::Behavior > getDecisionInput() const ;
			
			/*!
			A Behavior that is executed to provide an input to guard ValueSpecifications on ActivityEdges outgoing from the DecisionNode.
			<p>From package UML::Activities.</p>
			*/
			
			virtual void setDecisionInput(std::shared_ptr<uml::Behavior> _decisionInput) ;
			
			/*!
			An additional ActivityEdge incoming to the DecisionNode that provides a decision input value for the guards ValueSpecifications on ActivityEdges outgoing from the DecisionNode.
			<p>From package UML::Activities.</p>
			*/
			
			virtual std::shared_ptr<uml::ObjectFlow > getDecisionInputFlow() const ;
			
			/*!
			An additional ActivityEdge incoming to the DecisionNode that provides a decision input value for the guards ValueSpecifications on ActivityEdges outgoing from the DecisionNode.
			<p>From package UML::Activities.</p>
			*/
			
			virtual void setDecisionInputFlow(std::shared_ptr<uml::ObjectFlow> _decisionInputFlow) ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::ActivityGroup>> getInGroup() const ;/*!
			The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			The Element that owns this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<DecisionNode> m_thisDecisionNodePtr;
	};
}
#endif /* end of include guard: UML_DECISIONNODEDECISIONNODEIMPL_HPP */
