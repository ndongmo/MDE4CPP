#include "ocl/Evaluations/impl/NumericLiteralExpEvalImpl.hpp"

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

#include "ocl/Evaluations/EvaluationsFactory.hpp"
#include "ocl/Expressions/ExpressionsFactory.hpp"
#include "fUML/Semantics/Loci/LociFactory.hpp"
#include "fUML/Semantics/Values/ValuesFactory.hpp"
#include "uml/UmlFactory.hpp"



#include "ocl/Evaluations/EvalEnvironment.hpp"

#include "fUML/Semantics/Loci/Locus.hpp"

#include "ocl/Expressions/OclExpression.hpp"

#include "ocl/Evaluations/PrimitiveLiteralExpEval.hpp"

#include "fUML/Semantics/Values/Value.hpp"

#include "uml/ValueSpecification.hpp"

//Factories an Package includes
#include "ocl/Evaluations/impl/EvaluationsFactoryImpl.hpp"
#include "ocl/Evaluations/impl/EvaluationsPackageImpl.hpp"

#include "ocl/OclFactory.hpp"
#include "ocl/OclPackage.hpp"

#include "ocl/Evaluations/EvaluationsPackage.hpp"
#include "ocl/Expressions/ExpressionsPackage.hpp"
#include "fUML/Semantics/Loci/LociPackage.hpp"
#include "fUML/Semantics/Values/ValuesPackage.hpp"
#include "uml/UmlPackage.hpp"

#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace ocl::Evaluations;

//*********************************
// Constructor / Destructor
//*********************************
NumericLiteralExpEvalImpl::NumericLiteralExpEvalImpl()
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

NumericLiteralExpEvalImpl::~NumericLiteralExpEvalImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete NumericLiteralExpEval "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




NumericLiteralExpEvalImpl::NumericLiteralExpEvalImpl(const NumericLiteralExpEvalImpl & obj):NumericLiteralExpEvalImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy NumericLiteralExpEval "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_beforeEnvironment  = obj.getBeforeEnvironment();

	m_environment  = obj.getEnvironment();

	m_locus  = obj.getLocus();

	m_model  = obj.getModel();

	m_resultValue  = obj.getResultValue();

	m_specification  = obj.getSpecification();


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  NumericLiteralExpEvalImpl::copy() const
{
	std::shared_ptr<NumericLiteralExpEvalImpl> element(new NumericLiteralExpEvalImpl(*this));
	element->setThisNumericLiteralExpEvalPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> NumericLiteralExpEvalImpl::eStaticClass() const
{
	return ocl::Evaluations::EvaluationsPackage::eInstance()->getNumericLiteralExpEval_Class();
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

//*********************************
// Union Getter
//*********************************


std::shared_ptr<NumericLiteralExpEval> NumericLiteralExpEvalImpl::getThisNumericLiteralExpEvalPtr() const
{
	return m_thisNumericLiteralExpEvalPtr.lock();
}
void NumericLiteralExpEvalImpl::setThisNumericLiteralExpEvalPtr(std::weak_ptr<NumericLiteralExpEval> thisNumericLiteralExpEvalPtr)
{
	m_thisNumericLiteralExpEvalPtr = thisNumericLiteralExpEvalPtr;
	setThisPrimitiveLiteralExpEvalPtr(thisNumericLiteralExpEvalPtr);
}
std::shared_ptr<ecore::EObject> NumericLiteralExpEvalImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any NumericLiteralExpEvalImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
	}
	return PrimitiveLiteralExpEvalImpl::eGet(featureID, resolve, coreType);
}
bool NumericLiteralExpEvalImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
	}
	return PrimitiveLiteralExpEvalImpl::internalEIsSet(featureID);
}
bool NumericLiteralExpEvalImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
	}

	return PrimitiveLiteralExpEvalImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void NumericLiteralExpEvalImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void NumericLiteralExpEvalImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

	PrimitiveLiteralExpEvalImpl::loadAttributes(loadHandler, attr_list);
}

void NumericLiteralExpEvalImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Evaluations::EvaluationsFactory> modelFactory=ocl::Evaluations::EvaluationsFactory::eInstance();

	//load BasePackage Nodes
	PrimitiveLiteralExpEvalImpl::loadNode(nodeName, loadHandler);
}

void NumericLiteralExpEvalImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	PrimitiveLiteralExpEvalImpl::resolveReferences(featureID, references);
}

void NumericLiteralExpEvalImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	PrimitiveLiteralExpEvalImpl::saveContent(saveHandler);
	
	LiteralExpEvalImpl::saveContent(saveHandler);
	
	OclExpEvalImpl::saveContent(saveHandler);
	
	fUML::Semantics::Values::EvaluationImpl::saveContent(saveHandler);
	
	fUML::Semantics::Loci::SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
	
}

void NumericLiteralExpEvalImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ocl::Evaluations::EvaluationsPackage> package = ocl::Evaluations::EvaluationsPackage::eInstance();

	

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

