//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_VALUES_OCLVOIDVALUE_HPP
#define OCL_VALUES_OCLVOIDVALUE_HPP

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
namespace fUML::Semantics::Values 
{
	class Value;
}

// base class includes
#include "fUML/Semantics/Values/Value.hpp"

// enum includes


//*********************************
namespace ocl::Values 
{
	
	class OclVoidValue:virtual public fUML::Semantics::Values::Value
	{
		public:
 			OclVoidValue(const OclVoidValue &) {}

		protected:
			OclVoidValue(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~OclVoidValue() {}

			//*********************************
			// Operations
			//*********************************
			 
			virtual bool equals(std::shared_ptr<fUML::Semantics::Values::Value>  otherValue) = 0;
			
			 
			virtual std::string toString() = 0;
			
			
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
#endif /* end of include guard: OCL_VALUES_OCLVOIDVALUE_HPP */
