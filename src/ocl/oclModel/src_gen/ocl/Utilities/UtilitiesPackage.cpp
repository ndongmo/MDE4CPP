#include "ocl/Utilities/UtilitiesPackage.hpp"
#include "ocl/Utilities/impl/UtilitiesPackageImpl.hpp"

using namespace ocl::Utilities;

//static initialisation
const std::string UtilitiesPackage::eNAME ="Utilities";
const std::string UtilitiesPackage::eNS_URI ="";
const std::string UtilitiesPackage::eNS_PREFIX ="";

//Singleton 
std::shared_ptr<UtilitiesPackage> UtilitiesPackage::instance;

std::shared_ptr<UtilitiesPackage> UtilitiesPackage::eInstance()
{
	if(!instance)
	{
		//create a new Factoryimplementation
		instance.reset(UtilitiesPackageImpl::create());
		std::dynamic_pointer_cast<UtilitiesPackageImpl>(instance)->init(instance);
	}	
	return instance;
}
