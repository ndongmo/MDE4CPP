//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_ACTIVITIES_MERGENODEACTIVATIONMERGENODEACTIVATIONIMPL_HPP
#define FUML_SEMANTICS_ACTIVITIES_MERGENODEACTIVATIONMERGENODEACTIVATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../MergeNodeActivation.hpp"

#include "fUML/Semantics/Activities/impl/ActivitiesFactoryImpl.hpp"
#include "fUML/Semantics/Activities/impl/ControlNodeActivationImpl.hpp"

//*********************************
namespace fUML::Semantics::Activities 
{
	class MergeNodeActivationImpl : virtual public ControlNodeActivationImpl, virtual public MergeNodeActivation 
	{
		public: 
			MergeNodeActivationImpl(const MergeNodeActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			MergeNodeActivationImpl& operator=(MergeNodeActivationImpl const&);

		protected:
			friend class fUML::Semantics::Activities::ActivitiesFactoryImpl;
			MergeNodeActivationImpl();
			virtual std::shared_ptr<MergeNodeActivation> getThisMergeNodeActivationPtr() const;
			virtual void setThisMergeNodeActivationPtr(std::weak_ptr<MergeNodeActivation> thisMergeNodeActivationPtr);

			//Additional constructors for the containments back reference
			MergeNodeActivationImpl(std::weak_ptr<fUML::Semantics::Activities::ActivityNodeActivationGroup > par_group);




		public:
			//destructor
			virtual ~MergeNodeActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
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
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<MergeNodeActivation> m_thisMergeNodeActivationPtr;
	};
}
#endif /* end of include guard: FUML_SEMANTICS_ACTIVITIES_MERGENODEACTIVATIONMERGENODEACTIVATIONIMPL_HPP */
