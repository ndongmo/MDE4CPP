//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_PROTOCOLSTATEMACHINEPROTOCOLSTATEMACHINEIMPL_HPP
#define UML_PROTOCOLSTATEMACHINEPROTOCOLSTATEMACHINEIMPL_HPP

//*********************************
// generated Includes
//Model includes
#include "../ProtocolStateMachine.hpp"

#include "uml/impl/StateMachineImpl.hpp"

//*********************************
namespace uml 
{
	class ProtocolStateMachineImpl : virtual public StateMachineImpl, virtual public ProtocolStateMachine 
	{
		public: 
			ProtocolStateMachineImpl(const ProtocolStateMachineImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ProtocolStateMachineImpl& operator=(ProtocolStateMachineImpl const&) = delete;

		protected:
			friend class umlFactoryImpl;
			ProtocolStateMachineImpl();
			virtual std::shared_ptr<ProtocolStateMachine> getThisProtocolStateMachinePtr() const;
			virtual void setThisProtocolStateMachinePtr(std::weak_ptr<ProtocolStateMachine> thisProtocolStateMachinePtr);

			//Additional constructors for the containments back reference
			ProtocolStateMachineImpl(std::weak_ptr<uml::BehavioredClassifier > par_behavioredClassifier);


			//Additional constructors for the containments back reference
			ProtocolStateMachineImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ProtocolStateMachineImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			ProtocolStateMachineImpl(std::weak_ptr<uml::Package > par_Package, const int reference_id);


			//Additional constructors for the containments back reference
			ProtocolStateMachineImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);


			//Additional constructors for the containments back reference




		public:
			//destructor
			virtual ~ProtocolStateMachineImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			ProtocolStateMachines cannot have deep or shallow history Pseudostates.
			region->forAll (r | r.subvertex->forAll (v | v.oclIsKindOf(Pseudostate) implies
			((v.oclAsType(Pseudostate).kind <>  PseudostateKind::deepHistory) and (v.oclAsType(Pseudostate).kind <> PseudostateKind::shallowHistory))))
			*/
			 
			virtual bool deep_or_shallow_history(Any diagnostics,std::map <  Any ,  Any > context) ;
			
			/*!
			The states of a ProtocolStateMachine cannot have entry, exit, or do activity Behaviors.
			region->forAll(r | r.subvertex->forAll(v | v.oclIsKindOf(State) implies
			(v.oclAsType(State).entry->isEmpty() and v.oclAsType(State).exit->isEmpty() and v.oclAsType(State).doActivity->isEmpty())))
			*/
			 
			virtual bool entry_exit_do(Any diagnostics,std::map <  Any ,  Any > context) ;
			
			/*!
			All Transitions of a ProtocolStateMachine must be ProtocolTransitions.
			region->forAll(r | r.transition->forAll(t | t.oclIsTypeOf(ProtocolTransition)))
			*/
			 
			virtual bool protocol_transitions(Any diagnostics,std::map <  Any ,  Any > context) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			Conformance between ProtocolStateMachine
			<p>From package UML::StateMachines.</p>
			*/
			
			virtual std::shared_ptr<Subset<uml::ProtocolConformance, uml::Element>> getConformance() const ;
			
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			All of the Properties that are direct (i.e., not inherited or imported) attributes of the Classifier.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<SubsetUnion<uml::Property, uml::Feature>> getAttribute() const ;/*!
			Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<SubsetUnion<uml::Feature, uml::NamedElement>> getFeature() const ;/*!
			A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::NamedElement>> getMember() const ;/*!
			Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement>> getOwnedMember() const ;/*!
			The Element that owns this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const ;/*!
			The contexts that this element may be redefined from.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Classifier>> getRedefinitionContext() const ;/*!
			The roles that instances may play in this StructuredClassifier.
			<p>From package UML::StructuredClassifiers.</p>
			*/
			
			virtual std::shared_ptr<SubsetUnion<uml::ConnectableElement, uml::NamedElement>> getRole() const ; 
			 
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
			
			virtual void resolveReferences(const int featureID, std::vector<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<ProtocolStateMachine> m_thisProtocolStateMachinePtr;
	};
}
#endif /* end of include guard: UML_PROTOCOLSTATEMACHINEPROTOCOLSTATEMACHINEIMPL_HPP */
