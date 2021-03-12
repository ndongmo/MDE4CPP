#include "ocl/Expressions/impl/ExpressionInOclImpl.hpp"

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

#include "ecore/EObject.hpp"

#include "ecore/ETypedElement.hpp"

#include "ocl/Expressions/OclExpression.hpp"

#include "ocl/Expressions/Variable.hpp"

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
ExpressionInOclImpl::ExpressionInOclImpl()
{	
	/*
	NOTE: Due to virtual inheritance, base class constrcutors may not be called correctly
	*/
}

ExpressionInOclImpl::~ExpressionInOclImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete ExpressionInOcl "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}

//Additional constructor for the containments back reference
ExpressionInOclImpl::ExpressionInOclImpl(std::weak_ptr<ecore::EObject > par_eContainer)
:ExpressionInOclImpl()
{
	m_eContainer = par_eContainer;
}


ExpressionInOclImpl::ExpressionInOclImpl(const ExpressionInOclImpl & obj):ExpressionInOclImpl()
{
	*this = obj;
}

std::shared_ptr<ecore::EObject>  ExpressionInOclImpl::copy() const
{
	std::shared_ptr<ExpressionInOclImpl> element(new ExpressionInOclImpl(*this));
	element->setThisExpressionInOclPtr(element);
	return element;
}

