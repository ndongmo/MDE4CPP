#include "ocl/Evaluations/impl/AttributeCallExpEvalImpl.hpp"

#ifdef NDEBUG
	#define DEBUG_MESSAGE(a) /**/
#else
	#define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//#include "util/ProfileCallCount.hpp"

#include <cassert>
#include <iostream>
#include <sstream>

#include "abstractDataTypes/SubsetUnion.hpp"
#include "ecore/EAnnotation.hpp"
#include "ecore/EClass.hpp"

//Includes from codegen annotation

//Forward declaration includes
#include "persistence/interfaces/XLoadHandler.hpp" // used for Persistence
#include "persistence/interfaces/XSaveHandler.hpp" // used for Persistence

#include <exception> // used in Persistence

#include "fUML/Semantics/SimpleClassifiers/SimpleClassifiersFactory.hpp"
#include "ocl/Evaluations/EvaluationsFactory.hpp"
#include "ocl/Expressions/ExpressionsFactory.hpp"
#include "fUML/Semantics/Loci/LociFactory.hpp"
#include "fUML/Semantics/Values/ValuesFactory.hpp"
#include "uml/UmlFactory.hpp"



#include "ocl/Evaluations/EvalEnvironment.hpp"

#include "fUML/Semantics/Loci/Locus.hpp"

#include "ocl/Evaluations/ModelPropertyCallExpEval.hpp"

#include "ocl/Evaluations/OclExpEval.hpp"

#include "ocl/Expressions/OclExpression.hpp"

#include "fUML/Semantics/SimpleClassifiers/StringValue.hpp"

#include "fUML/Semantics/Values/Value.hpp"

#include "uml/ValueSpecification.hpp"

//Factories an Package includes
#include "ocl/Evaluations/impl/EvaluationsFactoryImpl.hpp"
#include "ocl/Evaluations/impl/EvaluationsPackageImpl.hpp"

#include "ocl/OclFactory.hpp"
#include "ocl/OclPackage.hpp"

#include "fUML/Semantics/SimpleClassifiers/SimpleClassifiersPackage.hpp"
#include "ocl/Evaluations/EvaluationsPackage.hpp"
#include "ocl/Expressions/ExpressionsPackage.hpp"
#include "fUML/Semantics/Loci/LociPackage.hpp"
#include "fUML/Semantics/Values/ValuesPackage.hpp"
#include "uml/UmlPackage.hpp"

#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace ocl::Evaluations;

//*********************************
// Constructor / Destructor
//*********************************
AttributeCallExpEvalImpl::AttributeCallExpEvalImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References
	

	//Init references
	
}

AttributeCallExpEvalImpl::~AttributeCallExpEvalImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete AttributeCallExpEval "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




