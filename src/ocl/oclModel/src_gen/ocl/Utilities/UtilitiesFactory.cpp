#include "ocl/Utilities/UtilitiesFactory.hpp"
#include "ocl/Utilities/impl/UtilitiesFactoryImpl.hpp"

using namespace ocl::Utilities;
				 
//static initialisation
std::shared_ptr<UtilitiesFactory> UtilitiesFactory::instance;

std::shared_ptr<UtilitiesFactory> UtilitiesFactory::eInstance()
{
	if(!instance)
	{
		//create a new Factoryimplementation
		instance.reset(UtilitiesFactoryImpl::create());
	}	
	return instance;
}
