//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_ACTIVITIES_DECISIONNODEACTIVATIONDECISIONNODEACTIVATIONIMPL_HPP
#define FUML_SEMANTICS_ACTIVITIES_DECISIONNODEACTIVATIONDECISIONNODEACTIVATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../DecisionNodeActivation.hpp"

#include "fUML/Semantics/Activities/impl/ActivitiesFactoryImpl.hpp"
#include "fUML/Semantics/Activities/impl/ControlNodeActivationImpl.hpp"

//*********************************
namespace fUML::Semantics::Activities 
{
	class DecisionNodeActivationImpl : virtual public ControlNodeActivationImpl, virtual public DecisionNodeActivation 
	{
		public: 
			DecisionNodeActivationImpl(const DecisionNodeActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			DecisionNodeActivationImpl& operator=(DecisionNodeActivationImpl const&);

		protected:
			friend class fUML::Semantics::Activities::ActivitiesFactoryImpl;
			DecisionNodeActivationImpl();
			virtual std::shared_ptr<DecisionNodeActivation> getThisDecisionNodeActivationPtr() const;
			virtual void setThisDecisionNodeActivationPtr(std::weak_ptr<DecisionNodeActivation> thisDecisionNodeActivationPtr);

			//Additional constructors for the containments back reference
			DecisionNodeActivationImpl(std::weak_ptr<fUML::Semantics::Activities::ActivityNodeActivationGroup > par_group);




		public:
			//destructor
			virtual ~DecisionNodeActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			 
			virtual std::shared_ptr<fUML::Semantics::Values::Value> executeDecisionInputBehavior(std::shared_ptr<fUML::Semantics::Values::Value>  inputValue,std::shared_ptr<fUML::Semantics::Values::Value>  decisionInputValue) ;
			
			 
			virtual void fire(std::shared_ptr<Bag<fUML::Semantics::Activities::Token> >  incomingTokens) ;
			
			 
			virtual std::shared_ptr<fUML::Semantics::Activities::ActivityEdgeInstance> getDecisionInputFlowInstance() ;
			
			 
			virtual std::shared_ptr<fUML::Semantics::Values::Value> getDecisionInputFlowValue() ;
			
			 
			virtual std::shared_ptr<Bag<fUML::Semantics::Values::Value> > getDecisionValues(std::shared_ptr<Bag<fUML::Semantics::Activities::Token> >  incomingTokens) ;
			
			 
			virtual bool hasObjectFlowInput() ;
			
			 
			virtual bool isReady() ;
			
			 
			virtual std::shared_ptr<Bag<fUML::Semantics::Activities::Token> > removeJoinedControlTokens(std::shared_ptr<Bag<fUML::Semantics::Activities::Token> >  incomingTokens) ;
			
			 
			virtual std::shared_ptr<Bag<fUML::Semantics::Activities::Token> > takeOfferedTokens() ;
			
			 
			virtual void terminate() ;
			
			 
			virtual bool test(std::shared_ptr<uml::ValueSpecification>  gaurd,std::shared_ptr<fUML::Semantics::Values::Value>  value) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<fUML::Semantics::CommonBehavior::Execution > getDecisionInputExecution() const ;
			
			
			virtual void setDecisionInputExecution(std::shared_ptr<fUML::Semantics::CommonBehavior::Execution> _decisionInputExecution) ;
			
			
			virtual std::shared_ptr<uml::DecisionNode > getDecisionNode() const ;
			
			
			virtual void setDecisionNode(std::shared_ptr<uml::DecisionNode> _decisionNode) ;
			
			/*Additional Setter for 'ActivityNodeActivation::node' redefined by reference 'decisionNode'*/
			
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
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<DecisionNodeActivation> m_thisDecisionNodeActivationPtr;
	};
}
#endif /* end of include guard: FUML_SEMANTICS_ACTIVITIES_DECISIONNODEACTIVATIONDECISIONNODEACTIVATIONIMPL_HPP */
