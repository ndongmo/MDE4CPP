//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_OPAQUEBEHAVIOREXECUTION_HPP
#define FUML_OPAQUEBEHAVIOREXECUTION_HPP

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
namespace uml 
{
	class Classifier;
}

namespace fUML 
{
	class Execution;
}

namespace fUML 
{
	class FeatureValue;
}

namespace fUML 
{
	class Locus;
}

namespace fUML 
{
	class Object;
}

namespace fUML 
{
	class ObjectActivation;
}

namespace fUML 
{
	class ParameterValue;
}

// base class includes
#include "Execution.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class OpaqueBehaviorExecution:virtual public Execution	{
		public:
 			OpaqueBehaviorExecution(const OpaqueBehaviorExecution &) {}
			OpaqueBehaviorExecution& operator=(OpaqueBehaviorExecution const&) = delete;
	
		protected:
			OpaqueBehaviorExecution(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~OpaqueBehaviorExecution() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void doBody(std::shared_ptr<std::vector<std::shared_ptr<fUML::ParameterValue>>>  inputParameters,std::shared_ptr<std::vector<std::shared_ptr<fUML::ParameterValue>>>  outputParameters)  = 0;
			
			/*!
			 */ 
			virtual void execute()  = 0;
			
			
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
#endif /* end of include guard: FUML_OPAQUEBEHAVIOREXECUTION_HPP */

