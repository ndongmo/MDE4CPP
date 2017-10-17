//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EPARAMETER_HPP
#define ECORE_EPARAMETER_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

#include <string>
#include <map>
#include <vector>
#include "SubsetUnion.hpp"
#include "boost/shared_ptr.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
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
	class EOperation;
}

namespace ecore 
{
	class ETypedElement;
}

// base class includes
#include "ETypedElement.hpp"

// enum includes


//*********************************
namespace ecore 
{
	/*!
	 */
	class EParameter:virtual public ETypedElement
	{
		public:
 			EParameter(const EParameter &) {}
			EParameter& operator=(EParameter const&) = delete;

		protected:
			EParameter(){}


			//Additional constructors for the containments back reference

			EParameter(std::weak_ptr<ecore::EOperation > par_eOperation);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~EParameter() {}

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
			virtual std::weak_ptr<ecore::EOperation > getEOperation() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::weak_ptr<ecore::EOperation > m_eOperation;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			 
	};

}
#endif /* end of include guard: ECORE_EPARAMETER_HPP */

