//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_EVALUATIONS_IFEXPEVAL_HPP
#define OCL_EVALUATIONS_IFEXPEVAL_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations



//*********************************
// generated Includes

#include <map>

namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace ocl
{
	class OclFactory;
}

//Forward Declaration for used types
namespace ocl::Evaluations 
{
	class EvalEnvironment;
}

namespace fUML::Semantics::Loci 
{
	class Locus;
}

namespace ocl::Evaluations 
{
	class OclExpEval;
}

namespace ocl::Expressions 
{
	class OclExpression;
}

namespace fUML::Semantics::Values 
{
	class Value;
}

namespace uml 
{
	class ValueSpecification;
}

// base class includes
#include "ocl/Evaluations/OclExpEval.hpp"

// enum includes


//*********************************
namespace ocl::Evaluations 
{
	/*!
	 */
	class IfExpEval:virtual public OclExpEval
	{
		public:
 			IfExpEval(const IfExpEval &) {}
			IfExpEval& operator=(IfExpEval const&) = delete;

		protected:
			IfExpEval(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~IfExpEval() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<ocl::Evaluations::OclExpEval > getCondition() const = 0;
			
			/*!
			 */
			virtual void setCondition(std::shared_ptr<ocl::Evaluations::OclExpEval> _condition_condition) = 0;
			/*!
			 */
			virtual std::shared_ptr<ocl::Evaluations::OclExpEval > getElseExpression() const = 0;
			
			/*!
			 */
			virtual void setElseExpression(std::shared_ptr<ocl::Evaluations::OclExpEval> _elseExpression_elseExpression) = 0;
			/*!
			 */
			virtual std::shared_ptr<ocl::Evaluations::OclExpEval > getThenExpression() const = 0;
			
			/*!
			 */
			virtual void setThenExpression(std::shared_ptr<ocl::Evaluations::OclExpEval> _thenExpression_thenExpression) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<ocl::Evaluations::OclExpEval > m_condition;
			/*!
			 */
			std::shared_ptr<ocl::Evaluations::OclExpEval > m_elseExpression;
			/*!
			 */
			std::shared_ptr<ocl::Evaluations::OclExpEval > m_thenExpression;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: OCL_EVALUATIONS_IFEXPEVAL_HPP */
