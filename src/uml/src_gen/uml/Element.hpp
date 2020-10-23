//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ELEMENT_HPP
#define UML_ELEMENT_HPP

#include <map>
#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T, class ... U> class Subset;
template<class T> class Union;

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
	class Class;
}

namespace uml 
{
	class Comment;
}

namespace uml 
{
	class DirectedRelationship;
}

namespace ecore 
{
	class EAnnotation;
}

namespace ecore 
{
	class EClass;
}

namespace ecore 
{
	class EObject;
}

namespace uml 
{
	class Element;
}

namespace uml 
{
	class Model;
}

namespace uml 
{
	class Object;
}

namespace uml 
{
	class Package;
}

namespace uml 
{
	class Relationship;
}

namespace uml 
{
	class Stereotype;
}

// base class includes
#include "uml/Object.hpp"

// enum includes


//*********************************
namespace uml 
{
	/*!
	An Element is a constituent of a model. As such, it has the capability of owning other Elements.
	<p>From package UML::CommonStructure.</p>
	*/
	
	class Element:virtual public Object
	{
		public:
 			Element(const Element &) {}
			Element& operator=(Element const&) = delete;

		protected:
			Element(){}


			//Additional constructors for the containments back reference

			Element(std::weak_ptr<uml::Element > par_owner);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Element() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			Adds the specified keyword to this element.
			*/
			 
			virtual bool addKeyword(std::string keyword) = 0;
			
			/*!
			The query allOwnedElements() gives all of the direct and indirect ownedElements of an Element.
			result = (ownedElement->union(ownedElement->collect(e | e.allOwnedElements()))->asSet())
			<p>From package UML::CommonStructure.</p>
			*/
			 
			virtual std::shared_ptr<Bag<uml::Element> > allOwnedElements() = 0;
			
			/*!
			Applies the specified stereotype to this element.
			*/
			 
			virtual std::shared_ptr<ecore::EObject> applyStereotype(std::shared_ptr<uml::Stereotype>  stereotype) = 0;
			
			/*!
			Returns the parent container of this element if any. Return Null if there is no containing element.
			
			<span style="background-color:#FF8000">This Element was merged from mof::Reflection package.</span>
			*/
			 
			virtual std::shared_ptr<uml::Element> container() = 0;
			
			/*!
			Creates an annotation with the specified source and this element as its model element.
			*/
			 
			virtual std::shared_ptr<ecore::EAnnotation> createEAnnotation(std::string source) = 0;
			
			/*!
			Destroys this element by removing all cross references to/from it and removing it from its containing resource or object.
			*/
			 
			virtual void destroy() = 0;
			
			/*!
			Retrieves the stereotype with the specified qualified name that is applicable to this element, or null if no such stereotype is applicable.
			*/
			 
			virtual std::shared_ptr<uml::Stereotype> getApplicableStereotype(std::string qualifiedName) = 0;
			
			/*!
			Retrieves the stereotypes that are applicable to this element, including those that are required and/or may already be applied.
			*/
			 
			virtual std::shared_ptr<Bag<uml::Stereotype> > getApplicableStereotypes() = 0;
			
			/*!
			Retrieves the stereotype with the specified qualified name that is applied to this element, or null if no such stereotype is  applied.
			*/
			 
			virtual std::shared_ptr<uml::Stereotype> getAppliedStereotype(std::string qualifiedName) const = 0;
			
			/*!
			Retrieves the stereotypes that are applied to this element.
			*/
			 
			virtual std::shared_ptr<Bag<uml::Stereotype> > getAppliedStereotypes() const = 0;
			
			/*!
			Retrieves the substereotype of the specified stereotype with the specified qualified name that is applied to this element, or null if no such stereotype is applied.
			*/
			 
			virtual std::shared_ptr<uml::Stereotype> getAppliedSubstereotype(std::shared_ptr<uml::Stereotype>  stereotype,std::string qualifiedName) = 0;
			
			/*!
			Retrieves the substereotypes of the specified stereotype that are applied to this element.
			*/
			 
			virtual std::shared_ptr<Bag<uml::Stereotype> > getAppliedSubstereotypes(std::shared_ptr<uml::Stereotype>  stereotype) = 0;
			
			/*!
			Retrieves the keywords for this element.
			*/
			 
			virtual std::shared_ptr<Bag<std::string> > getKeywords() = 0;
			
			/*!
			Returns the Class that describes this element.
			
			<span style="background-color:#FF8000">This Element was merged from mof::Reflection package.</span>
			*/
			 
			virtual std::shared_ptr<uml::Class> getMetaClass() = 0;
			
			/*!
			Retrieves the model that owns (either directly or indirectly) this element.
			*/
			 
			virtual std::shared_ptr<uml::Model> getModel() = 0;
			
			/*!
			Retrieves the nearest package that owns (either directly or indirectly) this element, or the element itself (if it is a package).
			*/
			 
			virtual std::shared_ptr<uml::Package> getNearestPackage() = 0;
			
			/*!
			Retrieves the relationships in which this element is involved.
			*/
			 
