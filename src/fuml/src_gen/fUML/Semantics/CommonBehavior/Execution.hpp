//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_EXECUTION_HPP
#define FUML_SEMANTICS_COMMONBEHAVIOR_EXECUTION_HPP


#include <memory>
#include <string>
// forward declarations
template<class T> class Bag; 


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
	class ObjectActivation;
	class ParameterValue;
}
namespace fUML::Semantics::Loci 
{
	class Locus;
}
namespace fUML::Semantics::SimpleClassifiers 
{
	class FeatureValue;
}
namespace uml 
{
	class Behavior;
	class Classifier;
	class Parameter;
}

// base class includes
#include "fUML/Semantics/StructuredClassifiers/Object.hpp"

// enum includes



//*********************************
namespace fUML::Semantics::CommonBehavior 
{
	
	class Execution: virtual public fUML::Semantics::StructuredClassifiers::Object
	{
		public:
 			Execution(const Execution &) {}
			Execution& operator=(Execution const&) = delete;

		protected:
			Execution(){}

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Execution() {}

			//*********************************
			// Operations
			//*********************************
			 
			virtual std::shared_ptr<fUML::Semantics::Values::Value> _copy() = 0; 
			virtual void execute() = 0; 
			virtual std::shared_ptr<Bag<fUML::Semantics::CommonBehavior::ParameterValue> > getOutputParameterValues() = 0; 
			virtual std::shared_ptr<fUML::Semantics::CommonBehavior::ParameterValue> getParameterValue(std::shared_ptr<uml::Parameter> parameter) = 0; 
			virtual std::shared_ptr<fUML::Semantics::Values::Value> new_() = 0; 
			virtual void setParameterValue(std::shared_ptr<fUML::Semantics::CommonBehavior::ParameterValue> parameterValue) = 0; 
			virtual void terminate() = 0;
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<uml::Behavior> getBehavior() const = 0;
			
			virtual void setBehavior(std::shared_ptr<uml::Behavior>) = 0;
			
			virtual std::shared_ptr<fUML::Semantics::StructuredClassifiers::Object> getContext() const = 0;
			
			virtual void setContext(std::shared_ptr<fUML::Semantics::StructuredClassifiers::Object>) = 0;
			
			virtual std::shared_ptr<Bag<fUML::Semantics::CommonBehavior::ParameterValue>> getParameterValues() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			
			mutable std::shared_ptr<uml::Behavior> m_behavior;
			std::shared_ptr<fUML::Semantics::StructuredClassifiers::Object> m_context;
			mutable std::shared_ptr<Bag<fUML::Semantics::CommonBehavior::ParameterValue>> m_parameterValues;

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
#endif /* end of include guard: FUML_SEMANTICS_COMMONBEHAVIOR_EXECUTION_HPP */
