//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_VALUES_NAMEVALUEBINDINGNAMEVALUEBINDINGIMPL_HPP
#define OCL_VALUES_NAMEVALUEBINDINGNAMEVALUEBINDINGIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../NameValueBinding.hpp"

#include "ocl/Values/impl/ValuesFactoryImpl.hpp"

#include "ecore/impl/EModelElementImpl.hpp"

//*********************************
namespace ocl::Values 
{
	class NameValueBindingImpl : virtual public ecore::EModelElementImpl,
virtual public NameValueBinding 
	{
		public: 
			NameValueBindingImpl(const NameValueBindingImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			NameValueBindingImpl& operator=(NameValueBindingImpl const&);

		protected:
			friend class ocl::Values::ValuesFactoryImpl;
			NameValueBindingImpl();
			virtual std::shared_ptr<NameValueBinding> getThisNameValueBindingPtr() const;
			virtual void setThisNameValueBindingPtr(std::weak_ptr<NameValueBinding> thisNameValueBindingPtr);



		public:
			//destructor
			virtual ~NameValueBindingImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			 
			virtual std::string getName() const ;
			
			 
			virtual void setName (std::string _name); 
			
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<fUML::Semantics::Values::Value > getValue() const ;
			
			
			virtual void setValue(std::shared_ptr<fUML::Semantics::Values::Value> _value) ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
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
			std::weak_ptr<NameValueBinding> m_thisNameValueBindingPtr;
	};
}
#endif /* end of include guard: OCL_VALUES_NAMEVALUEBINDINGNAMEVALUEBINDINGIMPL_HPP */
