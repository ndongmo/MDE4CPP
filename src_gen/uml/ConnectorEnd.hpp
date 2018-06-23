//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CONNECTOREND_HPP
#define UML_CONNECTOREND_HPP

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
	class UmlFactory;
}

//Forward Declaration for used types
namespace uml 
{
	class Comment;
}

namespace uml 
{
	class ConnectableElement;
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
	class MultiplicityElement;
}

namespace uml 
{
	class Property;
}

namespace uml 
{
	class ValueSpecification;
}

// base class includes
#include "uml/MultiplicityElement.hpp"

// enum includes


//*********************************
namespace uml 
{
	/*!
	 A ConnectorEnd is an endpoint of a Connector, which attaches the Connector to a ConnectableElement.
	<p>From package UML::StructuredClassifiers.</p> */
	class ConnectorEnd:virtual public MultiplicityElement
	{
		public:
 			ConnectorEnd(const ConnectorEnd &) {}
			ConnectorEnd& operator=(ConnectorEnd const&) = delete;

		protected:
			ConnectorEnd(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ConnectorEnd() {}

			//*********************************
			// Operations
			//*********************************
			
			
			/*!
			 The multiplicity of the ConnectorEnd may not be more general than the multiplicity of the corresponding end of the Association typing the owning Connector, if any.
			self.compatibleWith(definingEnd) */ 
			virtual bool multiplicity(Any diagnostics,std::map <   Any, Any >  context)  = 0;
			
			/*!
			 If a ConnectorEnd is attached to a Port of the containing Classifier, partWithPort will be empty.
			(role.oclIsKindOf(Port) and role.owner = connector.owner) implies partWithPort->isEmpty() */ 
			virtual bool part_with_port_empty(Any diagnostics,std::map <   Any, Any >  context)  = 0;
			
			/*!
			 If a ConnectorEnd references a partWithPort, then the role must be a Port that is defined or inherited by the type of the partWithPort.
			partWithPort->notEmpty() implies 
			  (role.oclIsKindOf(Port) and partWithPort.type.oclAsType(Namespace).member->includes(role)) */ 
			virtual bool role_and_part_with_port(Any diagnostics,std::map <   Any, Any >  context)  = 0;
			
			/*!
			 The Property held in self.partWithPort must not be a Port.
			partWithPort->notEmpty() implies not partWithPort.oclIsKindOf(Port) */ 
			virtual bool self_part_with_port(Any diagnostics,std::map <   Any, Any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 A derived property referencing the corresponding end on the Association which types the Connector owing this ConnectorEnd, if any. It is derived by selecting the end at the same place in the ordering of Association ends as this ConnectorEnd.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<uml::Property > getDefiningEnd() const = 0;
			
			/*!
			 Indicates the role of the internal structure of a Classifier with the Port to which the ConnectorEnd is attached.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<uml::Property > getPartWithPort() const = 0;
			
			/*!
			 Indicates the role of the internal structure of a Classifier with the Port to which the ConnectorEnd is attached.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual void setPartWithPort(std::shared_ptr<uml::Property> _partWithPort_partWithPort) = 0;
			/*!
			 The ConnectableElement attached at this ConnectorEnd. When an instance of the containing Classifier is created, a link may (depending on the multiplicities) be created to an instance of the Classifier that types this ConnectableElement.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<uml::ConnectableElement > getRole() const = 0;
			
			/*!
			 The ConnectableElement attached at this ConnectorEnd. When an instance of the containing Classifier is created, a link may (depending on the multiplicities) be created to an instance of the Classifier that types this ConnectableElement.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual void setRole(std::shared_ptr<uml::ConnectableElement> _role_role) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 A derived property referencing the corresponding end on the Association which types the Connector owing this ConnectorEnd, if any. It is derived by selecting the end at the same place in the ordering of Association ends as this ConnectorEnd.
			<p>From package UML::StructuredClassifiers.</p> */
			std::shared_ptr<uml::Property > m_definingEnd;
			/*!
			 Indicates the role of the internal structure of a Classifier with the Port to which the ConnectorEnd is attached.
			<p>From package UML::StructuredClassifiers.</p> */
			std::shared_ptr<uml::Property > m_partWithPort;
			/*!
			 The ConnectableElement attached at this ConnectorEnd. When an instance of the containing Classifier is created, a link may (depending on the multiplicities) be created to an instance of the Classifier that types this ConnectableElement.
			<p>From package UML::StructuredClassifiers.</p> */
			std::shared_ptr<uml::ConnectableElement > m_role;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_CONNECTOREND_HPP */
