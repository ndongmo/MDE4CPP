//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_EXPRESSIONS_NAVIGATIONCALLEXP_HPP
#define OCL_EXPRESSIONS_NAVIGATIONCALLEXP_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T> class Bag; 



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
	class EAttribute;
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
	class FeatureCallExp;
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
#include "ocl/Expressions/FeatureCallExp.hpp"

// enum includes


//*********************************
namespace ocl::Expressions 
{
	
	class NavigationCallExp:virtual public FeatureCallExp
	{
		public:
 			NavigationCallExp(const NavigationCallExp &) {}

		protected:
			NavigationCallExp(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~NavigationCallExp() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<ecore::EAttribute > getNavigationSource() const = 0;
			
			
			virtual void setNavigationSource(std::shared_ptr<ecore::EAttribute> _navigationSource) = 0;
			
			
			virtual std::shared_ptr<Bag<ocl::Expressions::OclExpression>> getQualifier() const = 0;
			
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			
			std::shared_ptr<ecore::EAttribute > m_navigationSource;
			mutable std::shared_ptr<Bag<ocl::Expressions::OclExpression>> m_qualifier;

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
#endif /* end of include guard: OCL_EXPRESSIONS_NAVIGATIONCALLEXP_HPP */
