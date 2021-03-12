#include "ocl/Evaluations/impl/OclMessageArgEvalImpl.hpp"

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
#include "fUML/FUMLFactory.hpp"

//Forward declaration includes
#include "persistence/interfaces/XLoadHandler.hpp" // used for Persistence
#include "persistence/interfaces/XSaveHandler.hpp" // used for Persistence

#include <exception> // used in Persistence

#include "ocl/Evaluations/EvaluationsFactory.hpp"
#include "fUML/Semantics/Loci/LociFactory.hpp"
#include "uml/UmlFactory.hpp"



#include "fUML/Semantics/Values/Evaluation.hpp"

#include "fUML/Semantics/Loci/Locus.hpp"

#include "ocl/Evaluations/OclExpEval.hpp"

#include "ocl/Evaluations/UnspecifiedValueExpEval.hpp"

#include "uml/ValueSpecification.hpp"

//Factories an Package includes
#include "ocl/Evaluations/impl/EvaluationsFactoryImpl.hpp"
#include "ocl/Evaluations/impl/EvaluationsPackageImpl.hpp"

#include "ocl/oclFactory.hpp"
#include "ocl/oclPackage.hpp"

#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace ocl::Evaluations;

//*********************************
// Constructor / Destructor
//*********************************
OclMessageArgEvalImpl::OclMessageArgEvalImpl()
{	
	/*
	NOTE: Due to virtual inheritance, base class constrcutors may not be called correctly
	*/
}

OclMessageArgEvalImpl::~OclMessageArgEvalImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete OclMessageArgEval "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}



OclMessageArgEvalImpl::OclMessageArgEvalImpl(const OclMessageArgEvalImpl & obj):OclMessageArgEvalImpl()
{
	*this = obj;
}

std::shared_ptr<ecore::EObject>  OclMessageArgEvalImpl::copy() const
{
	std::shared_ptr<OclMessageArgEvalImpl> element(new OclMessageArgEvalImpl(*this));
	element->setThisOclMessageArgEvalPtr(element);
	return element;
}

OclMessageArgEvalImpl& OclMessageArgEvalImpl::operator=(const OclMessageArgEvalImpl & obj)
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy OclMessageArgEval "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_expression  = obj.getExpression();

	m_locus  = obj.getLocus();

	m_specification  = obj.getSpecification();

	m_unspecified  = obj.getUnspecified();

	m_variable  = obj.getVariable();


	//Clone references with containment (deep copy)



	return *this;
}

