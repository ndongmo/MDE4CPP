//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ACTIONEXECUTIONSPECIFICATION_HPP
#define UML_ACTIONEXECUTIONSPECIFICATION_HPP

#include <map>
#include <list>
#include <memory>
#include <string>


// forward declarations


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
	class umlFactory;
}

//Forward Declaration for used types
namespace uml 
{
	class Action;
}

namespace uml 
{
	class Comment;
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
	class ExecutionSpecification;
}

namespace uml 
{
	class GeneralOrdering;
}

namespace uml 
{
	class Interaction;
}

namespace uml 
{
	class InteractionOperand;
}

namespace uml 
{
	class Lifeline;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class OccurrenceSpecification;
}

namespace uml 
{
	class StringExpression;
}

// base class includes
#include "uml/ExecutionSpecification.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	An ActionExecutionSpecification is a kind of ExecutionSpecification representing the execution of an Action.
	<p>From package UML::Interactions.</p>
	*/
	
	class ActionExecutionSpecification:virtual public ExecutionSpecification
	{
		public:
 			ActionExecutionSpecification(const ActionExecutionSpecification &) {}

		protected:
			ActionExecutionSpecification(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ActionExecutionSpecification() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			The Action referenced by the ActionExecutionSpecification must be owned by the Interaction owning that ActionExecutionSpecification.
			(enclosingInteraction->notEmpty() or enclosingOperand.combinedFragment->notEmpty()) and
			let parentInteraction : Set(Interaction) = enclosingInteraction.oclAsType(Interaction)->asSet()->union(
			enclosingOperand.combinedFragment->closure(enclosingOperand.combinedFragment)->
			collect(enclosingInteraction).oclAsType(Interaction)->asSet()) in
			(parentInteraction->size() = 1) and self.action.interaction->asSet() = parentInteraction
			*/
			 
			virtual bool action_referenced(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			Action whose execution is occurring.
			<p>From package UML::Interactions.</p>
			*/
			
			virtual std::shared_ptr<uml::Action > getAction() const = 0;
			
			/*!
			Action whose execution is occurring.
			<p>From package UML::Interactions.</p>
			*/
			
			virtual void setAction(std::shared_ptr<uml::Action> _action) = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			Action whose execution is occurring.
			<p>From package UML::Interactions.</p>
			*/
			
			std::shared_ptr<uml::Action > m_action;

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Namespace > getNamespace() const = 0;/*!
			The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			The Element that owns this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_ACTIONEXECUTIONSPECIFICATION_HPP */
