//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_LITERALNULLEVALUATIONLITERALNULLEVALUATIONIMPL_HPP
#define FUML_LITERALNULLEVALUATIONLITERALNULLEVALUATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../LiteralNullEvaluation.hpp"

#include "impl/LiteralEvaluationImpl.hpp"



//*********************************
namespace fUML 
{
	class LiteralNullEvaluationImpl :virtual public LiteralEvaluationImpl, virtual public LiteralNullEvaluation 
	{
		public: 
			LiteralNullEvaluationImpl(const LiteralNullEvaluationImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			LiteralNullEvaluationImpl& operator=(LiteralNullEvaluationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			LiteralNullEvaluationImpl();

		public:
			//destructor
			virtual ~LiteralNullEvaluationImpl();
			
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
#endif /* end of include guard: FUML_LITERALNULLEVALUATIONLITERALNULLEVALUATIONIMPL_HPP */

