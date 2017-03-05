//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EENUMEENUMIMPL_HPP
#define ECORE_EENUMEENUMIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../EEnum.hpp"

#include "impl/EDataTypeImpl.hpp"



//*********************************
namespace ecore 
{
	class EEnumImpl :virtual public EDataTypeImpl, virtual public EEnum 
	{
		public: 
			EEnumImpl(const EEnumImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			EEnumImpl& operator=(EEnumImpl const&) = delete;

		protected:
			friend class EcoreFactoryImpl;
			EEnumImpl();

		public:
			//destructor
			virtual ~EEnumImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EEnumLiteral>  getEEnumLiteral(std::string name)  const  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EEnumLiteral>  getEEnumLiteral(int value)  const  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EEnumLiteral>  getEEnumLiteralByLiteral(std::string literal)  const  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<std::vector<std::shared_ptr<ecore::EEnumLiteral>>> getELiterals() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: ECORE_EENUMEENUMIMPL_HPP */