AttributeCallExpEvalImpl::AttributeCallExpEvalImpl(const AttributeCallExpEvalImpl & obj):AttributeCallExpEvalImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy AttributeCallExpEval "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_beforeEnvironment  = obj.getBeforeEnvironment();

	m_environment  = obj.getEnvironment();

	m_locus  = obj.getLocus();

	m_model  = obj.getModel();

	m_referredAttribute  = obj.getReferredAttribute();

	m_resultValue  = obj.getResultValue();

	m_source  = obj.getSource();

	m_specification  = obj.getSpecification();


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  AttributeCallExpEvalImpl::copy() const
{
	std::shared_ptr<AttributeCallExpEvalImpl> element(new AttributeCallExpEvalImpl(*this));
	element->setThisAttributeCallExpEvalPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> AttributeCallExpEvalImpl::eStaticClass() const
{
	return ocl::Evaluations::EvaluationsPackage::eInstance()->getAttributeCallExpEval_Class();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************

//*********************************
// References
//*********************************
std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue > AttributeCallExpEvalImpl::getReferredAttribute() const
{
//assert(m_referredAttribute);
    return m_referredAttribute;
}
void AttributeCallExpEvalImpl::setReferredAttribute(std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue> _referredAttribute)
{
    m_referredAttribute = _referredAttribute;
}

//*********************************
// Union Getter
//*********************************


std::shared_ptr<AttributeCallExpEval> AttributeCallExpEvalImpl::getThisAttributeCallExpEvalPtr() const
{
	return m_thisAttributeCallExpEvalPtr.lock();
}
void AttributeCallExpEvalImpl::setThisAttributeCallExpEvalPtr(std::weak_ptr<AttributeCallExpEval> thisAttributeCallExpEvalPtr)
{
	m_thisAttributeCallExpEvalPtr = thisAttributeCallExpEvalPtr;
	setThisModelPropertyCallExpEvalPtr(thisAttributeCallExpEvalPtr);
}
std::shared_ptr<ecore::EObject> AttributeCallExpEvalImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any AttributeCallExpEvalImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::ATTRIBUTECALLEXPEVAL_ATTRIBUTE_REFERREDATTRIBUTE:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getReferredAttribute())); //57
	}
	return ModelPropertyCallExpEvalImpl::eGet(featureID, resolve, coreType);
}
bool AttributeCallExpEvalImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::ATTRIBUTECALLEXPEVAL_ATTRIBUTE_REFERREDATTRIBUTE:
			return getReferredAttribute() != nullptr; //57
	}
	return ModelPropertyCallExpEvalImpl::internalEIsSet(featureID);
}
bool AttributeCallExpEvalImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::ATTRIBUTECALLEXPEVAL_ATTRIBUTE_REFERREDATTRIBUTE:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue> _referredAttribute = std::dynamic_pointer_cast<fUML::Semantics::SimpleClassifiers::StringValue>(_temp);
			setReferredAttribute(_referredAttribute); //57
			return true;
		}
	}

	return ModelPropertyCallExpEvalImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void AttributeCallExpEvalImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::map<std::string, std::string> attr_list = loadHandler->getAttributeList();
	loadAttributes(loadHandler, attr_list);

	//
	// Create new objects (from references (containment == true))
	//
	// get OclFactory
	int numNodes = loadHandler->getNumOfChildNodes();
	for(int ii = 0; ii < numNodes; ii++)
	{
		loadNode(loadHandler->getNextNodeName(), loadHandler);
	}
}		

void AttributeCallExpEvalImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("referredAttribute");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("referredAttribute")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
	catch (...) 
	{
		std::cout << "| ERROR    | " <<  "Exception occurred" << std::endl;
	}

	ModelPropertyCallExpEvalImpl::loadAttributes(loadHandler, attr_list);
}

void AttributeCallExpEvalImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Evaluations::EvaluationsFactory> modelFactory=ocl::Evaluations::EvaluationsFactory::eInstance();

	//load BasePackage Nodes
	ModelPropertyCallExpEvalImpl::loadNode(nodeName, loadHandler);
}

void AttributeCallExpEvalImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::ATTRIBUTECALLEXPEVAL_ATTRIBUTE_REFERREDATTRIBUTE:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<fUML::Semantics::SimpleClassifiers::StringValue> _referredAttribute = std::dynamic_pointer_cast<fUML::Semantics::SimpleClassifiers::StringValue>( references.front() );
				setReferredAttribute(_referredAttribute);
			}
			
			return;
		}
	}
	ModelPropertyCallExpEvalImpl::resolveReferences(featureID, references);
}

void AttributeCallExpEvalImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	ModelPropertyCallExpEvalImpl::saveContent(saveHandler);
	
	PropertyCallExpEvalImpl::saveContent(saveHandler);
	
	OclExpEvalImpl::saveContent(saveHandler);
	
	fUML::Semantics::Values::EvaluationImpl::saveContent(saveHandler);
	
	fUML::Semantics::Loci::SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
	
}

void AttributeCallExpEvalImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Evaluations::EvaluationsPackage> package = ocl::Evaluations::EvaluationsPackage::eInstance();

	

		// Add references
		saveHandler->addReference("referredAttribute", this->getReferredAttribute());

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

