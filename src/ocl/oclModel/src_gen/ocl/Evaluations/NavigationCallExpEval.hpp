//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_EVALUATIONS_NAVIGATIONCALLEXPEVAL_HPP
#define OCL_EVALUATIONS_NAVIGATIONCALLEXPEVAL_HPP

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
	class ModelPropertyCallExpEval;
}

namespace ocl::Evaluations 
{
	class OclExpEval;
}

namespace ocl::Expressions 
{
	class OclExpression;
}

namespace fUML::Semantics::SimpleClassifiers 
{
	class StringValue;
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
#include "ocl/Evaluations/ModelPropertyCallExpEval.hpp"

// enum includes


//*********************************
namespace ocl::Evaluations 
{
	/*!
	 */
	class NavigationCallExpEval:virtual public ModelPropertyCallExpEval
	{
		public:
 			NavigationCallExpEval(const NavigationCallExpEval &) {}
			NavigationCallExpEval& operator=(NavigationCallExpEval const&) = delete;

		protected:
			NavigationCallExpEval(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~NavigationCallExpEval() {}

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
			virtual std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue > getNavigationSource() const = 0;
			
			/*!
			 */
			virtual void setNavigationSource(std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue> _navigationSource_navigationSource) = 0;
			/*!
			 */
			virtual std::shared_ptr<Bag<ocl::Evaluations::OclExpEval>> getQualifiers() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue > m_navigationSource;
			/*!
			 */
			std::shared_ptr<Bag<ocl::Evaluations::OclExpEval>> m_qualifiers;
			

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
#endif /* end of include guard: OCL_EVALUATIONS_NAVIGATIONCALLEXPEVAL_HPP */
