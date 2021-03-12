#include "ocl/Evaluations/impl/IteratorExpEvalImpl.hpp"

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

#include "ocl/Evaluations/EvalEnvironment.hpp"

#include "fUML/Semantics/Loci/Locus.hpp"

#include "ocl/Evaluations/LoopExpEval.hpp"

#include "ocl/Evaluations/OclExpEval.hpp"

#include "ocl/Expressions/OclExpression.hpp"

#include "fUML/Semantics/SimpleClassifiers/StringValue.hpp"

#include "fUML/Semantics/Values/Value.hpp"

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
IteratorExpEvalImpl::IteratorExpEvalImpl()
{	
	/*
	NOTE: Due to virtual inheritance, base class constrcutors may not be called correctly
	*/
}

IteratorExpEvalImpl::~IteratorExpEvalImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete IteratorExpEval "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}



IteratorExpEvalImpl::IteratorExpEvalImpl(const IteratorExpEvalImpl & obj):IteratorExpEvalImpl()
{
	*this = obj;
}

std::shared_ptr<ecore::EObject>  IteratorExpEvalImpl::copy() const
{
	std::shared_ptr<IteratorExpEvalImpl> element(new IteratorExpEvalImpl(*this));
	element->setThisIteratorExpEvalPtr(element);
	return element;
}

IteratorExpEvalImpl& IteratorExpEvalImpl::operator=(const IteratorExpEvalImpl & obj)
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy IteratorExpEval "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_beforeEnvironment  = obj.getBeforeEnvironment();

	std::shared_ptr<Bag<ocl::Evaluations::OclExpEval>> _bodyEvals = obj.getBodyEvals();
	m_bodyEvals.reset(new Bag<ocl::Evaluations::OclExpEval>(*(obj.getBodyEvals().get())));

	m_environment  = obj.getEnvironment();

	std::shared_ptr<Bag<fUML::Semantics::SimpleClassifiers::StringValue>> _iterators = obj.getIterators();
	m_iterators.reset(new Bag<fUML::Semantics::SimpleClassifiers::StringValue>(*(obj.getIterators().get())));

	m_locus  = obj.getLocus();

	m_model  = obj.getModel();

	m_resultValue  = obj.getResultValue();

	m_source  = obj.getSource();

	m_specification  = obj.getSpecification();


	//Clone references with containment (deep copy)



	return *this;
}

std::shared_ptr<ecore::EClass> IteratorExpEvalImpl::eStaticClass() const
{
	return ocl::Evaluations::EvaluationsPackage::eInstance()->getIteratorExpEval_Class();
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



std::shared_ptr<IteratorExpEval> IteratorExpEvalImpl::getThisIteratorExpEvalPtr() const
{
	return m_thisIteratorExpEvalPtr.lock();
}
void IteratorExpEvalImpl::setThisIteratorExpEvalPtr(std::weak_ptr<IteratorExpEval> thisIteratorExpEvalPtr)
{
	m_thisIteratorExpEvalPtr = thisIteratorExpEvalPtr;
	setThisLoopExpEvalPtr(thisIteratorExpEvalPtr);
}
std::shared_ptr<ecore::EObject> IteratorExpEvalImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any IteratorExpEvalImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
	}
	return LoopExpEvalImpl::eGet(featureID, resolve, coreType);
}
bool IteratorExpEvalImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
	}
	return LoopExpEvalImpl::internalEIsSet(featureID);
}
bool IteratorExpEvalImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
	}

	return LoopExpEvalImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void IteratorExpEvalImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void IteratorExpEvalImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

	LoopExpEvalImpl::loadAttributes(loadHandler, attr_list);
}

void IteratorExpEvalImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::shared_ptr<ocl::Evaluations::EvaluationsFactory> modelFactory=ocl::Evaluations::EvaluationsFactory::eInstance();

	//load BasePackage Nodes
	LoopExpEvalImpl::loadNode(nodeName, loadHandler);
}

void IteratorExpEvalImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	LoopExpEvalImpl::resolveReferences(featureID, references);
}

void IteratorExpEvalImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	LoopExpEvalImpl::saveContent(saveHandler);
	
	PropertyCallExpEvalImpl::saveContent(saveHandler);
	
	OclExpEvalImpl::saveContent(saveHandler);
	
	fUML::Semantics::Values::EvaluationImpl::saveContent(saveHandler);
	
	fUML::Semantics::Loci::SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
	
}

void IteratorExpEvalImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
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

