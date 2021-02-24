//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_TRANSITIONTRANSITIONIMPL_HPP
#define UML_TRANSITIONTRANSITIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Transition.hpp"

#include "uml/impl/NamespaceImpl.hpp"
#include "uml/impl/RedefinableElementImpl.hpp"

//*********************************
namespace uml 
{
	class TransitionImpl : virtual public NamespaceImpl, virtual public RedefinableElementImpl, virtual public Transition 
	{
		public: 
			TransitionImpl(const TransitionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			TransitionImpl& operator=(TransitionImpl const&);

		protected:
			friend class umlFactoryImpl;
			TransitionImpl();
			virtual std::shared_ptr<Transition> getThisTransitionPtr() const;
			virtual void setThisTransitionPtr(std::weak_ptr<Transition> thisTransitionPtr);

			//Additional constructors for the containments back reference
			TransitionImpl(std::weak_ptr<uml::Region > par_container);


			//Additional constructors for the containments back reference
			TransitionImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			TransitionImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~TransitionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			The query containingStateMachine() returns the StateMachine that contains the Transition either directly or transitively.
			result = (container.containingStateMachine())
			<p>From package UML::StateMachines.</p>
			*/
			 
			virtual std::shared_ptr<uml::StateMachine> containingStateMachine() ;
			
			/*!
			A fork segment must not have Guards or Triggers.
			(source.oclIsKindOf(Pseudostate) and source.oclAsType(Pseudostate).kind = PseudostateKind::fork) implies (guard = null and trigger->isEmpty())
			*/
			 
			virtual bool fork_segment_guards(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			A fork segment must always target a State.
			(source.oclIsKindOf(Pseudostate) and  source.oclAsType(Pseudostate).kind = PseudostateKind::fork) implies (target.oclIsKindOf(State))
			*/
			 
			virtual bool fork_segment_state(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			An initial Transition at the topmost level Region of a StateMachine that has no Trigger.
			(source.oclIsKindOf(Pseudostate) and container.stateMachine->notEmpty()) implies
				trigger->isEmpty()
			*/
			 
			virtual bool initial_transition(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			A join segment must not have Guards or Triggers.
			(target.oclIsKindOf(Pseudostate) and target.oclAsType(Pseudostate).kind = PseudostateKind::join) implies (guard = null and trigger->isEmpty())
			*/
			 
			virtual bool join_segment_guards(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			A join segment must always originate from a State.
			(target.oclIsKindOf(Pseudostate) and target.oclAsType(Pseudostate).kind = PseudostateKind::join) implies (source.oclIsKindOf(State))
			*/
			 
			virtual bool join_segment_state(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			Transitions outgoing Pseudostates may not have a Trigger.
			source.oclIsKindOf(Pseudostate) and (source.oclAsType(Pseudostate).kind <> PseudostateKind::initial) implies trigger->isEmpty()
			*/
			 
			virtual bool outgoing_pseudostates(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			The redefinition context of a Transition is the nearest containing StateMachine.
			result = (let sm : StateMachine = containingStateMachine() in
			if sm._'context' = null or sm.general->notEmpty() then
			  sm
			else
			  sm._'context'
			endif)
			<p>From package UML::StateMachines.</p>
			*/
			 
			virtual std::shared_ptr<uml::Classifier> redefinitionContext() ;
			
			/*!
			A Transition with kind external can source any Vertex except entry points.
			(kind = TransitionKind::external) implies
				not (source.oclIsKindOf(Pseudostate) and source.oclAsType(Pseudostate).kind = PseudostateKind::entryPoint)
			*/
			 
			virtual bool state_is_external(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			A Transition with kind internal must have a State as its source, and its source and target must be equal.
			(kind = TransitionKind::internal) implies
					(source.oclIsKindOf (State) and source = target)
			*/
			 
			virtual bool state_is_internal(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			A Transition with kind local must have a composite State or an entry point as its source.
			(kind = TransitionKind::local) implies
					((source.oclIsKindOf (State) and source.oclAsType(State).isComposite) or
					(source.oclIsKindOf (Pseudostate) and source.oclAsType(Pseudostate).kind = PseudostateKind::entryPoint))
			*/
			 
			virtual bool state_is_local(Any diagnostics,std::map <   Any, Any >  context) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			Indicates the precise type of the Transition.
			<p>From package UML::StateMachines.</p>
			*/
			 
			virtual uml::TransitionKind getKind() const ;
			
			/*!
			Indicates the precise type of the Transition.
			<p>From package UML::StateMachines.</p>
			*/
			 
			virtual void setKind (uml::TransitionKind _kind); 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			Designates the Region that owns this Transition.
			<p>From package UML::StateMachines.</p>
			*/
			
			virtual std::weak_ptr<uml::Region > getContainer() const ;
			
			/*!
			Designates the Region that owns this Transition.
			<p>From package UML::StateMachines.</p>
			*/
			
			virtual void setContainer(std::shared_ptr<uml::Region> _container) ;
			
			/*!
			Specifies an optional behavior to be performed when the Transition fires.
			<p>From package UML::StateMachines.</p>
			*/
			
			virtual std::shared_ptr<uml::Behavior > getEffect() const ;
			
			/*!
			Specifies an optional behavior to be performed when the Transition fires.
			<p>From package UML::StateMachines.</p>
			*/
			
			virtual void setEffect(std::shared_ptr<uml::Behavior> _effect) ;
			
			/*!
			A guard is a Constraint that provides a fine-grained control over the firing of the Transition. The guard is evaluated when an Event occurrence is dispatched by the StateMachine. If the guard is true at that time, the Transition may be enabled, otherwise, it is disabled. Guards should be pure expressions without side effects. Guard expressions with side effects are ill formed.
			<p>From package UML::StateMachines.</p>
			*/
			
			virtual std::shared_ptr<uml::Constraint > getGuard() const ;
			
			/*!
			A guard is a Constraint that provides a fine-grained control over the firing of the Transition. The guard is evaluated when an Event occurrence is dispatched by the StateMachine. If the guard is true at that time, the Transition may be enabled, otherwise, it is disabled. Guards should be pure expressions without side effects. Guard expressions with side effects are ill formed.
			<p>From package UML::StateMachines.</p>
			*/
			
			virtual void setGuard(std::shared_ptr<uml::Constraint> _guard) ;
			
			/*!
			The Transition that is redefined by this Transition.
			<p>From package UML::StateMachines.</p>
			*/
			
			virtual std::shared_ptr<uml::Transition > getRedefinedTransition() const ;
			
			/*!
			The Transition that is redefined by this Transition.
			<p>From package UML::StateMachines.</p>
			*/
			
			virtual void setRedefinedTransition(std::shared_ptr<uml::Transition> _redefinedTransition) ;
			
			/*!
			Designates the originating Vertex (State or Pseudostate) of the Transition.
			<p>From package UML::StateMachines.</p>
			*/
			
			virtual std::shared_ptr<uml::Vertex > getSource() const ;
			
			/*!
			Designates the originating Vertex (State or Pseudostate) of the Transition.
			<p>From package UML::StateMachines.</p>
			*/
			
			virtual void setSource(std::shared_ptr<uml::Vertex> _source) ;
			
			/*!
			Designates the target Vertex that is reached when the Transition is taken.
			<p>From package UML::StateMachines.</p>
			*/
			
			virtual std::shared_ptr<uml::Vertex > getTarget() const ;
			
			/*!
			Designates the target Vertex that is reached when the Transition is taken.
			<p>From package UML::StateMachines.</p>
			*/
			
			virtual void setTarget(std::shared_ptr<uml::Vertex> _target) ;
			
			/*!
			Specifies the Triggers that may fire the transition.
			<p>From package UML::StateMachines.</p>
			*/
			
			virtual std::shared_ptr<Subset<uml::Trigger, uml::Element>> getTrigger() const ;
			
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
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
			std::weak_ptr<Transition> m_thisTransitionPtr;
	};
}
#endif /* end of include guard: UML_TRANSITIONTRANSITIONIMPL_HPP */
