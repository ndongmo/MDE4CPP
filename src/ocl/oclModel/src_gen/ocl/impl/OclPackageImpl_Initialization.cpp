#include "ocl/impl/OclPackageImpl.hpp"

#include <cassert>

#include "abstractDataTypes/SubsetUnion.hpp"
//metametamodel classes
#include "ecore/EAnnotation.hpp"
#include "ecore/EAttribute.hpp"
#include "ecore/EClass.hpp"
#include "ecore/EDataType.hpp"
#include "ecore/EEnum.hpp"
#include "ecore/EEnumLiteral.hpp"
#include "ecore/EGenericType.hpp"
#include "ecore/EOperation.hpp"
#include "ecore/EPackage.hpp"
#include "ecore/EParameter.hpp"
#include "ecore/EReference.hpp"
#include "ecore/EStringToStringMapEntry.hpp"

// metametamodel factory
#include "ecore/EcoreFactory.hpp"

//depending model packages
#include "ocl/Evaluations/impl/EvaluationsPackageImpl.hpp"

#include "ocl/Expressions/impl/ExpressionsPackageImpl.hpp"

#include "ocl/OclCS/impl/OclCSPackageImpl.hpp"

#include "ocl/Types/impl/TypesPackageImpl.hpp"

#include "ocl/Utilities/impl/UtilitiesPackageImpl.hpp"

#include "ocl/Values/impl/ValuesPackageImpl.hpp"

#include "ecore/EcorePackage.hpp"
#include "ecore/EcorePackage.hpp"
#include "fUML/FUMLPackage.hpp"
#include "types/TypesPackage.hpp"
#include "uml/UmlPackage.hpp"


using namespace ocl;

void OclPackageImpl::initializePackageContents()
{
	if (isInitialized)
	{
		return;
	}
	isInitialized = true;

	// Initialize package
	setName(eNAME);
	setNsPrefix(eNS_PREFIX);
	setNsURI(eNS_URI);
	
	// Add supertypes to classes
	

 	// Initialize classes and features; add operations and parameters

	initializePackageEDataTypes();

	std::dynamic_pointer_cast<ocl::Evaluations::EvaluationsPackageImpl>(getEvaluations_Package())->initializePackageContents();
	std::dynamic_pointer_cast<ocl::Expressions::ExpressionsPackageImpl>(getExpressions_Package())->initializePackageContents();
	std::dynamic_pointer_cast<ocl::OclCS::OclCSPackageImpl>(getOclCS_Package())->initializePackageContents();
	std::dynamic_pointer_cast<ocl::Types::TypesPackageImpl>(getTypes_Package())->initializePackageContents();
	std::dynamic_pointer_cast<ocl::Utilities::UtilitiesPackageImpl>(getUtilities_Package())->initializePackageContents();
	std::dynamic_pointer_cast<ocl::Values::ValuesPackageImpl>(getValues_Package())->initializePackageContents();
}


void OclPackageImpl::initializePackageEDataTypes()
{
	
}

