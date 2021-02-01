//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_EXECUTIONSPECIFICATIONEXECUTIONSPECIFICATIONIMPL_HPP
#define UML_EXECUTIONSPECIFICATIONEXECUTIONSPECIFICATIONIMPL_HPP

//*********************************
// generated Includes
//Model includes
#include "../ExecutionSpecification.hpp"

#include "uml/impl/InteractionFragmentImpl.hpp"

//*********************************
namespace uml 
{
	class ExecutionSpecificationImpl : virtual public InteractionFragmentImpl, virtual public ExecutionSpecification 
	{
		public: 
			ExecutionSpecificationImpl(const ExecutionSpecificationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ExecutionSpecificationImpl& operator=(ExecutionSpecificationImpl const&) = delete;

		protected:
			friend class umlFactoryImpl;
			ExecutionSpecificationImpl();
			virtual std::shared_ptr<ExecutionSpecification> getThisExecutionSpecificationPtr() const;
			virtual void setThisExecutionSpecificationPtr(std::weak_ptr<ExecutionSpecification> thisExecutionSpecificationPtr);

			//Additional constructors for the containments back reference
			ExecutionSpecificationImpl(std::weak_ptr<uml::Interaction > par_enclosingInteraction);


			//Additional constructors for the containments back reference
			ExecutionSpecificationImpl(std::weak_ptr<uml::InteractionOperand > par_enclosingOperand);


			//Additional constructors for the containments back reference
			ExecutionSpecificationImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ExecutionSpecificationImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~ExecutionSpecificationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			The startEvent and the finishEvent must be on the same Lifeline.
			start.covered = finish.covered
			*/
			 
			virtual bool same_lifeline(Any diagnostics,std::map <  Any ,  Any > context) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			References the OccurrenceSpecification that designates the finish of the Action or Behavior.
			<p>From package UML::Interactions.</p>
			*/
			
			virtual std::shared_ptr<uml::OccurrenceSpecification > getFinish() const ;
			
			/*!
			References the OccurrenceSpecification that designates the finish of the Action or Behavior.
			<p>From package UML::Interactions.</p>
			*/
			
			virtual void setFinish(std::shared_ptr<uml::OccurrenceSpecification> _finish) ;
			
			/*!
			References the OccurrenceSpecification that designates the start of the Action or Behavior.
			<p>From package UML::Interactions.</p>
			*/
			
			virtual std::shared_ptr<uml::OccurrenceSpecification > getStart() const ;
			
			/*!
			References the OccurrenceSpecification that designates the start of the Action or Behavior.
			<p>From package UML::Interactions.</p>
			*/
			
			virtual void setStart(std::shared_ptr<uml::OccurrenceSpecification> _start) ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			The Element that owns this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Element > getOwner() const ; 
			 
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
			std::weak_ptr<ExecutionSpecification> m_thisExecutionSpecificationPtr;
	};
}
#endif /* end of include guard: UML_EXECUTIONSPECIFICATIONEXECUTIONSPECIFICATIONIMPL_HPP */
