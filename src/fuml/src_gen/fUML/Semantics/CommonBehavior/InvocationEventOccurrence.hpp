//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_INVOCATIONEVENTOCCURRENCE_HPP
#define FUML_SEMANTICS_COMMONBEHAVIOR_INVOCATIONEVENTOCCURRENCE_HPP


#include <memory>
#include <string>
// forward declarations


//*********************************
// generated Includes
#include <map> // used for Persistence
#include <vector> // used for Persistence
namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace fUML
{
	class fUMLFactory;
}

//Forward Declaration for used types 
namespace fUML::Semantics::CommonBehavior 
{
	class Execution;
	class ParameterValue;
}
namespace fUML::Semantics::StructuredClassifiers 
{
	class Reference;
}
namespace uml 
{
	class Trigger;
}

// base class includes
#include "fUML/Semantics/CommonBehavior/EventOccurrence.hpp"

// enum includes



//*********************************
namespace fUML::Semantics::CommonBehavior 
{
	
	class InvocationEventOccurrence: virtual public EventOccurrence
	{
		public:
 			InvocationEventOccurrence(const InvocationEventOccurrence &) {}
			InvocationEventOccurrence& operator=(InvocationEventOccurrence const&) = delete;

		protected:
			InvocationEventOccurrence(){}

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~InvocationEventOccurrence() {}

			//*********************************
			// Operations
			//*********************************
			 
			virtual std::shared_ptr<Bag<fUML::Semantics::CommonBehavior::ParameterValue> > getParameterValues() = 0;
			
			 
			virtual bool match(std::shared_ptr<uml::Trigger> trigger) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<fUML::Semantics::CommonBehavior::Execution > getExecution() const = 0;
			
			
			virtual void setExecution(std::shared_ptr<fUML::Semantics::CommonBehavior::Execution> _execution) = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			
			std::shared_ptr<fUML::Semantics::CommonBehavior::Execution > m_execution;

		public:
			//*********************************
			// Union Getter
			//*********************************
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::vector<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: FUML_SEMANTICS_COMMONBEHAVIOR_INVOCATIONEVENTOCCURRENCE_HPP */
