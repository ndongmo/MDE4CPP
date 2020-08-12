//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_VALUEPIN_HPP
#define UML_VALUEPIN_HPP

#include <map>
#include <list>
#include <memory>
#include <string>


// forward declarations
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
	class Action;
}

namespace uml 
{
	class Activity;
}

namespace uml 
{
	class ActivityEdge;
}

namespace uml 
{
	class ActivityGroup;
}

namespace uml 
{
	class ActivityNode;
}

namespace uml 
{
	class ActivityPartition;
}

namespace uml 
{
	class AddStructuralFeatureValueAction;
}

namespace uml 
{
	class Behavior;
}

namespace uml 
{
	class CallOperationAction;
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
	class Dependency;
}

namespace uml 
{
	class DestroyObjectAction;
}

namespace uml 
{
	class Element;
}

namespace uml 
{
	class InputPin;
}

namespace uml 
{
	class InterruptibleActivityRegion;
}

namespace uml 
{
	class InvocationAction;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class RedefinableElement;
}

namespace uml 
{
	class RemoveStructuralFeatureValueAction;
}

namespace uml 
{
	class State;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class StructuralFeatureAction;
}

namespace uml 
{
	class StructuredActivityNode;
}

namespace uml 
{
	class Type;
}

namespace uml 
{
	class ValueSpecification;
}

namespace uml 
{
	class WriteStructuralFeatureAction;
}

// base class includes
#include "uml/InputPin.hpp"

// enum includes
#include "uml/ObjectNodeOrderingKind.hpp"

#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A ValuePin is an InputPin that provides a value by evaluating a ValueSpecification.
	<p>From package UML::Actions.</p> */
	class ValuePin:virtual public InputPin
	{
		public:
 			ValuePin(const ValuePin &) {}
			ValuePin& operator=(ValuePin const&) = delete;

		protected:
			ValuePin(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ValuePin() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The type of the value ValueSpecification must conform to the type of the ValuePin.
			value.type.conformsTo(type) */ 
			virtual bool compatible_type(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 A ValuePin may have no incoming ActivityEdges.
			incoming->isEmpty() */ 
			virtual bool no_incoming_edges(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The ValueSpecification that is evaluated to obtain the value that the ValuePin will provide.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::ValueSpecification > getValue() const = 0;
			
			/*!
			 The ValueSpecification that is evaluated to obtain the value that the ValuePin will provide.
			<p>From package UML::Actions.</p> */
			virtual void setValue(std::shared_ptr<uml::ValueSpecification> _value_value) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The ValueSpecification that is evaluated to obtain the value that the ValuePin will provide.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<uml::ValueSpecification > m_value;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup>> getInGroup() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
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
#endif /* end of include guard: UML_VALUEPIN_HPP */
