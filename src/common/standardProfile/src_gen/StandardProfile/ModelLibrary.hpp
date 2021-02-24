//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef STANDARDPROFILE_MODELLIBRARY__HPP
#define STANDARDPROFILE_MODELLIBRARY__HPP




//Forward Declaration for used types
namespace uml 
{
	class Package;
}

// base class includes
#include "uml/Stereotype.hpp"



namespace StandardProfile
{
	class ModelLibrary : virtual public uml::Stereotype 
	{
		protected:
			ModelLibrary(){}

		public:
			//destructor
			virtual ~ModelLibrary() {}

			//*********************************
			// Getter Setter
			//*********************************
			virtual std::weak_ptr<uml::Package> getBase_Package() const  = 0;
			virtual void setBase_Package(std::weak_ptr<uml::Package> _base_Package) = 0;
			
			
			
			//*********************************
			// Operations
			//*********************************
			
			
		protected:
			//*********************************
			// Members
			//*********************************
			std::weak_ptr<uml::Package> m_base_Package;
			
			
	};
}
#endif /* end of include guard: STANDARDPROFILE_MODELLIBRARY__HPP */
