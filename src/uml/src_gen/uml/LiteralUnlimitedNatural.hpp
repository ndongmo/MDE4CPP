//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_LITERALUNLIMITEDNATURAL_HPP
#define UML_LITERALUNLIMITEDNATURAL_HPP


#include <memory>
#include <string>
// forward declarations


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
	class Slot;
	class StringExpression;
	class TemplateParameter;
	class Type;
	class ValueSpecificationAction;
}

// base class includes
#include "uml/LiteralSpecification.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"



//*********************************
namespace uml 
{
	/*!
	A LiteralUnlimitedNatural is a specification of an UnlimitedNatural number.
	<p>From package UML::Values.</p>
	*/
	
	class LiteralUnlimitedNatural: virtual public LiteralSpecification
	{
		public:
 			LiteralUnlimitedNatural(const LiteralUnlimitedNatural &) {}
			LiteralUnlimitedNatural& operator=(LiteralUnlimitedNatural const&) = delete;

		protected:
			LiteralUnlimitedNatural(){}

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~LiteralUnlimitedNatural() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			The query isComputable() is redefined to be true.
			result = (true)
			<p>From package UML::Values.</p>
			*/
			 
			virtual bool isComputable() = 0;
			
			/*!
			The query unlimitedValue() gives the value.
			result = (value)
			<p>From package UML::Values.</p>
			*/
			 
			virtual int unlimitedValue() = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			The specified UnlimitedNatural value.
			<p>From package UML::Values.</p>
			*/
			 
			virtual int getValue() const = 0;
			
			/*!
			The specified UnlimitedNatural value.
			<p>From package UML::Values.</p>
			*/
			 
			virtual void setValue (int _value)= 0;
			//*********************************
			// Reference
			//*********************************
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			The specified UnlimitedNatural value.
			<p>From package UML::Values.</p>
			*/
			 
			int m_value = 0;
			
			
			//*********************************
			// Reference Members
			//*********************************
			

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
#endif /* end of include guard: UML_LITERALUNLIMITEDNATURAL_HPP */
