#include "ocl/Types/impl/NameTypeBindingImpl.hpp"

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

#include "ecore/EcoreFactory.hpp"



#include "ecore/EClassifier.hpp"

//Factories an Package includes
#include "ocl/Types/impl/TypesFactoryImpl.hpp"
#include "ocl/Types/impl/TypesPackageImpl.hpp"

#include "ocl/OclFactory.hpp"
#include "ocl/OclPackage.hpp"

#include "ecore/EcorePackage.hpp"

#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace ocl::Types;

//*********************************
// Constructor / Destructor
//*********************************
NameTypeBindingImpl::NameTypeBindingImpl()
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

NameTypeBindingImpl::~NameTypeBindingImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete NameTypeBinding "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




NameTypeBindingImpl::NameTypeBindingImpl(const NameTypeBindingImpl & obj):NameTypeBindingImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy NameTypeBinding "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_name = obj.getName();

	//copy references with no containment (soft copy)
	
	m_type  = obj.getType();


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  NameTypeBindingImpl::copy() const
{
	std::shared_ptr<NameTypeBindingImpl> element(new NameTypeBindingImpl(*this));
	element->setThisNameTypeBindingPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> NameTypeBindingImpl::eStaticClass() const
{
	return ocl::Types::TypesPackage::eInstance()->getNameTypeBinding_Class();
}

//*********************************
// Attribute Setter Getter
//*********************************
void NameTypeBindingImpl::setName(std::string _name)
{
	m_name = _name;
} 

std::string NameTypeBindingImpl::getName() const 
{
	return m_name;
}

//*********************************
// Operations
//*********************************

//*********************************
// References
//*********************************
std::shared_ptr<ecore::EClassifier > NameTypeBindingImpl::getType() const
{

    return m_type;
}
void NameTypeBindingImpl::setType(std::shared_ptr<ecore::EClassifier> _type)
{
    m_type = _type;
}

//*********************************
// Union Getter
//*********************************


std::shared_ptr<NameTypeBinding> NameTypeBindingImpl::getThisNameTypeBindingPtr() const
{
	return m_thisNameTypeBindingPtr.lock();
}
void NameTypeBindingImpl::setThisNameTypeBindingPtr(std::weak_ptr<NameTypeBinding> thisNameTypeBindingPtr)
{
	m_thisNameTypeBindingPtr = thisNameTypeBindingPtr;
}
std::shared_ptr<ecore::EObject> NameTypeBindingImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any NameTypeBindingImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ocl::Types::TypesPackage::NAMETYPEBINDING_ATTRIBUTE_NAME:
			return eAny(getName()); //510
		case ocl::Types::TypesPackage::NAMETYPEBINDING_ATTRIBUTE_TYPE:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getType())); //511
	}
	return ecore::EObjectImpl::eGet(featureID, resolve, coreType);
}
bool NameTypeBindingImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ocl::Types::TypesPackage::NAMETYPEBINDING_ATTRIBUTE_NAME:
			return getName() != ""; //510
		case ocl::Types::TypesPackage::NAMETYPEBINDING_ATTRIBUTE_TYPE:
			return getType() != nullptr; //511
	}
	return ecore::EObjectImpl::internalEIsSet(featureID);
}
bool NameTypeBindingImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ocl::Types::TypesPackage::NAMETYPEBINDING_ATTRIBUTE_NAME:
		{
			// BOOST CAST
			std::string _name = newValue->get<std::string>();
			setName(_name); //510
			return true;
		}
		case ocl::Types::TypesPackage::NAMETYPEBINDING_ATTRIBUTE_TYPE:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ecore::EClassifier> _type = std::dynamic_pointer_cast<ecore::EClassifier>(_temp);
			setType(_type); //511
			return true;
		}
	}

	return ecore::EObjectImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void NameTypeBindingImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void NameTypeBindingImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
	
		iter = attr_list.find("name");
		if ( iter != attr_list.end() )
		{
			// this attribute is a 'std::string'
			std::string value;
			value = iter->second;
			this->setName(value);
		}
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("type");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("type")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

	ecore::EObjectImpl::loadAttributes(loadHandler, attr_list);
}

void NameTypeBindingImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Types::TypesFactory> modelFactory=ocl::Types::TypesFactory::eInstance();

	//load BasePackage Nodes
}

void NameTypeBindingImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case ocl::Types::TypesPackage::NAMETYPEBINDING_ATTRIBUTE_TYPE:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<ecore::EClassifier> _type = std::dynamic_pointer_cast<ecore::EClassifier>( references.front() );
				setType(_type);
			}
			
			return;
		}
	}
	ecore::EObjectImpl::resolveReferences(featureID, references);
}

void NameTypeBindingImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	
	ecore::EObjectImpl::saveContent(saveHandler);
	
}

void NameTypeBindingImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Types::TypesPackage> package = ocl::Types::TypesPackage::eInstance();

	
		// Add attributes
		if ( this->eIsSet(package->getNameTypeBinding_Attribute_name()) )
		{
			saveHandler->addAttribute("name", this->getName());
		}

		// Add references
		saveHandler->addReference("type", this->getType());

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

