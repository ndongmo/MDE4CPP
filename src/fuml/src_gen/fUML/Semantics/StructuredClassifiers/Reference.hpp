//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_REFERENCE_HPP
#define FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_REFERENCE_HPP


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
	class EventOccurrence;
	class Execution;
	class ParameterValue;
}
namespace fUML::Semantics::SimpleClassifiers 
{
	class FeatureValue;
	class SignalInstance;
}
namespace fUML::Semantics::StructuredClassifiers 
{
	class Object;
}
namespace uml 
{
	class Class;
	class Classifier;
	class Operation;
	class StructuralFeature;
}

// base class includes
#include "fUML/Semantics/SimpleClassifiers/StructuredValue.hpp"

// enum includes



//*********************************
namespace fUML::Semantics::StructuredClassifiers 
{
	
	class Reference: virtual public fUML::Semantics::SimpleClassifiers::StructuredValue
	{
		public:
 			Reference(const Reference &) {}
			Reference& operator=(Reference const&) = delete;

		protected:
			Reference(){}

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Reference() {}

			//*********************************
			// Operations
			//*********************************
			 
			virtual std::shared_ptr<fUML::Semantics::Values::Value> _copy() = 0; 
			virtual void assignFeatureValue(std::shared_ptr<uml::StructuralFeature> feature,std::shared_ptr<Bag<fUML::Semantics::Values::Value>> values,int position) = 0; 
			virtual void destroy() = 0; 
			virtual std::shared_ptr<fUML::Semantics::CommonBehavior::Execution> dispatch(std::shared_ptr<uml::Operation> operation) = 0; 
			virtual bool equals(std::shared_ptr<fUML::Semantics::Values::Value> otherValue) = 0; 
			virtual std::shared_ptr<Bag<uml::Classifier> > getTypes() = 0; 
			virtual std::shared_ptr<Bag<fUML::Semantics::Values::Value> > getValues(std::shared_ptr<uml::StructuralFeature> feature,std::shared_ptr<Bag<fUML::Semantics::SimpleClassifiers::FeatureValue>> featureValues) = 0; 
			virtual std::shared_ptr<fUML::Semantics::Values::Value> new_() = 0; 
			virtual void removeValue(std::shared_ptr<uml::StructuralFeature> feature,std::shared_ptr<fUML::Semantics::Values::Value> value) = 0; 
			virtual std::shared_ptr<fUML::Semantics::SimpleClassifiers::FeatureValue> retrieveFeatureValue(std::shared_ptr<uml::StructuralFeature> feature) = 0; 
			virtual std::shared_ptr<Bag<fUML::Semantics::SimpleClassifiers::FeatureValue> > retrieveFeatureValues() = 0; 
			virtual void send(std::shared_ptr<fUML::Semantics::SimpleClassifiers::SignalInstance> signalInstance) = 0; 
			virtual void send(std::shared_ptr<fUML::Semantics::CommonBehavior::EventOccurrence> eventOccurrence) = 0; 
			virtual void setFeatureValue(std::shared_ptr<uml::StructuralFeature> feature,std::shared_ptr<Bag<fUML::Semantics::Values::Value>> values,int position) = 0; 
			virtual void startBehavior(std::shared_ptr<uml::Class> classifier,std::shared_ptr<Bag<fUML::Semantics::CommonBehavior::ParameterValue>> inputs) = 0; 
			virtual std::string toString() = 0;
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<fUML::Semantics::StructuredClassifiers::Object> getReferent() const = 0;
			
			virtual void setReferent(std::shared_ptr<fUML::Semantics::StructuredClassifiers::Object>) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			
			std::shared_ptr<fUML::Semantics::StructuredClassifiers::Object> m_referent;

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
#endif /* end of include guard: FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_REFERENCE_HPP */
