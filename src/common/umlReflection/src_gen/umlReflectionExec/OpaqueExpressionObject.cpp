#include "umlReflectionExec/OpaqueExpressionObject.hpp"

//General Includes
#include "abstractDataTypes/SubsetUnion.hpp"
#include "uml/OpaqueExpression.hpp"
#include "umlReflection/UMLPackage.hpp"
#include "fUML/Semantics/Loci/Locus.hpp"
#include "uml/Class.hpp"
//Includes From Composite Structures
//Execution Engine Includes
#include "abstractDataTypes/Any.hpp"
#include "PSCS/Semantics/StructuredClassifiers/StructuredClassifiersFactory.hpp"
#include "PSCS/Semantics/StructuredClassifiers/CS_Reference.hpp"
#include "fUML/Semantics/SimpleClassifiers/SimpleClassifiersFactory.hpp"
#include "fUML/Semantics/Values/Value.hpp"
#include "fUML/Semantics/SimpleClassifiers/FeatureValue.hpp"
#include "PSCS/Semantics/StructuredClassifiers/CS_Link.hpp"
#include "PSCS/Semantics/StructuredClassifiers/CS_InteractionPoint.hpp"
#include "fUML/Semantics/CommonBehavior/Execution.hpp"
#include "fUML/Semantics/CommonBehavior/CommonBehaviorFactory.hpp"
#include "fUML/Semantics/Loci/ExecutionFactory.hpp"
#include "fUML/Semantics/Loci/ChoiceStrategy.hpp"
//UML Includes
#include "uml/UmlPackage.hpp"
#include "uml/Association.hpp"
#include "uml/Connector.hpp"
#include "uml/ConnectorEnd.hpp"
#include "uml/Operation.hpp"
#include "uml/Property.hpp"
#include "uml/Port.hpp"
//Property Includes
#include "uml/Comment.hpp"
#include "umlReflectionExec/CommentObject.hpp"
#include "uml/Element.hpp"
#include "umlReflectionExec/ElementObject.hpp"
#include "uml/Element.hpp"
#include "umlReflectionExec/ElementObject.hpp"
#include "uml/Dependency.hpp"
#include "umlReflectionExec/DependencyObject.hpp"
#include "fUML/Semantics/SimpleClassifiers/StringValue.hpp"
#include "uml/StringExpression.hpp"
#include "umlReflectionExec/StringExpressionObject.hpp"
#include "uml/Namespace.hpp"
#include "umlReflectionExec/NamespaceObject.hpp"
#include "fUML/Semantics/SimpleClassifiers/StringValue.hpp"
#include "fUML/Semantics/SimpleClassifiers/EnumerationValue.hpp"
#include "uml/VisibilityKind.hpp"
#include "uml/Behavior.hpp"
#include "umlReflectionExec/BehaviorObject.hpp"
#include "fUML/Semantics/SimpleClassifiers/StringValue.hpp"
#include "fUML/Semantics/SimpleClassifiers/StringValue.hpp"
#include "uml/Parameter.hpp"
#include "umlReflectionExec/ParameterObject.hpp"
#include "fUML/Semantics/SimpleClassifiers/EnumerationValue.hpp"
#include "uml/VisibilityKind.hpp"
#include "uml/TemplateParameter.hpp"
#include "umlReflectionExec/TemplateParameterObject.hpp"
#include "uml/TemplateParameter.hpp"
#include "umlReflectionExec/TemplateParameterObject.hpp"
#include "uml/Type.hpp"
#include "umlReflectionExec/TypeObject.hpp"
//Property Packages Includes
#include "primitivetypesReflection/PrimitiveTypesPackage.hpp"


using namespace UML;

OpaqueExpressionObject::OpaqueExpressionObject(std::shared_ptr<uml::OpaqueExpression> _element):

	m_OpaqueExpressionValue(_element)
{		
	this->getTypes()->insert(this->getTypes()->begin(), UML::UMLPackage::eInstance()->get_UML_OpaqueExpression());
}

OpaqueExpressionObject::OpaqueExpressionObject(OpaqueExpressionObject &obj):
	CS_ObjectImpl(obj)
{
}

OpaqueExpressionObject::OpaqueExpressionObject()
{	
	this->getTypes()->insert(this->getTypes()->begin(), UML::UMLPackage::eInstance()->get_UML_OpaqueExpression());
}

OpaqueExpressionObject::~OpaqueExpressionObject()
{
}

std::shared_ptr<ecore::EObject> OpaqueExpressionObject::copy()
{
	std::shared_ptr<OpaqueExpressionObject> element(new OpaqueExpressionObject(*this));
	element->setThisOpaqueExpressionObjectPtr(element);
	return element;
}

void OpaqueExpressionObject::destroy()
{	
	if(m_OpaqueExpressionValue)
	{

	}

	m_OpaqueExpressionValue.reset();

	fUML::Semantics::StructuredClassifiers::ObjectImpl::destroy();
}

std::shared_ptr<uml::Element> OpaqueExpressionObject::getUmlValue() const
{
	return getOpaqueExpressionValue();
}

std::shared_ptr<uml::OpaqueExpression> OpaqueExpressionObject::getOpaqueExpressionValue() const
{
	return m_OpaqueExpressionValue;
}

