#include "ocl/Evaluations/impl/CollectionLiteralPartEvalImpl.hpp"

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
#include "fUML/FUMLFactory.hpp"

//Forward declaration includes
#include "persistence/interfaces/XLoadHandler.hpp" // used for Persistence
#include "persistence/interfaces/XSaveHandler.hpp" // used for Persistence

#include <exception> // used in Persistence

#include "fUML/Semantics/Loci/LociFactory.hpp"
#include "uml/UmlFactory.hpp"
#include "fUML/Semantics/Values/ValuesFactory.hpp"



#include "fUML/Semantics/Values/Evaluation.hpp"

#include "fUML/Semantics/Loci/Locus.hpp"

#include "fUML/Semantics/Values/Value.hpp"

#include "uml/ValueSpecification.hpp"

//Factories an Package includes
#include "ocl/Evaluations/impl/EvaluationsFactoryImpl.hpp"
#include "ocl/Evaluations/impl/EvaluationsPackageImpl.hpp"

#include "ocl/oclFactory.hpp"
#include "ocl/oclPackage.hpp"

#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace ocl::Evaluations;

//*********************************
// Constructor / Destructor
//*********************************
CollectionLiteralPartEvalImpl::CollectionLiteralPartEvalImpl()
{	
	/*
	NOTE: Due to virtual inheritance, base class constrcutors may not be called correctly
	*/
}

CollectionLiteralPartEvalImpl::~CollectionLiteralPartEvalImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete CollectionLiteralPartEval "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}



CollectionLiteralPartEvalImpl::CollectionLiteralPartEvalImpl(const CollectionLiteralPartEvalImpl & obj):CollectionLiteralPartEvalImpl()
{
	*this = obj;
}

std::shared_ptr<ecore::EObject>  CollectionLiteralPartEvalImpl::copy() const
{
	std::shared_ptr<CollectionLiteralPartEvalImpl> element(new CollectionLiteralPartEvalImpl(*this));
	element->setThisCollectionLiteralPartEvalPtr(element);
	return element;
}

CollectionLiteralPartEvalImpl& CollectionLiteralPartEvalImpl::operator=(const CollectionLiteralPartEvalImpl & obj)
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy CollectionLiteralPartEval "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_element  = obj.getElement();

	m_locus  = obj.getLocus();

	m_specification  = obj.getSpecification();


	//Clone references with containment (deep copy)



	return *this;
}

std::shared_ptr<ecore::EClass> CollectionLiteralPartEvalImpl::eStaticClass() const
{
	return ocl::Evaluations::EvaluationsPackage::eInstance()->getCollectionLiteralPartEval_Class();
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
/*
Getter & Setter for reference element
*/
std::shared_ptr<fUML::Semantics::Values::Value > CollectionLiteralPartEvalImpl::getElement() const
{
//assert(m_element);
    return m_element;
}

void CollectionLiteralPartEvalImpl::setElement(std::shared_ptr<fUML::Semantics::Values::Value> _element)
{
    m_element = _element;
}



//*********************************
// Union Getter
//*********************************



std::shared_ptr<CollectionLiteralPartEval> CollectionLiteralPartEvalImpl::getThisCollectionLiteralPartEvalPtr() const
{
	return m_thisCollectionLiteralPartEvalPtr.lock();
}
void CollectionLiteralPartEvalImpl::setThisCollectionLiteralPartEvalPtr(std::weak_ptr<CollectionLiteralPartEval> thisCollectionLiteralPartEvalPtr)
{
	m_thisCollectionLiteralPartEvalPtr = thisCollectionLiteralPartEvalPtr;
	setThisEvaluationPtr(thisCollectionLiteralPartEvalPtr);
}
std::shared_ptr<ecore::EObject> CollectionLiteralPartEvalImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any CollectionLiteralPartEvalImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::COLLECTIONLITERALPARTEVAL_ATTRIBUTE_ELEMENT:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getElement())); //172
	}
	return fUML::Semantics::Values::EvaluationImpl::eGet(featureID, resolve, coreType);
}
bool CollectionLiteralPartEvalImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::COLLECTIONLITERALPARTEVAL_ATTRIBUTE_ELEMENT:
			return getElement() != nullptr; //172
	}
	return fUML::Semantics::Values::EvaluationImpl::internalEIsSet(featureID);
}
bool CollectionLiteralPartEvalImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::COLLECTIONLITERALPARTEVAL_ATTRIBUTE_ELEMENT:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<fUML::Semantics::Values::Value> _element = std::dynamic_pointer_cast<fUML::Semantics::Values::Value>(_temp);
			setElement(_element); //172
			return true;
		}
	}

	return fUML::Semantics::Values::EvaluationImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void CollectionLiteralPartEvalImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::map<std::string, std::string> attr_list = loadHandler->getAttributeList();
	loadAttributes(loadHandler, attr_list);

	//
	// Create new objects (from references (containment == true))
	//
	// get oclFactory
	int numNodes = loadHandler->getNumOfChildNodes();
	for(int ii = 0; ii < numNodes; ii++)
	{
		loadNode(loadHandler->getNextNodeName(), loadHandler);
	}
}		

void CollectionLiteralPartEvalImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("element");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("element")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

	fUML::Semantics::Values::EvaluationImpl::loadAttributes(loadHandler, attr_list);
}

void CollectionLiteralPartEvalImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Evaluations::EvaluationsFactory> modelFactory=ocl::Evaluations::EvaluationsFactory::eInstance();

	//load BasePackage Nodes
	fUML::Semantics::Values::EvaluationImpl::loadNode(nodeName, loadHandler);
}

void CollectionLiteralPartEvalImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::COLLECTIONLITERALPARTEVAL_ATTRIBUTE_ELEMENT:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<fUML::Semantics::Values::Value> _element = std::dynamic_pointer_cast<fUML::Semantics::Values::Value>( references.front() );
				setElement(_element);
			}
			
			return;
		}
	}
	fUML::Semantics::Values::EvaluationImpl::resolveReferences(featureID, references);
}

void CollectionLiteralPartEvalImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	fUML::Semantics::Values::EvaluationImpl::saveContent(saveHandler);
	
	fUML::Semantics::Loci::SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
}

void CollectionLiteralPartEvalImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Evaluations::EvaluationsPackage> package = ocl::Evaluations::EvaluationsPackage::eInstance();

	

		// Add references
		saveHandler->addReference("element", this->getElement());

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}
