//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_EXPRESSIONS_ITERATOREXP_HPP
#define OCL_EXPRESSIONS_ITERATOREXP_HPP

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
namespace ocl::Expressions 
{
	class CallExp;
}

namespace ocl::Expressions 
{
	class CollectionRange;
}

namespace ecore 
{
	class EAnnotation;
}

namespace ecore 
{
	class EClassifier;
}

namespace ecore 
{
	class EGenericType;
}

namespace ecore 
{
	class EObject;
}

namespace ocl::Expressions 
{
	class ExpressionInOcl;
}

namespace ocl::Expressions 
{
	class IfExp;
}

namespace ocl::Expressions 
{
	class LoopExp;
}

namespace ocl::Expressions 
{
	class NavigationCallExp;
}

namespace ocl::Evaluations 
{
	class OclExpEval;
}

namespace ocl::Expressions 
{
	class OclExpression;
}

namespace ocl::Expressions 
{
	class OperationCallExp;
}

namespace ocl::Expressions 
{
	class Variable;
}

// base class includes
#include "ocl/Expressions/LoopExp.hpp"

// enum includes


//*********************************
namespace ocl::Expressions 
{
	
	class IteratorExp:virtual public LoopExp
	{
		public:
 			IteratorExp(const IteratorExp &) {}

		protected:
			IteratorExp(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~IteratorExp() {}

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
			
			virtual std::shared_ptr<Union<ecore::EObject>> getEContens() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: OCL_EXPRESSIONS_ITERATOREXP_HPP */
