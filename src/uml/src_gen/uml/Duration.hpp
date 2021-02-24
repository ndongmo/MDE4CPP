//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_DURATION_HPP
#define UML_DURATION_HPP

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
	class Slot;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class TemplateParameter;
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
	class ValueSpecificationAction;
}

// base class includes
#include "uml/ValueSpecification.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	A Duration is a ValueSpecification that specifies the temporal distance between two time instants.
	<p>From package UML::Values.</p>
	*/
	
	class Duration:virtual public ValueSpecification
	{
		public:
 			Duration(const Duration &) {}

		protected:
			Duration(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Duration() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			If a Duration has no expr, then it must have a single observation that is a DurationObservation.
			expr = null implies (observation->size() = 1 and observation->forAll(oclIsKindOf(DurationObservation)))
			*/
			 
			virtual bool no_expr_requires_observation(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			A ValueSpecification that evaluates to the value of the Duration.
			<p>From package UML::Values.</p>
			*/
			
			virtual std::shared_ptr<uml::ValueSpecification > getExpr() const = 0;
			
			/*!
			A ValueSpecification that evaluates to the value of the Duration.
			<p>From package UML::Values.</p>
			*/
			
			virtual void setExpr(std::shared_ptr<uml::ValueSpecification> _expr) = 0;
			
			/*!
			Refers to the Observations that are involved in the computation of the Duration value
			<p>From package UML::Values.</p>
			*/
			
			virtual std::shared_ptr<Bag<uml::Observation>> getObservation() const = 0;
			
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			A ValueSpecification that evaluates to the value of the Duration.
			<p>From package UML::Values.</p>
			*/
			
			std::shared_ptr<uml::ValueSpecification > m_expr;/*!
			Refers to the Observations that are involved in the computation of the Duration value
			<p>From package UML::Values.</p>
			*/
			
			mutable std::shared_ptr<Bag<uml::Observation>> m_observation;

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
#endif /* end of include guard: UML_DURATION_HPP */
