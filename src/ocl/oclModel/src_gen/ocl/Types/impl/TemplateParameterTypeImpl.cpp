#include "ocl/Types/impl/TemplateParameterTypeImpl.hpp"

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

#include "ecore/EObject.hpp"

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
TemplateParameterTypeImpl::TemplateParameterTypeImpl()
{	
	/*
	NOTE: Due to virtual inheritance, base class constrcutors may not be called correctly
	*/
}

TemplateParameterTypeImpl::~TemplateParameterTypeImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete TemplateParameterType "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}

//Additional constructor for the containments back reference
TemplateParameterTypeImpl::TemplateParameterTypeImpl(std::weak_ptr<ecore::EObject > par_eContainer)
:TemplateParameterTypeImpl()
{
	m_eContainer = par_eContainer;
}

//Additional constructor for the containments back reference
TemplateParameterTypeImpl::TemplateParameterTypeImpl(std::weak_ptr<ecore::EPackage > par_ePackage)
:TemplateParameterTypeImpl()
{
	m_ePackage = par_ePackage;
}


TemplateParameterTypeImpl::TemplateParameterTypeImpl(const TemplateParameterTypeImpl & obj):TemplateParameterTypeImpl()
{
	*this = obj;
}

std::shared_ptr<ecore::EObject>  TemplateParameterTypeImpl::copy() const
{
	std::shared_ptr<TemplateParameterTypeImpl> element(new TemplateParameterTypeImpl(*this));
	element->setThisTemplateParameterTypePtr(element);
	return element;
}

TemplateParameterTypeImpl& TemplateParameterTypeImpl::operator=(const TemplateParameterTypeImpl & obj)
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy TemplateParameterType "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_defaultValue = obj.getDefaultValue();
	m_instanceClass = obj.getInstanceClass();
	m_instanceClassName = obj.getInstanceClassName();
	m_instanceTypeName = obj.getInstanceTypeName();
	m_metaElementID = obj.getMetaElementID();
	m_name = obj.getName();
	m_specification = obj.getSpecification();

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


	return *this;
}

std::shared_ptr<ecore::EClass> TemplateParameterTypeImpl::eStaticClass() const
{
	return ocl::Types::TypesPackage::eInstance()->getTemplateParameterType_Class();
}

//*********************************
// Attribute Setter Getter
//*********************************
/*
Getter & Setter for attribute specification
*/
std::string TemplateParameterTypeImpl::getSpecification() const 
{
	return m_specification;
}

void TemplateParameterTypeImpl::setSpecification(std::string _specification)
{
	m_specification = _specification;
} 



//*********************************
// Operations
//*********************************

//*********************************
// References
//*********************************

//*********************************
// Union Getter
//*********************************
std::shared_ptr<Union<ecore::EObject>> TemplateParameterTypeImpl::getEContens() const
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




std::shared_ptr<TemplateParameterType> TemplateParameterTypeImpl::getThisTemplateParameterTypePtr() const
{
	return m_thisTemplateParameterTypePtr.lock();
}
void TemplateParameterTypeImpl::setThisTemplateParameterTypePtr(std::weak_ptr<TemplateParameterType> thisTemplateParameterTypePtr)
{
	m_thisTemplateParameterTypePtr = thisTemplateParameterTypePtr;
	setThisEClassifierPtr(thisTemplateParameterTypePtr);
}
std::shared_ptr<ecore::EObject> TemplateParameterTypeImpl::eContainer() const
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
Any TemplateParameterTypeImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ocl::Types::TypesPackage::TEMPLATEPARAMETERTYPE_ATTRIBUTE_SPECIFICATION:
			return eAny(getSpecification()); //8311
	}
	return ecore::EClassifierImpl::eGet(featureID, resolve, coreType);
}
bool TemplateParameterTypeImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ocl::Types::TypesPackage::TEMPLATEPARAMETERTYPE_ATTRIBUTE_SPECIFICATION:
			return getSpecification() != ""; //8311
	}
	return ecore::EClassifierImpl::internalEIsSet(featureID);
}
bool TemplateParameterTypeImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ocl::Types::TypesPackage::TEMPLATEPARAMETERTYPE_ATTRIBUTE_SPECIFICATION:
		{
			// BOOST CAST
			std::string _specification = newValue->get<std::string>();
			setSpecification(_specification); //8311
			return true;
		}
	}

	return ecore::EClassifierImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void TemplateParameterTypeImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void TemplateParameterTypeImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
	
		iter = attr_list.find("specification");
		if ( iter != attr_list.end() )
		{
			// this attribute is a 'std::string'
			std::string value;
			value = iter->second;
			this->setSpecification(value);
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

	ecore::EClassifierImpl::loadAttributes(loadHandler, attr_list);
}

void TemplateParameterTypeImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Types::TypesFactory> modelFactory=ocl::Types::TypesFactory::eInstance();

	//load BasePackage Nodes
	ecore::EClassifierImpl::loadNode(nodeName, loadHandler);
}

void TemplateParameterTypeImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	ecore::EClassifierImpl::resolveReferences(featureID, references);
}

void TemplateParameterTypeImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	ecore::EClassifierImpl::saveContent(saveHandler);
	
	ecore::ENamedElementImpl::saveContent(saveHandler);
	
	ecore::EModelElementImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
}

void TemplateParameterTypeImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Types::TypesPackage> package = ocl::Types::TypesPackage::eInstance();

	
		// Add attributes
		if ( this->eIsSet(package->getTemplateParameterType_Attribute_specification()) )
		{
			saveHandler->addAttribute("specification", this->getSpecification());
		}

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

