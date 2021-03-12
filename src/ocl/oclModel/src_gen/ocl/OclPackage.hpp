//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCLPACKAGE_HPP
#define OCLPACKAGE_HPP

#include "ecore/EPackage.hpp"

namespace ecore 
{
	class EAnnotation;
	class EAttribute;
	class EClass;
	class EDataType;
	class EEnum;
	class EEnumLiteral;
	class EGenericType;
	class EOperation;
	class EPackage;
	class EParameter;
	class EReference;
	class EStringToStringMapEntry;
}

namespace ocl 
{
	namespace Evaluations 
	{
		class EvaluationsPackage;
	}

	namespace Expressions 
	{
		class ExpressionsPackage;
	}

	namespace OclCS 
	{
		class OclCSPackage;
	}

	namespace Types 
	{
		class TypesPackage;
	}

	namespace Utilities 
	{
		class UtilitiesPackage;
	}

	namespace Values 
	{
		class ValuesPackage;
	}

}

namespace ocl 
{
	/*!
	The Metamodel Package for the ocl metamodel. This package is used to enable the reflection of model elements. It contains all model elements
	which were described in an ecore file.
	*/
	/*!
	 */
	class OclPackage : virtual public ecore::EPackage 
	{
		private:    
			OclPackage(OclPackage const&) = delete;
			OclPackage& operator=(OclPackage const&) = delete;

		protected:
			OclPackage(){}

		public:
			//static variables
			static const std::string eNAME;
			static const std::string eNS_URI;
			static const std::string eNS_PREFIX;

			
			

			virtual std::shared_ptr<Evaluations::EvaluationsPackage> getEvaluations_Package() const = 0;
			virtual std::shared_ptr<Expressions::ExpressionsPackage> getExpressions_Package() const = 0;
			virtual std::shared_ptr<OclCS::OclCSPackage> getOclCS_Package() const = 0;
			virtual std::shared_ptr<Types::TypesPackage> getTypes_Package() const = 0;
			virtual std::shared_ptr<Utilities::UtilitiesPackage> getUtilities_Package() const = 0;
			virtual std::shared_ptr<Values::ValuesPackage> getValues_Package() const = 0;
			

			//Singleton Instance and Getter
			private:
				static std::shared_ptr<OclPackage> instance;
			public:
				static std::shared_ptr<OclPackage> eInstance();
	};
}
#endif /* end of include guard: OCLPACKAGE_HPP */
