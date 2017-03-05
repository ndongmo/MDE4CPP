//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_EXECUTOR_HPP
#define FUML_EXECUTOR_HPP

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
	class Behavior;
}

namespace uml 
{
	class Class;
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
	class ParameterValue;
}

namespace fUML 
{
	class Reference;
}

namespace fUML 
{
	class Value;
}

namespace uml 
{
	class ValueSpecification;
}

// base class includes

// enum includes

#include "EObject.hpp"

//*********************************
namespace fUML 
{
	/*!
	 */
	class Executor : virtual public ecore::EObject 
	{
		public:
 			Executor(const Executor &) {}
			Executor& operator=(Executor const&) = delete;
	
		protected:
			Executor(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~Executor() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Value>  evaluate(std::shared_ptr<uml::ValueSpecification>  specification)  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Reference>  start(std::shared_ptr<uml::Class>  type,std::shared_ptr<std::vector<std::shared_ptr<fUML::ParameterValue>>>  inputs)  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<std::vector<std::shared_ptr<fUML::ParameterValue>>> execute(std::shared_ptr<uml::Behavior>  behavior,std::shared_ptr<fUML::Object>  context,std::shared_ptr<std::vector<std::shared_ptr<fUML::ParameterValue>>>  inputs)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<fUML::Locus> getLocus() const = 0;
			
			/*!
			 */
			virtual void setLocus(std::shared_ptr<fUML::Locus> _locus) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<fUML::Locus> m_locus;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			 
	};

}
#endif /* end of include guard: FUML_EXECUTOR_HPP */

