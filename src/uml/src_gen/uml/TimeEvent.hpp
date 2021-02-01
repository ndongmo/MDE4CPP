//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_TIMEEVENT_HPP
#define UML_TIMEEVENT_HPP

#include <map>

#include <memory>
#include <string>
// forward declarations
template<class T, class ... U> class Subset;

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
	class Comment;
	class Dependency;
	class Namespace;
	class Package;
	class StringExpression;
	class TemplateParameter;
	class TimeExpression;
}

// base class includes
#include "uml/Event.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"



//*********************************
namespace uml 
{
	/*!
	A TimeEvent is an Event that occurs at a specific point in time.
	<p>From package UML::CommonBehavior.</p>
	*/
	
	class TimeEvent: virtual public Event
	{
		public:
 			TimeEvent(const TimeEvent &) {}
			TimeEvent& operator=(TimeEvent const&) = delete;

		protected:
			TimeEvent(){}

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~TimeEvent() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			The ValueSpecification when must return a non-negative Integer.
			when.integerValue() >= 0
			*/
			 
			virtual bool when_non_negative(Any diagnostics,std::map <  Any ,  Any > context) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			Specifies whether the TimeEvent is specified as an absolute or relative time.
			<p>From package UML::CommonBehavior.</p>
			*/
			 
			virtual bool getIsRelative() const = 0;
			
			/*!
			Specifies whether the TimeEvent is specified as an absolute or relative time.
			<p>From package UML::CommonBehavior.</p>
			*/
			 
			virtual void setIsRelative (bool _isRelative)= 0;
			//*********************************
			// Reference
			//*********************************
			/*!
			Specifies the time of the TimeEvent.
			<p>From package UML::CommonBehavior.</p>
			*/
			
			virtual std::shared_ptr<uml::TimeExpression > getWhen() const = 0;
			
			/*!
			Specifies the time of the TimeEvent.
			<p>From package UML::CommonBehavior.</p>
			*/
			
			virtual void setWhen(std::shared_ptr<uml::TimeExpression> _when) = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			Specifies whether the TimeEvent is specified as an absolute or relative time.
			<p>From package UML::CommonBehavior.</p>
			*/
			 
			bool m_isRelative = false;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			Specifies the time of the TimeEvent.
			<p>From package UML::CommonBehavior.</p>
			*/
			
			std::shared_ptr<uml::TimeExpression > m_when;

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
			
			virtual void resolveReferences(const int featureID, std::vector<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_TIMEEVENT_HPP */
