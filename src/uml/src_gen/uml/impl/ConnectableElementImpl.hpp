//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CONNECTABLEELEMENTCONNECTABLEELEMENTIMPL_HPP
#define UML_CONNECTABLEELEMENTCONNECTABLEELEMENTIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ConnectableElement.hpp"

#include "uml/impl/ParameterableElementImpl.hpp"
#include "uml/impl/TypedElementImpl.hpp"

//*********************************
namespace uml 
{
	class ConnectableElementImpl :virtual public ParameterableElementImpl, virtual public TypedElementImpl, virtual public ConnectableElement 
	{
		public: 
			ConnectableElementImpl(const ConnectableElementImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ConnectableElementImpl& operator=(ConnectableElementImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ConnectableElementImpl();
			virtual std::shared_ptr<ConnectableElement> getThisConnectableElementPtr() const;
			virtual void setThisConnectableElementPtr(std::weak_ptr<ConnectableElement> thisConnectableElementPtr);

			//Additional constructors for the containments back reference
			ConnectableElementImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ConnectableElementImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			ConnectableElementImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);




		public:
			//destructor
			virtual ~ConnectableElementImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			Derivation for ConnectableElement::/end : ConnectorEnd
			result = (ConnectorEnd.allInstances()->select(role = self))
			<p>From package UML::StructuredClassifiers.</p>
			*/
			 
			virtual std::shared_ptr<Bag<uml::ConnectorEnd> > getEnds() ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			A set of ConnectorEnds that attach to this ConnectableElement.
			<p>From package UML::StructuredClassifiers.</p>
			*/
			
			virtual std::shared_ptr<Bag<uml::ConnectorEnd>> getEnd() const ;
			
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			The Element that owns this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Element > getOwner() const ; 
			 
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
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<ConnectableElement> m_thisConnectableElementPtr;
	};
}
#endif /* end of include guard: UML_CONNECTABLEELEMENTCONNECTABLEELEMENTIMPL_HPP */
