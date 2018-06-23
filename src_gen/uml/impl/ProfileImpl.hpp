//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_PROFILEPROFILEIMPL_HPP
#define UML_PROFILEPROFILEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Profile.hpp"

#include "uml/impl/PackageImpl.hpp"

//*********************************
namespace uml 
{
	class ProfileImpl :virtual public PackageImpl, virtual public Profile 
	{
		public: 
			ProfileImpl(const ProfileImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ProfileImpl& operator=(ProfileImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ProfileImpl();
			virtual std::shared_ptr<Profile> getThisProfilePtr();
			virtual void setThisProfilePtr(std::weak_ptr<Profile> thisProfilePtr);

			//Additional constructors for the containments back reference
			ProfileImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ProfileImpl(std::weak_ptr<uml::Package > par_Package, const int reference_id);


			//Additional constructors for the containments back reference
			ProfileImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference


			//Additional constructors for the containments back reference
			ProfileImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);




		public:
			//destructor
			virtual ~ProfileImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 Creates and returns an instance of (the Ecore representation of) the specified classifier defined in this profile. */ 
			virtual std::shared_ptr<ecore::EObject> create(std::shared_ptr<uml::Classifier>  classifier)  ;
			
			/*!
			 Defines this profile by (re)creating Ecore representations of its current contents. */ 
			virtual std::shared_ptr<ecore::EPackage> define()  ;
			
			/*!
			 Defines this profile by (re)creating Ecore representations of its current contents, using the specified options, diagnostics, and context. */ 
			virtual std::shared_ptr<ecore::EPackage> define(std::map <   std::string, std::string >  options,Any diagnostics,std::map <   Any, Any >  context)  ;
			
			/*!
			 Retrieves the current definition (Ecore representation) of this profile. */ 
			virtual std::shared_ptr<ecore::EPackage> getDefinition()  ;
			
			/*!
			 Retrieves the current definition (Ecore representation) of the specified named element in this profile. */ 
			virtual std::shared_ptr<ecore::ENamedElement> getDefinition(std::shared_ptr<uml::NamedElement>  namedElement)  ;
			
			/*!
			 Retrieves the extensions owned by this profile, excluding non-required extensions if indicated. */ 
			virtual std::shared_ptr<Bag<uml::Extension> > getOwnedExtensions(bool requiredOnly)  ;
			
			/*!
			 Retrieves the metaclasses referenced by this profile. */ 
			virtual std::shared_ptr<Bag<uml::Class> > getReferencedMetaclasses()  ;
			
			/*!
			 Retrieves the metamodels referenced by this profile. */ 
			virtual std::shared_ptr<Bag<uml::Model> > getReferencedMetamodels()  ;
			
			/*!
			 Determines whether this profile is defined. */ 
			virtual bool isDefined()  ;
			
			/*!
			 An element imported as a metaclassReference is not specialized or generalized in a Profile.
			metaclassReference.importedElement->
				select(c | c.oclIsKindOf(Classifier) and
					(c.oclAsType(Classifier).allParents()->collect(namespace)->includes(self)))->isEmpty()
			and 
			packagedElement->
			    select(oclIsKindOf(Classifier))->collect(oclAsType(Classifier).allParents())->
			       intersection(metaclassReference.importedElement->select(oclIsKindOf(Classifier))->collect(oclAsType(Classifier)))->isEmpty() */ 
			virtual bool metaclass_reference_not_specialized(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			/*!
			 All elements imported either as metaclassReferences or through metamodelReferences are members of the same base reference metamodel.
			metamodelReference.importedPackage.elementImport.importedElement.allOwningPackages()->
			  union(metaclassReference.importedElement.allOwningPackages() )->notEmpty() */ 
			virtual bool references_same_metamodel(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 References a metaclass that may be extended.
			<p>From package UML::Packages.</p> */
			virtual std::shared_ptr<Subset<uml::ElementImport, uml::ElementImport /*Subset does not reference a union*/>> getMetaclassReference() const ;
			
			/*!
			 References a package containing (directly or indirectly) metaclasses that may be extended.
			<p>From package UML::Packages.</p> */
			virtual std::shared_ptr<Subset<uml::PackageImport, uml::PackageImport /*Subset does not reference a union*/>> getMetamodelReference() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::NamedElement>> getMember() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement>> getOwnedMember() const ;/*!
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
			std::weak_ptr<Profile> m_thisProfilePtr;
	};
}
#endif /* end of include guard: UML_PROFILEPROFILEIMPL_HPP */