void OpaqueExpressionObject::setUmlValue(std::shared_ptr<uml::Element> _element)
{
	setOpaqueExpressionValue(std::dynamic_pointer_cast<uml::OpaqueExpression>(_element));
}

void OpaqueExpressionObject::setOpaqueExpressionValue(std::shared_ptr<uml::OpaqueExpression> _OpaqueExpressionElement)
{
	m_OpaqueExpressionValue = _OpaqueExpressionElement;
	//set super type values
	UML::ValueSpecificationObject::setValueSpecificationValue(_OpaqueExpressionElement);
}

void OpaqueExpressionObject::setThisOpaqueExpressionObjectPtr(std::weak_ptr<OpaqueExpressionObject> thisObjectPtr)
{
	setThisCS_ObjectPtr(thisObjectPtr);
}

bool OpaqueExpressionObject::equals(std::shared_ptr<fUML::Semantics::Values::Value> otherValue)
{
	bool isEqual = false;
	
	std::shared_ptr<OpaqueExpressionObject> otherOpaqueExpressionObject = std::dynamic_pointer_cast<OpaqueExpressionObject>(otherValue);

	if(otherOpaqueExpressionObject != nullptr)
	{
		if(this->getOpaqueExpressionValue() == otherOpaqueExpressionObject->getOpaqueExpressionValue())
		{
			isEqual = true;
		}
	}

	return isEqual;
}

std::string OpaqueExpressionObject::toString()
{
	std::string buffer = "Instance of 'OpaqueExpressionObject', " + std::to_string(getTypes()->size()) + " types (";
	for(unsigned int i = 0; i < getTypes()->size(); ++i)
	{
		buffer += "type{" + std::to_string(i) + "}: '" + getTypes()->at(i)->getName() + "', ";
	}
	buffer +=")";

	return buffer;
}

std::shared_ptr<Bag<PSCS::Semantics::StructuredClassifiers::CS_Object>> OpaqueExpressionObject::getDirectContainers()
{   
	std::shared_ptr<Bag<PSCS::Semantics::StructuredClassifiers::CS_Object>> directContainers(new Bag<PSCS::Semantics::StructuredClassifiers::CS_Object>());
	return directContainers;
}


std::shared_ptr<Bag<PSCS::Semantics::StructuredClassifiers::CS_Link>> OpaqueExpressionObject::getLinks(std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_InteractionPoint> interactionPoint)
{
	std::shared_ptr<Bag<PSCS::Semantics::StructuredClassifiers::CS_Link>> allLinks(new Bag<PSCS::Semantics::StructuredClassifiers::CS_Link>());
	
	//Retrieve all metamodel elements
	std::shared_ptr<Bag<uml::Element>> modelMembers = UML::UMLPackage::eInstance()->allOwnedElements();
	std::shared_ptr<Bag<uml::Connector>> connectors(new Bag<uml::Connector>());
	std::shared_ptr<uml::Port> definingPort = interactionPoint->getDefiningPort();
	
	//Filter model elements for connectors that are connected to interactionPoints' definingPort
	unsigned int membersSize = modelMembers->size();
	for(unsigned int i = 0; i < membersSize; i++)
	{
		std::shared_ptr<uml::Connector> elementAsConnector = std::dynamic_pointer_cast<uml::Connector>(modelMembers->at(i));
		if(elementAsConnector != nullptr)
		{
			std::shared_ptr<uml::ConnectorEnd> end1 = elementAsConnector->getEnd()->at(0);
			std::shared_ptr<uml::ConnectorEnd> end2 = elementAsConnector->getEnd()->at(1);
			
			if((end1->getRole() == definingPort) || (end2->getRole() == definingPort))
			{
				connectors->add(elementAsConnector);
			}
		}
	}

	
	//For each connector that is connected to interactionPoints' definingPort:
	//- retrieve FeatureValue of otherEnd
	//-	create Link and add both interactionPoint as well as retrieved FeatureValue of otherEnd to the links' featureValues property
	//- add Link to allLinks
	unsigned int connectorsSize = connectors->size();
	for(unsigned int i = 0; i < connectorsSize; i++)
	{
		std::shared_ptr<uml::Connector> currentConnector = connectors->at(i);
		unsigned int definingEndIndex = 0, otherEndIndex = 1;
		std::shared_ptr<uml::ConnectorEnd> definingEnd = currentConnector->getEnd()->at(0);
		std::shared_ptr<uml::ConnectorEnd> otherEnd = currentConnector->getEnd()->at(1);
		std::shared_ptr<Bag<fUML::Semantics::Values::Value>> otherEndValues(new Bag<fUML::Semantics::Values::Value>());
		std::shared_ptr<Bag<fUML::Semantics::Values::Value>> definingEndValues(new Bag<fUML::Semantics::Values::Value>());
		
		definingEndValues->add(interactionPoint);

		if(definingPort == otherEnd->getRole())
		{
			definingEndIndex = 1;
			otherEndIndex = 0; 
			definingEnd = currentConnector->getEnd()->at(1);; 
			otherEnd = currentConnector->getEnd()->at(0);;
		}
		
		std::shared_ptr<Bag<fUML::Semantics::SimpleClassifiers::FeatureValue>> dummyBag(new Bag<fUML::Semantics::SimpleClassifiers::FeatureValue>());
		otherEndValues = interactionPoint->getReferent()->getValues(currentConnector->getType()->getMemberEnd()->at(otherEndIndex), dummyBag);
			
		//If other end of connector is a port, the corresponding FeatureValue has to be retrieved as CS_InteractionPoint from its owner
		//instead of being retrieved from this connector end as just a CS_Reference
		if(std::dynamic_pointer_cast<uml::Port>(otherEnd->getRole()) != nullptr)
		{
			//otherEndValues->at(0) is passed to retrieve the ports owner later on
			otherEndValues = this->retrieveEndValueAsInteractionPoint(otherEndValues->at(0), otherEnd);
		}
			
		std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Link> newLink = PSCS::Semantics::StructuredClassifiers::StructuredClassifiersFactory::eInstance()->createCS_Link();
		newLink->setType(currentConnector->getType());
		newLink->assignFeatureValue(newLink->getType()->getMemberEnd()->at(definingEndIndex), definingEndValues, -1);
		newLink->assignFeatureValue(newLink->getType()->getMemberEnd()->at(otherEndIndex), otherEndValues, -1);
			
		allLinks->add(newLink);
	}
	
	return allLinks;
}

