//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_TEMPLATEPARAMETERSUBSTITUTIONTEMPLATEPARAMETERSUBSTITUTIONIMPL_HPP
#define UML_TEMPLATEPARAMETERSUBSTITUTIONTEMPLATEPARAMETERSUBSTITUTIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../TemplateParameterSubstitution.hpp"

#include "uml/impl/ElementImpl.hpp"

//*********************************
namespace uml 
{
	class TemplateParameterSubstitutionImpl :virtual public ElementImpl, virtual public TemplateParameterSubstitution 
	{
		public: 
			TemplateParameterSubstitutionImpl(const TemplateParameterSubstitutionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			TemplateParameterSubstitutionImpl& operator=(TemplateParameterSubstitutionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			TemplateParameterSubstitutionImpl();
			virtual std::shared_ptr<TemplateParameterSubstitution> getThisTemplateParameterSubstitutionPtr();
			virtual void setThisTemplateParameterSubstitutionPtr(std::weak_ptr<TemplateParameterSubstitution> thisTemplateParameterSubstitutionPtr);

			//Additional constructors for the containments back reference
			TemplateParameterSubstitutionImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			TemplateParameterSubstitutionImpl(std::weak_ptr<uml::TemplateBinding > par_templateBinding);




		public:
			//destructor
			virtual ~TemplateParameterSubstitutionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The actual ParameterableElement must be compatible with the formal TemplateParameter, e.g., the actual ParameterableElement for a Class TemplateParameter must be a Class.
			actual->forAll(a | a.isCompatibleWith(formal.parameteredElement)) */ 
			virtual bool must_be_compatible(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The ParameterableElement that is the actual parameter for this TemplateParameterSubstitution.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::ParameterableElement > getActual() const ;
			
			/*!
			 The ParameterableElement that is the actual parameter for this TemplateParameterSubstitution.
			<p>From package UML::CommonStructure.</p> */
			virtual void setActual(std::shared_ptr<uml::ParameterableElement> _actual_actual) ;
			/*!
			 The formal TemplateParameter that is associated with this TemplateParameterSubstitution.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::TemplateParameter > getFormal() const ;
			
			/*!
			 The formal TemplateParameter that is associated with this TemplateParameterSubstitution.
			<p>From package UML::CommonStructure.</p> */
			virtual void setFormal(std::shared_ptr<uml::TemplateParameter> _formal_formal) ;
			/*!
			 The ParameterableElement that is owned by this TemplateParameterSubstitution as its actual parameter.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::ParameterableElement > getOwnedActual() const ;
			
			/*!
			 The ParameterableElement that is owned by this TemplateParameterSubstitution as its actual parameter.
			<p>From package UML::CommonStructure.</p> */
			virtual void setOwnedActual(std::shared_ptr<uml::ParameterableElement> _ownedActual_ownedActual) ;
			/*!
			 The TemplateBinding that owns this TemplateParameterSubstitution.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::TemplateBinding > getTemplateBinding() const ;
			
			/*!
			 The TemplateBinding that owns this TemplateParameterSubstitution.
			<p>From package UML::CommonStructure.</p> */
			virtual void setTemplateBinding(std::shared_ptr<uml::TemplateBinding> _templateBinding_templateBinding) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
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
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<uml::UmlFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<TemplateParameterSubstitution> m_thisTemplateParameterSubstitutionPtr;
	};
}
#endif /* end of include guard: UML_TEMPLATEPARAMETERSUBSTITUTIONTEMPLATEPARAMETERSUBSTITUTIONIMPL_HPP */
