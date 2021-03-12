#include "ocl/OclCS/OclCSFactory.hpp"
#include "ocl/OclCS/impl/OclCSFactoryImpl.hpp"

using namespace ocl::OclCS;
				 
//static initialisation
std::shared_ptr<OclCSFactory> OclCSFactory::instance;

std::shared_ptr<OclCSFactory> OclCSFactory::eInstance()
{
	if(!instance)
	{
		//create a new Factoryimplementation
		instance.reset(OclCSFactoryImpl::create());
	}	
	return instance;
}
