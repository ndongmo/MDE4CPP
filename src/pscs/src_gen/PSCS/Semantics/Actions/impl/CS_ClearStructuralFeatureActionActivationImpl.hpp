//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSCS_SEMANTICS_ACTIONS_CS_CLEARSTRUCTURALFEATUREACTIONACTIVATIONCS_CLEARSTRUCTURALFEATUREACTIONACTIVATIONIMPL_HPP
#define PSCS_SEMANTICS_ACTIONS_CS_CLEARSTRUCTURALFEATUREACTIONACTIVATIONCS_CLEARSTRUCTURALFEATUREACTIONACTIVATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../CS_ClearStructuralFeatureActionActivation.hpp"

#include "PSCS/Semantics/Actions/impl/ActionsFactoryImpl.hpp"
#include "fUML/Semantics/Actions/impl/ClearStructuralFeatureActionActivationImpl.hpp"

//*********************************
namespace PSCS::Semantics::Actions 
{
	class CS_ClearStructuralFeatureActionActivationImpl : virtual public fUML::Semantics::Actions::ClearStructuralFeatureActionActivationImpl, virtual public CS_ClearStructuralFeatureActionActivation 
	{
		public: 
			CS_ClearStructuralFeatureActionActivationImpl(const CS_ClearStructuralFeatureActionActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			CS_ClearStructuralFeatureActionActivationImpl& operator=(CS_ClearStructuralFeatureActionActivationImpl const&);

		protected:
			friend class PSCS::Semantics::Actions::ActionsFactoryImpl;
			CS_ClearStructuralFeatureActionActivationImpl();
			virtual std::shared_ptr<CS_ClearStructuralFeatureActionActivation> getThisCS_ClearStructuralFeatureActionActivationPtr() const;
			virtual void setThisCS_ClearStructuralFeatureActionActivationPtr(std::weak_ptr<CS_ClearStructuralFeatureActionActivation> thisCS_ClearStructuralFeatureActionActivationPtr);

			//Additional constructors for the containments back reference
			CS_ClearStructuralFeatureActionActivationImpl(std::weak_ptr<fUML::Semantics::Activities::ActivityNodeActivationGroup > par_group);




		public:
			//destructor
			virtual ~CS_ClearStructuralFeatureActionActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			 
			virtual void doAction() ;
			
			 
			virtual std::shared_ptr<Bag<PSCS::Semantics::StructuredClassifiers::CS_Link> > getLinksToDestroy(std::shared_ptr<fUML::Semantics::SimpleClassifiers::StructuredValue>  value,std::shared_ptr<uml::StructuralFeature>  feature) ;
			
			 
			virtual std::shared_ptr<Bag<fUML::Semantics::Values::Value> > getPotentialLinkEnds(std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Reference>  context,std::shared_ptr<uml::StructuralFeature>  feature) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			
			virtual std::shared_ptr<Union<fUML::Semantics::Actions::PinActivation>> getPinActivation() const ; 
			 
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
			std::weak_ptr<CS_ClearStructuralFeatureActionActivation> m_thisCS_ClearStructuralFeatureActionActivationPtr;
	};
}
#endif /* end of include guard: PSCS_SEMANTICS_ACTIONS_CS_CLEARSTRUCTURALFEATUREACTIONACTIVATIONCS_CLEARSTRUCTURALFEATUREACTIONACTIVATIONIMPL_HPP */
