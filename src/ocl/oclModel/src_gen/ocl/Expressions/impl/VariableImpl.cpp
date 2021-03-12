#include "ocl/Expressions/impl/VariableImpl.hpp"

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

#include "ocl/Expressions/ExpressionsFactory.hpp"
#include "ecore/EcoreFactory.hpp"
#include "fUML/Semantics/Values/ValuesFactory.hpp"



#include "ecore/EAnnotation.hpp"

#include "ecore/EClassifier.hpp"

#include "ecore/EGenericType.hpp"

#include "ecore/EObject.hpp"

#include "ecore/EParameter.hpp"

#include "ecore/ETypedElement.hpp"

#include "ocl/Expressions/ExpressionInOcl.hpp"

#include "ocl/Expressions/IterateExp.hpp"

#include "ocl/Expressions/LoopExp.hpp"

#include "ocl/Expressions/OclExpression.hpp"

#include "fUML/Semantics/Values/Value.hpp"

#include "ocl/Expressions/VariableExp.hpp"

//Factories an Package includes
#include "ocl/Expressions/impl/ExpressionsFactoryImpl.hpp"
#include "ocl/Expressions/impl/ExpressionsPackageImpl.hpp"

#include "ocl/OclFactory.hpp"
#include "ocl/OclPackage.hpp"

#include "ocl/Expressions/ExpressionsPackage.hpp"
#include "ecore/EcorePackage.hpp"
#include "fUML/Semantics/Values/ValuesPackage.hpp"

#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace ocl::Expressions;

//*********************************
// Constructor / Destructor
//*********************************
VariableImpl::VariableImpl()
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

VariableImpl::~VariableImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete Variable "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}


//Additional constructor for the containments back reference
			VariableImpl::VariableImpl(std::weak_ptr<ocl::Expressions::IterateExp > par_baseExp)
			:VariableImpl()
			{
			    m_baseExp = par_baseExp;
			}


//Additional constructor for the containments back reference
			VariableImpl::VariableImpl(std::weak_ptr<ecore::EObject > par_eContainer)
			:VariableImpl()
			{
			    m_eContainer = par_eContainer;
			}


//Additional constructor for the containments back reference
			VariableImpl::VariableImpl(std::weak_ptr<ocl::Expressions::LoopExp > par_loopExp)
			:VariableImpl()
			{
			    m_loopExp = par_loopExp;
			}


//Additional constructor for the containments back reference
VariableImpl::VariableImpl(std::weak_ptr<ocl::Expressions::ExpressionInOcl > par_ExpressionInOcl, const int reference_id)
:VariableImpl()
{
	switch(reference_id)
	{	
	case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_RESULTOWNER:
		m_resultOwner = par_ExpressionInOcl;
		 return;
	case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_SELFOWNER:
		m_selfOwner = par_ExpressionInOcl;
		 return;
	case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_VAROWNER:
		m_varOwner = par_ExpressionInOcl;
		 return;
	default:
	std::cerr << __PRETTY_FUNCTION__ <<" Reference not found in class with the given ID" << std::endl;
	}
   
}


//Additional constructor for the containments back reference


//Additional constructor for the containments back reference



