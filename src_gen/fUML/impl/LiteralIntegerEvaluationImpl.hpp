//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_LITERALINTEGEREVALUATIONLITERALINTEGEREVALUATIONIMPL_HPP
#define FUML_LITERALINTEGEREVALUATIONLITERALINTEGEREVALUATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../LiteralIntegerEvaluation.hpp"

#include "impl/LiteralEvaluationImpl.hpp"

#include "FUMLFactory.hpp"
#include "LiteralInteger.hpp"


//*********************************
namespace fUML 
{
	class LiteralIntegerEvaluationImpl :virtual public LiteralEvaluationImpl, virtual public LiteralIntegerEvaluation 
	{
		public: 
			LiteralIntegerEvaluationImpl(const LiteralIntegerEvaluationImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			LiteralIntegerEvaluationImpl& operator=(LiteralIntegerEvaluationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			LiteralIntegerEvaluationImpl();

		public:
			//destructor
			virtual ~LiteralIntegerEvaluationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Value>  evaluate()  ;
			
			
			
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
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_LITERALINTEGEREVALUATIONLITERALINTEGEREVALUATIONIMPL_HPP */