ExpressionInOclImpl& ExpressionInOclImpl::operator=(const ExpressionInOclImpl & obj)
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy ExpressionInOcl "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
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

	if(obj.getBodyExpression()!=nullptr)
	{
		m_bodyExpression = std::dynamic_pointer_cast<ocl::Expressions::OclExpression>(obj.getBodyExpression()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_bodyExpression" << std::endl;
	#endif
	if(obj.getContextVariable()!=nullptr)
	{
		m_contextVariable = std::dynamic_pointer_cast<ocl::Expressions::Variable>(obj.getContextVariable()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_contextVariable" << std::endl;
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
	std::shared_ptr<Bag<ocl::Expressions::Variable>> _parameterVariableList = obj.getParameterVariable();
	for(std::shared_ptr<ocl::Expressions::Variable> _parameterVariable : *_parameterVariableList)
	{
		this->getParameterVariable()->add(std::shared_ptr<ocl::Expressions::Variable>(std::dynamic_pointer_cast<ocl::Expressions::Variable>(_parameterVariable->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_parameterVariable" << std::endl;
	#endif
	if(obj.getResultVariable()!=nullptr)
	{
		m_resultVariable = std::dynamic_pointer_cast<ocl::Expressions::Variable>(obj.getResultVariable()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_resultVariable" << std::endl;
	#endif

	

	

	

	

	return *this;
}

std::shared_ptr<ecore::EClass> ExpressionInOclImpl::eStaticClass() const
{
	return ocl::Expressions::ExpressionsPackage::eInstance()->getExpressionInOcl_Class();
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
Getter & Setter for reference bodyExpression
*/
std::shared_ptr<ocl::Expressions::OclExpression > ExpressionInOclImpl::getBodyExpression() const
{
//assert(m_bodyExpression);
    return m_bodyExpression;
}

void ExpressionInOclImpl::setBodyExpression(std::shared_ptr<ocl::Expressions::OclExpression> _bodyExpression)
{
    m_bodyExpression = _bodyExpression;
}



/*
Getter & Setter for reference contextVariable
*/
std::shared_ptr<ocl::Expressions::Variable > ExpressionInOclImpl::getContextVariable() const
{

    return m_contextVariable;
}

void ExpressionInOclImpl::setContextVariable(std::shared_ptr<ocl::Expressions::Variable> _contextVariable)
{
    m_contextVariable = _contextVariable;
}



/*
Getter & Setter for reference parameterVariable
*/
std::shared_ptr<Bag<ocl::Expressions::Variable>> ExpressionInOclImpl::getParameterVariable() const
{
	if(m_parameterVariable == nullptr)
	{
		m_parameterVariable.reset(new Bag<ocl::Expressions::Variable>());
		
		
	}

    return m_parameterVariable;
}





/*
Getter & Setter for reference resultVariable
*/
std::shared_ptr<ocl::Expressions::Variable > ExpressionInOclImpl::getResultVariable() const
{

    return m_resultVariable;
}

void ExpressionInOclImpl::setResultVariable(std::shared_ptr<ocl::Expressions::Variable> _resultVariable)
{
    m_resultVariable = _resultVariable;
}



//*********************************
// Union Getter
//*********************************
std::shared_ptr<Union<ecore::EObject>> ExpressionInOclImpl::getEContens() const
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




std::shared_ptr<ExpressionInOcl> ExpressionInOclImpl::getThisExpressionInOclPtr() const
{
	return m_thisExpressionInOclPtr.lock();
}
void ExpressionInOclImpl::setThisExpressionInOclPtr(std::weak_ptr<ExpressionInOcl> thisExpressionInOclPtr)
{
	m_thisExpressionInOclPtr = thisExpressionInOclPtr;
	setThisETypedElementPtr(thisExpressionInOclPtr);
}
std::shared_ptr<ecore::EObject> ExpressionInOclImpl::eContainer() const
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
Any ExpressionInOclImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::EXPRESSIONINOCL_ATTRIBUTE_BODYEXPRESSION:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getBodyExpression())); //2713
		case ocl::Expressions::ExpressionsPackage::EXPRESSIONINOCL_ATTRIBUTE_CONTEXTVARIABLE:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getContextVariable())); //2714
		case ocl::Expressions::ExpressionsPackage::EXPRESSIONINOCL_ATTRIBUTE_PARAMETERVARIABLE:
		{
			std::shared_ptr<Bag<ecore::EObject>> tempList(new Bag<ecore::EObject>());
			Bag<ocl::Expressions::Variable>::iterator iter = m_parameterVariable->begin();
			Bag<ocl::Expressions::Variable>::iterator end = m_parameterVariable->end();
			while (iter != end)
			{
				tempList->add(*iter);
				iter++;
			}
			return eAny(tempList); //2716
		}
		case ocl::Expressions::ExpressionsPackage::EXPRESSIONINOCL_ATTRIBUTE_RESULTVARIABLE:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getResultVariable())); //2715
	}
	return ecore::ETypedElementImpl::eGet(featureID, resolve, coreType);
}
bool ExpressionInOclImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::EXPRESSIONINOCL_ATTRIBUTE_BODYEXPRESSION:
			return getBodyExpression() != nullptr; //2713
		case ocl::Expressions::ExpressionsPackage::EXPRESSIONINOCL_ATTRIBUTE_CONTEXTVARIABLE:
			return getContextVariable() != nullptr; //2714
		case ocl::Expressions::ExpressionsPackage::EXPRESSIONINOCL_ATTRIBUTE_PARAMETERVARIABLE:
			return getParameterVariable() != nullptr; //2716
		case ocl::Expressions::ExpressionsPackage::EXPRESSIONINOCL_ATTRIBUTE_RESULTVARIABLE:
			return getResultVariable() != nullptr; //2715
	}
	return ecore::ETypedElementImpl::internalEIsSet(featureID);
}
bool ExpressionInOclImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ocl::Expressions::ExpressionsPackage::EXPRESSIONINOCL_ATTRIBUTE_BODYEXPRESSION:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Expressions::OclExpression> _bodyExpression = std::dynamic_pointer_cast<ocl::Expressions::OclExpression>(_temp);
			setBodyExpression(_bodyExpression); //2713
			return true;
		}
		case ocl::Expressions::ExpressionsPackage::EXPRESSIONINOCL_ATTRIBUTE_CONTEXTVARIABLE:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Expressions::Variable> _contextVariable = std::dynamic_pointer_cast<ocl::Expressions::Variable>(_temp);
			setContextVariable(_contextVariable); //2714
			return true;
		}
		case ocl::Expressions::ExpressionsPackage::EXPRESSIONINOCL_ATTRIBUTE_PARAMETERVARIABLE:
		{
			// BOOST CAST
			std::shared_ptr<Bag<ecore::EObject>> tempObjectList = newValue->get<std::shared_ptr<Bag<ecore::EObject>>>();
			std::shared_ptr<Bag<ocl::Expressions::Variable>> parameterVariableList(new Bag<ocl::Expressions::Variable>());
			Bag<ecore::EObject>::iterator iter = tempObjectList->begin();
			Bag<ecore::EObject>::iterator end = tempObjectList->end();
			while (iter != end)
			{
				parameterVariableList->add(std::dynamic_pointer_cast<ocl::Expressions::Variable>(*iter));
				iter++;
			}
			
			Bag<ocl::Expressions::Variable>::iterator iterParameterVariable = m_parameterVariable->begin();
			Bag<ocl::Expressions::Variable>::iterator endParameterVariable = m_parameterVariable->end();
			while (iterParameterVariable != endParameterVariable)
			{
				if (parameterVariableList->find(*iterParameterVariable) == -1)
				{
					m_parameterVariable->erase(*iterParameterVariable);
				}
				iterParameterVariable++;
			}

			iterParameterVariable = parameterVariableList->begin();
			endParameterVariable = parameterVariableList->end();
			while (iterParameterVariable != endParameterVariable)
			{
				if (m_parameterVariable->find(*iterParameterVariable) == -1)
				{
					m_parameterVariable->add(*iterParameterVariable);
				}
				iterParameterVariable++;			
			}
			return true;
		}
		case ocl::Expressions::ExpressionsPackage::EXPRESSIONINOCL_ATTRIBUTE_RESULTVARIABLE:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Expressions::Variable> _resultVariable = std::dynamic_pointer_cast<ocl::Expressions::Variable>(_temp);
			setResultVariable(_resultVariable); //2715
			return true;
		}
	}

	return ecore::ETypedElementImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void ExpressionInOclImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void ExpressionInOclImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

	ecore::ETypedElementImpl::loadAttributes(loadHandler, attr_list);
}

void ExpressionInOclImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Expressions::ExpressionsFactory> modelFactory=ocl::Expressions::ExpressionsFactory::eInstance();

	try
	{
		if ( nodeName.compare("bodyExpression") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				std::cout << "| WARNING    | type if an eClassifiers node it empty" << std::endl;
				return; // no type name given and reference type is abstract
			}
			std::shared_ptr<ecore::EObject> bodyExpression = modelFactory->create(typeName, loadHandler->getCurrentObject(), ocl::Expressions::ExpressionsPackage::OCLEXPRESSION_ATTRIBUTE_TOPEXPRESSION);
			if (bodyExpression != nullptr)
			{
				loadHandler->handleChild(bodyExpression);
			}
			return;
		}

		if ( nodeName.compare("contextVariable") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				typeName = "Variable";
			}
			// TODO here are multiple containers of same object. Check this!
			std::cout << "| ERROR    | " << __PRETTY_FUNCTION__ << " 'contextVariable' has more then one back-reference Object." << std::endl;
			std::shared_ptr<ecore::EObject> contextVariable;
				contextVariable = modelFactory->create(typeName, loadHandler->getCurrentObject(), ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_RESULTOWNER);
				contextVariable = modelFactory->create(typeName, loadHandler->getCurrentObject(), ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_SELFOWNER);
				contextVariable = modelFactory->create(typeName, loadHandler->getCurrentObject(), ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_VAROWNER);
			if (contextVariable != nullptr)
			{
				loadHandler->handleChild(contextVariable);
			}
			return;
		}

		if ( nodeName.compare("parameterVariable") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				typeName = "Variable";
			}
			// TODO here are multiple containers of same object. Check this!
			std::cout << "| ERROR    | " << __PRETTY_FUNCTION__ << " 'parameterVariable' has more then one back-reference Object." << std::endl;
			std::shared_ptr<ecore::EObject> parameterVariable;
				parameterVariable = modelFactory->create(typeName, loadHandler->getCurrentObject(), ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_RESULTOWNER);
				parameterVariable = modelFactory->create(typeName, loadHandler->getCurrentObject(), ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_SELFOWNER);
				parameterVariable = modelFactory->create(typeName, loadHandler->getCurrentObject(), ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_VAROWNER);
			if (parameterVariable != nullptr)
			{
				loadHandler->handleChild(parameterVariable);
			}
			return;
		}

		if ( nodeName.compare("resultVariable") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				typeName = "Variable";
			}
			// TODO here are multiple containers of same object. Check this!
			std::cout << "| ERROR    | " << __PRETTY_FUNCTION__ << " 'resultVariable' has more then one back-reference Object." << std::endl;
			std::shared_ptr<ecore::EObject> resultVariable;
				resultVariable = modelFactory->create(typeName, loadHandler->getCurrentObject(), ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_RESULTOWNER);
				resultVariable = modelFactory->create(typeName, loadHandler->getCurrentObject(), ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_SELFOWNER);
				resultVariable = modelFactory->create(typeName, loadHandler->getCurrentObject(), ocl::Expressions::ExpressionsPackage::VARIABLE_ATTRIBUTE_VAROWNER);
			if (resultVariable != nullptr)
			{
				loadHandler->handleChild(resultVariable);
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

void ExpressionInOclImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	ecore::ETypedElementImpl::resolveReferences(featureID, references);
}

void ExpressionInOclImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	ecore::ETypedElementImpl::saveContent(saveHandler);
	
	ecore::ENamedElementImpl::saveContent(saveHandler);
	
	ecore::EModelElementImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
}

void ExpressionInOclImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Expressions::ExpressionsPackage> package = ocl::Expressions::ExpressionsPackage::eInstance();

	


		//
		// Add new tags (from references)
		//
		std::shared_ptr<ecore::EClass> metaClass = this->eClass();
		// Save 'bodyExpression'
		std::shared_ptr<ocl::Expressions::OclExpression > bodyExpression = this->getBodyExpression();
		if (bodyExpression != nullptr)
		{
			saveHandler->addReference(bodyExpression, "bodyExpression", bodyExpression->eClass() != ocl::Expressions::ExpressionsPackage::eInstance()->getOclExpression_Class());
		}

		// Save 'contextVariable'
		std::shared_ptr<ocl::Expressions::Variable > contextVariable = this->getContextVariable();
		if (contextVariable != nullptr)
		{
			saveHandler->addReference(contextVariable, "contextVariable", contextVariable->eClass() != ocl::Expressions::ExpressionsPackage::eInstance()->getVariable_Class());
		}

		// Save 'parameterVariable'
		std::shared_ptr<Bag<ocl::Expressions::Variable>> list_parameterVariable = this->getParameterVariable();
		for (std::shared_ptr<ocl::Expressions::Variable> parameterVariable : *list_parameterVariable) 
		{
			saveHandler->addReference(parameterVariable, "parameterVariable", parameterVariable->eClass() !=ocl::Expressions::ExpressionsPackage::eInstance()->getVariable_Class());
		}

		// Save 'resultVariable'
		std::shared_ptr<ocl::Expressions::Variable > resultVariable = this->getResultVariable();
		if (resultVariable != nullptr)
		{
			saveHandler->addReference(resultVariable, "resultVariable", resultVariable->eClass() != ocl::Expressions::ExpressionsPackage::eInstance()->getVariable_Class());
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

