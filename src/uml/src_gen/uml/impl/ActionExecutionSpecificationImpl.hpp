//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ACTIONEXECUTIONSPECIFICATIONACTIONEXECUTIONSPECIFICATIONIMPL_HPP
#define UML_ACTIONEXECUTIONSPECIFICATIONACTIONEXECUTIONSPECIFICATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ActionExecutionSpecification.hpp"

#include "uml/impl/ExecutionSpecificationImpl.hpp"

//*********************************
namespace uml 
{
	class ActionExecutionSpecificationImpl : virtual public ExecutionSpecificationImpl, virtual public ActionExecutionSpecification 
	{
		public: 
			ActionExecutionSpecificationImpl(const ActionExecutionSpecificationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:
			ActionExecutionSpecificationImpl& operator=(ActionExecutionSpecificationImpl const&) = delete;

		protected:
			friend class umlFactoryImpl;
			ActionExecutionSpecificationImpl();
			virtual std::shared_ptr<ActionExecutionSpecification> getThisActionExecutionSpecificationPtr() const;
			virtual void setThisActionExecutionSpecificationPtr(std::weak_ptr<ActionExecutionSpecification> thisActionExecutionSpecificationPtr);

			//Additional constructors for the containments back reference
			ActionExecutionSpecificationImpl(std::weak_ptr<uml::Interaction> par_enclosingInteraction);
			//Additional constructors for the containments back reference
			ActionExecutionSpecificationImpl(std::weak_ptr<uml::InteractionOperand> par_enclosingOperand);
			//Additional constructors for the containments back reference
			ActionExecutionSpecificationImpl(std::weak_ptr<uml::Namespace> par_namespace);
			//Additional constructors for the containments back reference
			ActionExecutionSpecificationImpl(std::weak_ptr<uml::Element> par_owner);

		public:
			//destructor
			virtual ~ActionExecutionSpecificationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			The Action referenced by the ActionExecutionSpecification must be owned by the Interaction owning that ActionExecutionSpecification.
			(enclosingInteraction->notEmpty() or enclosingOperand.combinedFragment->notEmpty()) and
			let parentInteraction : Set(Interaction) = enclosingInteraction.oclAsType(Interaction)->asSet()->union(
			enclosingOperand.combinedFragment->closure(enclosingOperand.combinedFragment)->
			collect(enclosingInteraction).oclAsType(Interaction)->asSet()) in
			(parentInteraction->size() = 1) and self.action.interaction->asSet() = parentInteraction
			*/
			 
			virtual bool action_referenced(Any diagnostics,std::shared_ptr<std::map < Any, Any>> context) ;
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			Action whose execution is occurring.
			<p>From package UML::Interactions.</p>
			*/
			
			virtual std::shared_ptr<uml::Action> getAction() const ;
			/*!
			Action whose execution is occurring.
			<p>From package UML::Interactions.</p>
			*/
			
			virtual void setAction(std::shared_ptr<uml::Action>) ;
			
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Namespace> getNamespace() const ;/*!
			The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			The Element that owns this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Element> getOwner() const ; 
			 
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
			std::weak_ptr<ActionExecutionSpecification> m_thisActionExecutionSpecificationPtr;
	};
}
#endif /* end of include guard: UML_ACTIONEXECUTIONSPECIFICATIONACTIONEXECUTIONSPECIFICATIONIMPL_HPP */
