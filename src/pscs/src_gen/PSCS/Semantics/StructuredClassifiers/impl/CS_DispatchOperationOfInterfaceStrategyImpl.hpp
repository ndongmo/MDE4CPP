//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_DISPATCHOPERATIONOFINTERFACESTRATEGYCS_DISPATCHOPERATIONOFINTERFACESTRATEGYIMPL_HPP
#define PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_DISPATCHOPERATIONOFINTERFACESTRATEGYCS_DISPATCHOPERATIONOFINTERFACESTRATEGYIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../CS_DispatchOperationOfInterfaceStrategy.hpp"

#include "PSCS/Semantics/StructuredClassifiers/impl/StructuredClassifiersFactoryImpl.hpp"
#include "fUML/Semantics/StructuredClassifiers/impl/RedefinitionBasedDispatchStrategyImpl.hpp"

//*********************************
namespace PSCS::Semantics::StructuredClassifiers 
{
	class CS_DispatchOperationOfInterfaceStrategyImpl : virtual public fUML::Semantics::StructuredClassifiers::RedefinitionBasedDispatchStrategyImpl, virtual public CS_DispatchOperationOfInterfaceStrategy 
	{
		public: 
			CS_DispatchOperationOfInterfaceStrategyImpl(const CS_DispatchOperationOfInterfaceStrategyImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			CS_DispatchOperationOfInterfaceStrategyImpl& operator=(CS_DispatchOperationOfInterfaceStrategyImpl const&) = delete;

		protected:
			friend class PSCS::Semantics::StructuredClassifiers::StructuredClassifiersFactoryImpl;
			CS_DispatchOperationOfInterfaceStrategyImpl();
			virtual std::shared_ptr<CS_DispatchOperationOfInterfaceStrategy> getThisCS_DispatchOperationOfInterfaceStrategyPtr() const;
			virtual void setThisCS_DispatchOperationOfInterfaceStrategyPtr(std::weak_ptr<CS_DispatchOperationOfInterfaceStrategy> thisCS_DispatchOperationOfInterfaceStrategyPtr);



		public:
			//destructor
			virtual ~CS_DispatchOperationOfInterfaceStrategyImpl();
			
			//*********************************
			// Operations
			//*********************************
			 
			virtual bool operationsMatch(std::shared_ptr<uml::Operation>  ownedOperation,std::shared_ptr<uml::Operation>  baseOperation) ;
			
			
			
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
			std::weak_ptr<CS_DispatchOperationOfInterfaceStrategy> m_thisCS_DispatchOperationOfInterfaceStrategyPtr;
	};
}
#endif /* end of include guard: PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_DISPATCHOPERATIONOFINTERFACESTRATEGYCS_DISPATCHOPERATIONOFINTERFACESTRATEGYIMPL_HPP */
