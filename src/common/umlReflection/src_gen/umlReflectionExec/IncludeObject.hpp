//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef UML_INCLUDE_EXECUTION_HPP
#define UML_INCLUDE_EXECUTION_HPP

#include "PSCS/Semantics/StructuredClassifiers/impl/CS_ObjectImpl.hpp"
#include "umlReflectionExec/DirectedRelationshipObject.hpp"
#include "umlReflectionExec/NamedElementObject.hpp"

template <class T> 
class Bag;

namespace uml
{
	class Include;
}

namespace uml
{
	class Element;
	class ConnectorEnd;
}

namespace UML 
{
	class IncludeObject : virtual public UML::DirectedRelationshipObject , virtual public UML::NamedElementObject
	{
		public:
		    //constructors
		    IncludeObject(IncludeObject &obj);
		    IncludeObject(std::shared_ptr<uml::Include>);
		 	IncludeObject();
		    //destructor
		    virtual ~IncludeObject();
		
		    virtual std::shared_ptr<ecore::EObject> copy();
			IncludeObject& operator=(IncludeObject const&);

			virtual void destroy();
			
			virtual std::shared_ptr<uml::Include> getIncludeValue() const;
			virtual std::shared_ptr<uml::Element> getUmlValue() const;
			virtual void setUmlValue(std::shared_ptr<uml::Element>);
			virtual void setIncludeValue(std::shared_ptr<uml::Include>);
			virtual void setThisIncludeObjectPtr(std::weak_ptr<IncludeObject> thisObjectPtr);
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
			std::shared_ptr<uml::Include> m_IncludeValue = nullptr;
	};
}
#endif /* end of include guard: UML_INCLUDE_OBJECT_HPP */