std::shared_ptr<Bag<fUML::Semantics::Values::Value>> OpaqueExpressionObject::retrieveEndValueAsInteractionPoint(std::shared_ptr<fUML::Semantics::Values::Value> endValue, std::shared_ptr<uml::ConnectorEnd> end)
{
	return nullptr;
}

void OpaqueExpressionObject::removeValue(std::shared_ptr<uml::StructuralFeature> feature, std::shared_ptr<fUML::Semantics::Values::Value> value)
{
	if (feature->getMetaElementID() != uml::UmlPackage::PROPERTY_CLASS && feature->getMetaElementID() != uml::UmlPackage::PORT_CLASS && feature->getMetaElementID() != uml::UmlPackage::EXTENSIONEND_CLASS)
	{
		std::cerr << __PRETTY_FUNCTION__ << ": feature is null or not kind of uml::Property" << std::endl;
		throw "feature is null or not kind of uml::Property";
	}

	if (m_OpaqueExpressionValue == nullptr)
	{
		std::cerr << __PRETTY_FUNCTION__ << ": no value stored inside OpaqueExpressionObject (property: " << feature->getName() << ")" << std::endl;
		throw "NullPointerException";	
	}

	if (feature == UML::UMLPackage::eInstance()->get_UML_Element_ownedComment())
	{
		if (value == nullptr) // clear mode
		{
			m_OpaqueExpressionValue->getOwnedComment()->clear();
		}
		else
		{
			/* Should use PSCS::CS_Reference but dynamic_pointer_cast fails --> using fUML::Reference instead
			std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Reference> reference = std::dynamic_pointer_cast<PSCS::Semantics::StructuredClassifiers::CS_Reference>(value); */
			std::shared_ptr<fUML::Semantics::StructuredClassifiers::Reference> reference = std::dynamic_pointer_cast<fUML::Semantics::StructuredClassifiers::Reference>(value);
			std::shared_ptr<UML::CommentObject> inputValue = std::dynamic_pointer_cast<UML::CommentObject>(reference->getReferent());
			if (inputValue != nullptr)
			{
				m_OpaqueExpressionValue->getOwnedComment()->erase(inputValue->getCommentValue());
			}
		}
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_NamedElement_name())
	{
				// no default value defined, clear not realized

	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_NamedElement_nameExpression())
	{
				m_OpaqueExpressionValue->getNameExpression().reset();

	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_NamedElement_visibility())
	{
				// no default value defined, clear not realized

	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_OpaqueExpression_behavior())
	{
				m_OpaqueExpressionValue->getBehavior().reset();

	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_OpaqueExpression_body())
	{
		if (value == nullptr) // clear mode
		{
			m_OpaqueExpressionValue->getBody()->clear();
		}
		else
		{
			std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue> inputValue = std::dynamic_pointer_cast<fUML::Semantics::SimpleClassifiers::StringValue>(value);
			if (inputValue != nullptr)
			{
				std::string specificValue = inputValue->getValue();
				std::shared_ptr<Bag<std::string>> valueList = m_OpaqueExpressionValue->getBody();
				Bag<std::string>::iterator iter = valueList->begin();
				Bag<std::string>::iterator end = valueList->end();
				while (iter != end)
				{
					if (specificValue == *(*iter))
					{
						valueList->erase(iter);
						break;
					}
					iter++;
				}
			}
		}
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_OpaqueExpression_language())
	{
		if (value == nullptr) // clear mode
		{
			m_OpaqueExpressionValue->getLanguage()->clear();
		}
		else
		{
			std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue> inputValue = std::dynamic_pointer_cast<fUML::Semantics::SimpleClassifiers::StringValue>(value);
			if (inputValue != nullptr)
			{
				std::string specificValue = inputValue->getValue();
				std::shared_ptr<Bag<std::string>> valueList = m_OpaqueExpressionValue->getLanguage();
				Bag<std::string>::iterator iter = valueList->begin();
				Bag<std::string>::iterator end = valueList->end();
				while (iter != end)
				{
					if (specificValue == *(*iter))
					{
						valueList->erase(iter);
						break;
					}
					iter++;
				}
			}
		}
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_PackageableElement_visibility())
	{
				m_OpaqueExpressionValue->setVisibility(uml::VisibilityKind::PUBLIC /*defined default value*/);

	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_ParameterableElement_owningTemplateParameter())
	{
				m_OpaqueExpressionValue->getOwningTemplateParameter().reset();

	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_ParameterableElement_templateParameter())
	{
				m_OpaqueExpressionValue->getTemplateParameter().reset();

	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_TypedElement_type())
	{
				m_OpaqueExpressionValue->getType().reset();

	}
}


