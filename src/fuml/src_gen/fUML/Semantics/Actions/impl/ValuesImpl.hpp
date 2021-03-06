//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_ACTIONS_VALUESVALUESIMPL_HPP
#define FUML_SEMANTICS_ACTIONS_VALUESVALUESIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Values.hpp"

#include "fUML/Semantics/Actions/impl/ActionsFactoryImpl.hpp"

#include "ecore/impl/EModelElementImpl.hpp"

//*********************************
namespace fUML::Semantics::Actions 
{
	class ValuesImpl : virtual public ecore::EModelElementImpl,
virtual public Values 
	{
		public: 
			ValuesImpl(const ValuesImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ValuesImpl& operator=(ValuesImpl const&) = delete;

		protected:
			friend class fUML::Semantics::Actions::ActionsFactoryImpl;
			ValuesImpl();
			virtual std::shared_ptr<Values> getThisValuesPtr() const;
			virtual void setThisValuesPtr(std::weak_ptr<Values> thisValuesPtr);



		public:
			//destructor
			virtual ~ValuesImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<Bag<fUML::Semantics::Values::Value>> getValues() const ;
			
			
							
			
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
			std::weak_ptr<Values> m_thisValuesPtr;
	};
}
#endif /* end of include guard: FUML_SEMANTICS_ACTIONS_VALUESVALUESIMPL_HPP */
