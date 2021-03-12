#include "ocl/Types/impl/AnyTypeImpl.hpp"

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



#include "ecore/EAnnotation.hpp"

#include "ecore/EClassifier.hpp"

#include "ecore/EObject.hpp"

#include "ecore/EPackage.hpp"

#include "ecore/ETypeParameter.hpp"

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
AnyTypeImpl::AnyTypeImpl()
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

AnyTypeImpl::~AnyTypeImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete AnyType "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}


//Additional constructor for the containments back reference
			AnyTypeImpl::AnyTypeImpl(std::weak_ptr<ecore::EObject > par_eContainer)
			:AnyTypeImpl()
			{
			    m_eContainer = par_eContainer;
			}


//Additional constructor for the containments back reference
			AnyTypeImpl::AnyTypeImpl(std::weak_ptr<ecore::EPackage > par_ePackage)
			:AnyTypeImpl()
			{
			    m_ePackage = par_ePackage;
			}



AnyTypeImpl::AnyTypeImpl(const AnyTypeImpl & obj):AnyTypeImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy AnyType "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_defaultValue = obj.getDefaultValue();
	m_instanceClass = obj.getInstanceClass();
	m_instanceClassName = obj.getInstanceClassName();
	m_instanceTypeName = obj.getInstanceTypeName();
	m_metaElementID = obj.getMetaElementID();
	m_name = obj.getName();

	//copy references with no containment (soft copy)
	
	m_eContainer  = obj.getEContainer();

	m_ePackage  = obj.getEPackage();


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
	if(obj.getObject()!=nullptr)
	{
		m_object = std::dynamic_pointer_cast<ecore::EClassifier>(obj.getObject()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_object" << std::endl;
	#endif

	
}

std::shared_ptr<ecore::EObject>  AnyTypeImpl::copy() const
{
	std::shared_ptr<AnyTypeImpl> element(new AnyTypeImpl(*this));
	element->setThisAnyTypePtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> AnyTypeImpl::eStaticClass() const
{
	return ocl::Types::TypesPackage::eInstance()->getAnyType_Class();
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
std::shared_ptr<ecore::EClassifier > AnyTypeImpl::getObject() const
{

    return m_object;
}
void AnyTypeImpl::setObject(std::shared_ptr<ecore::EClassifier> _object)
{
    m_object = _object;
}

//*********************************
// Union Getter
//*********************************
std::shared_ptr<Union<ecore::EObject>> AnyTypeImpl::getEContens() const
{
	return m_eContens;
}


std::shared_ptr<AnyType> AnyTypeImpl::getThisAnyTypePtr() const
{
	return m_thisAnyTypePtr.lock();
}
void AnyTypeImpl::setThisAnyTypePtr(std::weak_ptr<AnyType> thisAnyTypePtr)
{
	m_thisAnyTypePtr = thisAnyTypePtr;
	setThisEClassifierPtr(thisAnyTypePtr);
}
std::shared_ptr<ecore::EObject> AnyTypeImpl::eContainer() const
{
	if(auto wp = m_eContainer.lock())
	{
		return wp;
	}

	if(auto wp = m_ePackage.lock())
	{
		return wp;
	}
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any AnyTypeImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ocl::Types::TypesPackage::ANYTYPE_ATTRIBUTE_OBJECT:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getObject())); //111
	}
	return ecore::EClassifierImpl::eGet(featureID, resolve, coreType);
}
bool AnyTypeImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ocl::Types::TypesPackage::ANYTYPE_ATTRIBUTE_OBJECT:
			return getObject() != nullptr; //111
	}
	return ecore::EClassifierImpl::internalEIsSet(featureID);
}
bool AnyTypeImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ocl::Types::TypesPackage::ANYTYPE_ATTRIBUTE_OBJECT:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ecore::EClassifier> _object = std::dynamic_pointer_cast<ecore::EClassifier>(_temp);
			setObject(_object); //111
			return true;
		}
	}

	return ecore::EClassifierImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void AnyTypeImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void AnyTypeImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

	ecore::EClassifierImpl::loadAttributes(loadHandler, attr_list);
}

void AnyTypeImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Types::TypesFactory> modelFactory=ocl::Types::TypesFactory::eInstance();

	try
	{
		if ( nodeName.compare("object") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				std::cout << "| WARNING    | type if an eClassifiers node it empty" << std::endl;
				return; // no type name given and reference type is abstract
			}
			std::shared_ptr<ecore::EClassifier> object = std::dynamic_pointer_cast<ecore::EClassifier>(ecore::EcoreFactory::eInstance()->create(typeName));
			if (object != nullptr)
			{
				this->setObject(object);
				loadHandler->handleChild(object);
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
	ecore::EClassifierImpl::loadNode(nodeName, loadHandler);
}

void AnyTypeImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	ecore::EClassifierImpl::resolveReferences(featureID, references);
}

void AnyTypeImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	ecore::EClassifierImpl::saveContent(saveHandler);
	
	ecore::ENamedElementImpl::saveContent(saveHandler);
	
	ecore::EModelElementImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
}

void AnyTypeImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Types::TypesPackage> package = ocl::Types::TypesPackage::eInstance();

	


		//
		// Add new tags (from references)
		//
		std::shared_ptr<ecore::EClass> metaClass = this->eClass();
		// Save 'object'
		std::shared_ptr<ecore::EClassifier > object = this->getObject();
		if (object != nullptr)
		{
			saveHandler->addReference(object, "object", object->eClass() != ecore::EcorePackage::eInstance()->getEClassifier_Class());
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

