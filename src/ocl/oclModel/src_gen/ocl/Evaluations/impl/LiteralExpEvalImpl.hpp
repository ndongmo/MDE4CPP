//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_EVALUATIONS_LITERALEXPEVALLITERALEXPEVALIMPL_HPP
#define OCL_EVALUATIONS_LITERALEXPEVALLITERALEXPEVALIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../LiteralExpEval.hpp"

#include "ocl/Evaluations/impl/EvaluationsFactoryImpl.hpp"
#include "ocl/Evaluations/impl/OclExpEvalImpl.hpp"

//*********************************
namespace ocl::Evaluations 
{
	class LiteralExpEvalImpl : virtual public OclExpEvalImpl, virtual public LiteralExpEval 
	{
		public: 
			LiteralExpEvalImpl(const LiteralExpEvalImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			LiteralExpEvalImpl& operator=(LiteralExpEvalImpl const&);

		protected:
			friend class ocl::Evaluations::EvaluationsFactoryImpl;
			LiteralExpEvalImpl();
			virtual std::shared_ptr<LiteralExpEval> getThisLiteralExpEvalPtr() const;
			virtual void setThisLiteralExpEvalPtr(std::weak_ptr<LiteralExpEval> thisLiteralExpEvalPtr);



		public:
			//destructor
			virtual ~LiteralExpEvalImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
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
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<LiteralExpEval> m_thisLiteralExpEvalPtr;
	};
}
#endif /* end of include guard: OCL_EVALUATIONS_LITERALEXPEVALLITERALEXPEVALIMPL_HPP */
