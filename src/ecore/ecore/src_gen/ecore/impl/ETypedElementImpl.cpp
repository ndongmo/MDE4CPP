#include "ecore/impl/ETypedElementImpl.hpp"

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

#include "ecore/EAnnotation.hpp"

#include "ecore/EClassifier.hpp"

#include "ecore/EGenericType.hpp"

#include "ecore/ENamedElement.hpp"

#include "ecore/EObject.hpp"

//Factories an Package includes
#include "ecore/impl/ecoreFactoryImpl.hpp"
#include "ecore/impl/ecorePackageImpl.hpp"


#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace ecore;

//*********************************
// Constructor / Destructor
//*********************************
ETypedElementImpl::ETypedElementImpl()
{	
}

ETypedElementImpl::~ETypedElementImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete ETypedElement "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}

//Additional constructor for the containments back reference
ETypedElementImpl::ETypedElementImpl(std::weak_ptr<ecore::EObject > par_eContainer)
:ETypedElementImpl()
{
	m_eContainer = par_eContainer;
}


ETypedElementImpl::ETypedElementImpl(const ETypedElementImpl & obj):ETypedElementImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy ETypedElement "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
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

	
}

std::shared_ptr<ecore::EObject>  ETypedElementImpl::copy() const
{
	std::shared_ptr<ETypedElementImpl> element(new ETypedElementImpl(*this));
	element->setThisETypedElementPtr(element);
	return element;
}

std::shared_ptr<EClass> ETypedElementImpl::eStaticClass() const
{
	return ecore::ecorePackage::eInstance()->getETypedElement_Class();
}

//*********************************
// Attribute Setter Getter
//*********************************
/*
Getter & Setter for attribute lowerBound
*/
int ETypedElementImpl::getLowerBound() const 
{
	return m_lowerBound;
}

void ETypedElementImpl::setLowerBound(int _lowerBound)
{
	m_lowerBound = _lowerBound;
} 



/*
Getter & Setter for attribute many
*/
bool ETypedElementImpl::isMany() const 
{
	return m_many;
}





/*
Getter & Setter for attribute ordered
*/
bool ETypedElementImpl::isOrdered() const 
{
	return m_ordered;
}

void ETypedElementImpl::setOrdered(bool _ordered)
{
	m_ordered = _ordered;
} 



/*
Getter & Setter for attribute required
*/
bool ETypedElementImpl::isRequired() const 
{
	return m_required;
}

void ETypedElementImpl::setRequired(bool _required)
{
	m_required = _required;
} 



/*
Getter & Setter for attribute unique
*/
bool ETypedElementImpl::isUnique() const 
{
	return m_unique;
}

void ETypedElementImpl::setUnique(bool _unique)
{
	m_unique = _unique;
} 



/*
Getter & Setter for attribute upperBound
*/
int ETypedElementImpl::getUpperBound() const 
{
	return m_upperBound;
}

void ETypedElementImpl::setUpperBound(int _upperBound)
{
	m_upperBound = _upperBound;
} 



//*********************************
// Operations
//*********************************

//*********************************
// References
//*********************************
/*
Getter & Setter for reference eGenericType
*/
std::shared_ptr<ecore::EGenericType > ETypedElementImpl::getEGenericType() const
{

    return m_eGenericType;
}

void ETypedElementImpl::setEGenericType(std::shared_ptr<ecore::EGenericType> _eGenericType)
{
    m_eGenericType = _eGenericType;
}



/*
Getter & Setter for reference eType
*/
std::shared_ptr<ecore::EClassifier > ETypedElementImpl::getEType() const
{

    return m_eType;
}

void ETypedElementImpl::setEType(std::shared_ptr<ecore::EClassifier> _eType)
{
    m_eType = _eType;
}



//*********************************
// Union Getter
//*********************************
std::shared_ptr<Union<ecore::EObject>> ETypedElementImpl::getEContens() const
{
	if(m_eContens == nullptr)
	{
		/*Union*/
		m_eContens.reset(new Union<ecore::EObject>());
			#ifdef SHOW_SUBSET_UNION
			std::cout << "Initialising Union: " << "m_eContens - Union<ecore::EObject>()" << std::endl;
		#endif
		
		
	}
	return m_eContens;
}




