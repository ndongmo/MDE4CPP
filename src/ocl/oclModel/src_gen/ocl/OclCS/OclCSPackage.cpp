#include "ocl/OclCS/OclCSPackage.hpp"
#include "ocl/OclCS/impl/OclCSPackageImpl.hpp"

using namespace ocl::OclCS;

//static initialisation
const std::string OclCSPackage::eNAME ="OclCS";
const std::string OclCSPackage::eNS_URI ="";
const std::string OclCSPackage::eNS_PREFIX ="";

//Singleton 
std::shared_ptr<OclCSPackage> OclCSPackage::instance;

std::shared_ptr<OclCSPackage> OclCSPackage::eInstance()
{
	if(!instance)
	{
		//create a new Factoryimplementation
		instance.reset(OclCSPackageImpl::create());
		std::dynamic_pointer_cast<OclCSPackageImpl>(instance)->init(instance);
	}	
	return instance;
}
