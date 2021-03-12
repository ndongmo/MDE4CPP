#include "ocl/impl/OclPluginImpl.hpp"

#include "ocl/OclFactory.hpp"
#include "ocl/OclPackage.hpp"

using namespace ocl;

//*********************************
// Constructor / Destructor
//*********************************
OclPluginImpl::OclPluginImpl()
{
}

OclPluginImpl::~OclPluginImpl()
{
}


std::shared_ptr<ecore::EObject> OclPluginImpl::create(const std::string& name) const
{
	return OclFactory::eInstance()->create(name);
}

std::shared_ptr<ecore::EObject> OclPluginImpl::create(const std::string& name, std::shared_ptr<ecore::EObject> container, const unsigned int referenceID) const
{
	return OclFactory::eInstance()->create(name, container, referenceID);
}

std::shared_ptr<ecore::EFactory> OclPluginImpl::getEFactory()
{
	return OclFactory::eInstance();
}

std::shared_ptr<ecore::EPackage> OclPluginImpl::getEPackage()
{
	return OclPackage::eInstance();
}

std::string OclPluginImpl::eclipseURI()
{
	return "";
}

std::string OclPluginImpl::eNAME()
{
	return "ocl";
}

std::string OclPluginImpl::eNS_URI()
{
	return "http://ocl4cpp/ocl";
}

std::string OclPluginImpl::eNS_PREFIX()
{
	return "ocl";
}
