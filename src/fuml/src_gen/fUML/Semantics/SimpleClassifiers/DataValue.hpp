//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_SIMPLECLASSIFIERS_DATAVALUE_HPP
#define FUML_SEMANTICS_SIMPLECLASSIFIERS_DATAVALUE_HPP


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
namespace fUML::Semantics::SimpleClassifiers 
{
	class FeatureValue;
}
namespace uml 
{
	class Classifier;
	class DataType;
}

// base class includes
#include "fUML/Semantics/SimpleClassifiers/CompoundValue.hpp"

// enum includes



//*********************************
namespace fUML::Semantics::SimpleClassifiers 
{
	
	class DataValue: virtual public CompoundValue
	{
		public:
 			DataValue(const DataValue &) {}
			DataValue& operator=(DataValue const&) = delete;

		protected:
			DataValue(){}

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~DataValue() {}

			//*********************************
			// Operations
			//*********************************
			 
			virtual std::shared_ptr<fUML::Semantics::Values::Value> _copy() = 0;
			
			 
			virtual std::shared_ptr<Bag<uml::Classifier> > getTypes() = 0;
			
			 
			virtual std::shared_ptr<fUML::Semantics::Values::Value> new_() = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<uml::DataType > getType() const = 0;
			
			
			virtual void setType(std::shared_ptr<uml::DataType> _type) = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			
			std::shared_ptr<uml::DataType > m_type;

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
#endif /* end of include guard: FUML_SEMANTICS_SIMPLECLASSIFIERS_DATAVALUE_HPP */
