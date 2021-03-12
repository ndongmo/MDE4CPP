//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_EVALUATIONS_OPERATIONCALLEXPEVALOPERATIONCALLEXPEVALIMPL_HPP
#define OCL_EVALUATIONS_OPERATIONCALLEXPEVALOPERATIONCALLEXPEVALIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../OperationCallExpEval.hpp"

#include "ocl/Evaluations/impl/EvaluationsFactoryImpl.hpp"
#include "ocl/Evaluations/impl/ModelPropertyCallExpEvalImpl.hpp"

//*********************************
namespace ocl::Evaluations 
{
	class OperationCallExpEvalImpl : virtual public ModelPropertyCallExpEvalImpl, virtual public OperationCallExpEval 
	{
		public: 
			OperationCallExpEvalImpl(const OperationCallExpEvalImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			OperationCallExpEvalImpl& operator=(OperationCallExpEvalImpl const&);

		protected:
			friend class ocl::Evaluations::EvaluationsFactoryImpl;
			OperationCallExpEvalImpl();
			virtual std::shared_ptr<OperationCallExpEval> getThisOperationCallExpEvalPtr() const;
			virtual void setThisOperationCallExpEvalPtr(std::weak_ptr<OperationCallExpEval> thisOperationCallExpEvalPtr);



		public:
			//destructor
			virtual ~OperationCallExpEvalImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<Bag<ocl::Evaluations::OclExpEval>> getArguments() const ;
			
			
			
			virtual std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue > getReferredOperation() const ;
			
			
			virtual void setReferredOperation(std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue> _referredOperation) ;
			
							
			
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
			std::weak_ptr<OperationCallExpEval> m_thisOperationCallExpEvalPtr;
	};
}
#endif /* end of include guard: OCL_EVALUATIONS_OPERATIONCALLEXPEVALOPERATIONCALLEXPEVALIMPL_HPP */
