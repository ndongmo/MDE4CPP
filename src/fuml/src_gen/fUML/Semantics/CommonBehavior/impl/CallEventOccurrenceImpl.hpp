//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_CALLEVENTOCCURRENCECALLEVENTOCCURRENCEIMPL_HPP
#define FUML_SEMANTICS_COMMONBEHAVIOR_CALLEVENTOCCURRENCECALLEVENTOCCURRENCEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../CallEventOccurrence.hpp"

#include "fUML/Semantics/CommonBehavior/impl/CommonBehaviorFactoryImpl.hpp"
#include "fUML/Semantics/CommonBehavior/impl/EventOccurrenceImpl.hpp"

//*********************************
namespace fUML::Semantics::CommonBehavior 
{
	class CallEventOccurrenceImpl : virtual public EventOccurrenceImpl, virtual public CallEventOccurrence 
	{
		public: 
			CallEventOccurrenceImpl(const CallEventOccurrenceImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			CallEventOccurrenceImpl& operator=(CallEventOccurrenceImpl const&);

		protected:
			friend class fUML::Semantics::CommonBehavior::CommonBehaviorFactoryImpl;
			CallEventOccurrenceImpl();
			virtual std::shared_ptr<CallEventOccurrence> getThisCallEventOccurrencePtr() const;
			virtual void setThisCallEventOccurrencePtr(std::weak_ptr<CallEventOccurrence> thisCallEventOccurrencePtr);



		public:
			//destructor
			virtual ~CallEventOccurrenceImpl();
			
			//*********************************
			// Operations
			//*********************************
			 
			virtual std::shared_ptr<uml::Operation> getOperation() ;
			
			 
			virtual std::shared_ptr<Bag<fUML::Semantics::CommonBehavior::ParameterValue> > getParameterValues() ;
			
			 
			virtual bool match(std::shared_ptr<uml::Trigger>  trigger) ;
			
			 
			virtual void releaseCaller() ;
			
			 
			virtual void setOutputParameterValues(std::shared_ptr<Bag<fUML::Semantics::CommonBehavior::ParameterValue> >  parameterValues) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<fUML::Semantics::CommonBehavior::CallEventExecution > getExecution() const ;
			
			
			virtual void setExecution(std::shared_ptr<fUML::Semantics::CommonBehavior::CallEventExecution> _execution) ;
			
							
			
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
			std::weak_ptr<CallEventOccurrence> m_thisCallEventOccurrencePtr;
	};
}
#endif /* end of include guard: FUML_SEMANTICS_COMMONBEHAVIOR_CALLEVENTOCCURRENCECALLEVENTOCCURRENCEIMPL_HPP */
