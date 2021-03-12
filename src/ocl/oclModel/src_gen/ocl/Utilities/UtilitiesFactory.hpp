//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_UTILITIESFACTORY_HPP
#define OCL_UTILITIESFACTORY_HPP

#include <map>
#include <memory>

#include "ecore/EFactory.hpp"
#include "ocl/Utilities/UtilitiesPackage.hpp"



namespace ocl::Utilities 
{
	class UtilitiesFactory : virtual public ecore::EFactory 
	{
		private:    
			UtilitiesFactory(UtilitiesFactory const&) = delete;
			UtilitiesFactory& operator=(UtilitiesFactory const&) = delete;
		protected:
			UtilitiesFactory(){}
		
			//Singleton Instance and Getter
			private:
				static std::shared_ptr<UtilitiesFactory> instance;
			public:
				static std::shared_ptr<UtilitiesFactory> eInstance();
		
			//Creator functions
			virtual std::shared_ptr<ecore::EObject> create(std::string _className,  std::shared_ptr<ecore::EObject> container=nullptr, const int referenceID = -1) const = 0;
			virtual std::shared_ptr<ecore::EObject> create(const int classID,  std::shared_ptr<ecore::EObject> container = nullptr, const int referenceID = -1) const = 0;
			virtual std::shared_ptr<ecore::EObject> create(std::shared_ptr<ecore::EClass> _class, std::shared_ptr<EObject> _container=nullptr, const int referenceID = -1) const = 0;

			
	};
}
#endif /* end of include guard: OCL_UTILITIESFACTORY_HPP */
