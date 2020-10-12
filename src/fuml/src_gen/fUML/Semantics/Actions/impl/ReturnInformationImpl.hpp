//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_ACTIONS_RETURNINFORMATIONRETURNINFORMATIONIMPL_HPP
#define FUML_SEMANTICS_ACTIONS_RETURNINFORMATIONRETURNINFORMATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ReturnInformation.hpp"

#include "fUML/Semantics/Actions/impl/ActionsFactoryImpl.hpp"
#include "fUML/Semantics/Values/impl/ValueImpl.hpp"

//*********************************
namespace fUML::Semantics::Actions 
{
	class ReturnInformationImpl :virtual public fUML::Semantics::Values::ValueImpl, virtual public ReturnInformation 
	{
		public: 
			ReturnInformationImpl(const ReturnInformationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ReturnInformationImpl& operator=(ReturnInformationImpl const&) = delete;

		protected:
			friend class fUML::Semantics::Actions::ActionsFactoryImpl;
			ReturnInformationImpl();
			virtual std::shared_ptr<ReturnInformation> getThisReturnInformationPtr() const;
			virtual void setThisReturnInformationPtr(std::weak_ptr<ReturnInformation> thisReturnInformationPtr);



		public:
			//destructor
			virtual ~ReturnInformationImpl();
			
			//*********************************
			// Operations
			//*********************************
			 
			virtual std::shared_ptr<fUML::Semantics::Values::Value> _copy() ;
			
			 
			virtual bool equals(std::shared_ptr<fUML::Semantics::Values::Value>  otherValue) ;
			
			 
			virtual std::shared_ptr<uml::Operation> getOperation() ;
			
			 
			virtual std::shared_ptr<Bag<uml::Classifier> > getTypes() ;
			
			 
			virtual std::shared_ptr<fUML::Semantics::Values::Value> new_() ;
			
			 
			virtual void reply(std::shared_ptr<Bag<fUML::Semantics::CommonBehavior::ParameterValue> >  outputParameterValues) ;
			
			 
			virtual std::shared_ptr<uml::ValueSpecification> specify() ;
			
			 
			virtual std::string toString() ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<fUML::Semantics::CommonBehavior::CallEventOccurrence > getCallEventOccurrence() const ;
			
			
			virtual void setCallEventOccurrence(std::shared_ptr<fUML::Semantics::CommonBehavior::CallEventOccurrence> _callEventOccurrence) ;
			
							
			
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
			std::weak_ptr<ReturnInformation> m_thisReturnInformationPtr;
	};
}
#endif /* end of include guard: FUML_SEMANTICS_ACTIONS_RETURNINFORMATIONRETURNINFORMATIONIMPL_HPP */
