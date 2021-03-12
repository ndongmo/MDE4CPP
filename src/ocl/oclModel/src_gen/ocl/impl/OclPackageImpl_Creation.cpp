#include "ocl/impl/OclPackageImpl.hpp"

// metametamodel factory
#include "ecore/EcoreFactory.hpp"

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

//depending model packages
#include "ecore/EcorePackage.hpp"
#include "ecore/EcorePackage.hpp"
#include "fUML/FUMLPackage.hpp"
#include "types/TypesPackage.hpp"
#include "uml/UmlPackage.hpp"
//include subpackages 
#include "ocl/Evaluations/impl/EvaluationsPackageImpl.hpp"

#include "ocl/Expressions/impl/ExpressionsPackageImpl.hpp"

#include "ocl/OclCS/impl/OclCSPackageImpl.hpp"

#include "ocl/Types/impl/TypesPackageImpl.hpp"

#include "ocl/Utilities/impl/UtilitiesPackageImpl.hpp"

#include "ocl/Values/impl/ValuesPackageImpl.hpp"
 
using namespace ocl;

void OclPackageImpl::createPackageContents(std::shared_ptr<ecore::EPackage> package)
{
	if (isCreated) 
	{
		return;
	}
	isCreated = true;

	std::shared_ptr<ecore::EcoreFactory> factory = ecore::EcoreFactory::eInstance();


	createPackageEDataTypes(package, factory);

	std::dynamic_pointer_cast<ocl::Evaluations::EvaluationsPackageImpl>(getEvaluations_Package())->createPackageContents(getEvaluations_Package());

	std::dynamic_pointer_cast<ocl::Expressions::ExpressionsPackageImpl>(getExpressions_Package())->createPackageContents(getExpressions_Package());

	std::dynamic_pointer_cast<ocl::OclCS::OclCSPackageImpl>(getOclCS_Package())->createPackageContents(getOclCS_Package());

	std::dynamic_pointer_cast<ocl::Types::TypesPackageImpl>(getTypes_Package())->createPackageContents(getTypes_Package());

	std::dynamic_pointer_cast<ocl::Utilities::UtilitiesPackageImpl>(getUtilities_Package())->createPackageContents(getUtilities_Package());

	std::dynamic_pointer_cast<ocl::Values::ValuesPackageImpl>(getValues_Package())->createPackageContents(getValues_Package());

}


void OclPackageImpl::createPackageEDataTypes(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	
}
