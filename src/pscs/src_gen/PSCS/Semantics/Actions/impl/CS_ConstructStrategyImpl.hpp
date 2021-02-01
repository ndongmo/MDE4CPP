//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSCS_SEMANTICS_ACTIONS_CS_CONSTRUCTSTRATEGYCS_CONSTRUCTSTRATEGYIMPL_HPP
#define PSCS_SEMANTICS_ACTIONS_CS_CONSTRUCTSTRATEGYCS_CONSTRUCTSTRATEGYIMPL_HPP

//*********************************
// generated Includes
//Model includes
#include "../CS_ConstructStrategy.hpp"

#include "PSCS/Semantics/Actions/impl/ActionsFactoryImpl.hpp"
#include "fUML/Semantics/Loci/impl/SemanticStrategyImpl.hpp"

//*********************************
namespace PSCS::Semantics::Actions 
{
	class CS_ConstructStrategyImpl : virtual public fUML::Semantics::Loci::SemanticStrategyImpl, virtual public CS_ConstructStrategy 
	{
		public: 
			CS_ConstructStrategyImpl(const CS_ConstructStrategyImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			CS_ConstructStrategyImpl& operator=(CS_ConstructStrategyImpl const&) = delete;

		protected:
			friend class PSCS::Semantics::Actions::ActionsFactoryImpl;
			CS_ConstructStrategyImpl();
			virtual std::shared_ptr<CS_ConstructStrategy> getThisCS_ConstructStrategyPtr() const;
			virtual void setThisCS_ConstructStrategyPtr(std::weak_ptr<CS_ConstructStrategy> thisCS_ConstructStrategyPtr);



		public:
			//destructor
			virtual ~CS_ConstructStrategyImpl();
			
			//*********************************
			// Operations
			//*********************************
			 
			virtual std::shared_ptr<fUML::Semantics::StructuredClassifiers::Object> construct(std::shared_ptr<uml::Operation> constructor,std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Object> context) ;
			
			 
			virtual std::string getName() ;
			
			
			
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
			
			virtual void resolveReferences(const int featureID, std::vector<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<CS_ConstructStrategy> m_thisCS_ConstructStrategyPtr;
	};
}
#endif /* end of include guard: PSCS_SEMANTICS_ACTIONS_CS_CONSTRUCTSTRATEGYCS_CONSTRUCTSTRATEGYIMPL_HPP */