std::shared_ptr<ecore::EClass> OclMessageArgEvalImpl::eStaticClass() const
{
	return ocl::Evaluations::EvaluationsPackage::eInstance()->getOclMessageArgEval_Class();
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
Getter & Setter for reference expression
*/
std::shared_ptr<ocl::Evaluations::OclExpEval > OclMessageArgEvalImpl::getExpression() const
{

    return m_expression;
}

void OclMessageArgEvalImpl::setExpression(std::shared_ptr<ocl::Evaluations::OclExpEval> _expression)
{
    m_expression = _expression;
}



/*
Getter & Setter for reference unspecified
*/
std::shared_ptr<ocl::Evaluations::UnspecifiedValueExpEval > OclMessageArgEvalImpl::getUnspecified() const
{

    return m_unspecified;
}

void OclMessageArgEvalImpl::setUnspecified(std::shared_ptr<ocl::Evaluations::UnspecifiedValueExpEval> _unspecified)
{
    m_unspecified = _unspecified;
}



/*
Getter & Setter for reference variable
*/
std::shared_ptr<ocl::Evaluations::OclExpEval > OclMessageArgEvalImpl::getVariable() const
{

    return m_variable;
}

void OclMessageArgEvalImpl::setVariable(std::shared_ptr<ocl::Evaluations::OclExpEval> _variable)
{
    m_variable = _variable;
}



//*********************************
// Union Getter
//*********************************



std::shared_ptr<OclMessageArgEval> OclMessageArgEvalImpl::getThisOclMessageArgEvalPtr() const
{
	return m_thisOclMessageArgEvalPtr.lock();
}
void OclMessageArgEvalImpl::setThisOclMessageArgEvalPtr(std::weak_ptr<OclMessageArgEval> thisOclMessageArgEvalPtr)
{
	m_thisOclMessageArgEvalPtr = thisOclMessageArgEvalPtr;
	setThisEvaluationPtr(thisOclMessageArgEvalPtr);
}
std::shared_ptr<ecore::EObject> OclMessageArgEvalImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any OclMessageArgEvalImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::OCLMESSAGEARGEVAL_ATTRIBUTE_EXPRESSION:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getExpression())); //613
		case ocl::Evaluations::EvaluationsPackage::OCLMESSAGEARGEVAL_ATTRIBUTE_UNSPECIFIED:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getUnspecified())); //612
		case ocl::Evaluations::EvaluationsPackage::OCLMESSAGEARGEVAL_ATTRIBUTE_VARIABLE:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getVariable())); //614
	}
	return fUML::Semantics::Values::EvaluationImpl::eGet(featureID, resolve, coreType);
}
bool OclMessageArgEvalImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::OCLMESSAGEARGEVAL_ATTRIBUTE_EXPRESSION:
			return getExpression() != nullptr; //613
		case ocl::Evaluations::EvaluationsPackage::OCLMESSAGEARGEVAL_ATTRIBUTE_UNSPECIFIED:
			return getUnspecified() != nullptr; //612
		case ocl::Evaluations::EvaluationsPackage::OCLMESSAGEARGEVAL_ATTRIBUTE_VARIABLE:
			return getVariable() != nullptr; //614
	}
	return fUML::Semantics::Values::EvaluationImpl::internalEIsSet(featureID);
}
bool OclMessageArgEvalImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::OCLMESSAGEARGEVAL_ATTRIBUTE_EXPRESSION:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Evaluations::OclExpEval> _expression = std::dynamic_pointer_cast<ocl::Evaluations::OclExpEval>(_temp);
			setExpression(_expression); //613
			return true;
		}
		case ocl::Evaluations::EvaluationsPackage::OCLMESSAGEARGEVAL_ATTRIBUTE_UNSPECIFIED:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Evaluations::UnspecifiedValueExpEval> _unspecified = std::dynamic_pointer_cast<ocl::Evaluations::UnspecifiedValueExpEval>(_temp);
			setUnspecified(_unspecified); //612
			return true;
		}
		case ocl::Evaluations::EvaluationsPackage::OCLMESSAGEARGEVAL_ATTRIBUTE_VARIABLE:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<ocl::Evaluations::OclExpEval> _variable = std::dynamic_pointer_cast<ocl::Evaluations::OclExpEval>(_temp);
			setVariable(_variable); //614
			return true;
		}
	}

	return fUML::Semantics::Values::EvaluationImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void OclMessageArgEvalImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void OclMessageArgEvalImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("expression");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("expression")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}

		iter = attr_list.find("unspecified");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("unspecified")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}

		iter = attr_list.find("variable");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("variable")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

	fUML::Semantics::Values::EvaluationImpl::loadAttributes(loadHandler, attr_list);
}

void OclMessageArgEvalImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Evaluations::EvaluationsFactory> modelFactory=ocl::Evaluations::EvaluationsFactory::eInstance();

	//load BasePackage Nodes
	fUML::Semantics::Values::EvaluationImpl::loadNode(nodeName, loadHandler);
}

void OclMessageArgEvalImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case ocl::Evaluations::EvaluationsPackage::OCLMESSAGEARGEVAL_ATTRIBUTE_EXPRESSION:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<ocl::Evaluations::OclExpEval> _expression = std::dynamic_pointer_cast<ocl::Evaluations::OclExpEval>( references.front() );
				setExpression(_expression);
			}
			
			return;
		}

		case ocl::Evaluations::EvaluationsPackage::OCLMESSAGEARGEVAL_ATTRIBUTE_UNSPECIFIED:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<ocl::Evaluations::UnspecifiedValueExpEval> _unspecified = std::dynamic_pointer_cast<ocl::Evaluations::UnspecifiedValueExpEval>( references.front() );
				setUnspecified(_unspecified);
			}
			
			return;
		}

		case ocl::Evaluations::EvaluationsPackage::OCLMESSAGEARGEVAL_ATTRIBUTE_VARIABLE:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<ocl::Evaluations::OclExpEval> _variable = std::dynamic_pointer_cast<ocl::Evaluations::OclExpEval>( references.front() );
				setVariable(_variable);
			}
			
			return;
		}
	}
	fUML::Semantics::Values::EvaluationImpl::resolveReferences(featureID, references);
}

void OclMessageArgEvalImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	fUML::Semantics::Values::EvaluationImpl::saveContent(saveHandler);
	
	fUML::Semantics::Loci::SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
}

void OclMessageArgEvalImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Evaluations::EvaluationsPackage> package = ocl::Evaluations::EvaluationsPackage::eInstance();

	

		// Add references
		saveHandler->addReference("expression", this->getExpression());
		saveHandler->addReference("unspecified", this->getUnspecified());
		saveHandler->addReference("variable", this->getVariable());

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}
