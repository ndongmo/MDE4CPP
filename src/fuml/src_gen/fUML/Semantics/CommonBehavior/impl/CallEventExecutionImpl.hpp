//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_CALLEVENTEXECUTIONCALLEVENTEXECUTIONIMPL_HPP
#define FUML_SEMANTICS_COMMONBEHAVIOR_CALLEVENTEXECUTIONCALLEVENTEXECUTIONIMPL_HPP

//*********************************
// generated Includes
//Model includes
#include "../CallEventExecution.hpp"

#include "fUML/Semantics/CommonBehavior/impl/CommonBehaviorFactoryImpl.hpp"
#include "fUML/Semantics/CommonBehavior/impl/ExecutionImpl.hpp"

//*********************************
namespace fUML::Semantics::CommonBehavior 
{
	class CallEventExecutionImpl : virtual public ExecutionImpl, virtual public CallEventExecution 
	{
		public: 
			CallEventExecutionImpl(const CallEventExecutionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			CallEventExecutionImpl& operator=(CallEventExecutionImpl const&) = delete;

		protected:
			friend class fUML::Semantics::CommonBehavior::CommonBehaviorFactoryImpl;
			CallEventExecutionImpl();
			virtual std::shared_ptr<CallEventExecution> getThisCallEventExecutionPtr() const;
			virtual void setThisCallEventExecutionPtr(std::weak_ptr<CallEventExecution> thisCallEventExecutionPtr);



		public:
			//destructor
			virtual ~CallEventExecutionImpl();
			
			//*********************************
			// Operations
			//*********************************
			 
			virtual std::shared_ptr<fUML::Semantics::Values::Value> _copy() ;
			
			 
			virtual std::shared_ptr<fUML::Semantics::CommonBehavior::EventOccurrence> createEventOccurrence() ;
			
			 
			virtual void execute() ;
			
			 
			virtual std::shared_ptr<Bag<fUML::Semantics::CommonBehavior::ParameterValue> > getInputParameterValues() ;
			
			 
			virtual std::shared_ptr<uml::Operation> getOperation() ;
			
			 
			virtual bool isCallerSuspended() ;
			
			 
			virtual void makeCall() ;
			
			 
			virtual std::shared_ptr<fUML::Semantics::Values::Value> new_() ;
			
			 
			virtual void releaseCaller() ;
			
			 
			virtual void setOutputParameterValues(std::shared_ptr<Bag<fUML::Semantics::CommonBehavior::ParameterValue>> parameterValues) ;
			
			 
			virtual void suspendCaller() ;
			
			 
			virtual void wait_() ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			virtual bool getCallerSuspended() const ;
			
			 
			virtual void setCallerSuspended (bool _callerSuspended);
			
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
			std::weak_ptr<CallEventExecution> m_thisCallEventExecutionPtr;
	};
}
#endif /* end of include guard: FUML_SEMANTICS_COMMONBEHAVIOR_CALLEVENTEXECUTIONCALLEVENTEXECUTIONIMPL_HPP */
