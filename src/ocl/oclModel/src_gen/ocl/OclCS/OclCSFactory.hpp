//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_OCLCSFACTORY_HPP
#define OCL_OCLCSFACTORY_HPP

#include <map>
#include <memory>

#include "ecore/EFactory.hpp"



namespace ocl::OclCS 
{
	class OclCSFactory : virtual public ecore::EFactory 
	{
		private:    
			OclCSFactory(OclCSFactory const&) = delete;
			OclCSFactory& operator=(OclCSFactory const&) = delete;
		protected:
			OclCSFactory(){}
		
			//Singleton Instance and Getter
			private:
				static std::shared_ptr<OclCSFactory> instance;
			public:
				static std::shared_ptr<OclCSFactory> eInstance();
		
			//Creator functions
			virtual std::shared_ptr<ecore::EObject> create(std::string _className,  std::shared_ptr<ecore::EObject> container=nullptr, const int referenceID = -1) const = 0;
			virtual std::shared_ptr<ecore::EObject> create(const int classID,  std::shared_ptr<ecore::EObject> container = nullptr, const int referenceID = -1) const = 0;
			virtual std::shared_ptr<ecore::EObject> create(std::shared_ptr<ecore::EClass> _class, std::shared_ptr<EObject> _container=nullptr, const int referenceID = -1) const = 0;

			
	};
}
#endif /* end of include guard: OCL_OCLCSFACTORY_HPP */
