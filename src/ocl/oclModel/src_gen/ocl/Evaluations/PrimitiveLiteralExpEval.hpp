//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_EVALUATIONS_PRIMITIVELITERALEXPEVAL_HPP
#define OCL_EVALUATIONS_PRIMITIVELITERALEXPEVAL_HPP

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
	class oclFactory;
}

//Forward Declaration for used types
namespace ocl::Evaluations 
{
	class EvalEnvironment;
}

namespace ocl::Evaluations 
{
	class LiteralExpEval;
}

namespace fUML::Semantics::Loci 
{
	class Locus;
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
#include "ocl/Evaluations/LiteralExpEval.hpp"

// enum includes


//*********************************
namespace ocl::Evaluations 
{
	
	class PrimitiveLiteralExpEval:virtual public LiteralExpEval
	{
		public:
 			PrimitiveLiteralExpEval(const PrimitiveLiteralExpEval &) {}

		protected:
			PrimitiveLiteralExpEval(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~PrimitiveLiteralExpEval() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			

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
#endif /* end of include guard: OCL_EVALUATIONS_PRIMITIVELITERALEXPEVAL_HPP */
