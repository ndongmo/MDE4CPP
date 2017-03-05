//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_DATASTOREACTIVATIONDATASTOREACTIVATIONIMPL_HPP
#define FUML_DATASTOREACTIVATIONDATASTOREACTIVATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../DataStoreActivation.hpp"

#include "impl/ActionActivationImpl.hpp"



//*********************************
namespace fUML 
{
	class DataStoreActivationImpl :virtual public ActionActivationImpl, virtual public DataStoreActivation 
	{
		public: 
			DataStoreActivationImpl(const DataStoreActivationImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			DataStoreActivationImpl& operator=(DataStoreActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			DataStoreActivationImpl();

		public:
			//destructor
			virtual ~DataStoreActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void sendOffers()  ;
			
			/*!
			 */ 
			virtual void fire(std::shared_ptr<std::vector<std::shared_ptr<fUML::Token>>>  incomingTokens)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<fUML::Execution> getCurrentExecution() const ;
			
			/*!
			 */
			virtual void setCurrentExecution(std::shared_ptr<fUML::Execution> _currentExecution) ;
			/*!
			 */
			virtual std::shared_ptr<std::vector<std::shared_ptr<fUML::Token>>> getStoredTokens() const ;
			
							
			
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
#endif /* end of include guard: FUML_DATASTOREACTIVATIONDATASTOREACTIVATIONIMPL_HPP */

