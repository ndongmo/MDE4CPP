//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_EXTENSIONPOINT_HPP
#define UML_EXTENSIONPOINT_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//#include "util/ProfileCallCount.hpp"

#include <map>
#include <string>
#include <vector>
#include <memory>
#include <cassert>

#include "abstractDataTypes/SubsetUnion.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
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

namespace ecore 
{
	class EAnnotation;
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
	class RedefinableElement;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class UseCase;
}

// base class includes
#include "uml/RedefinableElement.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 An ExtensionPoint identifies a point in the behavior of a UseCase where that behavior can be extended by the behavior of some other (extending) UseCase, as specified by an Extend relationship.
	<p>From package UML::UseCases.</p> */
	class ExtensionPoint:virtual public RedefinableElement
	{
		public:
 			ExtensionPoint(const ExtensionPoint &) {}
			ExtensionPoint& operator=(ExtensionPoint const&) = delete;

		protected:
			ExtensionPoint(){}


			//Additional constructors for the containments back reference

			ExtensionPoint(std::weak_ptr<uml::Namespace > par_namespace);

			//Additional constructors for the containments back reference

			ExtensionPoint(std::weak_ptr<uml::Element > par_owner);

			//Additional constructors for the containments back reference

			ExtensionPoint(std::weak_ptr<uml::UseCase > par_useCase);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ExtensionPoint() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 An ExtensionPoint must have a name.
			name->notEmpty () */ 
			virtual bool must_have_name(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The UseCase that owns this ExtensionPoint.
			<p>From package UML::UseCases.</p> */
			virtual std::weak_ptr<uml::UseCase > getUseCase() const = 0;
			
			/*!
			 The UseCase that owns this ExtensionPoint.
			<p>From package UML::UseCases.</p> */
			virtual void setUseCase(std::shared_ptr<uml::UseCase> _useCase_useCase) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The UseCase that owns this ExtensionPoint.
			<p>From package UML::UseCases.</p> */
			std::weak_ptr<uml::UseCase > m_useCase;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
	};

}
#endif /* end of include guard: UML_EXTENSIONPOINT_HPP */

