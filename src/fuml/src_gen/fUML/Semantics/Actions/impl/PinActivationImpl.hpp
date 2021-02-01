//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_ACTIONS_PINACTIVATIONPINACTIVATIONIMPL_HPP
#define FUML_SEMANTICS_ACTIONS_PINACTIVATIONPINACTIVATIONIMPL_HPP

//*********************************
// generated Includes
//Model includes
#include "../PinActivation.hpp"

#include "fUML/Semantics/Actions/impl/ActionsFactoryImpl.hpp"
#include "fUML/Semantics/Activities/impl/ObjectNodeActivationImpl.hpp"

//*********************************
namespace fUML::Semantics::Actions 
{
	class PinActivationImpl : virtual public fUML::Semantics::Activities::ObjectNodeActivationImpl, virtual public PinActivation 
	{
		public: 
			PinActivationImpl(const PinActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			PinActivationImpl& operator=(PinActivationImpl const&) = delete;

		protected:
			friend class fUML::Semantics::Actions::ActionsFactoryImpl;
			PinActivationImpl();
			virtual std::shared_ptr<PinActivation> getThisPinActivationPtr() const;
			virtual void setThisPinActivationPtr(std::weak_ptr<PinActivation> thisPinActivationPtr);

			//Additional constructors for the containments back reference
			PinActivationImpl(std::weak_ptr<fUML::Semantics::Activities::ActivityNodeActivationGroup > par_group);




		public:
			//destructor
			virtual ~PinActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			 
			virtual void fire(std::shared_ptr<Bag<fUML::Semantics::Activities::Token>> incomingTokens) ;
			
			 
			virtual std::shared_ptr<Bag<fUML::Semantics::Activities::Token> > takeOfferedTokens() ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::weak_ptr<fUML::Semantics::Actions::ActionActivation > getActionActivation() const ;
			
			
			virtual void setActionActivation(std::shared_ptr<fUML::Semantics::Actions::ActionActivation> _actionActivation) ;
			
			
			virtual std::shared_ptr<uml::Pin > getPin() const ;
			
			
			virtual void setPin(std::shared_ptr<uml::Pin> _pin) ;
			
			/*Additional Setter for 'ActivityNodeActivation::node' redefined by reference 'pin'*/
			
			virtual void setNode(std::shared_ptr<uml::ActivityNode> _node) ;
							
			
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
			std::weak_ptr<PinActivation> m_thisPinActivationPtr;
	};
}
#endif /* end of include guard: FUML_SEMANTICS_ACTIONS_PINACTIVATIONPINACTIVATIONIMPL_HPP */