std::shared_ptr<ETypedElement> ETypedElementImpl::getThisETypedElementPtr() const
{
	return m_thisETypedElementPtr.lock();
}
void ETypedElementImpl::setThisETypedElementPtr(std::weak_ptr<ETypedElement> thisETypedElementPtr)
{
	m_thisETypedElementPtr = thisETypedElementPtr;
	setThisENamedElementPtr(thisETypedElementPtr);
}
std::shared_ptr<ecore::EObject> ETypedElementImpl::eContainer() const
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
Any ETypedElementImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ecore::ecorePackage::ETYPEDELEMENT_ATTRIBUTE_EGENERICTYPE:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getEGenericType())); //5312
		case ecore::ecorePackage::ETYPEDELEMENT_ATTRIBUTE_ETYPE:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getEType())); //5311
		case ecore::ecorePackage::ETYPEDELEMENT_ATTRIBUTE_LOWERBOUND:
			return eAny(getLowerBound()); //537
		case ecore::ecorePackage::ETYPEDELEMENT_ATTRIBUTE_MANY:
			return eAny(isMany()); //539
		case ecore::ecorePackage::ETYPEDELEMENT_ATTRIBUTE_ORDERED:
			return eAny(isOrdered()); //535
		case ecore::ecorePackage::ETYPEDELEMENT_ATTRIBUTE_REQUIRED:
			return eAny(isRequired()); //5310
		case ecore::ecorePackage::ETYPEDELEMENT_ATTRIBUTE_UNIQUE:
			return eAny(isUnique()); //536
		case ecore::ecorePackage::ETYPEDELEMENT_ATTRIBUTE_UPPERBOUND:
			return eAny(getUpperBound()); //538
	}
	return ENamedElementImpl::eGet(featureID, resolve, coreType);
}
bool ETypedElementImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ecore::ecorePackage::ETYPEDELEMENT_ATTRIBUTE_EGENERICTYPE:
			return getEGenericType() != nullptr; //5312
		case ecore::ecorePackage::ETYPEDELEMENT_ATTRIBUTE_ETYPE:
			return getEType() != nullptr; //5311
		case ecore::ecorePackage::ETYPEDELEMENT_ATTRIBUTE_LOWERBOUND:
			return getLowerBound() != 0; //537
		case ecore::ecorePackage::ETYPEDELEMENT_ATTRIBUTE_MANY:
			return isMany() != false; //539
		case ecore::ecorePackage::ETYPEDELEMENT_ATTRIBUTE_ORDERED:
			return isOrdered() != true; //535
		case ecore::ecorePackage::ETYPEDELEMENT_ATTRIBUTE_REQUIRED:
			return isRequired() != false; //5310
		case ecore::ecorePackage::ETYPEDELEMENT_ATTRIBUTE_UNIQUE:
			return isUnique() != true; //536
		case ecore::ecorePackage::ETYPEDELEMENT_ATTRIBUTE_UPPERBOUND:
			return getUpperBound() != 1; //538
	}
	return ENamedElementImpl::internalEIsSet(featureID);
}
bool ETypedElementImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ecore::ecorePackage::ETYPEDELEMENT_ATTRIBUTE_EGENERICTYPE:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ecore::EGenericType> _eGenericType = std::dynamic_pointer_cast<ecore::EGenericType>(_temp);
			setEGenericType(_eGenericType); //5312
			return true;
		}
		case ecore::ecorePackage::ETYPEDELEMENT_ATTRIBUTE_ETYPE:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ecore::EClassifier> _eType = std::dynamic_pointer_cast<ecore::EClassifier>(_temp);
			setEType(_eType); //5311
			return true;
		}
		case ecore::ecorePackage::ETYPEDELEMENT_ATTRIBUTE_LOWERBOUND:
		{
			// BOOST CAST
			int _lowerBound = newValue->get<int>();
			setLowerBound(_lowerBound); //537
			return true;
		}
		case ecore::ecorePackage::ETYPEDELEMENT_ATTRIBUTE_ORDERED:
		{
			// BOOST CAST
			bool _ordered = newValue->get<bool>();
			setOrdered(_ordered); //535
			return true;
		}
		case ecore::ecorePackage::ETYPEDELEMENT_ATTRIBUTE_REQUIRED:
		{
			// BOOST CAST
			bool _required = newValue->get<bool>();
			setRequired(_required); //5310
			return true;
		}
		case ecore::ecorePackage::ETYPEDELEMENT_ATTRIBUTE_UNIQUE:
		{
			// BOOST CAST
			bool _unique = newValue->get<bool>();
			setUnique(_unique); //536
			return true;
		}
		case ecore::ecorePackage::ETYPEDELEMENT_ATTRIBUTE_UPPERBOUND:
		{
			// BOOST CAST
			int _upperBound = newValue->get<int>();
			setUpperBound(_upperBound); //538
			return true;
		}
	}

	return ENamedElementImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void ETypedElementImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::map<std::string, std::string> attr_list = loadHandler->getAttributeList();
	loadAttributes(loadHandler, attr_list);

	//
	// Create new objects (from references (containment == true))
	//
	// get ecoreFactory
	int numNodes = loadHandler->getNumOfChildNodes();
	for(int ii = 0; ii < numNodes; ii++)
	{
		loadNode(loadHandler->getNextNodeName(), loadHandler);
	}
}		

void ETypedElementImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
	
		iter = attr_list.find("lowerBound");
		if ( iter != attr_list.end() )
		{
			// this attribute is a 'int'
			int value;
			std::istringstream ( iter->second ) >> value;
			this->setLowerBound(value);
		}

		iter = attr_list.find("ordered");
		if ( iter != attr_list.end() )
		{
			// this attribute is a 'bool'
			bool value;
			std::istringstream(iter->second) >> std::boolalpha >> value;
			this->setOrdered(value);
		}

		iter = attr_list.find("unique");
		if ( iter != attr_list.end() )
		{
			// this attribute is a 'bool'
			bool value;
			std::istringstream(iter->second) >> std::boolalpha >> value;
			this->setUnique(value);
		}

		iter = attr_list.find("upperBound");
		if ( iter != attr_list.end() )
		{
			// this attribute is a 'int'
			int value;
			std::istringstream ( iter->second ) >> value;
			this->setUpperBound(value);
		}
		std::shared_ptr<EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("eType");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("eType")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

	ENamedElementImpl::loadAttributes(loadHandler, attr_list);
}

void ETypedElementImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ecore::ecoreFactory> modelFactory=ecore::ecoreFactory::eInstance();

	try
	{
		if ( nodeName.compare("eGenericType") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				typeName = "EGenericType";
			}
			std::shared_ptr<ecore::EGenericType> eGenericType = std::dynamic_pointer_cast<ecore::EGenericType>(modelFactory->create(typeName));
			if (eGenericType != nullptr)
			{
				this->setEGenericType(eGenericType);
				loadHandler->handleChild(eGenericType);
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
	ENamedElementImpl::loadNode(nodeName, loadHandler);
}

void ETypedElementImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<EObject> > references)
{
	switch(featureID)
	{
		case ecore::ecorePackage::ETYPEDELEMENT_ATTRIBUTE_ETYPE:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<ecore::EClassifier> _eType = std::dynamic_pointer_cast<ecore::EClassifier>( references.front() );
				setEType(_eType);
			}
			
			return;
		}
	}
	ENamedElementImpl::resolveReferences(featureID, references);
}

void ETypedElementImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	ENamedElementImpl::saveContent(saveHandler);
	
	EModelElementImpl::saveContent(saveHandler);
	
	EObjectImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
}

void ETypedElementImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ecore::ecorePackage> package = ecore::ecorePackage::eInstance();

	
		// Add attributes
		if ( this->eIsSet(package->getETypedElement_Attribute_lowerBound()) )
		{
			saveHandler->addAttribute("lowerBound", this->getLowerBound());
		}

		if ( this->eIsSet(package->getETypedElement_Attribute_ordered()) )
		{
			saveHandler->addAttribute("ordered", this->isOrdered());
		}

		if ( this->eIsSet(package->getETypedElement_Attribute_unique()) )
		{
			saveHandler->addAttribute("unique", this->isUnique());
		}

		if ( this->eIsSet(package->getETypedElement_Attribute_upperBound()) )
		{
			saveHandler->addAttribute("upperBound", this->getUpperBound());
		}

		// Add references
		saveHandler->addReference("eType", this->getEType());


		//
		// Add new tags (from references)
		//
		std::shared_ptr<EClass> metaClass = this->eClass();
		// Save 'eGenericType'
		std::shared_ptr<ecore::EGenericType > eGenericType = this->getEGenericType();
		if (eGenericType != nullptr)
		{
			saveHandler->addReference(eGenericType, "eGenericType", eGenericType->eClass() != ecore::ecorePackage::eInstance()->getEGenericType_Class());
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