			virtual std::shared_ptr<Bag<uml::Relationship> > getRelationships() = 0;
			
			/*!
			Retrieves the relationships of the specified type in which this element is involved.
			*/
			 
			virtual std::shared_ptr<Bag<uml::Relationship> > getRelationships(std::shared_ptr<ecore::EClass>  eClass) = 0;
			
			/*!
			Retrieves the stereotype with the specified qualified name that is required for this element, or null if no such stereotype is required.
			*/
			 
			virtual std::shared_ptr<uml::Stereotype> getRequiredStereotype(std::string qualifiedName) = 0;
			
			/*!
			Retrieves the stereotypes that are required for this element.
			*/
			 
			virtual std::shared_ptr<Bag<uml::Stereotype> > getRequiredStereotypes() = 0;
			
			/*!
			Retrieves the directed relationships for which this element is a source.
			*/
			 
			virtual std::shared_ptr<Bag<uml::DirectedRelationship> > getSourceDirectedRelationships() = 0;
			
			/*!
			Retrieves the directed relationships of the specified type for which this element is a source.
			*/
			 
			virtual std::shared_ptr<Bag<uml::DirectedRelationship> > getSourceDirectedRelationships(std::shared_ptr<ecore::EClass>  eClass) = 0;
			
			/*!
			Retrieves the application of the specified stereotype for this element, or null if no such stereotype application exists.
			*/
			 
			virtual std::shared_ptr<ecore::EObject> getStereotypeApplication(std::shared_ptr<uml::Stereotype>  stereotype) = 0;
			
			/*!
			Retrieves the stereotype applications for this element.
			*/
			 
			virtual std::shared_ptr<Bag<ecore::EObject> > getStereotypeApplications() = 0;
			
			/*!
			Retrieves the directed relationships for which this element is a target.
			*/
			 
			virtual std::shared_ptr<Bag<uml::DirectedRelationship> > getTargetDirectedRelationships() = 0;
			
			/*!
			Retrieves the directed relationships of the specified type for which this element is a target.
			*/
			 
			virtual std::shared_ptr<Bag<uml::DirectedRelationship> > getTargetDirectedRelationships(std::shared_ptr<ecore::EClass>  eClass) = 0;
			
			/*!
			Retrieves the value of the property with the specified name in the specified stereotype for this element.
			*/
			 
			virtual Any getValue(std::shared_ptr<uml::Stereotype>  stereotype,std::string propertyName) = 0;
			
			/*!
			Determines whether this element has the specified keyword.
			*/
			 
			virtual bool hasKeyword(std::string keyword) = 0;
			
			/*!
			Determines whether this element has a (non-default) value for the property with the specified name in the specified stereotype.
			*/
			 
			virtual bool hasValue(std::shared_ptr<uml::Stereotype>  stereotype,std::string propertyName) = 0;
			
			/*!
			Elements that must be owned must have an owner.
			mustBeOwned() implies owner->notEmpty()
			*/
			 
			virtual bool has_owner(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			Determines whether the specified stereotype is applicable to this element.
			*/
			 
			virtual bool isStereotypeApplicable(std::shared_ptr<uml::Stereotype>  stereotype) = 0;
			
			/*!
			Determines whether the specified stereotype is applied to this element.
			*/
			 
			virtual bool isStereotypeApplied(std::shared_ptr<uml::Stereotype>  stereotype) = 0;
			
			/*!
			Determines whether the specified stereotype is required for this element.
			*/
			 
			virtual bool isStereotypeRequired(std::shared_ptr<uml::Stereotype>  stereotype) = 0;
			
			/*!
			The query mustBeOwned() indicates whether Elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
			result = (true)
			<p>From package UML::CommonStructure.</p>
			*/
			 
			virtual bool mustBeOwned() = 0;
			
			/*!
			An element may not directly or indirectly own itself.
			not allOwnedElements()->includes(self)
			*/
			 
			virtual bool not_own_self(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			Removes the specified keyword from this element.
			*/
			 
			virtual bool removeKeyword(std::string keyword) = 0;
			
			/*!
			Sets the value of the property with the specified name in the specified stereotype for this element.
			*/
			 
			virtual void setValue(std::shared_ptr<uml::Stereotype>  stereotype,std::string propertyName,Any newValue) = 0;
			
			/*!
			Unapplies the specified stereotype from this element.
			*/
			 
			virtual std::shared_ptr<ecore::EObject> unapplyStereotype(std::shared_ptr<uml::Stereotype>  stereotype) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			The Comments owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Subset<uml::Comment, uml::Element>> getOwnedComment() const = 0;
			
			
			
			
			
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			The Comments owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			mutable std::shared_ptr<Subset<uml::Comment, uml::Element>> m_ownedComment;/*!
			The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			mutable std::shared_ptr<Union<uml::Element>> m_ownedElement;/*!
			The Element that owns this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			std::weak_ptr<uml::Element > m_owner;

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
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
#endif /* end of include guard: UML_ELEMENT_HPP */
