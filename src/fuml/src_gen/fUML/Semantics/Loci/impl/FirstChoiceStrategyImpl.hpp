//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_LOCI_FIRSTCHOICESTRATEGYFIRSTCHOICESTRATEGYIMPL_HPP
#define FUML_SEMANTICS_LOCI_FIRSTCHOICESTRATEGYFIRSTCHOICESTRATEGYIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../FirstChoiceStrategy.hpp"

#include "fUML/Semantics/Loci/impl/LociFactoryImpl.hpp"
#include "fUML/Semantics/Loci/impl/ChoiceStrategyImpl.hpp"

//*********************************
namespace fUML::Semantics::Loci 
{
	class FirstChoiceStrategyImpl : virtual public ChoiceStrategyImpl, virtual public FirstChoiceStrategy 
	{
		public: 
			FirstChoiceStrategyImpl(const FirstChoiceStrategyImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			FirstChoiceStrategyImpl& operator=(FirstChoiceStrategyImpl const&) = delete;

		protected:
			friend class fUML::Semantics::Loci::LociFactoryImpl;
			FirstChoiceStrategyImpl();
			virtual std::shared_ptr<FirstChoiceStrategy> getThisFirstChoiceStrategyPtr() const;
			virtual void setThisFirstChoiceStrategyPtr(std::weak_ptr<FirstChoiceStrategy> thisFirstChoiceStrategyPtr);



		public:
			//destructor
			virtual ~FirstChoiceStrategyImpl();
			
			//*********************************
			// Operations
			//*********************************
			 
			virtual int choose(int size) ;
			
			
			
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
			std::weak_ptr<FirstChoiceStrategy> m_thisFirstChoiceStrategyPtr;
	};
}
#endif /* end of include guard: FUML_SEMANTICS_LOCI_FIRSTCHOICESTRATEGYFIRSTCHOICESTRATEGYIMPL_HPP */
