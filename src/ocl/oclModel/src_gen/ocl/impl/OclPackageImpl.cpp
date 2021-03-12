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

//metamodel factory
#include "ocl/OclFactory.hpp"

//depending model packages
#include "ecore/EcorePackage.hpp"
#include "ecore/EcorePackage.hpp"
#include "fUML/FUMLPackage.hpp"
#include "types/TypesPackage.hpp"
#include "uml/UmlPackage.hpp"
#include "ocl/Evaluations/impl/EvaluationsPackageImpl.hpp"

#include "ocl/Expressions/impl/ExpressionsPackageImpl.hpp"

#include "ocl/OclCS/impl/OclCSPackageImpl.hpp"

#include "ocl/Types/impl/TypesPackageImpl.hpp"

#include "ocl/Utilities/impl/UtilitiesPackageImpl.hpp"

#include "ocl/Values/impl/ValuesPackageImpl.hpp"

using namespace ocl;

bool OclPackageImpl::isInited = false;

OclPackageImpl::OclPackageImpl()
{
	setEFactoryInstance(std::shared_ptr<ecore::EFactory >( OclFactory::eInstance()));
}

OclPackageImpl::~OclPackageImpl()
{
}

OclPackage* OclPackageImpl::create()
{
	if (isInited)
	{
		return OclPackage::eInstance().get();
	}
	isInited = true;
	 
    // Obtain or create package and create package meta-data objects
    OclPackageImpl * metaModelPackage = new OclPackageImpl();
    return metaModelPackage;
}

void OclPackageImpl::init(std::shared_ptr<ecore::EPackage> package)
{
    // Initialize created meta-data
	createPackageContents(package);
	setThisEPackagePtr(package);
    initializePackageContents();   
}

std::shared_ptr<Evaluations::EvaluationsPackage> OclPackageImpl::getEvaluations_Package() const
{
	return Evaluations::EvaluationsPackage::eInstance();
} 
std::shared_ptr<Expressions::ExpressionsPackage> OclPackageImpl::getExpressions_Package() const
{
	return Expressions::ExpressionsPackage::eInstance();
} 
std::shared_ptr<OclCS::OclCSPackage> OclPackageImpl::getOclCS_Package() const
{
	return OclCS::OclCSPackage::eInstance();
} 
std::shared_ptr<Types::TypesPackage> OclPackageImpl::getTypes_Package() const
{
	return Types::TypesPackage::eInstance();
} 
std::shared_ptr<Utilities::UtilitiesPackage> OclPackageImpl::getUtilities_Package() const
{
	return Utilities::UtilitiesPackage::eInstance();
} 
std::shared_ptr<Values::ValuesPackage> OclPackageImpl::getValues_Package() const
{
	return Values::ValuesPackage::eInstance();
} 



