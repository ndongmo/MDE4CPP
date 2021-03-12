#include "ocl/Expressions/impl/CollectionRangeImpl.hpp"

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
#include "abstractDataTypes/Subset.hpp"
#include "abstractDataTypes/Union.hpp"
#include "abstractDataTypes/SubsetUnion.hpp"
#include "ecore/EAnnotation.hpp"
#include "ecore/EClass.hpp"

//Includes from codegen annotation

//Forward declaration includes
#include "persistence/interfaces/XLoadHandler.hpp" // used for Persistence
#include "persistence/interfaces/XSaveHandler.hpp" // used for Persistence

#include <exception> // used in Persistence

#include "ecore/EcoreFactory.hpp"
#include "ocl/Expressions/ExpressionsFactory.hpp"



#include "ocl/Expressions/CollectionLiteralPart.hpp"

#include "ecore/EAnnotation.hpp"

#include "ecore/EClassifier.hpp"

#include "ecore/EGenericType.hpp"

#include "ecore/EObject.hpp"

#include "ocl/Expressions/OclExpression.hpp"

//Factories an Package includes
#include "ocl/Expressions/impl/ExpressionsFactoryImpl.hpp"
#include "ocl/Expressions/impl/ExpressionsPackageImpl.hpp"

#include "ocl/OclFactory.hpp"
#include "ocl/OclPackage.hpp"

#include "ecore/EcorePackage.hpp"
#include "ocl/Expressions/ExpressionsPackage.hpp"

#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace ocl::Expressions;

//*********************************
// Constructor / Destructor
//*********************************
CollectionRangeImpl::CollectionRangeImpl()
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

CollectionRangeImpl::~CollectionRangeImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete CollectionRange "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}


//Additional constructor for the containments back reference
			CollectionRangeImpl::CollectionRangeImpl(std::weak_ptr<ecore::EObject > par_eContainer)
			:CollectionRangeImpl()
			{
			    m_eContainer = par_eContainer;
			}



CollectionRangeImpl::CollectionRangeImpl(const CollectionRangeImpl & obj):CollectionRangeImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy CollectionRange "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_lowerBound = obj.getLowerBound();
	m_many = obj.isMany();
	m_metaElementID = obj.getMetaElementID();
	m_name = obj.getName();
	m_ordered = obj.isOrdered();
	m_required = obj.isRequired();
	m_unique = obj.isUnique();
	m_upperBound = obj.getUpperBound();

	//copy references with no containment (soft copy)
	
	m_eContainer  = obj.getEContainer();

	m_eType  = obj.getEType();


	//Clone references with containment (deep copy)

	std::shared_ptr<Bag<ecore::EAnnotation>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->add(std::shared_ptr<ecore::EAnnotation>(std::dynamic_pointer_cast<ecore::EAnnotation>(_eAnnotations->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eAnnotations" << std::endl;
	#endif
	if(obj.getEGenericType()!=nullptr)
	{
		m_eGenericType = std::dynamic_pointer_cast<ecore::EGenericType>(obj.getEGenericType()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eGenericType" << std::endl;
	#endif
	if(obj.getFirst()!=nullptr)
	{
		m_first = std::dynamic_pointer_cast<ocl::Expressions::OclExpression>(obj.getFirst()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_first" << std::endl;
	#endif
	if(obj.getLast()!=nullptr)
	{
		m_last = std::dynamic_pointer_cast<ocl::Expressions::OclExpression>(obj.getLast()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_last" << std::endl;
	#endif

	

	
}

std::shared_ptr<ecore::EObject>  CollectionRangeImpl::copy() const
{
	std::shared_ptr<CollectionRangeImpl> element(new CollectionRangeImpl(*this));
	element->setThisCollectionRangePtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> CollectionRangeImpl::eStaticClass() const
{
	return ocl::Expressions::ExpressionsPackage::eInstance()->getCollectionRange_Class();
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
std::shared_ptr<ocl::Expressions::OclExpression > CollectionRangeImpl::getFirst() const
{
//assert(m_first);
    return m_first;
}
void CollectionRangeImpl::setFirst(std::shared_ptr<ocl::Expressions::OclExpression> _first)
{
    m_first = _first;
}

std::shared_ptr<ocl::Expressions::OclExpression > CollectionRangeImpl::getLast() const
{
//assert(m_last);
    return m_last;
}
void CollectionRangeImpl::setLast(std::shared_ptr<ocl::Expressions::OclExpression> _last)
{
    m_last = _last;
}

//*********************************
// Union Getter
//*********************************
std::shared_ptr<Union<ecore::EObject>> CollectionRangeImpl::getEContens() const
{
	return m_eContens;
}


std::shared_ptr<CollectionRange> CollectionRangeImpl::getThisCollectionRangePtr() const
{
	return m_thisCollectionRangePtr.lock();
}
void CollectionRangeImpl::setThisCollectionRangePtr(std::weak_ptr<CollectionRange> thisCollectionRangePtr)
{
	m_thisCollectionRangePtr = thisCollectionRangePtr;
	setThisCollectionLiteralPartPtr(thisCollectionRangePtr);
}
std::shared_ptr<ecore::EObject> CollectionRangeImpl::eContainer() const
{
	if(auto wp = m_eContainer.lock())
	{
		return wp;
	}
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any CollectionRangeImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::COLLECTIONRANGE_ATTRIBUTE_FIRST:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getFirst())); //1813
		case ocl::Expressions::ExpressionsPackage::COLLECTIONRANGE_ATTRIBUTE_LAST:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getLast())); //1814
	}
	return CollectionLiteralPartImpl::eGet(featureID, resolve, coreType);
}
bool CollectionRangeImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::COLLECTIONRANGE_ATTRIBUTE_FIRST:
			return getFirst() != nullptr; //1813
		case ocl::Expressions::ExpressionsPackage::COLLECTIONRANGE_ATTRIBUTE_LAST:
			return getLast() != nullptr; //1814
	}
	return CollectionLiteralPartImpl::internalEIsSet(featureID);
}
bool CollectionRangeImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::COLLECTIONRANGE_ATTRIBUTE_FIRST:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Expressions::OclExpression> _first = std::dynamic_pointer_cast<ocl::Expressions::OclExpression>(_temp);
			setFirst(_first); //1813
			return true;
		}
		case ocl::Expressions::ExpressionsPackage::COLLECTIONRANGE_ATTRIBUTE_LAST:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Expressions::OclExpression> _last = std::dynamic_pointer_cast<ocl::Expressions::OclExpression>(_temp);
			setLast(_last); //1814
			return true;
		}
	}

	return CollectionLiteralPartImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void CollectionRangeImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void CollectionRangeImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

	CollectionLiteralPartImpl::loadAttributes(loadHandler, attr_list);
}

void CollectionRangeImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Expressions::ExpressionsFactory> modelFactory=ocl::Expressions::ExpressionsFactory::eInstance();

	try
	{
		if ( nodeName.compare("first") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				std::cout << "| WARNING    | type if an eClassifiers node it empty" << std::endl;
				return; // no type name given and reference type is abstract
			}
			// TODO here are multiple containers of same object. Check this!
			std::cout << "| ERROR    | " << __PRETTY_FUNCTION__ << " 'first' has more then one back-reference Object." << std::endl;
			std::shared_ptr<ecore::EObject> first;
				first = modelFactory->create(typeName, loadHandler->getCurrentObject(), ocl::Expressions::ExpressionsPackage::OCLEXPRESSION_ATTRIBUTE_FIRSTOWNER);
				first = modelFactory->create(typeName, loadHandler->getCurrentObject(), ocl::Expressions::ExpressionsPackage::OCLEXPRESSION_ATTRIBUTE_LASTOWNER);
			if (first != nullptr)
			{
				loadHandler->handleChild(first);
			}
			return;
		}

		if ( nodeName.compare("last") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				std::cout << "| WARNING    | type if an eClassifiers node it empty" << std::endl;
				return; // no type name given and reference type is abstract
			}
			// TODO here are multiple containers of same object. Check this!
			std::cout << "| ERROR    | " << __PRETTY_FUNCTION__ << " 'last' has more then one back-reference Object." << std::endl;
			std::shared_ptr<ecore::EObject> last;
				last = modelFactory->create(typeName, loadHandler->getCurrentObject(), ocl::Expressions::ExpressionsPackage::OCLEXPRESSION_ATTRIBUTE_FIRSTOWNER);
				last = modelFactory->create(typeName, loadHandler->getCurrentObject(), ocl::Expressions::ExpressionsPackage::OCLEXPRESSION_ATTRIBUTE_LASTOWNER);
			if (last != nullptr)
			{
				loadHandler->handleChild(last);
			}
			return;
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
	//load BasePackage Nodes
	CollectionLiteralPartImpl::loadNode(nodeName, loadHandler);
}

void CollectionRangeImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	CollectionLiteralPartImpl::resolveReferences(featureID, references);
}

void CollectionRangeImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	CollectionLiteralPartImpl::saveContent(saveHandler);
	
	ecore::ETypedElementImpl::saveContent(saveHandler);
	
	ecore::ENamedElementImpl::saveContent(saveHandler);
	
	ecore::EModelElementImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
	
}

void CollectionRangeImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Expressions::ExpressionsPackage> package = ocl::Expressions::ExpressionsPackage::eInstance();

	


		//
		// Add new tags (from references)
		//
		std::shared_ptr<ecore::EClass> metaClass = this->eClass();
		// Save 'first'
		std::shared_ptr<ocl::Expressions::OclExpression > first = this->getFirst();
		if (first != nullptr)
		{
			saveHandler->addReference(first, "first", first->eClass() != ocl::Expressions::ExpressionsPackage::eInstance()->getOclExpression_Class());
		}

		// Save 'last'
		std::shared_ptr<ocl::Expressions::OclExpression > last = this->getLast();
		if (last != nullptr)
		{
			saveHandler->addReference(last, "last", last->eClass() != ocl::Expressions::ExpressionsPackage::eInstance()->getOclExpression_Class());
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

