//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_OCLCSFACTORYIMPL_HPP
#define OCL_OCLCSFACTORYIMPL_HPP

#include "ecore/impl/EFactoryImpl.hpp"

#include "ocl/OclCS/OclCSFactory.hpp"

namespace OclCS 
{
}

namespace ocl::OclCS 
{
	class OclCSFactoryImpl : virtual public ecore::EFactoryImpl , virtual public OclCSFactory 
	{
		private:    
			OclCSFactoryImpl(OclCSFactoryImpl const&) = delete;
			OclCSFactoryImpl& operator=(OclCSFactoryImpl const&) = delete;

		protected:
			friend class OclCSFactory;
			// Constructor
			OclCSFactoryImpl();

		public:
			virtual ~OclCSFactoryImpl();
			virtual std::shared_ptr<ecore::EObject> create(std::string _className,  std::shared_ptr<ecore::EObject> container=nullptr, const int referenceID = -1) const;
			virtual std::shared_ptr<ecore::EObject> create(const int classID,  std::shared_ptr<ecore::EObject> container = nullptr, const int referenceID = -1) const;
			virtual std::shared_ptr<ecore::EObject> create(std::shared_ptr<ecore::EClass> _class, std::shared_ptr<EObject> _container=nullptr, const int referenceID = -1) const;

			//Creator functions
			 

		private:
			static OclCSFactory* create();
            std::map<std::string,int> m_idMap;
	};
}
#endif /* end of include guard: OCL_OCLCSFACTORYIMPL_HPP */
