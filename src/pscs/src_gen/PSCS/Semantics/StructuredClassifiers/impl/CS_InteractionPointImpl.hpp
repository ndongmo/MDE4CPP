//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_INTERACTIONPOINTCS_INTERACTIONPOINTIMPL_HPP
#define PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_INTERACTIONPOINTCS_INTERACTIONPOINTIMPL_HPP

//*********************************
// generated Includes
//Model includes
#include "../CS_InteractionPoint.hpp"

#include "PSCS/Semantics/StructuredClassifiers/impl/StructuredClassifiersFactoryImpl.hpp"
#include "fUML/Semantics/StructuredClassifiers/impl/ReferenceImpl.hpp"

//*********************************
namespace PSCS::Semantics::StructuredClassifiers 
{
	class CS_InteractionPointImpl : virtual public fUML::Semantics::StructuredClassifiers::ReferenceImpl, virtual public CS_InteractionPoint 
	{
		public: 
			CS_InteractionPointImpl(const CS_InteractionPointImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			CS_InteractionPointImpl& operator=(CS_InteractionPointImpl const&) = delete;

		protected:
			friend class PSCS::Semantics::StructuredClassifiers::StructuredClassifiersFactoryImpl;
			CS_InteractionPointImpl();
			virtual std::shared_ptr<CS_InteractionPoint> getThisCS_InteractionPointPtr() const;
			virtual void setThisCS_InteractionPointPtr(std::weak_ptr<CS_InteractionPoint> thisCS_InteractionPointPtr);



		public:
			//destructor
			virtual ~CS_InteractionPointImpl();
			
			//*********************************
			// Operations
			//*********************************
			 
			virtual bool checkAllParents(std::shared_ptr<uml::Classifier> type,std::shared_ptr<uml::Classifier> classifier) ;
			
			 
			virtual std::shared_ptr<fUML::Semantics::CommonBehavior::Execution> dispatch(std::shared_ptr<uml::Operation> operation) ;
			
			 
			virtual void send(std::shared_ptr<fUML::Semantics::CommonBehavior::EventOccurrence> eventOccurrence) ;
			
			 
			virtual void startBehavior(std::shared_ptr<uml::Class> classifier,std::shared_ptr<Bag<fUML::Semantics::CommonBehavior::ParameterValue>> inputs) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<uml::Port > getDefiningPort() const ;
			
			
			virtual void setDefiningPort(std::shared_ptr<uml::Port> _definingPort) ;
			
			
			virtual std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Reference > getOwner() const ;
			
			
			virtual void setOwner(std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Reference> _owner) ;
			
							
			
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
			std::weak_ptr<CS_InteractionPoint> m_thisCS_InteractionPointPtr;
	};
}
#endif /* end of include guard: PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_INTERACTIONPOINTCS_INTERACTIONPOINTIMPL_HPP */
