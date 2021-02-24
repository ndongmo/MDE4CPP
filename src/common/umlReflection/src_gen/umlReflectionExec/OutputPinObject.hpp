//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef UML_OUTPUTPIN_EXECUTION_HPP
#define UML_OUTPUTPIN_EXECUTION_HPP

#include "PSCS/Semantics/StructuredClassifiers/impl/CS_ObjectImpl.hpp"
#include "umlReflectionExec/PinObject.hpp"

template <class T> 
class Bag;

namespace uml
{
	class OutputPin;
}

namespace uml
{
	class Element;
	class ConnectorEnd;
}

namespace UML 
{
	class OutputPinObject : virtual public UML::PinObject
	{
		public:
		    //constructors
		    OutputPinObject(OutputPinObject &obj);
		    OutputPinObject(std::shared_ptr<uml::OutputPin>);
		 	OutputPinObject();
		    //destructor
		    virtual ~OutputPinObject();
		
		    virtual std::shared_ptr<ecore::EObject> copy();
			OutputPinObject& operator=(OutputPinObject const&);

			virtual void destroy();
			
			virtual std::shared_ptr<uml::OutputPin> getOutputPinValue() const;
			virtual std::shared_ptr<uml::Element> getUmlValue() const;
			virtual void setUmlValue(std::shared_ptr<uml::Element>);
			virtual void setOutputPinValue(std::shared_ptr<uml::OutputPin>);
			virtual void setThisOutputPinObjectPtr(std::weak_ptr<OutputPinObject> thisObjectPtr);
			virtual bool equals(std::shared_ptr<fUML::Semantics::Values::Value> otherValue);
			virtual std::string toString();
			virtual std::shared_ptr<Bag<PSCS::Semantics::StructuredClassifiers::CS_Object>> getDirectContainers();
			virtual void removeValue(std::shared_ptr<uml::StructuralFeature> feature, std::shared_ptr<fUML::Semantics::Values::Value> values);
			virtual std::shared_ptr<Bag<fUML::Semantics::Values::Value>> getValues(std::shared_ptr<uml::StructuralFeature> feature, std::shared_ptr<Bag<fUML::Semantics::SimpleClassifiers::FeatureValue>> featureValues);
			virtual std::shared_ptr<fUML::Semantics::SimpleClassifiers::FeatureValue> retrieveFeatureValue(std::shared_ptr<uml::StructuralFeature> feature);
			virtual void setFeatureValue(std::shared_ptr<uml::StructuralFeature> feature, std::shared_ptr<Bag<fUML::Semantics::Values::Value>> value, int position);
			virtual void assignFeatureValue(std::shared_ptr<uml::StructuralFeature> feature, std::shared_ptr<Bag<fUML::Semantics::Values::Value>> value, int position);
			virtual std::shared_ptr<Bag<fUML::Semantics::SimpleClassifiers::FeatureValue>> retrieveFeatureValues();

			virtual std::shared_ptr<Bag<PSCS::Semantics::StructuredClassifiers::CS_Link>> getLinks(std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_InteractionPoint> interactionPoint);
			virtual std::shared_ptr<Bag<fUML::Semantics::Values::Value>> retrieveEndValueAsInteractionPoint(std::shared_ptr<fUML::Semantics::Values::Value> endValue, std::shared_ptr<uml::ConnectorEnd> end);

		protected:
			std::shared_ptr<uml::OutputPin> m_OutputPinValue = nullptr;
	};
}
#endif /* end of include guard: UML_OUTPUTPIN_OBJECT_HPP */
