//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_TOKENSETTOKENSETIMPL_HPP
#define FUML_TOKENSETTOKENSETIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../TokenSet.hpp"


#include "impl/EObjectImpl.hpp"



//*********************************
namespace fUML 
{
	class TokenSetImpl :virtual public ecore::EObjectImpl,
virtual public TokenSet 
	{
		public: 
			TokenSetImpl(const TokenSetImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			TokenSetImpl& operator=(TokenSetImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			TokenSetImpl();

		public:
			//destructor
			virtual ~TokenSetImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<std::vector<std::shared_ptr<fUML::Token>>> getTokens() const ;
			
							
			
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
#endif /* end of include guard: FUML_TOKENSETTOKENSETIMPL_HPP */

