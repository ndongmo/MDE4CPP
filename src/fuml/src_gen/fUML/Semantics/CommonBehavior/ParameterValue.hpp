//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_PARAMETERVALUE_HPP
#define FUML_SEMANTICS_COMMONBEHAVIOR_PARAMETERVALUE_HPP


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
namespace fUML::Semantics::Values 
{
	class Value;
}
namespace uml 
{
	class Parameter;
}

// base class includes

// enum includes

#include "ecore/EModelElement.hpp"


//*********************************
namespace fUML::Semantics::CommonBehavior 
{
	
	class ParameterValue : virtual public ecore::EModelElement
	{
		public:
 			ParameterValue(const ParameterValue &) {}
			ParameterValue& operator=(ParameterValue const&) = delete;

		protected:
			ParameterValue(){}

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ParameterValue() {}

			//*********************************
			// Operations
			//*********************************
			 
			virtual std::shared_ptr<fUML::Semantics::CommonBehavior::ParameterValue> _copy() = 0;
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<uml::Parameter> getParameter() const = 0;
			
			virtual void setParameter(std::shared_ptr<uml::Parameter>) = 0;
			
			virtual std::shared_ptr<Bag<fUML::Semantics::Values::Value>> getValues() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			
			std::shared_ptr<uml::Parameter> m_parameter;
			mutable std::shared_ptr<Bag<fUML::Semantics::Values::Value>> m_values;

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
#endif /* end of include guard: FUML_SEMANTICS_COMMONBEHAVIOR_PARAMETERVALUE_HPP */
