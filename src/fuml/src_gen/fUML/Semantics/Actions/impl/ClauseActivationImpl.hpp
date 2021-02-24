//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_ACTIONS_CLAUSEACTIVATIONCLAUSEACTIVATIONIMPL_HPP
#define FUML_SEMANTICS_ACTIONS_CLAUSEACTIVATIONCLAUSEACTIVATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ClauseActivation.hpp"

#include "fUML/Semantics/Actions/impl/ActionsFactoryImpl.hpp"

#include "ecore/impl/EModelElementImpl.hpp"

//*********************************
namespace fUML::Semantics::Actions 
{
	class ClauseActivationImpl : virtual public ecore::EModelElementImpl,
virtual public ClauseActivation 
	{
		public: 
			ClauseActivationImpl(const ClauseActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			ClauseActivationImpl& operator=(ClauseActivationImpl const&);

		protected:
			friend class fUML::Semantics::Actions::ActionsFactoryImpl;
			ClauseActivationImpl();
			virtual std::shared_ptr<ClauseActivation> getThisClauseActivationPtr() const;
			virtual void setThisClauseActivationPtr(std::weak_ptr<ClauseActivation> thisClauseActivationPtr);



		public:
			//destructor
			virtual ~ClauseActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			 
			virtual std::shared_ptr<fUML::Semantics::SimpleClassifiers::BooleanValue> getDecision() ;
			
			 
			virtual std::shared_ptr<Bag<fUML::Semantics::Actions::ClauseActivation> > getPredecessors() ;
			
			 
			virtual std::shared_ptr<Bag<fUML::Semantics::Actions::ClauseActivation> > getSuccessors() ;
			
			 
			virtual bool isReady() ;
			
			 
			virtual void recieveControl() ;
			
			 
			virtual void runTest() ;
			
			 
			virtual void selectBody() ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<uml::Clause > getClause() const ;
			
			
			virtual void setClause(std::shared_ptr<uml::Clause> _clause) ;
			
			
			virtual std::shared_ptr<fUML::Semantics::Actions::ConditionalNodeActivation > getConditionalNodeActivation() const ;
			
			
			virtual void setConditionalNodeActivation(std::shared_ptr<fUML::Semantics::Actions::ConditionalNodeActivation> _conditionalNodeActivation) ;
			
							
			
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
			std::weak_ptr<ClauseActivation> m_thisClauseActivationPtr;
	};
}
#endif /* end of include guard: FUML_SEMANTICS_ACTIONS_CLAUSEACTIVATIONCLAUSEACTIVATIONIMPL_HPP */
