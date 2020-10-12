//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef TYPESPACKAGE_HPP
#define TYPESPACKAGE_HPP

#include "ecore/EPackage.hpp"

namespace ecore 
{
	class EAnnotation;
	class EDataType;
	class EStringToStringMapEntry;
}

namespace types 
{

}

namespace types 
{
	/*!
	The Metamodel Package for the types metamodel. This package is used to enable the reflection of model elements. It contains all model elements
	which were described in an ecore file.
	*/
	
	class TypesPackage : virtual public ecore::EPackage 
	{
		private:    
			TypesPackage(TypesPackage const&) = delete;
			TypesPackage& operator=(TypesPackage const&) = delete;

		protected:
			TypesPackage(){}

		public:
			//static variables
			static const std::string eNAME;
			static const std::string eNS_URI;
			static const std::string eNS_PREFIX;

			static const int BOOLEAN_CLASS = 1;
			static const int INTEGER_CLASS = 2;
			static const int REAL_CLASS = 3;
			static const int STRING_CLASS = 4;
			static const int UNLIMITEDNATURAL_CLASS = 5;
			
			virtual std::shared_ptr<ecore::EDataType> getBoolean_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getInteger_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getReal_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getString_Class() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getUnlimitedNatural_Class() const = 0;
			

			

			//Singleton Instance and Getter
			private:
				static std::shared_ptr<TypesPackage> instance;
			public:
				static std::shared_ptr<TypesPackage> eInstance();
	};
}
#endif /* end of include guard: TYPESPACKAGE_HPP */
