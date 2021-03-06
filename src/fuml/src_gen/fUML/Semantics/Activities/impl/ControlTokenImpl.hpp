//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_ACTIVITIES_CONTROLTOKENCONTROLTOKENIMPL_HPP
#define FUML_SEMANTICS_ACTIVITIES_CONTROLTOKENCONTROLTOKENIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ControlToken.hpp"

#include "fUML/Semantics/Activities/impl/ActivitiesFactoryImpl.hpp"
#include "fUML/Semantics/Activities/impl/TokenImpl.hpp"

//*********************************
namespace fUML::Semantics::Activities 
{
	class ControlTokenImpl : virtual public TokenImpl, virtual public ControlToken 
	{
		public: 
			ControlTokenImpl(const ControlTokenImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ControlTokenImpl& operator=(ControlTokenImpl const&) = delete;

		protected:
			friend class fUML::Semantics::Activities::ActivitiesFactoryImpl;
			ControlTokenImpl();
			virtual std::shared_ptr<ControlToken> getThisControlTokenPtr() const;
			virtual void setThisControlTokenPtr(std::weak_ptr<ControlToken> thisControlTokenPtr);



		public:
			//destructor
			virtual ~ControlTokenImpl();
			
			//*********************************
			// Operations
			//*********************************
			 
			virtual std::shared_ptr<fUML::Semantics::Activities::Token> _copy() ;
			
			 
			virtual bool equals(std::shared_ptr<fUML::Semantics::Activities::Token>  other) ;
			
			 
			virtual bool isControl() ;
			
			
			
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
			std::weak_ptr<ControlToken> m_thisControlTokenPtr;
	};
}
#endif /* end of include guard: FUML_SEMANTICS_ACTIVITIES_CONTROLTOKENCONTROLTOKENIMPL_HPP */
