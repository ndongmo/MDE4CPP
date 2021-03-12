#include "ocl/Expressions/impl/TupleLiteralPartImpl.hpp"

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

#include "ecore/EcoreFactory.hpp"



#include "ecore/EAnnotation.hpp"

#include "ecore/EAttribute.hpp"

#include "ecore/EClassifier.hpp"

#include "ecore/EGenericType.hpp"

#include "ecore/ETypedElement.hpp"

//Factories an Package includes
#include "ocl/Expressions/impl/ExpressionsFactoryImpl.hpp"
#include "ocl/Expressions/impl/ExpressionsPackageImpl.hpp"

#include "ocl/oclFactory.hpp"
#include "ocl/oclPackage.hpp"

#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace ocl::Expressions;

//*********************************
// Constructor / Destructor
//*********************************
TupleLiteralPartImpl::TupleLiteralPartImpl()
{	
	/*
	NOTE: Due to virtual inheritance, base class constrcutors may not be called correctly
	*/
}

TupleLiteralPartImpl::~TupleLiteralPartImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete TupleLiteralPart "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}



TupleLiteralPartImpl::TupleLiteralPartImpl(const TupleLiteralPartImpl & obj):TupleLiteralPartImpl()
{
	*this = obj;
}

std::shared_ptr<ecore::EObject>  TupleLiteralPartImpl::copy() const
{
	std::shared_ptr<TupleLiteralPartImpl> element(new TupleLiteralPartImpl(*this));
	element->setThisTupleLiteralPartPtr(element);
	return element;
}

TupleLiteralPartImpl& TupleLiteralPartImpl::operator=(const TupleLiteralPartImpl & obj)
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy TupleLiteralPart "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_lowerBound = obj.getLowerBound();
	m_many = obj.isMany();
	m_name = obj.getName();
	m_ordered = obj.isOrdered();
	m_required = obj.isRequired();
	m_unique = obj.isUnique();
	m_upperBound = obj.getUpperBound();

	//copy references with no containment (soft copy)
	
	m_eType  = obj.getEType();


	//Clone references with containment (deep copy)

	if(obj.getAttribute()!=nullptr)
	{
		m_attribute = std::dynamic_pointer_cast<ecore::EAttribute>(obj.getAttribute()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_attribute" << std::endl;
	#endif
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

	

	return *this;
}

std::shared_ptr<ecore::EClass> TupleLiteralPartImpl::eStaticClass() const
{
	return ocl::Expressions::ExpressionsPackage::eInstance()->getTupleLiteralPart_Class();
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
Getter & Setter for reference attribute
*/
std::shared_ptr<ecore::EAttribute > TupleLiteralPartImpl::getAttribute() const
{

    return m_attribute;
}

void TupleLiteralPartImpl::setAttribute(std::shared_ptr<ecore::EAttribute> _attribute)
{
    m_attribute = _attribute;
}



//*********************************
// Union Getter
//*********************************



std::shared_ptr<TupleLiteralPart> TupleLiteralPartImpl::getThisTupleLiteralPartPtr() const
{
	return m_thisTupleLiteralPartPtr.lock();
}
void TupleLiteralPartImpl::setThisTupleLiteralPartPtr(std::weak_ptr<TupleLiteralPart> thisTupleLiteralPartPtr)
{
	m_thisTupleLiteralPartPtr = thisTupleLiteralPartPtr;
	setThisETypedElementPtr(thisTupleLiteralPartPtr);
}
std::shared_ptr<ecore::EObject> TupleLiteralPartImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any TupleLiteralPartImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::TUPLELITERALPART_ATTRIBUTE_ATTRIBUTE:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getAttribute())); //8710
	}
	return ecore::ETypedElementImpl::eGet(featureID, resolve, coreType);
}
bool TupleLiteralPartImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::TUPLELITERALPART_ATTRIBUTE_ATTRIBUTE:
			return getAttribute() != nullptr; //8710
	}
	return ecore::ETypedElementImpl::internalEIsSet(featureID);
}
bool TupleLiteralPartImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::TUPLELITERALPART_ATTRIBUTE_ATTRIBUTE:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ecore::EAttribute> _attribute = std::dynamic_pointer_cast<ecore::EAttribute>(_temp);
			setAttribute(_attribute); //8710
			return true;
		}
	}

	return ecore::ETypedElementImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void TupleLiteralPartImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void TupleLiteralPartImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

	ecore::ETypedElementImpl::loadAttributes(loadHandler, attr_list);
}

void TupleLiteralPartImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Expressions::ExpressionsFactory> modelFactory=ocl::Expressions::ExpressionsFactory::eInstance();

	try
	{
		if ( nodeName.compare("attribute") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				typeName = "EAttribute";
			}
			std::shared_ptr<ecore::EAttribute> attribute = std::dynamic_pointer_cast<ecore::EAttribute>(ecore::ecoreFactory::eInstance()->create(typeName));
			if (attribute != nullptr)
			{
				this->setAttribute(attribute);
				loadHandler->handleChild(attribute);
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
	ecore::ETypedElementImpl::loadNode(nodeName, loadHandler);
}

void TupleLiteralPartImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	ecore::ETypedElementImpl::resolveReferences(featureID, references);
}

void TupleLiteralPartImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	ecore::ETypedElementImpl::saveContent(saveHandler);
	
	ecore::ENamedElementImpl::saveContent(saveHandler);
	
	ecore::EModelElementImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
}

void TupleLiteralPartImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Expressions::ExpressionsPackage> package = ocl::Expressions::ExpressionsPackage::eInstance();

	


		//
		// Add new tags (from references)
		//
		std::shared_ptr<ecore::EClass> metaClass = this->eClass();
		// Save 'attribute'
		std::shared_ptr<ecore::EAttribute > attribute = this->getAttribute();
		if (attribute != nullptr)
		{
			saveHandler->addReference(attribute, "attribute", attribute->eClass() != ecore::ecorePackage::eInstance()->getEAttribute_Class());
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

