//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_DEPLOYMENTTARGET_HPP
#define UML_DEPLOYMENTTARGET_HPP


#include <memory>
#include <string>
// forward declarations
template<class T> class Bag; 
template<class T, class ... U> class Subset;


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
	class Deployment;
	class Namespace;
	class PackageableElement;
	class StringExpression;
}

// base class includes
#include "uml/NamedElement.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"



//*********************************
namespace uml 
{
	/*!
	A deployment target is the location for a deployed artifact.
	<p>From package UML::Deployments.</p>
	*/
	
	class DeploymentTarget: virtual public NamedElement
	{
		public:
 			DeploymentTarget(const DeploymentTarget &) {}
			DeploymentTarget& operator=(DeploymentTarget const&) = delete;

		protected:
			DeploymentTarget(){}

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~DeploymentTarget() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			Derivation for DeploymentTarget::/deployedElement
			result = (deployment.deployedArtifact->select(oclIsKindOf(Artifact))->collect(oclAsType(Artifact).manifestation)->collect(utilizedElement)->asSet())
			<p>From package UML::Deployments.</p>
			*/
			 
			virtual std::shared_ptr<Bag<uml::PackageableElement> > getDeployedElements() = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			The set of elements that are manifested in an Artifact that is involved in Deployment to a DeploymentTarget.
			<p>From package UML::Deployments.</p>
			*/
			
			virtual std::shared_ptr<Bag<uml::PackageableElement>> getDeployedElement() const = 0;
			
			
			/*!
			The set of Deployments for a DeploymentTarget.
			<p>From package UML::Deployments.</p>
			*/
			
			virtual std::shared_ptr<Subset<uml::Deployment, uml::Element>> getDeployment() const = 0;
			
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			The set of elements that are manifested in an Artifact that is involved in Deployment to a DeploymentTarget.
			<p>From package UML::Deployments.</p>
			*/
			
			mutable std::shared_ptr<Bag<uml::PackageableElement>> m_deployedElement;/*!
			The set of Deployments for a DeploymentTarget.
			<p>From package UML::Deployments.</p>
			*/
			
			mutable std::shared_ptr<Subset<uml::Deployment, uml::Element>> m_deployment;

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
			
			virtual void resolveReferences(const int featureID, std::vector<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_DEPLOYMENTTARGET_HPP */
