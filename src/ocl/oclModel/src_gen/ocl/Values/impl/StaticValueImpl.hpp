//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_VALUES_STATICVALUESTATICVALUEIMPL_HPP
#define OCL_VALUES_STATICVALUESTATICVALUEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../StaticValue.hpp"

#include "ocl/Values/impl/ValuesFactoryImpl.hpp"
#include "fUML/Semantics/Values/impl/ValueImpl.hpp"

//*********************************
namespace ocl::Values 
{
	class StaticValueImpl : virtual public fUML::Semantics::Values::ValueImpl, virtual public StaticValue 
	{
		public: 
			StaticValueImpl(const StaticValueImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			StaticValueImpl& operator=(StaticValueImpl const&);

		protected:
			friend class ocl::Values::ValuesFactoryImpl;
			StaticValueImpl();
			virtual std::shared_ptr<StaticValue> getThisStaticValuePtr() const;
			virtual void setThisStaticValuePtr(std::weak_ptr<StaticValue> thisStaticValuePtr);



		public:
			//destructor
			virtual ~StaticValueImpl();
			
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
			std::weak_ptr<StaticValue> m_thisStaticValuePtr;
	};
}
#endif /* end of include guard: OCL_VALUES_STATICVALUESTATICVALUEIMPL_HPP */