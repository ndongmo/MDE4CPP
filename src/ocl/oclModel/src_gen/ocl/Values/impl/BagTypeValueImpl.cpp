#include "ocl/Values/impl/BagTypeValueImpl.hpp"

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
#include "abstractDataTypes/Bag.hpp"

#include "abstractDataTypes/SubsetUnion.hpp"
#include "ecore/EAnnotation.hpp"
#include "ecore/EClass.hpp"

//Includes from codegen annotation

//Forward declaration includes
#include "persistence/interfaces/XLoadHandler.hpp" // used for Persistence
#include "persistence/interfaces/XSaveHandler.hpp" // used for Persistence

#include <exception> // used in Persistence

#include "ocl/Types/TypesFactory.hpp"
#include "ocl/Values/ValuesFactory.hpp"



#include "ocl/Types/CollectionType.hpp"

#include "ocl/Values/CollectionValue.hpp"

#include "ocl/Values/Element.hpp"

#include "fUML/Semantics/Values/Value.hpp"

//Factories an Package includes
#include "ocl/Values/impl/ValuesFactoryImpl.hpp"
#include "ocl/Values/impl/ValuesPackageImpl.hpp"

#include "ocl/oclFactory.hpp"
#include "ocl/oclPackage.hpp"

#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace ocl::Values;

//*********************************
// Constructor / Destructor
//*********************************
BagTypeValueImpl::BagTypeValueImpl()
{	
	/*
	NOTE: Due to virtual inheritance, base class constrcutors may not be called correctly
	*/
}

BagTypeValueImpl::~BagTypeValueImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete BagTypeValue "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}



BagTypeValueImpl::BagTypeValueImpl(const BagTypeValueImpl & obj):BagTypeValueImpl()
{
	*this = obj;
}

std::shared_ptr<ecore::EObject>  BagTypeValueImpl::copy() const
{
	std::shared_ptr<BagTypeValueImpl> element(new BagTypeValueImpl(*this));
	element->setThisBagTypeValuePtr(element);
	return element;
}

BagTypeValueImpl& BagTypeValueImpl::operator=(const BagTypeValueImpl & obj)
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy BagTypeValue "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	std::shared_ptr<Bag<ocl::Values::Element>> _elements = obj.getElements();
	m_elements.reset(new Bag<ocl::Values::Element>(*(obj.getElements().get())));

	m_model  = obj.getModel();


	//Clone references with containment (deep copy)



	return *this;
}

std::shared_ptr<ecore::EClass> BagTypeValueImpl::eStaticClass() const
{
	return ocl::Values::ValuesPackage::eInstance()->getBagTypeValue_Class();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
bool BagTypeValueImpl::addValue(std::shared_ptr<fUML::Semantics::Values::Value>  value)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	std::shared_ptr<ocl::Values::Element> elem = ocl::Values::ValuesFactory::eInstance()->createElement();
elem->setValue(value);
elem->setIndexNr(m_elements->size());
m_elements->add(elem);

return true;
	//end of body
}

//*********************************
// References
//*********************************

//*********************************
// Union Getter
//*********************************



std::shared_ptr<BagTypeValue> BagTypeValueImpl::getThisBagTypeValuePtr() const
{
	return m_thisBagTypeValuePtr.lock();
}
void BagTypeValueImpl::setThisBagTypeValuePtr(std::weak_ptr<BagTypeValue> thisBagTypeValuePtr)
{
	m_thisBagTypeValuePtr = thisBagTypeValuePtr;
	setThisCollectionValuePtr(thisBagTypeValuePtr);
}
std::shared_ptr<ecore::EObject> BagTypeValueImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any BagTypeValueImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
	}
	return CollectionValueImpl::eGet(featureID, resolve, coreType);
}
bool BagTypeValueImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
	}
	return CollectionValueImpl::internalEIsSet(featureID);
}
bool BagTypeValueImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
	}

	return CollectionValueImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void BagTypeValueImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void BagTypeValueImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

	CollectionValueImpl::loadAttributes(loadHandler, attr_list);
}

void BagTypeValueImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Values::ValuesFactory> modelFactory=ocl::Values::ValuesFactory::eInstance();

	//load BasePackage Nodes
	CollectionValueImpl::loadNode(nodeName, loadHandler);
}

void BagTypeValueImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	CollectionValueImpl::resolveReferences(featureID, references);
}

void BagTypeValueImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	CollectionValueImpl::saveContent(saveHandler);
	
	StaticValueImpl::saveContent(saveHandler);
	
	fUML::Semantics::Values::ValueImpl::saveContent(saveHandler);
	
	fUML::Semantics::Loci::SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
}

void BagTypeValueImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Values::ValuesPackage> package = ocl::Values::ValuesPackage::eInstance();

	

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}
