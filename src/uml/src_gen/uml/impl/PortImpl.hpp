//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_PORTPORTIMPL_HPP
#define UML_PORTPORTIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Port.hpp"

#include "uml/impl/PropertyImpl.hpp"

//*********************************
namespace uml 
{
	class PortImpl : virtual public PropertyImpl, virtual public Port 
	{
		public: 
			PortImpl(const PortImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:
			PortImpl& operator=(PortImpl const&) = delete;

		protected:
			friend class umlFactoryImpl;
			PortImpl();
			virtual std::shared_ptr<Port> getThisPortPtr() const;
			virtual void setThisPortPtr(std::weak_ptr<Port> thisPortPtr);

			//Additional constructors for the containments back reference
			PortImpl(std::weak_ptr<uml::Property> par_associationEnd);
			//Additional constructors for the containments back reference
			PortImpl(std::weak_ptr<uml::Class> par_class);
			//Additional constructors for the containments back reference
			PortImpl(std::weak_ptr<uml::DataType> par_datatype);
			//Additional constructors for the containments back reference
			PortImpl(std::weak_ptr<uml::Interface> par_interface);
			//Additional constructors for the containments back reference
			PortImpl(std::weak_ptr<uml::Namespace> par_namespace);
			//Additional constructors for the containments back reference
			PortImpl(std::weak_ptr<uml::Element> par_owner);
			//Additional constructors for the containments back reference
			PortImpl(std::weak_ptr<uml::Association> par_owningAssociation);
			//Additional constructors for the containments back reference
			PortImpl(std::weak_ptr<uml::TemplateParameter> par_owningTemplateParameter);

		public:
			//destructor
			virtual ~PortImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			The union of the sets of Interfaces realized by the type of the Port and its supertypes, or directly the type of the Port if the Port is typed by an Interface.
			result = (if type.oclIsKindOf(Interface) 
			then type.oclAsType(Interface)->asSet() 
			else type.oclAsType(Classifier).allRealizedInterfaces() 
			endif)
			<p>From package UML::StructuredClassifiers.</p>
			*/
			 
			virtual std::shared_ptr<Bag<uml::Interface> > basicProvided() ;/*!
			The union of the sets of Interfaces used by the type of the Port and its supertypes.
			result = ( type.oclAsType(Classifier).allUsedInterfaces() )
			<p>From package UML::StructuredClassifiers.</p>
			*/
			 
			virtual std::shared_ptr<Bag<uml::Interface> > basicRequired() ;/*!
			A defaultValue for port cannot be specified when the type of the Port is an Interface.
			type.oclIsKindOf(Interface) implies defaultValue->isEmpty()
			*/
			 
			virtual bool default_value(Any diagnostics,std::shared_ptr<std::map < Any, Any>> context) ;/*!
			All Ports are owned by an EncapsulatedClassifier.
			owner = encapsulatedClassifier
			*/
			 
			virtual bool encapsulated_owner(Any diagnostics,std::shared_ptr<std::map < Any, Any>> context) ;/*!
			Derivation for Port::/provided
			result = (if isConjugated then basicRequired() else basicProvided() endif)
			<p>From package UML::StructuredClassifiers.</p>
			*/
			 
			virtual std::shared_ptr<Bag<uml::Interface> > getProvideds() ;/*!
			Derivation for Port::/required
			result = (if isConjugated then basicProvided() else basicRequired() endif)
			<p>From package UML::StructuredClassifiers.</p>
			*/
			 
			virtual std::shared_ptr<Bag<uml::Interface> > getRequireds() ;/*!
			Port.aggregation must be composite.
			aggregation = AggregationKind::composite
			*/
			 
			virtual bool port_aggregation(Any diagnostics,std::shared_ptr<std::map < Any, Any>> context) ;
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			Specifies whether requests arriving at this Port are sent to the classifier behavior of this EncapsulatedClassifier. Such a Port is referred to as a behavior Port. Any invocation of a BehavioralFeature targeted at a behavior Port will be handled by the instance of the owning EncapsulatedClassifier itself, rather than by any instances that it may contain.
			<p>From package UML::StructuredClassifiers.</p>
			*/
			 
			virtual bool getIsBehavior() const ;
			/*!
			Specifies whether requests arriving at this Port are sent to the classifier behavior of this EncapsulatedClassifier. Such a Port is referred to as a behavior Port. Any invocation of a BehavioralFeature targeted at a behavior Port will be handled by the instance of the owning EncapsulatedClassifier itself, rather than by any instances that it may contain.
			<p>From package UML::StructuredClassifiers.</p>
			*/
			 
			virtual void setIsBehavior (bool _isBehavior);
			/*!
			Specifies the way that the provided and required Interfaces are derived from the Port’s Type.
			<p>From package UML::StructuredClassifiers.</p>
			*/
			 
			virtual bool getIsConjugated() const ;
			/*!
			Specifies the way that the provided and required Interfaces are derived from the Port’s Type.
			<p>From package UML::StructuredClassifiers.</p>
			*/
			 
			virtual void setIsConjugated (bool _isConjugated);
			/*!
			If true, indicates that this Port is used to provide the published functionality of an EncapsulatedClassifier.  If false, this Port is used to implement the EncapsulatedClassifier but is not part of the essential externally-visible functionality of the EncapsulatedClassifier and can, therefore, be altered or deleted along with the internal implementation of the EncapsulatedClassifier and other properties that are considered part of its implementation.
			<p>From package UML::StructuredClassifiers.</p>
			*/
			 
			virtual bool getIsService() const ;
			/*!
			If true, indicates that this Port is used to provide the published functionality of an EncapsulatedClassifier.  If false, this Port is used to implement the EncapsulatedClassifier but is not part of the essential externally-visible functionality of the EncapsulatedClassifier and can, therefore, be altered or deleted along with the internal implementation of the EncapsulatedClassifier and other properties that are considered part of its implementation.
			<p>From package UML::StructuredClassifiers.</p>
			*/
			 
			virtual void setIsService (bool _isService);
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			An optional ProtocolStateMachine which describes valid interactions at this interaction point.
			<p>From package UML::StructuredClassifiers.</p>
			*/
			
			virtual std::shared_ptr<uml::ProtocolStateMachine> getProtocol() const ;
			/*!
			An optional ProtocolStateMachine which describes valid interactions at this interaction point.
			<p>From package UML::StructuredClassifiers.</p>
			*/
			
			virtual void setProtocol(std::shared_ptr<uml::ProtocolStateMachine>) ;
			/*!
			The Interfaces specifying the set of Operations and Receptions that the EncapsulatedCclassifier offers to its environment via this Port, and which it will handle either directly or by forwarding it to a part of its internal structure. This association is derived according to the value of isConjugated. If isConjugated is false, provided is derived as the union of the sets of Interfaces realized by the type of the port and its supertypes, or directly from the type of the Port if the Port is typed by an Interface. If isConjugated is true, it is derived as the union of the sets of Interfaces used by the type of the Port and its supertypes.
			<p>From package UML::StructuredClassifiers.</p>
			*/
			
			virtual std::shared_ptr<Bag<uml::Interface>> getProvided() const ;
			
			/*!
			A Port may be redefined when its containing EncapsulatedClassifier is specialized. The redefining Port may have additional Interfaces to those that are associated with the redefined Port or it may replace an Interface by one of its subtypes.
			<p>From package UML::StructuredClassifiers.</p>
			*/
			
			virtual std::shared_ptr<Subset<uml::Port, uml::Property /*Subset does not reference a union*/>> getRedefinedPort() const ;
			
			/*!
			The Interfaces specifying the set of Operations and Receptions that the EncapsulatedCassifier expects its environment to handle via this port. This association is derived according to the value of isConjugated. If isConjugated is false, required is derived as the union of the sets of Interfaces used by the type of the Port and its supertypes. If isConjugated is true, it is derived as the union of the sets of Interfaces realized by the type of the Port and its supertypes, or directly from the type of the Port if the Port is typed by an Interface.
			<p>From package UML::StructuredClassifiers.</p>
			*/
			
			virtual std::shared_ptr<Bag<uml::Interface>> getRequired() const ;
			
			
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			The Classifiers that have this Feature as a feature.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Classifier>> getFeaturingClassifier() const ;/*!
			Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Namespace> getNamespace() const ;/*!
			The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			The Element that owns this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Element> getOwner() const ;/*!
			The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const ;/*!
			The contexts that this element may be redefined from.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Classifier>> getRedefinitionContext() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler);
			
			virtual void resolveReferences(const int featureID, std::vector<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<Port> m_thisPortPtr;
	};
}
#endif /* end of include guard: UML_PORTPORTIMPL_HPP */
