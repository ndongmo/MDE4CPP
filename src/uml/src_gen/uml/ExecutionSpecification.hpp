//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_EXECUTIONSPECIFICATION_HPP
#define UML_EXECUTIONSPECIFICATION_HPP

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
	class GeneralOrdering;
}

namespace uml 
{
	class Interaction;
}

namespace uml 
{
	class InteractionFragment;
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
#include "uml/InteractionFragment.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	An ExecutionSpecification is a specification of the execution of a unit of Behavior or Action within the Lifeline. The duration of an ExecutionSpecification is represented by two OccurrenceSpecifications, the start OccurrenceSpecification and the finish OccurrenceSpecification.
	<p>From package UML::Interactions.</p>
	*/
	
	class ExecutionSpecification:virtual public InteractionFragment
	{
		public:
 			ExecutionSpecification(const ExecutionSpecification &) {}
			ExecutionSpecification& operator=(ExecutionSpecification const&) = delete;

		protected:
			ExecutionSpecification(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ExecutionSpecification() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			The startEvent and the finishEvent must be on the same Lifeline.
			start.covered = finish.covered
			*/
			 
			virtual bool same_lifeline(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			References the OccurrenceSpecification that designates the finish of the Action or Behavior.
			<p>From package UML::Interactions.</p>
			*/
			
			virtual std::shared_ptr<uml::OccurrenceSpecification > getFinish() const = 0;
			
			/*!
			References the OccurrenceSpecification that designates the finish of the Action or Behavior.
			<p>From package UML::Interactions.</p>
			*/
			
			virtual void setFinish(std::shared_ptr<uml::OccurrenceSpecification> _finish) = 0;
			
			/*!
			References the OccurrenceSpecification that designates the start of the Action or Behavior.
			<p>From package UML::Interactions.</p>
			*/
			
			virtual std::shared_ptr<uml::OccurrenceSpecification > getStart() const = 0;
			
			/*!
			References the OccurrenceSpecification that designates the start of the Action or Behavior.
			<p>From package UML::Interactions.</p>
			*/
			
			virtual void setStart(std::shared_ptr<uml::OccurrenceSpecification> _start) = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			References the OccurrenceSpecification that designates the finish of the Action or Behavior.
			<p>From package UML::Interactions.</p>
			*/
			
			std::shared_ptr<uml::OccurrenceSpecification > m_finish;/*!
			References the OccurrenceSpecification that designates the start of the Action or Behavior.
			<p>From package UML::Interactions.</p>
			*/
			
			std::shared_ptr<uml::OccurrenceSpecification > m_start;

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
#endif /* end of include guard: UML_EXECUTIONSPECIFICATION_HPP */
