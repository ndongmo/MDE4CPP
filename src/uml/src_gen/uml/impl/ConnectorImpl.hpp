//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CONNECTORCONNECTORIMPL_HPP
#define UML_CONNECTORCONNECTORIMPL_HPP

//*********************************
// generated Includes
//Model includes
#include "../Connector.hpp"

#include "uml/impl/FeatureImpl.hpp"

//*********************************
namespace uml 
{
	class ConnectorImpl : virtual public FeatureImpl, virtual public Connector 
	{
		public: 
			ConnectorImpl(const ConnectorImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ConnectorImpl& operator=(ConnectorImpl const&) = delete;

		protected:
			friend class umlFactoryImpl;
			ConnectorImpl();
			virtual std::shared_ptr<Connector> getThisConnectorPtr() const;
			virtual void setThisConnectorPtr(std::weak_ptr<Connector> thisConnectorPtr);

			//Additional constructors for the containments back reference
			ConnectorImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ConnectorImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			ConnectorImpl(std::weak_ptr<uml::StructuredClassifier > par_structuredClassifier);




		public:
			//destructor
			virtual ~ConnectorImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			Derivation for Connector::/kind : ConnectorKind
			result = (if end->exists(
					role.oclIsKindOf(Port) 
					and partWithPort->isEmpty()
					and not role.oclAsType(Port).isBehavior)
			then ConnectorKind::delegation 
			else ConnectorKind::assembly 
			endif)
			<p>From package UML::StructuredClassifiers.</p>
			*/
			 
			virtual uml::ConnectorKind getKind() ;
			
			/*!
			The ConnectableElements attached as roles to each ConnectorEnd owned by a Connector must be owned or inherited roles of the Classifier that owned the Connector, or they must be Ports of such roles.
			structuredClassifier <> null
			and
			  end->forAll( e | structuredClassifier.allRoles()->includes(e.role)
			or
			  e.role.oclIsKindOf(Port) and structuredClassifier.allRoles()->includes(e.partWithPort))
			*/
			 
			virtual bool roles(Any diagnostics,std::map <  Any ,  Any > context) ;
			
			/*!
			The types of the ConnectableElements that the ends of a Connector are attached to must conform to the types of the ends of the Association that types the Connector, if any.
			type<>null implies 
			  let noOfEnds : Integer = end->size() in 
			  (type.memberEnd->size() = noOfEnds) and Sequence{1..noOfEnds}->forAll(i | end->at(i).role.type.conformsTo(type.memberEnd->at(i).type))
			*/
			 
			virtual bool types(Any diagnostics,std::map <  Any ,  Any > context) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			Indicates the kind of Connector. This is derived: a Connector with one or more ends connected to a Port which is not on a Part and which is not a behavior port is a delegation; otherwise it is an assembly.
			<p>From package UML::StructuredClassifiers.</p>
			*/
			 
			virtual uml::ConnectorKind getKind() const ;
			
			//*********************************
			// Reference
			//*********************************
			/*!
			The set of Behaviors that specify the valid interaction patterns across the Connector.
			<p>From package UML::StructuredClassifiers.</p>
			*/
			
			virtual std::shared_ptr<Bag<uml::Behavior>> getContract() const ;
			
			
			/*!
			A Connector has at least two ConnectorEnds, each representing the participation of instances of the Classifiers typing the ConnectableElements attached to the end. The set of ConnectorEnds is ordered.
			<p>From package UML::StructuredClassifiers.</p>
			*/
			
			virtual std::shared_ptr<Subset<uml::ConnectorEnd, uml::Element>> getEnd() const ;
			
			
			/*!
			A Connector may be redefined when its containing Classifier is specialized. The redefining Connector may have a type that specializes the type of the redefined Connector. The types of the ConnectorEnds of the redefining Connector may specialize the types of the ConnectorEnds of the redefined Connector. The properties of the ConnectorEnds of the redefining Connector may be replaced.
			<p>From package UML::StructuredClassifiers.</p>
			*/
			
			virtual std::shared_ptr<Subset<uml::Connector, uml::RedefinableElement>> getRedefinedConnector() const ;
			
			
			
			virtual std::weak_ptr<uml::StructuredClassifier > getStructuredClassifier() const ;
			
			
			virtual void setStructuredClassifier(std::shared_ptr<uml::StructuredClassifier> _structuredClassifier) ;
			
			/*!
			An optional Association that classifies links corresponding to this Connector.
			<p>From package UML::StructuredClassifiers.</p>
			*/
			
			virtual std::shared_ptr<uml::Association > getType() const ;
			
			/*!
			An optional Association that classifies links corresponding to this Connector.
			<p>From package UML::StructuredClassifiers.</p>
			*/
			
			virtual void setType(std::shared_ptr<uml::Association> _type) ;
			
							
			
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
			
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			The Element that owns this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
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
			std::weak_ptr<Connector> m_thisConnectorPtr;
	};
}
#endif /* end of include guard: UML_CONNECTORCONNECTORIMPL_HPP */