VariableImpl::VariableImpl(const VariableImpl & obj):VariableImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy Variable "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
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
	
	m_baseExp  = obj.getBaseExp();

	m_eContainer  = obj.getEContainer();

	m_eType  = obj.getEType();

	m_loopExp  = obj.getLoopExp();

	m_referringExp  = obj.getReferringExp();

	m_representedParameter  = obj.getRepresentedParameter();

	m_resultOwner  = obj.getResultOwner();

	m_selfOwner  = obj.getSelfOwner();

	m_value  = obj.getValue();

	m_varOwner  = obj.getVarOwner();


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
	if(obj.getInitExpression()!=nullptr)
	{
		m_initExpression = std::dynamic_pointer_cast<ocl::Expressions::OclExpression>(obj.getInitExpression()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_initExpression" << std::endl;
	#endif

	
}

std::shared_ptr<ecore::EObject>  VariableImpl::copy() const
{
	std::shared_ptr<VariableImpl> element(new VariableImpl(*this));
	element->setThisVariablePtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> VariableImpl::eStaticClass() const
{
	return ocl::Expressions::ExpressionsPackage::eInstance()->getVariable_Class();
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
std::weak_ptr<ocl::Expressions::IterateExp > VariableImpl::getBaseExp() const
{

    return m_baseExp;
}
void VariableImpl::setBaseExp(std::shared_ptr<ocl::Expressions::IterateExp> _baseExp)
{
    m_baseExp = _baseExp;
}

std::shared_ptr<ocl::Expressions::OclExpression > VariableImpl::getInitExpression() const
{

    return m_initExpression;
}
void VariableImpl::setInitExpression(std::shared_ptr<ocl::Expressions::OclExpression> _initExpression)
{
    m_initExpression = _initExpression;
}

std::weak_ptr<ocl::Expressions::LoopExp > VariableImpl::getLoopExp() const
{

    return m_loopExp;
}
void VariableImpl::setLoopExp(std::shared_ptr<ocl::Expressions::LoopExp> _loopExp)
{
    m_loopExp = _loopExp;
}

std::shared_ptr<ocl::Expressions::VariableExp > VariableImpl::getReferringExp() const
{

    return m_referringExp;
}
void VariableImpl::setReferringExp(std::shared_ptr<ocl::Expressions::VariableExp> _referringExp)
{
    m_referringExp = _referringExp;
}

std::shared_ptr<ecore::EParameter > VariableImpl::getRepresentedParameter() const
{

    return m_representedParameter;
}
void VariableImpl::setRepresentedParameter(std::shared_ptr<ecore::EParameter> _representedParameter)
{
    m_representedParameter = _representedParameter;
}

std::weak_ptr<ocl::Expressions::ExpressionInOcl > VariableImpl::getResultOwner() const
{

    return m_resultOwner;
}
void VariableImpl::setResultOwner(std::shared_ptr<ocl::Expressions::ExpressionInOcl> _resultOwner)
{
    m_resultOwner = _resultOwner;
}

std::weak_ptr<ocl::Expressions::ExpressionInOcl > VariableImpl::getSelfOwner() const
{

    return m_selfOwner;
}
void VariableImpl::setSelfOwner(std::shared_ptr<ocl::Expressions::ExpressionInOcl> _selfOwner)
{
    m_selfOwner = _selfOwner;
}

std::shared_ptr<fUML::Semantics::Values::Value > VariableImpl::getValue() const
{

    return m_value;
}
void VariableImpl::setValue(std::shared_ptr<fUML::Semantics::Values::Value> _value)
{
    m_value = _value;
}

std::weak_ptr<ocl::Expressions::ExpressionInOcl > VariableImpl::getVarOwner() const
{

    return m_varOwner;
}
void VariableImpl::setVarOwner(std::shared_ptr<ocl::Expressions::ExpressionInOcl> _varOwner)
{
    m_varOwner = _varOwner;
}

//*********************************
// Union Getter
//*********************************
std::shared_ptr<Union<ecore::EObject>> VariableImpl::getEContens() const
{
	return m_eContens;
}


std::shared_ptr<Variable> VariableImpl::getThisVariablePtr() const
{
	return m_thisVariablePtr.lock();
}
void VariableImpl::setThisVariablePtr(std::weak_ptr<Variable> thisVariablePtr)
{
	m_thisVariablePtr = thisVariablePtr;
	setThisETypedElementPtr(thisVariablePtr);
}
std::shared_ptr<ecore::EObject> VariableImpl::eContainer() const
{
	if(auto wp = m_baseExp.lock())
	{
		return wp;
	}

	if(auto wp = m_eContainer.lock())
	{
		return wp;
	}

	if(auto wp = m_loopExp.lock())
	{
		return wp;
	}

	if(auto wp = m_resultOwner.lock())
	{
		return wp;
	}
	if(auto wp = m_selfOwner.lock())
	{
		return wp;
	}
	if(auto wp = m_varOwner.lock())
	{
		return wp;
	}


	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any VariableImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_BASEEXP:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getBaseExp().lock())); //9616
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_INITEXPRESSION:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getInitExpression())); //9613
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_LOOPEXP:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getLoopExp().lock())); //9615
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_REFERRINGEXP:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getReferringExp())); //9617
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_REPRESENTEDPARAMETER:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getRepresentedParameter())); //9614
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_RESULTOWNER:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getResultOwner().lock())); //9619
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_SELFOWNER:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getSelfOwner().lock())); //9618
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_VALUE:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getValue())); //9621
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_VAROWNER:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getVarOwner().lock())); //9620
	}
	return ecore::ETypedElementImpl::eGet(featureID, resolve, coreType);
}
bool VariableImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_BASEEXP:
			return getBaseExp().lock() != nullptr; //9616
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_INITEXPRESSION:
			return getInitExpression() != nullptr; //9613
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_LOOPEXP:
			return getLoopExp().lock() != nullptr; //9615
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_REFERRINGEXP:
			return getReferringExp() != nullptr; //9617
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_REPRESENTEDPARAMETER:
			return getRepresentedParameter() != nullptr; //9614
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_RESULTOWNER:
			return getResultOwner().lock() != nullptr; //9619
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_SELFOWNER:
			return getSelfOwner().lock() != nullptr; //9618
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_VALUE:
			return getValue() != nullptr; //9621
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_VAROWNER:
			return getVarOwner().lock() != nullptr; //9620
	}
	return ecore::ETypedElementImpl::internalEIsSet(featureID);
}
bool VariableImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_BASEEXP:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Expressions::IterateExp> _baseExp = std::dynamic_pointer_cast<ocl::Expressions::IterateExp>(_temp);
			setBaseExp(_baseExp); //9616
			return true;
		}
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_INITEXPRESSION:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Expressions::OclExpression> _initExpression = std::dynamic_pointer_cast<ocl::Expressions::OclExpression>(_temp);
			setInitExpression(_initExpression); //9613
			return true;
		}
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_LOOPEXP:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Expressions::LoopExp> _loopExp = std::dynamic_pointer_cast<ocl::Expressions::LoopExp>(_temp);
			setLoopExp(_loopExp); //9615
			return true;
		}
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_REFERRINGEXP:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Expressions::VariableExp> _referringExp = std::dynamic_pointer_cast<ocl::Expressions::VariableExp>(_temp);
			setReferringExp(_referringExp); //9617
			return true;
		}
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_REPRESENTEDPARAMETER:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ecore::EParameter> _representedParameter = std::dynamic_pointer_cast<ecore::EParameter>(_temp);
			setRepresentedParameter(_representedParameter); //9614
			return true;
		}
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_RESULTOWNER:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Expressions::ExpressionInOcl> _resultOwner = std::dynamic_pointer_cast<ocl::Expressions::ExpressionInOcl>(_temp);
			setResultOwner(_resultOwner); //9619
			return true;
		}
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_SELFOWNER:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Expressions::ExpressionInOcl> _selfOwner = std::dynamic_pointer_cast<ocl::Expressions::ExpressionInOcl>(_temp);
			setSelfOwner(_selfOwner); //9618
			return true;
		}
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_VALUE:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<fUML::Semantics::Values::Value> _value = std::dynamic_pointer_cast<fUML::Semantics::Values::Value>(_temp);
			setValue(_value); //9621
			return true;
		}
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_VAROWNER:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Expressions::ExpressionInOcl> _varOwner = std::dynamic_pointer_cast<ocl::Expressions::ExpressionInOcl>(_temp);
			setVarOwner(_varOwner); //9620
			return true;
		}
	}

	return ecore::ETypedElementImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void VariableImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void VariableImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("referringExp");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("referringExp")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}

		iter = attr_list.find("representedParameter");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("representedParameter")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}

		iter = attr_list.find("value");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("value")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

	ecore::ETypedElementImpl::loadAttributes(loadHandler, attr_list);
}

void VariableImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Expressions::ExpressionsFactory> modelFactory=ocl::Expressions::ExpressionsFactory::eInstance();

	try
	{
		if ( nodeName.compare("initExpression") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				std::cout << "| WARNING    | type if an eClassifiers node it empty" << std::endl;
				return; // no type name given and reference type is abstract
			}
			std::shared_ptr<ecore::EObject> initExpression = modelFactory->create(typeName, loadHandler->getCurrentObject(), ocl::Expressions::ExpressionsPackage::OCLEXPRESSION_ATTRIBUTE_INITIALIZEDELEMENT);
			if (initExpression != nullptr)
			{
				loadHandler->handleChild(initExpression);
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

void VariableImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_BASEEXP:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<ocl::Expressions::IterateExp> _baseExp = std::dynamic_pointer_cast<ocl::Expressions::IterateExp>( references.front() );
				setBaseExp(_baseExp);
			}
			
			return;
		}

		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_LOOPEXP:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<ocl::Expressions::LoopExp> _loopExp = std::dynamic_pointer_cast<ocl::Expressions::LoopExp>( references.front() );
				setLoopExp(_loopExp);
			}
			
			return;
		}

		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_REFERRINGEXP:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<ocl::Expressions::VariableExp> _referringExp = std::dynamic_pointer_cast<ocl::Expressions::VariableExp>( references.front() );
				setReferringExp(_referringExp);
			}
			
			return;
		}

		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_REPRESENTEDPARAMETER:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<ecore::EParameter> _representedParameter = std::dynamic_pointer_cast<ecore::EParameter>( references.front() );
				setRepresentedParameter(_representedParameter);
			}
			
			return;
		}

		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_RESULTOWNER:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<ocl::Expressions::ExpressionInOcl> _resultOwner = std::dynamic_pointer_cast<ocl::Expressions::ExpressionInOcl>( references.front() );
				setResultOwner(_resultOwner);
			}
			
			return;
		}

		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_SELFOWNER:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<ocl::Expressions::ExpressionInOcl> _selfOwner = std::dynamic_pointer_cast<ocl::Expressions::ExpressionInOcl>( references.front() );
				setSelfOwner(_selfOwner);
			}
			
			return;
		}

		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_VALUE:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<fUML::Semantics::Values::Value> _value = std::dynamic_pointer_cast<fUML::Semantics::Values::Value>( references.front() );
				setValue(_value);
			}
			
			return;
		}

		case ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_VAROWNER:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<ocl::Expressions::ExpressionInOcl> _varOwner = std::dynamic_pointer_cast<ocl::Expressions::ExpressionInOcl>( references.front() );
				setVarOwner(_varOwner);
			}
			
			return;
		}
	}
	ecore::ETypedElementImpl::resolveReferences(featureID, references);
}

void VariableImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	ecore::ETypedElementImpl::saveContent(saveHandler);
	
	ecore::ENamedElementImpl::saveContent(saveHandler);
	
	ecore::EModelElementImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
}

void VariableImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Expressions::ExpressionsPackage> package = ocl::Expressions::ExpressionsPackage::eInstance();

	

		// Add references
		saveHandler->addReference("referringExp", this->getReferringExp());
		saveHandler->addReference("representedParameter", this->getRepresentedParameter());
		saveHandler->addReference("value", this->getValue());


		//
		// Add new tags (from references)
		//
		std::shared_ptr<ecore::EClass> metaClass = this->eClass();
		// Save 'initExpression'
		std::shared_ptr<ocl::Expressions::OclExpression > initExpression = this->getInitExpression();
		if (initExpression != nullptr)
		{
			saveHandler->addReference(initExpression, "initExpression", initExpression->eClass() != ocl::Expressions::ExpressionsPackage::eInstance()->getOclExpression_Class());
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

