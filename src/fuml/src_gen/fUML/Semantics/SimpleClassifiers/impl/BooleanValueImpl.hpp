//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_SIMPLECLASSIFIERS_BOOLEANVALUEBOOLEANVALUEIMPL_HPP
#define FUML_SEMANTICS_SIMPLECLASSIFIERS_BOOLEANVALUEBOOLEANVALUEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../BooleanValue.hpp"

#include "fUML/Semantics/SimpleClassifiers/impl/SimpleClassifiersFactoryImpl.hpp"
#include "fUML/Semantics/SimpleClassifiers/impl/PrimitiveValueImpl.hpp"

//*********************************
namespace fUML::Semantics::SimpleClassifiers 
{
	class BooleanValueImpl : virtual public PrimitiveValueImpl, virtual public BooleanValue 
	{
		public: 
			BooleanValueImpl(const BooleanValueImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			BooleanValueImpl& operator=(BooleanValueImpl const&) = delete;

		protected:
			friend class fUML::Semantics::SimpleClassifiers::SimpleClassifiersFactoryImpl;
			BooleanValueImpl();
			virtual std::shared_ptr<BooleanValue> getThisBooleanValuePtr() const;
			virtual void setThisBooleanValuePtr(std::weak_ptr<BooleanValue> thisBooleanValuePtr);



		public:
			//destructor
			virtual ~BooleanValueImpl();
			
			//*********************************
			// Operations
			//*********************************
			 
			virtual std::shared_ptr<fUML::Semantics::Values::Value> _copy() ;
			
			 
			virtual bool equals(std::shared_ptr<fUML::Semantics::Values::Value>  otherValue) ;
			
			 
			virtual std::shared_ptr<uml::ValueSpecification> specify() ;
			
			 
			virtual std::string toString() ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			 
			virtual bool isValue() const ;
			
			 
			virtual void setValue (bool _value); 
			
			
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
			std::weak_ptr<BooleanValue> m_thisBooleanValuePtr;
	};
}
#endif /* end of include guard: FUML_SEMANTICS_SIMPLECLASSIFIERS_BOOLEANVALUEBOOLEANVALUEIMPL_HPP */
