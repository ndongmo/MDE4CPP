#include "ocl/Evaluations/impl/CollectionItemEvalImpl.hpp"

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

#include "ocl/Evaluations/EvaluationsFactory.hpp"
#include "fUML/Semantics/Loci/LociFactory.hpp"
#include "fUML/Semantics/Values/ValuesFactory.hpp"
#include "uml/UmlFactory.hpp"



#include "ocl/Evaluations/CollectionLiteralPartEval.hpp"

#include "fUML/Semantics/Loci/Locus.hpp"

#include "ocl/Evaluations/OclExpEval.hpp"

#include "fUML/Semantics/Values/Value.hpp"

#include "uml/ValueSpecification.hpp"

//Factories an Package includes
#include "ocl/Evaluations/impl/EvaluationsFactoryImpl.hpp"
#include "ocl/Evaluations/impl/EvaluationsPackageImpl.hpp"

#include "ocl/OclFactory.hpp"
#include "ocl/OclPackage.hpp"

#include "ocl/Evaluations/EvaluationsPackage.hpp"
#include "fUML/Semantics/Loci/LociPackage.hpp"
#include "fUML/Semantics/Values/ValuesPackage.hpp"
#include "uml/UmlPackage.hpp"

#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace ocl::Evaluations;

//*********************************
// Constructor / Destructor
//*********************************
CollectionItemEvalImpl::CollectionItemEvalImpl()
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

CollectionItemEvalImpl::~CollectionItemEvalImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete CollectionItemEval "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




CollectionItemEvalImpl::CollectionItemEvalImpl(const CollectionItemEvalImpl & obj):CollectionItemEvalImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy CollectionItemEval "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_element  = obj.getElement();

	m_item  = obj.getItem();

	m_locus  = obj.getLocus();

	m_specification  = obj.getSpecification();


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  CollectionItemEvalImpl::copy() const
{
	std::shared_ptr<CollectionItemEvalImpl> element(new CollectionItemEvalImpl(*this));
	element->setThisCollectionItemEvalPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> CollectionItemEvalImpl::eStaticClass() const
{
	return ocl::Evaluations::EvaluationsPackage::eInstance()->getCollectionItemEval_Class();
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
std::shared_ptr<ocl::Evaluations::OclExpEval > CollectionItemEvalImpl::getItem() const
{
//assert(m_item);
    return m_item;
}
void CollectionItemEvalImpl::setItem(std::shared_ptr<ocl::Evaluations::OclExpEval> _item)
{
    m_item = _item;
}

//*********************************
// Union Getter
//*********************************


std::shared_ptr<CollectionItemEval> CollectionItemEvalImpl::getThisCollectionItemEvalPtr() const
{
	return m_thisCollectionItemEvalPtr.lock();
}
void CollectionItemEvalImpl::setThisCollectionItemEvalPtr(std::weak_ptr<CollectionItemEval> thisCollectionItemEvalPtr)
{
	m_thisCollectionItemEvalPtr = thisCollectionItemEvalPtr;
	setThisCollectionLiteralPartEvalPtr(thisCollectionItemEvalPtr);
}
std::shared_ptr<ecore::EObject> CollectionItemEvalImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any CollectionItemEvalImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::COLLECTIONITEMEVAL_ATTRIBUTE_ITEM:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getItem())); //123
	}
	return CollectionLiteralPartEvalImpl::eGet(featureID, resolve, coreType);
}
bool CollectionItemEvalImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::COLLECTIONITEMEVAL_ATTRIBUTE_ITEM:
			return getItem() != nullptr; //123
	}
	return CollectionLiteralPartEvalImpl::internalEIsSet(featureID);
}
bool CollectionItemEvalImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::COLLECTIONITEMEVAL_ATTRIBUTE_ITEM:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Evaluations::OclExpEval> _item = std::dynamic_pointer_cast<ocl::Evaluations::OclExpEval>(_temp);
			setItem(_item); //123
			return true;
		}
	}

	return CollectionLiteralPartEvalImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void CollectionItemEvalImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void CollectionItemEvalImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("item");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("item")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

	CollectionLiteralPartEvalImpl::loadAttributes(loadHandler, attr_list);
}

void CollectionItemEvalImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Evaluations::EvaluationsFactory> modelFactory=ocl::Evaluations::EvaluationsFactory::eInstance();

	//load BasePackage Nodes
	CollectionLiteralPartEvalImpl::loadNode(nodeName, loadHandler);
}

void CollectionItemEvalImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::COLLECTIONITEMEVAL_ATTRIBUTE_ITEM:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<ocl::Evaluations::OclExpEval> _item = std::dynamic_pointer_cast<ocl::Evaluations::OclExpEval>( references.front() );
				setItem(_item);
			}
			
			return;
		}
	}
	CollectionLiteralPartEvalImpl::resolveReferences(featureID, references);
}

void CollectionItemEvalImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	CollectionLiteralPartEvalImpl::saveContent(saveHandler);
	
	fUML::Semantics::Values::EvaluationImpl::saveContent(saveHandler);
	
	fUML::Semantics::Loci::SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
}

void CollectionItemEvalImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Evaluations::EvaluationsPackage> package = ocl::Evaluations::EvaluationsPackage::eInstance();

	

		// Add references
		saveHandler->addReference("item", this->getItem());

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

