//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_EXPRESSIONS_COLLECTIONLITERALEXP_HPP
#define OCL_EXPRESSIONS_COLLECTIONLITERALEXP_HPP

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
	class CollectionLiteralPart;
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
	class LiteralExp;
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
	class OperationCallExp;
}

namespace ocl::Expressions 
{
	class Variable;
}

// base class includes
#include "ocl/Expressions/LiteralExp.hpp"

// enum includes
#include "ocl/Expressions/CollectionKind.hpp"


//*********************************
namespace ocl::Expressions 
{
	
	class CollectionLiteralExp:virtual public LiteralExp
	{
		public:
 			CollectionLiteralExp(const CollectionLiteralExp &) {}

		protected:
			CollectionLiteralExp(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~CollectionLiteralExp() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			 
			virtual ocl::Expressions::CollectionKind getKind() const = 0;
			
			 
			virtual void setKind (ocl::Expressions::CollectionKind _kind)= 0; 
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<Bag<ocl::Expressions::CollectionLiteralPart>> getPart() const = 0;
			
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			 
			ocl::Expressions::CollectionKind m_kind = CollectionKind::COLLECTION;
			
			
			//*********************************
			// Reference Members
			//*********************************
			
			mutable std::shared_ptr<Bag<ocl::Expressions::CollectionLiteralPart>> m_part;

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
#endif /* end of include guard: OCL_EXPRESSIONS_COLLECTIONLITERALEXP_HPP */
