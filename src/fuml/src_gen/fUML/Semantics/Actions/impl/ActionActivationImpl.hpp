//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_ACTIONS_ACTIONACTIVATIONACTIONACTIVATIONIMPL_HPP
#define FUML_SEMANTICS_ACTIONS_ACTIONACTIVATIONACTIONACTIVATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ActionActivation.hpp"

#include "fUML/Semantics/Actions/impl/ActionsFactoryImpl.hpp"
#include "fUML/Semantics/Activities/impl/ActivityNodeActivationImpl.hpp"

//*********************************
namespace fUML::Semantics::Actions 
{
	class ActionActivationImpl : virtual public fUML::Semantics::Activities::ActivityNodeActivationImpl, virtual public ActionActivation 
	{
		public: 
			ActionActivationImpl(const ActionActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:
			ActionActivationImpl& operator=(ActionActivationImpl const&) = delete;

		protected:
			friend class fUML::Semantics::Actions::ActionsFactoryImpl;
			ActionActivationImpl();
			virtual std::shared_ptr<ActionActivation> getThisActionActivationPtr() const;
			virtual void setThisActionActivationPtr(std::weak_ptr<ActionActivation> thisActionActivationPtr);

			//Additional constructors for the containments back reference
			ActionActivationImpl(std::weak_ptr<fUML::Semantics::Activities::ActivityNodeActivationGroup> par_group);

		public:
			//destructor
			virtual ~ActionActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			 
			virtual void addOutgoingEdge(std::shared_ptr<fUML::Semantics::Activities::ActivityEdgeInstance> edge) ; 
			virtual void addPinActivation(std::shared_ptr<fUML::Semantics::Actions::PinActivation> pinActivation) ; 
			virtual std::shared_ptr<Bag<fUML::Semantics::Activities::Token> > completeAction() ; 
			virtual void createNodeActivations() ; 
			virtual void doAction() ; 
			virtual void fire(std::shared_ptr<Bag<fUML::Semantics::Activities::Token>> incomingTokens) ; 
			virtual std::shared_ptr<Bag<fUML::Semantics::Values::Value> > getTokens(std::shared_ptr<uml::InputPin> pin) ; 
			virtual bool isFirng() ; 
			virtual bool isReady() ; 
			virtual bool isSourceFor(std::shared_ptr<fUML::Semantics::Activities::ActivityEdgeInstance> edgeInstance) ; 
			virtual std::shared_ptr<fUML::Semantics::SimpleClassifiers::BooleanValue> makeBooleanValue(bool value) ; 
			virtual void putToken(std::shared_ptr<uml::OutputPin> pin,std::shared_ptr<fUML::Semantics::Values::Value> value) ; 
			virtual void putTokens(std::shared_ptr<uml::OutputPin> pin,std::shared_ptr<Bag<fUML::Semantics::Values::Value>> values) ; 
			virtual std::shared_ptr<fUML::Semantics::Actions::PinActivation> retrievePinActivation(std::shared_ptr<uml::Pin> pin) ; 
			virtual void run() ; 
			virtual void sendOffers() ; 
			virtual std::shared_ptr<Bag<fUML::Semantics::Activities::Token> > takeOfferedTokens() ; 
			virtual std::shared_ptr<Bag<fUML::Semantics::Values::Value> > takeTokens(std::shared_ptr<uml::InputPin> pin) ; 
			virtual void terminate() ; 
			virtual bool valueParticipatesInLink(std::shared_ptr<fUML::Semantics::Values::Value> value,std::shared_ptr<fUML::Semantics::StructuredClassifiers::Link> link) ;
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			 
			virtual bool isFiring() const ;
			 
			virtual void setFiring (bool _firing);
			
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<uml::Action> getAction() const ;
			
			virtual void setAction(std::shared_ptr<uml::Action>) ;
			/*Additional Setter for 'ActivityNodeActivation::node' redefined by reference 'action'*/
			
			virtual void setNode(std::shared_ptr<uml::ActivityNode>) ;
			virtual std::shared_ptr<Subset<fUML::Semantics::Actions::InputPinActivation, fUML::Semantics::Actions::PinActivation>> getInputPinActivation() const ;
			
			
			virtual std::shared_ptr<Subset<fUML::Semantics::Actions::OutputPinActivation, fUML::Semantics::Actions::PinActivation>> getOutputPinActivation() const ;
			
			
			
			
			
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
			
			virtual void resolveReferences(const int featureID, std::vector<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<ActionActivation> m_thisActionActivationPtr;
	};
}
#endif /* end of include guard: FUML_SEMANTICS_ACTIONS_ACTIONACTIVATIONACTIONACTIVATIONIMPL_HPP */
