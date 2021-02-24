//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ACTOR_HPP
#define UML_ACTOR_HPP

#include <map>

#include <memory>
#include <string>
// forward declarations

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
	class Behavior;
	class CollaborationUse;
	class Comment;
	class Constraint;
	class Dependency;
	class ElementImport;
	class Feature;
	class Generalization;
	class GeneralizationSet;
	class InterfaceRealization;
	class Package;
	class PackageImport;
	class Property;
	class StringExpression;
	class Substitution;
	class TemplateBinding;
	class TemplateParameter;
	class TemplateSignature;
	class UseCase;
}

// base class includes
#include "uml/BehavioredClassifier.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"



//*********************************
namespace uml 
{
	/*!
	An Actor specifies a role played by a user or any other system that interacts with the subject.
	<p>From package UML::UseCases.</p>
	*/
	
	class Actor: virtual public BehavioredClassifier
	{
		public:
 			Actor(const Actor &) {}
			Actor& operator=(Actor const&) = delete;

		protected:
			Actor(){}

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Actor() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			An Actor can only have Associations to UseCases, Components, and Classes. Furthermore these Associations must be binary.
			Association.allInstances()->forAll( a |
			  a.memberEnd->collect(type)->includes(self) implies
			  (
			    a.memberEnd->size() = 2 and
			    let actorEnd : Property = a.memberEnd->any(type = self) in
			      actorEnd.opposite.class.oclIsKindOf(UseCase) or
			      ( actorEnd.opposite.class.oclIsKindOf(Class) and not
			         actorEnd.opposite.class.oclIsKindOf(Behavior))
			      )
			  )
			*/
			 
			virtual bool associations(Any diagnostics,std::shared_ptr<std::map < Any, Any>> context) = 0;/*!
			An Actor must have a name.
			name->notEmpty()
			*/
			 
			virtual bool must_have_name(Any diagnostics,std::shared_ptr<std::map < Any, Any>> context) = 0;
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<SubsetUnion<uml::Feature, uml::NamedElement>> getFeature() const = 0;/*!
			A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::NamedElement>> getMember() const = 0;/*!
			Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Namespace> getNamespace() const = 0;/*!
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
			
			virtual std::weak_ptr<uml::Element> getOwner() const = 0;/*!
			The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::vector<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_ACTOR_HPP */
