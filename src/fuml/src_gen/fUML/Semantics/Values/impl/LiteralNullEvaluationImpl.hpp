//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_VALUES_LITERALNULLEVALUATIONLITERALNULLEVALUATIONIMPL_HPP
#define FUML_SEMANTICS_VALUES_LITERALNULLEVALUATIONLITERALNULLEVALUATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../LiteralNullEvaluation.hpp"

#include "fUML/Semantics/Values/impl/ValuesFactoryImpl.hpp"
#include "fUML/Semantics/Values/impl/LiteralEvaluationImpl.hpp"

//*********************************
namespace fUML::Semantics::Values 
{
	class LiteralNullEvaluationImpl :virtual public LiteralEvaluationImpl, virtual public LiteralNullEvaluation 
	{
		public: 
			LiteralNullEvaluationImpl(const LiteralNullEvaluationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			LiteralNullEvaluationImpl& operator=(LiteralNullEvaluationImpl const&) = delete;

		protected:
			friend class fUML::Semantics::Values::ValuesFactoryImpl;
			LiteralNullEvaluationImpl();
			virtual std::shared_ptr<LiteralNullEvaluation> getThisLiteralNullEvaluationPtr() const;
			virtual void setThisLiteralNullEvaluationPtr(std::weak_ptr<LiteralNullEvaluation> thisLiteralNullEvaluationPtr);



		public:
			//destructor
			virtual ~LiteralNullEvaluationImpl();
			
			//*********************************
			// Operations
			//*********************************
			 
			virtual std::shared_ptr<fUML::Semantics::Values::Value> evaluate() ;
			
			
			
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
			std::weak_ptr<LiteralNullEvaluation> m_thisLiteralNullEvaluationPtr;
	};
}
#endif /* end of include guard: FUML_SEMANTICS_VALUES_LITERALNULLEVALUATIONLITERALNULLEVALUATIONIMPL_HPP */
