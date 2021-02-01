//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSCS_SEMANTICS_COMMONBEHAVIOR_CS_EVENTOCCURRENCECS_EVENTOCCURRENCEIMPL_HPP
#define PSCS_SEMANTICS_COMMONBEHAVIOR_CS_EVENTOCCURRENCECS_EVENTOCCURRENCEIMPL_HPP

//*********************************
// generated Includes
//Model includes
#include "../CS_EventOccurrence.hpp"

#include "PSCS/Semantics/CommonBehavior/impl/CommonBehaviorFactoryImpl.hpp"
#include "fUML/Semantics/CommonBehavior/impl/EventOccurrenceImpl.hpp"

//*********************************
namespace PSCS::Semantics::CommonBehavior 
{
	class CS_EventOccurrenceImpl : virtual public fUML::Semantics::CommonBehavior::EventOccurrenceImpl, virtual public CS_EventOccurrence 
	{
		public: 
			CS_EventOccurrenceImpl(const CS_EventOccurrenceImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			CS_EventOccurrenceImpl& operator=(CS_EventOccurrenceImpl const&) = delete;

		protected:
			friend class PSCS::Semantics::CommonBehavior::CommonBehaviorFactoryImpl;
			CS_EventOccurrenceImpl();
			virtual std::shared_ptr<CS_EventOccurrence> getThisCS_EventOccurrencePtr() const;
			virtual void setThisCS_EventOccurrencePtr(std::weak_ptr<CS_EventOccurrence> thisCS_EventOccurrencePtr);



		public:
			//destructor
			virtual ~CS_EventOccurrenceImpl();
			
			//*********************************
			// Operations
			//*********************************
			 
			virtual void doSend() ;
			
			 
			virtual std::shared_ptr<Bag<fUML::Semantics::CommonBehavior::ParameterValue> > getParameterValues() ;
			
			 
			virtual bool match(std::shared_ptr<uml::Trigger> trigger) ;
			
			 
			virtual void sendInTo(std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Reference> target,std::shared_ptr<uml::Port> port) ;
			
			 
			virtual void sendOutTo(std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Reference> target,std::shared_ptr<uml::Port> port) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			virtual bool isPropagationInward() const ;
			
			 
			virtual void setPropagationInward (bool _propagationInward);
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_InteractionPoint > getInteractionPoint() const ;
			
			
			virtual void setInteractionPoint(std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_InteractionPoint> _interactionPoint) ;
			
			
			virtual std::shared_ptr<uml::Port > getOnPort() const ;
			
			
			virtual void setOnPort(std::shared_ptr<uml::Port> _onPort) ;
			
			
			virtual std::shared_ptr<fUML::Semantics::CommonBehavior::EventOccurrence > getWrappedEventOccurrence() const ;
			
			
			virtual void setWrappedEventOccurrence(std::shared_ptr<fUML::Semantics::CommonBehavior::EventOccurrence> _wrappedEventOccurrence) ;
			
							
			
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
			std::weak_ptr<CS_EventOccurrence> m_thisCS_EventOccurrencePtr;
	};
}
#endif /* end of include guard: PSCS_SEMANTICS_COMMONBEHAVIOR_CS_EVENTOCCURRENCECS_EVENTOCCURRENCEIMPL_HPP */
