//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_CONTROLTOKENCONTROLTOKENIMPL_HPP
#define FUML_CONTROLTOKENCONTROLTOKENIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../ControlToken.hpp"

#include "impl/TokenImpl.hpp"

#include "FUMLFactory.hpp"


//*********************************
namespace fUML 
{
	class ControlTokenImpl :virtual public TokenImpl, virtual public ControlToken 
	{
		public: 
			ControlTokenImpl(const ControlTokenImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ControlTokenImpl& operator=(ControlTokenImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ControlTokenImpl();

		public:
			//destructor
			virtual ~ControlTokenImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool equals(std::shared_ptr<fUML::Token>  other)  ;
			
			/*!
			 */ 
			virtual bool isControl()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Value>  getValue()  const  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_CONTROLTOKENCONTROLTOKENIMPL_HPP */

