//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef STANDARDPROFILE_METAMODELMETAMODELIMPL_HPP
#define STANDARDPROFILE_METAMODELMETAMODELIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Metamodel.hpp"


#include "ecore/impl/EObjectImpl.hpp"

//*********************************
namespace StandardProfile 
{
	class MetamodelImpl :virtual public ecore::EObjectImpl,
virtual public Metamodel 
	{
		public: 
			MetamodelImpl(const MetamodelImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			MetamodelImpl& operator=(MetamodelImpl const&) = delete;

		protected:
			friend class StandardProfileFactoryImpl;
			MetamodelImpl();
			virtual std::shared_ptr<Metamodel> getThisMetamodelPtr() const;
			virtual void setThisMetamodelPtr(std::weak_ptr<Metamodel> thisMetamodelPtr);



		public:
			//destructor
			virtual ~MetamodelImpl();
			
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
			virtual std::shared_ptr<uml::Model > getBase_Model() const ;
			
			/*!
			 */
			virtual void setBase_Model(std::shared_ptr<uml::Model> _base_Model_base_Model) ;
							
			
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
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<StandardProfile::StandardProfileFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<Metamodel> m_thisMetamodelPtr;
	};
}
#endif /* end of include guard: STANDARDPROFILE_METAMODELMETAMODELIMPL_HPP */
