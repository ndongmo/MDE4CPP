//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_SIMPLECLASSIFIERS_ENUMERATIONVALUEENUMERATIONVALUEIMPL_HPP
#define FUML_SEMANTICS_SIMPLECLASSIFIERS_ENUMERATIONVALUEENUMERATIONVALUEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../EnumerationValue.hpp"

#include "fUML/Semantics/SimpleClassifiers/impl/SimpleClassifiersFactoryImpl.hpp"
#include "fUML/Semantics/Values/impl/ValueImpl.hpp"

//*********************************
namespace fUML::Semantics::SimpleClassifiers 
{
	class EnumerationValueImpl :virtual public fUML::Semantics::Values::ValueImpl, virtual public EnumerationValue 
	{
		public: 
			EnumerationValueImpl(const EnumerationValueImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			EnumerationValueImpl& operator=(EnumerationValueImpl const&) = delete;

		protected:
			friend class fUML::Semantics::SimpleClassifiers::SimpleClassifiersFactoryImpl;
			EnumerationValueImpl();
			virtual std::shared_ptr<EnumerationValue> getThisEnumerationValuePtr() const;
			virtual void setThisEnumerationValuePtr(std::weak_ptr<EnumerationValue> thisEnumerationValuePtr);



		public:
			//destructor
			virtual ~EnumerationValueImpl();
			
			//*********************************
			// Operations
			//*********************************
			 
			virtual std::shared_ptr<fUML::Semantics::Values::Value> _copy() ;
			
			 
			virtual bool equals(std::shared_ptr<fUML::Semantics::Values::Value>  otherValue) ;
			
			 
			virtual std::shared_ptr<Bag<uml::Classifier> > getTypes() ;
			
			 
			virtual std::shared_ptr<fUML::Semantics::Values::Value> new_() ;
			
			 
			virtual std::shared_ptr<uml::ValueSpecification> specify() ;
			
			 
			virtual std::string toString() ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<uml::EnumerationLiteral > getLiteral() const ;
			
			
			virtual void setLiteral(std::shared_ptr<uml::EnumerationLiteral> _literal) ;
			
			
			virtual std::shared_ptr<uml::Enumeration > getType() const ;
			
			
			virtual void setType(std::shared_ptr<uml::Enumeration> _type) ;
			
							
			
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
			std::weak_ptr<EnumerationValue> m_thisEnumerationValuePtr;
	};
}
#endif /* end of include guard: FUML_SEMANTICS_SIMPLECLASSIFIERS_ENUMERATIONVALUEENUMERATIONVALUEIMPL_HPP */
