//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGYCS_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGYIMPL_HPP
#define PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGYCS_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGYIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../CS_StructuralFeatureOfInterfaceAccessStrategy.hpp"

#include "PSCS/Semantics/StructuredClassifiers/impl/StructuredClassifiersFactoryImpl.hpp"
#include "fUML/Semantics/Loci/impl/SemanticStrategyImpl.hpp"

//*********************************
namespace PSCS::Semantics::StructuredClassifiers 
{
	class CS_StructuralFeatureOfInterfaceAccessStrategyImpl : virtual public fUML::Semantics::Loci::SemanticStrategyImpl, virtual public CS_StructuralFeatureOfInterfaceAccessStrategy 
	{
		public: 
			CS_StructuralFeatureOfInterfaceAccessStrategyImpl(const CS_StructuralFeatureOfInterfaceAccessStrategyImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			CS_StructuralFeatureOfInterfaceAccessStrategyImpl& operator=(CS_StructuralFeatureOfInterfaceAccessStrategyImpl const&) = delete;

		protected:
			friend class PSCS::Semantics::StructuredClassifiers::StructuredClassifiersFactoryImpl;
			CS_StructuralFeatureOfInterfaceAccessStrategyImpl();
			virtual std::shared_ptr<CS_StructuralFeatureOfInterfaceAccessStrategy> getThisCS_StructuralFeatureOfInterfaceAccessStrategyPtr() const;
			virtual void setThisCS_StructuralFeatureOfInterfaceAccessStrategyPtr(std::weak_ptr<CS_StructuralFeatureOfInterfaceAccessStrategy> thisCS_StructuralFeatureOfInterfaceAccessStrategyPtr);



		public:
			//destructor
			virtual ~CS_StructuralFeatureOfInterfaceAccessStrategyImpl();
			
			//*********************************
			// Operations
			//*********************************
			 
			virtual std::string getName() ;
			
			 
			virtual std::shared_ptr<fUML::Semantics::SimpleClassifiers::FeatureValue> read(std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Object>  cs_Object,std::shared_ptr<uml::StructuralFeature>  feature) ;
			
			 
			virtual void write(std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Object>  cs_Object,std::shared_ptr<uml::StructuralFeature>  feature,std::shared_ptr<Bag<fUML::Semantics::Values::Value> >  values,int position) ;
			
			
			
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
			std::weak_ptr<CS_StructuralFeatureOfInterfaceAccessStrategy> m_thisCS_StructuralFeatureOfInterfaceAccessStrategyPtr;
	};
}
#endif /* end of include guard: PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGYCS_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGYIMPL_HPP */
