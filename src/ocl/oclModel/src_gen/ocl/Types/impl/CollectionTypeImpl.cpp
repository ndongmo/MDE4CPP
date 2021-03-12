#include "ocl/Types/impl/CollectionTypeImpl.hpp"

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
#include "ocl/Values/ValuesFactory.hpp"



#include "ocl/Types/CollectionType.hpp"

#include "ocl/Values/CollectionValue.hpp"

#include "ecore/EAnnotation.hpp"

#include "ecore/EClassifier.hpp"

#include "ecore/EDataType.hpp"

#include "ecore/EPackage.hpp"

#include "ecore/ETypeParameter.hpp"

//Factories an Package includes
#include "ocl/Types/impl/TypesFactoryImpl.hpp"
#include "ocl/Types/impl/TypesPackageImpl.hpp"

#include "ocl/oclFactory.hpp"
#include "ocl/oclPackage.hpp"

#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace ocl::Types;

//*********************************
// Constructor / Destructor
//*********************************
CollectionTypeImpl::CollectionTypeImpl()
{	
	/*
	NOTE: Due to virtual inheritance, base class constrcutors may not be called correctly
	*/
}

CollectionTypeImpl::~CollectionTypeImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete CollectionType "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}

//Additional constructor for the containments back reference
CollectionTypeImpl::CollectionTypeImpl(std::weak_ptr<ecore::EPackage > par_ePackage)
:CollectionTypeImpl()
{
	m_ePackage = par_ePackage;
}


CollectionTypeImpl::CollectionTypeImpl(const CollectionTypeImpl & obj):CollectionTypeImpl()
{
	*this = obj;
}

std::shared_ptr<ecore::EObject>  CollectionTypeImpl::copy() const
{
	std::shared_ptr<CollectionTypeImpl> element(new CollectionTypeImpl(*this));
	element->setThisCollectionTypePtr(element);
	return element;
}

CollectionTypeImpl& CollectionTypeImpl::operator=(const CollectionTypeImpl & obj)
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy CollectionType "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_defaultValue = obj.getDefaultValue();
	m_instanceClass = obj.getInstanceClass();
	m_instanceClassName = obj.getInstanceClassName();
	m_instanceTypeName = obj.getInstanceTypeName();
	m_name = obj.getName();
	m_serializable = obj.isSerializable();

	//copy references with no containment (soft copy)
	
	m_ePackage  = obj.getEPackage();

	m_instance  = obj.getInstance();


	//Clone references with containment (deep copy)

	std::shared_ptr<Bag<ecore::EAnnotation>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->add(std::shared_ptr<ecore::EAnnotation>(std::dynamic_pointer_cast<ecore::EAnnotation>(_eAnnotations->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eAnnotations" << std::endl;
	#endif
	std::shared_ptr<Bag<ecore::ETypeParameter>> _eTypeParametersList = obj.getETypeParameters();
	for(std::shared_ptr<ecore::ETypeParameter> _eTypeParameters : *_eTypeParametersList)
	{
		this->getETypeParameters()->add(std::shared_ptr<ecore::ETypeParameter>(std::dynamic_pointer_cast<ecore::ETypeParameter>(_eTypeParameters->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eTypeParameters" << std::endl;
	#endif
	if(obj.getElementType()!=nullptr)
	{
		m_elementType = std::dynamic_pointer_cast<ecore::EClassifier>(obj.getElementType()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_elementType" << std::endl;
	#endif

	

	return *this;
}

std::shared_ptr<ecore::EClass> CollectionTypeImpl::eStaticClass() const
{
	return ocl::Types::TypesPackage::eInstance()->getCollectionType_Class();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
bool CollectionTypeImpl::kindOf(std::shared_ptr<ocl::Types::CollectionType>  coll)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	    if(coll != nullptr)
    {
        std::shared_ptr<ecore::EClass> eclass = std::dynamic_pointer_cast<ecore::EClass>(this->eClass());
        std::shared_ptr<ecore::EClass> eclassOf = std::dynamic_pointer_cast<ecore::EClass>(coll->eClass());
        return eclassOf->isSuperTypeOf(eclass);
    }
    return false;
   
	//end of body
}

//*********************************
// References
//*********************************
/*
Getter & Setter for reference elementType
*/
std::shared_ptr<ecore::EClassifier > CollectionTypeImpl::getElementType() const
{
//assert(m_elementType);
    return m_elementType;
}

void CollectionTypeImpl::setElementType(std::shared_ptr<ecore::EClassifier> _elementType)
{
    m_elementType = _elementType;
}



/*
Getter & Setter for reference instance
*/
std::shared_ptr<ocl::Values::CollectionValue > CollectionTypeImpl::getInstance() const
{

    return m_instance;
}

void CollectionTypeImpl::setInstance(std::shared_ptr<ocl::Values::CollectionValue> _instance)
{
    m_instance = _instance;
}



//*********************************
// Union Getter
//*********************************



std::shared_ptr<CollectionType> CollectionTypeImpl::getThisCollectionTypePtr() const
{
	return m_thisCollectionTypePtr.lock();
}
void CollectionTypeImpl::setThisCollectionTypePtr(std::weak_ptr<CollectionType> thisCollectionTypePtr)
{
	m_thisCollectionTypePtr = thisCollectionTypePtr;
	setThisEDataTypePtr(thisCollectionTypePtr);
}
std::shared_ptr<ecore::EObject> CollectionTypeImpl::eContainer() const
{
	if(auto wp = m_ePackage.lock())
	{
		return wp;
	}
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any CollectionTypeImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ocl::Types::TypesPackage::COLLECTIONTYPE_ATTRIBUTE_ELEMENTTYPE:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getElementType())); //209
		case ocl::Types::TypesPackage::COLLECTIONTYPE_ATTRIBUTE_INSTANCE:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getInstance())); //2010
	}
	return ecore::EDataTypeImpl::eGet(featureID, resolve, coreType);
}
bool CollectionTypeImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ocl::Types::TypesPackage::COLLECTIONTYPE_ATTRIBUTE_ELEMENTTYPE:
			return getElementType() != nullptr; //209
		case ocl::Types::TypesPackage::COLLECTIONTYPE_ATTRIBUTE_INSTANCE:
			return getInstance() != nullptr; //2010
	}
	return ecore::EDataTypeImpl::internalEIsSet(featureID);
}
bool CollectionTypeImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ocl::Types::TypesPackage::COLLECTIONTYPE_ATTRIBUTE_ELEMENTTYPE:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ecore::EClassifier> _elementType = std::dynamic_pointer_cast<ecore::EClassifier>(_temp);
			setElementType(_elementType); //209
			return true;
		}
		case ocl::Types::TypesPackage::COLLECTIONTYPE_ATTRIBUTE_INSTANCE:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Values::CollectionValue> _instance = std::dynamic_pointer_cast<ocl::Values::CollectionValue>(_temp);
			setInstance(_instance); //2010
			return true;
		}
	}

	return ecore::EDataTypeImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void CollectionTypeImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void CollectionTypeImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("instance");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("instance")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

	ecore::EDataTypeImpl::loadAttributes(loadHandler, attr_list);
}

void CollectionTypeImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Types::TypesFactory> modelFactory=ocl::Types::TypesFactory::eInstance();

	try
	{
		if ( nodeName.compare("elementType") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				std::cout << "| WARNING    | type if an eClassifiers node it empty" << std::endl;
				return; // no type name given and reference type is abstract
			}
			std::shared_ptr<ecore::EClassifier> elementType = std::dynamic_pointer_cast<ecore::EClassifier>(ecore::ecoreFactory::eInstance()->create(typeName));
			if (elementType != nullptr)
			{
				this->setElementType(elementType);
				loadHandler->handleChild(elementType);
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
	ecore::EDataTypeImpl::loadNode(nodeName, loadHandler);
}

void CollectionTypeImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case ocl::Types::TypesPackage::COLLECTIONTYPE_ATTRIBUTE_INSTANCE:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<ocl::Values::CollectionValue> _instance = std::dynamic_pointer_cast<ocl::Values::CollectionValue>( references.front() );
				setInstance(_instance);
			}
			
			return;
		}
	}
	ecore::EDataTypeImpl::resolveReferences(featureID, references);
}

void CollectionTypeImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	ecore::EDataTypeImpl::saveContent(saveHandler);
	
	ecore::EClassifierImpl::saveContent(saveHandler);
	
	ecore::ENamedElementImpl::saveContent(saveHandler);
	
	ecore::EModelElementImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
}

void CollectionTypeImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Types::TypesPackage> package = ocl::Types::TypesPackage::eInstance();

	

		// Add references
		saveHandler->addReference("instance", this->getInstance());


		//
		// Add new tags (from references)
		//
		std::shared_ptr<ecore::EClass> metaClass = this->eClass();
		// Save 'elementType'
		std::shared_ptr<ecore::EClassifier > elementType = this->getElementType();
		if (elementType != nullptr)
		{
			saveHandler->addReference(elementType, "elementType", elementType->eClass() != ecore::ecorePackage::eInstance()->getEClassifier_Class());
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}
