//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_UTILITIESPACKAGEIMPL_HPP
#define OCL_UTILITIESPACKAGEIMPL_HPP

#include "ecore/EcorePackage.hpp"
#include "ecore/impl/EPackageImpl.hpp"

#include "ocl/Utilities/UtilitiesPackage.hpp" 


namespace ocl::Utilities 
{
}

namespace ecore
{
	class EcoreFactory;
}

namespace ocl::Utilities
{
	class UtilitiesPackageImpl : public ecore::EPackageImpl ,virtual public UtilitiesPackage
	{
		private:    
			UtilitiesPackageImpl(UtilitiesPackageImpl const&) = delete;
			UtilitiesPackageImpl& operator=(UtilitiesPackageImpl const&) = delete;

		protected:
			UtilitiesPackageImpl();

		public:
			virtual ~UtilitiesPackageImpl();


			
			// SubPackages Getters
			

		private:
			
			
			
			
			

			friend class UtilitiesPackage;

			static bool isInited;
			static UtilitiesPackage* create();
			bool isInitialized = false;
 			bool isCreated = false;

			virtual void init(std::shared_ptr<ecore::EPackage> package);

		public:
			void createPackageContents(std::shared_ptr<ecore::EPackage> package);
			void initializePackageContents();

		private:
			void createPackageEDataTypes(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);

			void initializePackageEDataTypes();



	};
}
#endif /* end of include guard: OCL_UTILITIESPACKAGEIMPL_HPP */
