#include "ocl/OclPackage.hpp"
#include "ocl/impl/OclPackageImpl.hpp"

using namespace ocl;

//static initialisation
const std::string OclPackage::eNAME ="ocl";
const std::string OclPackage::eNS_URI ="http://ocl4cpp/ocl";
const std::string OclPackage::eNS_PREFIX ="ocl";

//Singleton 
std::shared_ptr<OclPackage> OclPackage::instance;

std::shared_ptr<OclPackage> OclPackage::eInstance()
{
	if(!instance)
	{
		//create a new Factoryimplementation
		instance.reset(OclPackageImpl::create());
		std::dynamic_pointer_cast<OclPackageImpl>(instance)->init(instance);
	}	
	return instance;
}