std::shared_ptr<Bag<fUML::Semantics::Values::Value>> OpaqueExpressionObject::getValues(std::shared_ptr<uml::StructuralFeature> feature, std::shared_ptr<Bag<fUML::Semantics::SimpleClassifiers::FeatureValue>> featureValues)
{
	if (feature->getMetaElementID() != uml::UmlPackage::PROPERTY_CLASS && feature->getMetaElementID() != uml::UmlPackage::PORT_CLASS && feature->getMetaElementID() != uml::UmlPackage::EXTENSIONEND_CLASS)
	{
		std::cerr << __PRETTY_FUNCTION__ << ": feature is null or not kind of uml::Property" << std::endl;
		throw "feature is null or not kind of uml::Property";
	}

	if (m_OpaqueExpressionValue == nullptr)
	{
		std::cerr << __PRETTY_FUNCTION__ << ": no value stored inside OpaqueExpressionObject (property: " << feature->getName() << ")" << std::endl;
		throw "NullPointerException";	
	}

	std::shared_ptr<Bag<fUML::Semantics::Values::Value>> values(new Bag<fUML::Semantics::Values::Value>());
	if (feature == UML::UMLPackage::eInstance()->get_UML_Element_ownedComment())
	{
		std::shared_ptr<Bag<uml::Comment>> ownedCommentList = m_OpaqueExpressionValue->getOwnedComment();
		Bag<uml::Comment>::iterator iter = ownedCommentList->begin();
		Bag<uml::Comment>::iterator end = ownedCommentList->end();
		while (iter != end)
		{
			std::shared_ptr<UML::CommentObject> value(new UML::CommentObject());
			value->setThisCommentObjectPtr(value);
			value->setLocus(this->getLocus());
			value->setCommentValue(*iter);
			std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Reference> reference = PSCS::Semantics::StructuredClassifiers::StructuredClassifiersFactory::eInstance()->createCS_Reference();
			reference->setReferent(value);
			reference->setCompositeReferent(value);
			values->add(reference);
			iter++;
		} 
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_Element_ownedElement())
	{
		std::shared_ptr<Bag<uml::Element>> ownedElementList = m_OpaqueExpressionValue->getOwnedElement();
		Bag<uml::Element>::iterator iter = ownedElementList->begin();
		Bag<uml::Element>::iterator end = ownedElementList->end();
		while (iter != end)
		{
			std::shared_ptr<UML::ElementObject> value(new UML::ElementObject());
			value->setThisElementObjectPtr(value);
			value->setLocus(this->getLocus());
			value->setElementValue(*iter);
			std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Reference> reference = PSCS::Semantics::StructuredClassifiers::StructuredClassifiersFactory::eInstance()->createCS_Reference();
			reference->setReferent(value);
			reference->setCompositeReferent(value);
			values->add(reference);
			iter++;
		} 
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_Element_owner())
	{
		std::shared_ptr<UML::ElementObject> value(new UML::ElementObject());
		value->setThisElementObjectPtr(value);
		value->setLocus(this->getLocus());
		value->setElementValue(m_OpaqueExpressionValue->getOwner().lock());
		std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Reference> reference = PSCS::Semantics::StructuredClassifiers::StructuredClassifiersFactory::eInstance()->createCS_Reference();
		reference->setReferent(value);
		values->add(reference);
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_NamedElement_clientDependency())
	{
		std::shared_ptr<Bag<uml::Dependency>> clientDependencyList = m_OpaqueExpressionValue->getClientDependency();
		Bag<uml::Dependency>::iterator iter = clientDependencyList->begin();
		Bag<uml::Dependency>::iterator end = clientDependencyList->end();
		while (iter != end)
		{
			std::shared_ptr<UML::DependencyObject> value(new UML::DependencyObject());
			value->setThisDependencyObjectPtr(value);
			value->setLocus(this->getLocus());
			value->setDependencyValue(*iter);
			std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Reference> reference = PSCS::Semantics::StructuredClassifiers::StructuredClassifiersFactory::eInstance()->createCS_Reference();
			reference->setReferent(value);
			values->add(reference);
			iter++;
		} 
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_NamedElement_name())
	{
		std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue> value = fUML::Semantics::SimpleClassifiers::SimpleClassifiersFactory::eInstance()->createStringValue();
		value->setValue(m_OpaqueExpressionValue->getName());
		values->add(value);
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_NamedElement_nameExpression())
	{
		std::shared_ptr<UML::StringExpressionObject> value(new UML::StringExpressionObject());
		value->setThisStringExpressionObjectPtr(value);
		value->setLocus(this->getLocus());
		value->setStringExpressionValue(m_OpaqueExpressionValue->getNameExpression());
		std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Reference> reference = PSCS::Semantics::StructuredClassifiers::StructuredClassifiersFactory::eInstance()->createCS_Reference();
		reference->setReferent(value);
		reference->setCompositeReferent(value);
		values->add(reference);
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_NamedElement_namespace())
	{
		std::shared_ptr<UML::NamespaceObject> value(new UML::NamespaceObject());
		value->setThisNamespaceObjectPtr(value);
		value->setLocus(this->getLocus());
		value->setNamespaceValue(m_OpaqueExpressionValue->getNamespace().lock());
		std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Reference> reference = PSCS::Semantics::StructuredClassifiers::StructuredClassifiersFactory::eInstance()->createCS_Reference();
		reference->setReferent(value);
		values->add(reference);
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_NamedElement_qualifiedName())
	{
		std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue> value = fUML::Semantics::SimpleClassifiers::SimpleClassifiersFactory::eInstance()->createStringValue();
		value->setValue(m_OpaqueExpressionValue->getQualifiedName());
		values->add(value);
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_NamedElement_visibility())
	{
		uml::VisibilityKind visibility = m_OpaqueExpressionValue->getVisibility();
		std::shared_ptr<fUML::Semantics::SimpleClassifiers::EnumerationValue> value = fUML::Semantics::SimpleClassifiers::SimpleClassifiersFactory::eInstance()->createEnumerationValue();
		if (visibility == uml::VisibilityKind::PUBLIC)
		{
			value->setLiteral(UML::UMLPackage::eInstance()->get_UML_VisibilityKind_public());
		}
		if (visibility == uml::VisibilityKind::PRIVATE)
		{
			value->setLiteral(UML::UMLPackage::eInstance()->get_UML_VisibilityKind_private());
		}
		if (visibility == uml::VisibilityKind::PROTECTED)
		{
			value->setLiteral(UML::UMLPackage::eInstance()->get_UML_VisibilityKind_protected());
		}
		if (visibility == uml::VisibilityKind::PACKAGE)
		{
			value->setLiteral(UML::UMLPackage::eInstance()->get_UML_VisibilityKind_package());
		}
		values->add(value);
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_OpaqueExpression_behavior())
	{
		std::shared_ptr<UML::BehaviorObject> value(new UML::BehaviorObject());
		value->setThisBehaviorObjectPtr(value);
		value->setLocus(this->getLocus());
		value->setBehaviorValue(m_OpaqueExpressionValue->getBehavior());
		std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Reference> reference = PSCS::Semantics::StructuredClassifiers::StructuredClassifiersFactory::eInstance()->createCS_Reference();
		reference->setReferent(value);
		values->add(reference);
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_OpaqueExpression_body())
	{
		std::shared_ptr<Bag<std::string>> valueList = m_OpaqueExpressionValue->getBody();
		Bag<std::string>::iterator iter = valueList->begin();
		Bag<std::string>::iterator end = valueList->end();
		while (iter != end)
		{
			std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue> value = fUML::Semantics::SimpleClassifiers::SimpleClassifiersFactory::eInstance()->createStringValue();
			value->setValue(*(*iter));
			values->push_back(value);
			iter++;
		}
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_OpaqueExpression_language())
	{
		std::shared_ptr<Bag<std::string>> valueList = m_OpaqueExpressionValue->getLanguage();
		Bag<std::string>::iterator iter = valueList->begin();
		Bag<std::string>::iterator end = valueList->end();
		while (iter != end)
		{
			std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue> value = fUML::Semantics::SimpleClassifiers::SimpleClassifiersFactory::eInstance()->createStringValue();
			value->setValue(*(*iter));
			values->push_back(value);
			iter++;
		}
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_OpaqueExpression_result())
	{
		std::shared_ptr<UML::ParameterObject> value(new UML::ParameterObject());
		value->setThisParameterObjectPtr(value);
		value->setLocus(this->getLocus());
		value->setParameterValue(m_OpaqueExpressionValue->getResult());
		std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Reference> reference = PSCS::Semantics::StructuredClassifiers::StructuredClassifiersFactory::eInstance()->createCS_Reference();
		reference->setReferent(value);
		values->add(reference);
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_PackageableElement_visibility())
	{
		uml::VisibilityKind visibility = m_OpaqueExpressionValue->getVisibility();
		std::shared_ptr<fUML::Semantics::SimpleClassifiers::EnumerationValue> value = fUML::Semantics::SimpleClassifiers::SimpleClassifiersFactory::eInstance()->createEnumerationValue();
		if (visibility == uml::VisibilityKind::PUBLIC)
		{
			value->setLiteral(UML::UMLPackage::eInstance()->get_UML_VisibilityKind_public());
		}
		if (visibility == uml::VisibilityKind::PRIVATE)
		{
			value->setLiteral(UML::UMLPackage::eInstance()->get_UML_VisibilityKind_private());
		}
		if (visibility == uml::VisibilityKind::PROTECTED)
		{
			value->setLiteral(UML::UMLPackage::eInstance()->get_UML_VisibilityKind_protected());
		}
		if (visibility == uml::VisibilityKind::PACKAGE)
		{
			value->setLiteral(UML::UMLPackage::eInstance()->get_UML_VisibilityKind_package());
		}
		values->add(value);
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_ParameterableElement_owningTemplateParameter())
	{
		std::shared_ptr<UML::TemplateParameterObject> value(new UML::TemplateParameterObject());
		value->setThisTemplateParameterObjectPtr(value);
		value->setLocus(this->getLocus());
		value->setTemplateParameterValue(m_OpaqueExpressionValue->getOwningTemplateParameter().lock());
		std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Reference> reference = PSCS::Semantics::StructuredClassifiers::StructuredClassifiersFactory::eInstance()->createCS_Reference();
		reference->setReferent(value);
		values->add(reference);
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_ParameterableElement_templateParameter())
	{
		std::shared_ptr<UML::TemplateParameterObject> value(new UML::TemplateParameterObject());
		value->setThisTemplateParameterObjectPtr(value);
		value->setLocus(this->getLocus());
		value->setTemplateParameterValue(m_OpaqueExpressionValue->getTemplateParameter());
		std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Reference> reference = PSCS::Semantics::StructuredClassifiers::StructuredClassifiersFactory::eInstance()->createCS_Reference();
		reference->setReferent(value);
		values->add(reference);
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_TypedElement_type())
	{
		std::shared_ptr<UML::TypeObject> value(new UML::TypeObject());
		value->setThisTypeObjectPtr(value);
		value->setLocus(this->getLocus());
		value->setTypeValue(m_OpaqueExpressionValue->getType());
		std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Reference> reference = PSCS::Semantics::StructuredClassifiers::StructuredClassifiersFactory::eInstance()->createCS_Reference();
		reference->setReferent(value);
		values->add(reference);
	}
	return values;
}

