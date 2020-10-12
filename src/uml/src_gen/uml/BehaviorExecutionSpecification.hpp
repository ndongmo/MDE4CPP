//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_BEHAVIOREXECUTIONSPECIFICATION_HPP
#define UML_BEHAVIOREXECUTIONSPECIFICATION_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations



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
	A BehaviorExecutionSpecification is a kind of ExecutionSpecification representing the execution of a Behavior.
	<p>From package UML::Interactions.</p>
	*/
	
	class BehaviorExecutionSpecification:virtual public ExecutionSpecification
	{
		public:
 			BehaviorExecutionSpecification(const BehaviorExecutionSpecification &) {}
			BehaviorExecutionSpecification& operator=(BehaviorExecutionSpecification const&) = delete;

		protected:
			BehaviorExecutionSpecification(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~BehaviorExecutionSpecification() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			Behavior whose execution is occurring.
			<p>From package UML::Interactions.</p>
			*/
			
			virtual std::shared_ptr<uml::Behavior > getBehavior() const = 0;
			
			/*!
			Behavior whose execution is occurring.
			<p>From package UML::Interactions.</p>
			*/
			
			virtual void setBehavior(std::shared_ptr<uml::Behavior> _behavior) = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			Behavior whose execution is occurring.
			<p>From package UML::Interactions.</p>
			*/
			
			std::shared_ptr<uml::Behavior > m_behavior;

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
#endif /* end of include guard: UML_BEHAVIOREXECUTIONSPECIFICATION_HPP */
