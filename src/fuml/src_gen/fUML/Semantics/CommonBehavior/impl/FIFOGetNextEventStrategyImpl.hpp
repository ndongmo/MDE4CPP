//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_FIFOGETNEXTEVENTSTRATEGYFIFOGETNEXTEVENTSTRATEGYIMPL_HPP
#define FUML_SEMANTICS_COMMONBEHAVIOR_FIFOGETNEXTEVENTSTRATEGYFIFOGETNEXTEVENTSTRATEGYIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../FIFOGetNextEventStrategy.hpp"

#include "fUML/Semantics/CommonBehavior/impl/CommonBehaviorFactoryImpl.hpp"
#include "fUML/Semantics/CommonBehavior/impl/GetNextEventStrategyImpl.hpp"

//*********************************
namespace fUML::Semantics::CommonBehavior 
{
	class FIFOGetNextEventStrategyImpl : virtual public GetNextEventStrategyImpl, virtual public FIFOGetNextEventStrategy 
	{
		public: 
			FIFOGetNextEventStrategyImpl(const FIFOGetNextEventStrategyImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			FIFOGetNextEventStrategyImpl& operator=(FIFOGetNextEventStrategyImpl const&) = delete;

		protected:
			friend class fUML::Semantics::CommonBehavior::CommonBehaviorFactoryImpl;
			FIFOGetNextEventStrategyImpl();
			virtual std::shared_ptr<FIFOGetNextEventStrategy> getThisFIFOGetNextEventStrategyPtr() const;
			virtual void setThisFIFOGetNextEventStrategyPtr(std::weak_ptr<FIFOGetNextEventStrategy> thisFIFOGetNextEventStrategyPtr);



		public:
			//destructor
			virtual ~FIFOGetNextEventStrategyImpl();
			
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
			std::weak_ptr<FIFOGetNextEventStrategy> m_thisFIFOGetNextEventStrategyPtr;
	};
}
#endif /* end of include guard: FUML_SEMANTICS_COMMONBEHAVIOR_FIFOGETNEXTEVENTSTRATEGYFIFOGETNEXTEVENTSTRATEGYIMPL_HPP */