std::shared_ptr<fUML::Semantics::SimpleClassifiers::FeatureValue> OpaqueExpressionObject::retrieveFeatureValue(std::shared_ptr<uml::StructuralFeature> feature)
{
	std::shared_ptr<fUML::Semantics::SimpleClassifiers::FeatureValue> featureValue(fUML::Semantics::SimpleClassifiers::SimpleClassifiersFactory::eInstance()->createFeatureValue());
	featureValue->setFeature(feature);

	std::shared_ptr<Bag<fUML::Semantics::SimpleClassifiers::FeatureValue>> featureValues(new Bag<fUML::Semantics::SimpleClassifiers::FeatureValue>());
	std::shared_ptr<Bag<fUML::Semantics::Values::Value>> values = this->getValues(feature, featureValues);
	
	unsigned int valuesSize = values->size();
	for(unsigned int i = 0; i < valuesSize; i++)
	{
		featureValue->getValues()->add(values->at(i));
	}

	return featureValue;
}


void OpaqueExpressionObject::setFeatureValue(std::shared_ptr<uml::StructuralFeature> feature, std::shared_ptr<Bag<fUML::Semantics::Values::Value>> values, int position)
{
	if (feature->getMetaElementID() != uml::UmlPackage::PROPERTY_CLASS && feature->getMetaElementID() != uml::UmlPackage::PORT_CLASS && feature->getMetaElementID() != uml::UmlPackage::EXTENSIONEND_CLASS)
	{
		std::cerr << __PRETTY_FUNCTION__ << ": feature is null or not kind of uml::Property" << std::endl;
		throw "feature is null or not kind of uml::Property";
	}

	if (m_OpaqueExpressionValue == nullptr)
	{
		std::cerr << __PRETTY_FUNCTION__ << ": no value stored inside OpaqueExpressionObject (property: " << feature->getName() << ")" << std::endl;
		throw "NullPointerException";	
	}

	if (values->size() == 0)
	{
		std::cout << __PRETTY_FUNCTION__ << ": no input value given" << std::endl;
		return;
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_Element_ownedComment())
	{
		Bag<fUML::Semantics::Values::Value>::iterator iter = values->begin();
		Bag<fUML::Semantics::Values::Value>::iterator end = values->end();
		m_OpaqueExpressionValue->getOwnedComment()->clear();
		while (iter != end)
		{
			std::shared_ptr<fUML::Semantics::Values::Value> inputValue = *iter;
			std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Reference> reference = std::dynamic_pointer_cast<PSCS::Semantics::StructuredClassifiers::CS_Reference>(inputValue);
			std::shared_ptr<UML::CommentObject> value = std::dynamic_pointer_cast<UML::CommentObject>(reference->getReferent());
			if (value != nullptr)
			{
				m_OpaqueExpressionValue->getOwnedComment()->push_back(value->getCommentValue());
			}
			
			iter++;
		}
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_NamedElement_name())
	{
		std::shared_ptr<fUML::Semantics::Values::Value> inputValue = values->at(0);
		std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue> valueObject = std::dynamic_pointer_cast<fUML::Semantics::SimpleClassifiers::StringValue>(inputValue);
		if (valueObject != nullptr)
		{
			m_OpaqueExpressionValue->setName(valueObject->getValue());
		}
		
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_NamedElement_nameExpression())
	{
		std::shared_ptr<fUML::Semantics::Values::Value> inputValue = values->at(0);
		std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Reference> reference = std::dynamic_pointer_cast<PSCS::Semantics::StructuredClassifiers::CS_Reference>(inputValue);
		std::shared_ptr<UML::StringExpressionObject> value = std::dynamic_pointer_cast<UML::StringExpressionObject>(reference->getReferent());
		if (value != nullptr)
		{
			m_OpaqueExpressionValue->setNameExpression(value->getStringExpressionValue());
		}
		
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_NamedElement_visibility())
	{
		std::shared_ptr<fUML::Semantics::Values::Value> inputValue = values->at(0);
		std::shared_ptr<fUML::Semantics::SimpleClassifiers::EnumerationValue> enumValue = std::dynamic_pointer_cast<fUML::Semantics::SimpleClassifiers::EnumerationValue>(inputValue);
		std::shared_ptr<uml::EnumerationLiteral> literal = enumValue->getLiteral();
		if (literal == UML::UMLPackage::eInstance()->get_UML_VisibilityKind_public())
		{
			m_OpaqueExpressionValue->setVisibility(uml::VisibilityKind::PUBLIC);
		}
		if (literal == UML::UMLPackage::eInstance()->get_UML_VisibilityKind_private())
		{
			m_OpaqueExpressionValue->setVisibility(uml::VisibilityKind::PRIVATE);
		}
		if (literal == UML::UMLPackage::eInstance()->get_UML_VisibilityKind_protected())
		{
			m_OpaqueExpressionValue->setVisibility(uml::VisibilityKind::PROTECTED);
		}
		if (literal == UML::UMLPackage::eInstance()->get_UML_VisibilityKind_package())
		{
			m_OpaqueExpressionValue->setVisibility(uml::VisibilityKind::PACKAGE);
		}
		
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_OpaqueExpression_behavior())
	{
		std::shared_ptr<fUML::Semantics::Values::Value> inputValue = values->at(0);
		std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Reference> reference = std::dynamic_pointer_cast<PSCS::Semantics::StructuredClassifiers::CS_Reference>(inputValue);
		std::shared_ptr<UML::BehaviorObject> value = std::dynamic_pointer_cast<UML::BehaviorObject>(reference->getReferent());
		if (value != nullptr)
		{
			m_OpaqueExpressionValue->setBehavior(value->getBehaviorValue());
		}
		
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_OpaqueExpression_body())
	{
		Bag<fUML::Semantics::Values::Value>::iterator iter = values->begin();
		Bag<fUML::Semantics::Values::Value>::iterator end = values->end();
		m_OpaqueExpressionValue->getBody()->clear();
		while (iter != end)
		{
			std::shared_ptr<fUML::Semantics::Values::Value> inputValue = *iter;
			std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue> valueObject = std::dynamic_pointer_cast<fUML::Semantics::SimpleClassifiers::StringValue>(inputValue);
			if (valueObject != nullptr)
			{
				std::shared_ptr<std::string> value(new std::string(valueObject->getValue()));
				m_OpaqueExpressionValue->getBody()->push_back(value);
			}
			
			iter++;
		}
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_OpaqueExpression_language())
	{
		Bag<fUML::Semantics::Values::Value>::iterator iter = values->begin();
		Bag<fUML::Semantics::Values::Value>::iterator end = values->end();
		m_OpaqueExpressionValue->getLanguage()->clear();
		while (iter != end)
		{
			std::shared_ptr<fUML::Semantics::Values::Value> inputValue = *iter;
			std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue> valueObject = std::dynamic_pointer_cast<fUML::Semantics::SimpleClassifiers::StringValue>(inputValue);
			if (valueObject != nullptr)
			{
				std::shared_ptr<std::string> value(new std::string(valueObject->getValue()));
				m_OpaqueExpressionValue->getLanguage()->push_back(value);
			}
			
			iter++;
		}
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_PackageableElement_visibility())
	{
		std::shared_ptr<fUML::Semantics::Values::Value> inputValue = values->at(0);
		std::shared_ptr<fUML::Semantics::SimpleClassifiers::EnumerationValue> enumValue = std::dynamic_pointer_cast<fUML::Semantics::SimpleClassifiers::EnumerationValue>(inputValue);
		std::shared_ptr<uml::EnumerationLiteral> literal = enumValue->getLiteral();
		if (literal == UML::UMLPackage::eInstance()->get_UML_VisibilityKind_public())
		{
			m_OpaqueExpressionValue->setVisibility(uml::VisibilityKind::PUBLIC);
		}
		if (literal == UML::UMLPackage::eInstance()->get_UML_VisibilityKind_private())
		{
			m_OpaqueExpressionValue->setVisibility(uml::VisibilityKind::PRIVATE);
		}
		if (literal == UML::UMLPackage::eInstance()->get_UML_VisibilityKind_protected())
		{
			m_OpaqueExpressionValue->setVisibility(uml::VisibilityKind::PROTECTED);
		}
		if (literal == UML::UMLPackage::eInstance()->get_UML_VisibilityKind_package())
		{
			m_OpaqueExpressionValue->setVisibility(uml::VisibilityKind::PACKAGE);
		}
		
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_ParameterableElement_templateParameter())
	{
		std::shared_ptr<fUML::Semantics::Values::Value> inputValue = values->at(0);
		std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Reference> reference = std::dynamic_pointer_cast<PSCS::Semantics::StructuredClassifiers::CS_Reference>(inputValue);
		std::shared_ptr<UML::TemplateParameterObject> value = std::dynamic_pointer_cast<UML::TemplateParameterObject>(reference->getReferent());
		if (value != nullptr)
		{
			m_OpaqueExpressionValue->setTemplateParameter(value->getTemplateParameterValue());
		}
		
	}
	if (feature == UML::UMLPackage::eInstance()->get_UML_TypedElement_type())
	{
		std::shared_ptr<fUML::Semantics::Values::Value> inputValue = values->at(0);
		std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Reference> reference = std::dynamic_pointer_cast<PSCS::Semantics::StructuredClassifiers::CS_Reference>(inputValue);
		std::shared_ptr<UML::TypeObject> value = std::dynamic_pointer_cast<UML::TypeObject>(reference->getReferent());
		if (value != nullptr)
		{
			m_OpaqueExpressionValue->setType(value->getTypeValue());
		}
		
	}
}

