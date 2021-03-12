#include "ocl/Utilities/impl/UtilitiesPackageImpl.hpp"

#include <cassert>

#include "abstractDataTypes/SubsetUnion.hpp"
//metametamodel classes

// metametamodel factory
#include "ecore/EcoreFactory.hpp"

//depending model packages



using namespace ocl::Utilities;

void UtilitiesPackageImpl::initializePackageContents()
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

}


void UtilitiesPackageImpl::initializePackageEDataTypes()
{
	
}

