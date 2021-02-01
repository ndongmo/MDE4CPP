//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CONNECTABLEELEMENTTEMPLATEPARAMETERCONNECTABLEELEMENTTEMPLATEPARAMETERIMPL_HPP
#define UML_CONNECTABLEELEMENTTEMPLATEPARAMETERCONNECTABLEELEMENTTEMPLATEPARAMETERIMPL_HPP

//*********************************
// generated Includes
//Model includes
#include "../ConnectableElementTemplateParameter.hpp"

#include "uml/impl/TemplateParameterImpl.hpp"

//*********************************
namespace uml 
{
	class ConnectableElementTemplateParameterImpl : virtual public TemplateParameterImpl, virtual public ConnectableElementTemplateParameter 
	{
		public: 
			ConnectableElementTemplateParameterImpl(const ConnectableElementTemplateParameterImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ConnectableElementTemplateParameterImpl& operator=(ConnectableElementTemplateParameterImpl const&) = delete;

		protected:
			friend class umlFactoryImpl;
			ConnectableElementTemplateParameterImpl();
			virtual std::shared_ptr<ConnectableElementTemplateParameter> getThisConnectableElementTemplateParameterPtr() const;
			virtual void setThisConnectableElementTemplateParameterPtr(std::weak_ptr<ConnectableElementTemplateParameter> thisConnectableElementTemplateParameterPtr);

			//Additional constructors for the containments back reference
			ConnectableElementTemplateParameterImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			ConnectableElementTemplateParameterImpl(std::weak_ptr<uml::TemplateSignature > par_signature);




		public:
			//destructor
			virtual ~ConnectableElementTemplateParameterImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
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
			
			virtual void resolveReferences(const int featureID, std::vector<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<ConnectableElementTemplateParameter> m_thisConnectableElementTemplateParameterPtr;
	};
}
#endif /* end of include guard: UML_CONNECTABLEELEMENTTEMPLATEPARAMETERCONNECTABLEELEMENTTEMPLATEPARAMETERIMPL_HPP */
