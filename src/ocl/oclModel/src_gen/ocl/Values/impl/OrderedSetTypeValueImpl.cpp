#include "ocl/Values/impl/OrderedSetTypeValueImpl.hpp"

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
OrderedSetTypeValueImpl::OrderedSetTypeValueImpl()
{	
	/*
	NOTE: Due to virtual inheritance, base class constrcutors may not be called correctly
	*/
}

OrderedSetTypeValueImpl::~OrderedSetTypeValueImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete OrderedSetTypeValue "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}



OrderedSetTypeValueImpl::OrderedSetTypeValueImpl(const OrderedSetTypeValueImpl & obj):OrderedSetTypeValueImpl()
{
	*this = obj;
}

std::shared_ptr<ecore::EObject>  OrderedSetTypeValueImpl::copy() const
{
	std::shared_ptr<OrderedSetTypeValueImpl> element(new OrderedSetTypeValueImpl(*this));
	element->setThisOrderedSetTypeValuePtr(element);
	return element;
}

OrderedSetTypeValueImpl& OrderedSetTypeValueImpl::operator=(const OrderedSetTypeValueImpl & obj)
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy OrderedSetTypeValue "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	std::shared_ptr<Bag<ocl::Values::Element>> _elements = obj.getElements();
	m_elements.reset(new Bag<ocl::Values::Element>(*(obj.getElements().get())));

	m_model  = obj.getModel();


	//Clone references with containment (deep copy)



	return *this;
}

std::shared_ptr<ecore::EClass> OrderedSetTypeValueImpl::eStaticClass() const
{
	return ocl::Values::ValuesPackage::eInstance()->getOrderedSetTypeValue_Class();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
bool OrderedSetTypeValueImpl::addValue(std::shared_ptr<fUML::Semantics::Values::Value>  value)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	if(!this->find(value)) {
    std::shared_ptr<ocl::Values::Element> elem = ocl::Values::ValuesFactory::eInstance()->createElement();
    elem->setValue(value);
    elem->setIndexNr(m_elements->size());
    m_elements->add(elem);

    return true;
}
return false;
	//end of body
}

//*********************************
// References
//*********************************

//*********************************
// Union Getter
//*********************************



std::shared_ptr<OrderedSetTypeValue> OrderedSetTypeValueImpl::getThisOrderedSetTypeValuePtr() const
{
	return m_thisOrderedSetTypeValuePtr.lock();
}
void OrderedSetTypeValueImpl::setThisOrderedSetTypeValuePtr(std::weak_ptr<OrderedSetTypeValue> thisOrderedSetTypeValuePtr)
{
	m_thisOrderedSetTypeValuePtr = thisOrderedSetTypeValuePtr;
	setThisCollectionValuePtr(thisOrderedSetTypeValuePtr);
}
std::shared_ptr<ecore::EObject> OrderedSetTypeValueImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any OrderedSetTypeValueImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
	}
	return CollectionValueImpl::eGet(featureID, resolve, coreType);
}
bool OrderedSetTypeValueImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
	}
	return CollectionValueImpl::internalEIsSet(featureID);
}
bool OrderedSetTypeValueImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
	}

	return CollectionValueImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void OrderedSetTypeValueImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void OrderedSetTypeValueImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

	CollectionValueImpl::loadAttributes(loadHandler, attr_list);
}

void OrderedSetTypeValueImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Values::ValuesFactory> modelFactory=ocl::Values::ValuesFactory::eInstance();

	//load BasePackage Nodes
	CollectionValueImpl::loadNode(nodeName, loadHandler);
}

void OrderedSetTypeValueImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	CollectionValueImpl::resolveReferences(featureID, references);
}

void OrderedSetTypeValueImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	CollectionValueImpl::saveContent(saveHandler);
	
	StaticValueImpl::saveContent(saveHandler);
	
	fUML::Semantics::Values::ValueImpl::saveContent(saveHandler);
	
	fUML::Semantics::Loci::SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
}

void OrderedSetTypeValueImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
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

