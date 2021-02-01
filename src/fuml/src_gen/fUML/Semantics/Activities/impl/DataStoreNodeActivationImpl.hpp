//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_ACTIVITIES_DATASTORENODEACTIVATIONDATASTORENODEACTIVATIONIMPL_HPP
#define FUML_SEMANTICS_ACTIVITIES_DATASTORENODEACTIVATIONDATASTORENODEACTIVATIONIMPL_HPP

//*********************************
// generated Includes
//Model includes
#include "../DataStoreNodeActivation.hpp"

#include "fUML/Semantics/Activities/impl/ActivitiesFactoryImpl.hpp"
#include "fUML/Semantics/Activities/impl/CentralBufferNodeActivationImpl.hpp"

//*********************************
namespace fUML::Semantics::Activities 
{
	class DataStoreNodeActivationImpl : virtual public CentralBufferNodeActivationImpl, virtual public DataStoreNodeActivation 
	{
		public: 
			DataStoreNodeActivationImpl(const DataStoreNodeActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			DataStoreNodeActivationImpl& operator=(DataStoreNodeActivationImpl const&) = delete;

		protected:
			friend class fUML::Semantics::Activities::ActivitiesFactoryImpl;
			DataStoreNodeActivationImpl();
			virtual std::shared_ptr<DataStoreNodeActivation> getThisDataStoreNodeActivationPtr() const;
			virtual void setThisDataStoreNodeActivationPtr(std::weak_ptr<DataStoreNodeActivation> thisDataStoreNodeActivationPtr);

			//Additional constructors for the containments back reference
			DataStoreNodeActivationImpl(std::weak_ptr<fUML::Semantics::Activities::ActivityNodeActivationGroup > par_group);




		public:
			//destructor
			virtual ~DataStoreNodeActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			 
			virtual void addToken(std::shared_ptr<fUML::Semantics::Activities::Token> token) ;
			
			 
			virtual int removeToken(std::shared_ptr<fUML::Semantics::Activities::Token> token) ;
			
			
			
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

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler);
			
			virtual void resolveReferences(const int featureID, std::vector<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<DataStoreNodeActivation> m_thisDataStoreNodeActivationPtr;
	};
}
#endif /* end of include guard: FUML_SEMANTICS_ACTIVITIES_DATASTORENODEACTIVATIONDATASTORENODEACTIVATIONIMPL_HPP */
