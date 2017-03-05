//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_CREATELINKACTIONACTIVATION_HPP
#define FUML_CREATELINKACTIONACTIVATION_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#include <string>
#include <map>
#include <vector>
#include "boost/shared_ptr.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace fUML 
{
	class ActivityEdgeInstance;
}

namespace uml 
{
	class ActivityNode;
}

namespace fUML 
{
	class ActivityNodeActivationGroup;
}

namespace fUML 
{
	class PinActivation;
}

namespace fUML 
{
	class Token;
}

namespace fUML 
{
	class WriteLinkActionActivation;
}

// base class includes
#include "WriteLinkActionActivation.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class CreateLinkActionActivation:virtual public WriteLinkActionActivation	{
		public:
 			CreateLinkActionActivation(const CreateLinkActionActivation &) {}
			CreateLinkActionActivation& operator=(CreateLinkActionActivation const&) = delete;
	
		protected:
			CreateLinkActionActivation(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~CreateLinkActionActivation() {}

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
			 
	};

}
#endif /* end of include guard: FUML_CREATELINKACTIONACTIVATION_HPP */

