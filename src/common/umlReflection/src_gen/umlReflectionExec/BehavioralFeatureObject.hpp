//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef UML_BEHAVIORALFEATURE_EXECUTION_HPP
#define UML_BEHAVIORALFEATURE_EXECUTION_HPP

#include "PSCS/Semantics/StructuredClassifiers/impl/CS_ObjectImpl.hpp"
#include "umlReflectionExec/FeatureObject.hpp"
#include "umlReflectionExec/NamespaceObject.hpp"

template <class T> 
class Bag;

namespace uml
{
	class BehavioralFeature;
}

namespace uml
{
	class Element;
	class ConnectorEnd;
}

namespace UML 
{
	class BehavioralFeatureObject : virtual public UML::FeatureObject , virtual public UML::NamespaceObject
	{
		public:
		    //constructors
		    BehavioralFeatureObject(BehavioralFeatureObject &obj);
		    BehavioralFeatureObject(std::shared_ptr<uml::BehavioralFeature>);
		 	BehavioralFeatureObject();
		    //destructor
		    virtual ~BehavioralFeatureObject();
		
		    virtual std::shared_ptr<ecore::EObject> copy();
			BehavioralFeatureObject& operator=(BehavioralFeatureObject const&);

			virtual void destroy();
			
			virtual std::shared_ptr<uml::BehavioralFeature> getBehavioralFeatureValue() const;
			virtual std::shared_ptr<uml::Element> getUmlValue() const;
			virtual void setUmlValue(std::shared_ptr<uml::Element>);
			virtual void setBehavioralFeatureValue(std::shared_ptr<uml::BehavioralFeature>);
			virtual void setThisBehavioralFeatureObjectPtr(std::weak_ptr<BehavioralFeatureObject> thisObjectPtr);
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
			std::shared_ptr<uml::BehavioralFeature> m_BehavioralFeatureValue = nullptr;
	};
}
#endif /* end of include guard: UML_BEHAVIORALFEATURE_OBJECT_HPP */
