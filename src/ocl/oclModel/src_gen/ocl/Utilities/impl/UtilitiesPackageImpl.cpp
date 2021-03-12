#include "ocl/Utilities/impl/UtilitiesPackageImpl.hpp"

#include <cassert>

#include "abstractDataTypes/SubsetUnion.hpp"
//metametamodel classes

//metamodel factory
#include "ocl/Utilities/UtilitiesFactory.hpp"

//depending model packages

using namespace ocl::Utilities;

bool UtilitiesPackageImpl::isInited = false;

UtilitiesPackageImpl::UtilitiesPackageImpl()
{
	setEFactoryInstance(std::shared_ptr<ecore::EFactory >( UtilitiesFactory::eInstance()));
}

UtilitiesPackageImpl::~UtilitiesPackageImpl()
{
}

UtilitiesPackage* UtilitiesPackageImpl::create()
{
	if (isInited)
	{
		return UtilitiesPackage::eInstance().get();
	}
	isInited = true;
	 
    // Obtain or create package and create package meta-data objects
    UtilitiesPackageImpl * metaModelPackage = new UtilitiesPackageImpl();
    return metaModelPackage;
}

void UtilitiesPackageImpl::init(std::shared_ptr<ecore::EPackage> package)
{
    // Initialize created meta-data
	createPackageContents(package);
	setThisEPackagePtr(package);
    initializePackageContents();   
}