void OpaqueExpressionObject::assignFeatureValue(std::shared_ptr<uml::StructuralFeature> feature, std::shared_ptr<Bag<fUML::Semantics::Values::Value>> values, int position)
{
	this->setFeatureValue(feature, values, position);
}

std::shared_ptr<Bag<fUML::Semantics::SimpleClassifiers::FeatureValue>> OpaqueExpressionObject::retrieveFeatureValues()
{
	std::shared_ptr<uml::Classifier> type = this->getTypes()->at(0);
	std::shared_ptr<Bag<uml::Property>> allAttributes = type->getAllAttributes();
	std::shared_ptr<Bag<fUML::Semantics::SimpleClassifiers::FeatureValue>> featureValues(new Bag<fUML::Semantics::SimpleClassifiers::FeatureValue>());
	
	unsigned int allAttributesSize = allAttributes->size();

	for(unsigned int i = 0; i < allAttributesSize; i++)
	{
		std::shared_ptr<uml::Property> property = allAttributes->at(i);
		if (property == UML::UMLPackage::eInstance()->get_UML_Element_ownedComment() && m_OpaqueExpressionValue->getOwnedComment() != nullptr)
		{
			featureValues->add(this->retrieveFeatureValue(property));
		}
		if (property == UML::UMLPackage::eInstance()->get_UML_Element_ownedElement() && m_OpaqueExpressionValue->getOwnedElement() != nullptr)
		{
			featureValues->add(this->retrieveFeatureValue(property));
		}
		if (property == UML::UMLPackage::eInstance()->get_UML_Element_owner() && m_OpaqueExpressionValue->getOwner().lock() != nullptr)
		{
			featureValues->add(this->retrieveFeatureValue(property));
		}
		if (property == UML::UMLPackage::eInstance()->get_UML_NamedElement_clientDependency() && m_OpaqueExpressionValue->getClientDependency() != nullptr)
		{
			featureValues->add(this->retrieveFeatureValue(property));
		}
		if (property == UML::UMLPackage::eInstance()->get_UML_NamedElement_nameExpression() && m_OpaqueExpressionValue->getNameExpression() != nullptr)
		{
			featureValues->add(this->retrieveFeatureValue(property));
		}
		if (property == UML::UMLPackage::eInstance()->get_UML_NamedElement_namespace() && m_OpaqueExpressionValue->getNamespace().lock() != nullptr)
		{
			featureValues->add(this->retrieveFeatureValue(property));
		}
		if (property == UML::UMLPackage::eInstance()->get_UML_OpaqueExpression_behavior() && m_OpaqueExpressionValue->getBehavior() != nullptr)
		{
			featureValues->add(this->retrieveFeatureValue(property));
		}
		if (property == UML::UMLPackage::eInstance()->get_UML_OpaqueExpression_result() && m_OpaqueExpressionValue->getResult() != nullptr)
		{
			featureValues->add(this->retrieveFeatureValue(property));
		}
		if (property == UML::UMLPackage::eInstance()->get_UML_ParameterableElement_owningTemplateParameter() && m_OpaqueExpressionValue->getOwningTemplateParameter().lock() != nullptr)
		{
			featureValues->add(this->retrieveFeatureValue(property));
		}
		if (property == UML::UMLPackage::eInstance()->get_UML_ParameterableElement_templateParameter() && m_OpaqueExpressionValue->getTemplateParameter() != nullptr)
		{
			featureValues->add(this->retrieveFeatureValue(property));
		}
		if (property == UML::UMLPackage::eInstance()->get_UML_TypedElement_type() && m_OpaqueExpressionValue->getType() != nullptr)
		{
			featureValues->add(this->retrieveFeatureValue(property));
		}
	}
	
	return featureValues;
}
