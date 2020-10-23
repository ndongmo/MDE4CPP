//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_PROTOCOLTRANSITION_HPP
#define UML_PROTOCOLTRANSITION_HPP

#include <map>
#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T> class Bag; 
template<class T, class ... U> class Subset;


class AnyObject;
typedef std::shared_ptr<AnyObject> Any;

//*********************************
// generated Includes

#include <map>

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
	class UmlFactory;
}

//Forward Declaration for used types
namespace uml 
{
	class Behavior;
}

namespace uml 
{
	class Classifier;
}

namespace uml 
{
	class Comment;
}

namespace uml 
{
	class Constraint;
}

namespace uml 
{
	class Dependency;
}

namespace uml 
{
	class Element;
}

namespace uml 
{
	class ElementImport;
}

namespace uml 
{
	class NamedElement;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class Operation;
}

namespace uml 
{
	class PackageImport;
}

namespace uml 
{
	class PackageableElement;
}

namespace uml 
{
	class RedefinableElement;
}

namespace uml 
{
	class Region;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class Transition;
}

namespace uml 
{
	class Trigger;
}

namespace uml 
{
	class Vertex;
}

// base class includes
#include "uml/Transition.hpp"

// enum includes
#include "uml/TransitionKind.hpp"

#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	A ProtocolTransition specifies a legal Transition for an Operation. Transitions of ProtocolStateMachines have the following information: a pre-condition (guard), a Trigger, and a post-condition. Every ProtocolTransition is associated with at most one BehavioralFeature belonging to the context Classifier of the ProtocolStateMachine.
	<p>From package UML::StateMachines.</p>
	*/
	
	class ProtocolTransition:virtual public Transition
	{
		public:
 			ProtocolTransition(const ProtocolTransition &) {}
			ProtocolTransition& operator=(ProtocolTransition const&) = delete;

		protected:
			ProtocolTransition(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ProtocolTransition() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			A ProtocolTransition never has associated Behaviors.
			effect = null
			*/
			 
			virtual bool associated_actions(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			A ProtocolTransition always belongs to a ProtocolStateMachine.
			container.belongsToPSM()
			*/
			 
			virtual bool belongs_to_psm(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			Derivation for ProtocolTransition::/referred
			result = (trigger->collect(event)->select(oclIsKindOf(CallEvent))->collect(oclAsType(CallEvent).operation)->asSet())
			<p>From package UML::StateMachines.</p>
			*/
			 
			virtual std::shared_ptr<Bag<uml::Operation> > getReferreds() = 0;
			
			/*!
			If a ProtocolTransition refers to an Operation (i.e., has a CallEvent trigger corresponding to an Operation), then that Operation should apply to the context Classifier of the StateMachine of the ProtocolTransition.
			if (referred()->notEmpty() and containingStateMachine()._'context'->notEmpty()) then 
			    containingStateMachine()._'context'.oclAsType(BehavioredClassifier).allFeatures()->includesAll(referred())
			else true endif
			*/
			 
			virtual bool refers_to_operation(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			Specifies the post condition of the Transition which is the Condition that should be obtained once the Transition is triggered. This post condition is part of the post condition of the Operation connected to the Transition.
			<p>From package UML::StateMachines.</p>
			*/
			
			virtual std::shared_ptr<uml::Constraint > getPostCondition() const = 0;
			
			/*!
			Specifies the post condition of the Transition which is the Condition that should be obtained once the Transition is triggered. This post condition is part of the post condition of the Operation connected to the Transition.
			<p>From package UML::StateMachines.</p>
			*/
			
			virtual void setPostCondition(std::shared_ptr<uml::Constraint> _postCondition) = 0;
			
			/*!
			Specifies the precondition of the Transition. It specifies the Condition that should be verified before triggering the Transition. This guard condition added to the source State will be evaluated as part of the precondition of the Operation referred by the Transition if any.
			<p>From package UML::StateMachines.</p>
			*/
			
			virtual std::shared_ptr<uml::Constraint > getPreCondition() const = 0;
			
			/*!
			Specifies the precondition of the Transition. It specifies the Condition that should be verified before triggering the Transition. This guard condition added to the source State will be evaluated as part of the precondition of the Operation referred by the Transition if any.
			<p>From package UML::StateMachines.</p>
			*/
			
			virtual void setPreCondition(std::shared_ptr<uml::Constraint> _preCondition) = 0;
			
			/*!
			This association refers to the associated Operation. It is derived from the Operation of the CallEvent Trigger when applicable.
			<p>From package UML::StateMachines.</p>
			*/
			
			virtual std::shared_ptr<Bag<uml::Operation>> getReferred() const = 0;
			
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			Specifies the post condition of the Transition which is the Condition that should be obtained once the Transition is triggered. This post condition is part of the post condition of the Operation connected to the Transition.
			<p>From package UML::StateMachines.</p>
			*/
			
			std::shared_ptr<uml::Constraint > m_postCondition;/*!
			Specifies the precondition of the Transition. It specifies the Condition that should be verified before triggering the Transition. This guard condition added to the source State will be evaluated as part of the precondition of the Operation referred by the Transition if any.
			<p>From package UML::StateMachines.</p>
			*/
			
			std::shared_ptr<uml::Constraint > m_preCondition;/*!
			This association refers to the associated Operation. It is derived from the Operation of the CallEvent Trigger when applicable.
			<p>From package UML::StateMachines.</p>
			*/
			
			mutable std::shared_ptr<Bag<uml::Operation>> m_referred;

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::NamedElement>> getMember() const = 0;/*!
			Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Namespace > getNamespace() const = 0;/*!
			The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement>> getOwnedMember() const = 0;/*!
			The Element that owns this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;/*!
			The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_PROTOCOLTRANSITION_HPP */
