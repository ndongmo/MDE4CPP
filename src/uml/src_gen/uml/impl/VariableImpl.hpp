//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_VARIABLEVARIABLEIMPL_HPP
#define UML_VARIABLEVARIABLEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Variable.hpp"

#include "uml/impl/ConnectableElementImpl.hpp"
#include "uml/impl/MultiplicityElementImpl.hpp"

//*********************************
namespace uml 
{
	class VariableImpl :virtual public ConnectableElementImpl, virtual public MultiplicityElementImpl, virtual public Variable 
	{
		public: 
			VariableImpl(const VariableImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			VariableImpl& operator=(VariableImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			VariableImpl();
			virtual std::shared_ptr<Variable> getThisVariablePtr() const;
			virtual void setThisVariablePtr(std::weak_ptr<Variable> thisVariablePtr);

			//Additional constructors for the containments back reference
			VariableImpl(std::weak_ptr<uml::Activity > par_activityScope);


			//Additional constructors for the containments back reference
			VariableImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			VariableImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			VariableImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);


			//Additional constructors for the containments back reference
			VariableImpl(std::weak_ptr<uml::StructuredActivityNode > par_scope);




		public:
			//destructor
			virtual ~VariableImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			A Variable is accessible by Actions within its scope (the Activity or StructuredActivityNode that owns it).
			result = (if scope<>null then scope.allOwnedNodes()->includes(a)
			else a.containingActivity()=activityScope
			endif)
			<p>From package UML::Activities.</p>
			*/
			 
			virtual bool isAccessibleBy(std::shared_ptr<uml::Action>  a) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			An Activity that owns the Variable.
			<p>From package UML::Activities.</p>
			*/
			
			virtual std::weak_ptr<uml::Activity > getActivityScope() const ;
			
			/*!
			An Activity that owns the Variable.
			<p>From package UML::Activities.</p>
			*/
			
			virtual void setActivityScope(std::shared_ptr<uml::Activity> _activityScope) ;
			
			/*!
			A StructuredActivityNode that owns the Variable.
			<p>From package UML::Activities.</p>
			*/
			
			virtual std::weak_ptr<uml::StructuredActivityNode > getScope() const ;
			
			/*!
			A StructuredActivityNode that owns the Variable.
			<p>From package UML::Activities.</p>
			*/
			
			virtual void setScope(std::shared_ptr<uml::StructuredActivityNode> _scope) ;
			
							
			
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
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<Variable> m_thisVariablePtr;
	};
}
#endif /* end of include guard: UML_VARIABLEVARIABLEIMPL_HPP */
