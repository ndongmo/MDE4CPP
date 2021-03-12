#include "ocl/OclCS/impl/OclCSPackageImpl.hpp"

#include <cassert>

#include "abstractDataTypes/SubsetUnion.hpp"
//metametamodel classes

//metamodel factory
#include "ocl/OclCS/OclCSFactory.hpp"

//depending model packages

using namespace ocl::OclCS;

bool OclCSPackageImpl::isInited = false;

OclCSPackageImpl::OclCSPackageImpl()
{
	setEFactoryInstance(std::shared_ptr<ecore::EFactory >( OclCSFactory::eInstance()));
}

OclCSPackageImpl::~OclCSPackageImpl()
{
}

OclCSPackage* OclCSPackageImpl::create()
{
	if (isInited)
	{
		return OclCSPackage::eInstance().get();
	}
	isInited = true;
	 
    // Obtain or create package and create package meta-data objects
    OclCSPackageImpl * metaModelPackage = new OclCSPackageImpl();
    return metaModelPackage;
}

void OclCSPackageImpl::init(std::shared_ptr<ecore::EPackage> package)
{
    // Initialize created meta-data
	createPackageContents(package);
	setThisEPackagePtr(package);
    initializePackageContents();   
}




