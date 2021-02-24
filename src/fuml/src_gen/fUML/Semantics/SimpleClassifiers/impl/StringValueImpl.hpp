//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_SIMPLECLASSIFIERS_STRINGVALUESTRINGVALUEIMPL_HPP
#define FUML_SEMANTICS_SIMPLECLASSIFIERS_STRINGVALUESTRINGVALUEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../StringValue.hpp"

#include "fUML/Semantics/SimpleClassifiers/impl/SimpleClassifiersFactoryImpl.hpp"
#include "fUML/Semantics/SimpleClassifiers/impl/PrimitiveValueImpl.hpp"

//*********************************
namespace fUML::Semantics::SimpleClassifiers 
{
	class StringValueImpl : virtual public PrimitiveValueImpl, virtual public StringValue 
	{
		public: 
			StringValueImpl(const StringValueImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			StringValueImpl& operator=(StringValueImpl const&);

		protected:
			friend class fUML::Semantics::SimpleClassifiers::SimpleClassifiersFactoryImpl;
			StringValueImpl();
			virtual std::shared_ptr<StringValue> getThisStringValuePtr() const;
			virtual void setThisStringValuePtr(std::weak_ptr<StringValue> thisStringValuePtr);



		public:
			//destructor
			virtual ~StringValueImpl();
			
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
			 
			virtual std::string getValue() const ;
			
			 
			virtual void setValue (std::string _value); 
			
			
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
			std::weak_ptr<StringValue> m_thisStringValuePtr;
	};
}
#endif /* end of include guard: FUML_SEMANTICS_SIMPLECLASSIFIERS_STRINGVALUESTRINGVALUEIMPL_HPP */
