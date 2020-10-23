//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_TIMEOBSERVATION_HPP
#define UML_TIMEOBSERVATION_HPP

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
	class NamedElement;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class Observation;
}

namespace uml 
{
	class Package;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class TemplateParameter;
}

// base class includes
#include "uml/Observation.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	A TimeObservation is a reference to a time instant during an execution. It points out the NamedElement in the model to observe and whether the observation is when this NamedElement is entered or when it is exited.
	<p>From package UML::Values.</p>
	*/
	
	class TimeObservation:virtual public Observation
	{
		public:
 			TimeObservation(const TimeObservation &) {}
			TimeObservation& operator=(TimeObservation const&) = delete;

		protected:
			TimeObservation(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~TimeObservation() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			The value of firstEvent is related to the event. If firstEvent is true, then the corresponding observation event is the first time instant the execution enters the event Element. If firstEvent is false, then the corresponding observation event is the time instant the execution exits the event Element.
			<p>From package UML::Values.</p>
			*/
			 
			virtual bool getFirstEvent() const = 0;
			
			/*!
			The value of firstEvent is related to the event. If firstEvent is true, then the corresponding observation event is the first time instant the execution enters the event Element. If firstEvent is false, then the corresponding observation event is the time instant the execution exits the event Element.
			<p>From package UML::Values.</p>
			*/
			 
			virtual void setFirstEvent (bool _firstEvent)= 0; 
			
			//*********************************
			// Reference
			//*********************************
			/*!
			The TimeObservation is determined by the entering or exiting of the event Element during execution.
			<p>From package UML::Values.</p>
			*/
			
			virtual std::shared_ptr<uml::NamedElement > getEvent() const = 0;
			
			/*!
			The TimeObservation is determined by the entering or exiting of the event Element during execution.
			<p>From package UML::Values.</p>
			*/
			
			virtual void setEvent(std::shared_ptr<uml::NamedElement> _event) = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			The value of firstEvent is related to the event. If firstEvent is true, then the corresponding observation event is the first time instant the execution enters the event Element. If firstEvent is false, then the corresponding observation event is the time instant the execution exits the event Element.
			<p>From package UML::Values.</p>
			*/
			 
			bool m_firstEvent = true;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			The TimeObservation is determined by the entering or exiting of the event Element during execution.
			<p>From package UML::Values.</p>
			*/
			
			std::shared_ptr<uml::NamedElement > m_event;

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
#endif /* end of include guard: UML_TIMEOBSERVATION_HPP */
