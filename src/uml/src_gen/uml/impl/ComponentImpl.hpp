//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_COMPONENTCOMPONENTIMPL_HPP
#define UML_COMPONENTCOMPONENTIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Component.hpp"

#include "uml/impl/ClassImpl.hpp"

//*********************************
namespace uml 
{
	class ComponentImpl :virtual public ClassImpl, virtual public Component 
	{
		public: 
			ComponentImpl(const ComponentImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ComponentImpl& operator=(ComponentImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ComponentImpl();
			virtual std::shared_ptr<Component> getThisComponentPtr() const;
			virtual void setThisComponentPtr(std::weak_ptr<Component> thisComponentPtr);

			//Additional constructors for the containments back reference
			ComponentImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ComponentImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			ComponentImpl(std::weak_ptr<uml::Package > par_Package, const int reference_id);


			//Additional constructors for the containments back reference
			ComponentImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);


			//Additional constructors for the containments back reference




		public:
			//destructor
			virtual ~ComponentImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			Creates a(n) (abstract) class with the specified name as a packaged element of this component.
			*/
			 
			virtual std::shared_ptr<uml::Class> createOwnedClass(std::string name,bool isAbstract) ;
			
			/*!
			Creates a enumeration with the specified name as a packaged element of this component.
			*/
			 
			virtual std::shared_ptr<uml::Enumeration> createOwnedEnumeration(std::string name) ;
			
			/*!
			Creates an interface with the specified name as a packaged element of this component.
			*/
			 
			virtual std::shared_ptr<uml::Interface> createOwnedInterface(std::string name) ;
			
			/*!
			Creates a primitive type with the specified name as a packaged element of this component.
			*/
			 
			virtual std::shared_ptr<uml::PrimitiveType> createOwnedPrimitiveType(std::string name) ;
			
			/*!
			Derivation for Component::/provided
			result = (let 	ris : Set(Interface) = allRealizedInterfaces(),
			        realizingClassifiers : Set(Classifier) =  self.realization.realizingClassifier->union(self.allParents()->collect(realization.realizingClassifier))->asSet(),
			        allRealizingClassifiers : Set(Classifier) = realizingClassifiers->union(realizingClassifiers.allParents())->asSet(),
			        realizingClassifierInterfaces : Set(Interface) = allRealizingClassifiers->iterate(c; rci : Set(Interface) = Set{} | rci->union(c.allRealizedInterfaces())),
			        ports : Set(Port) = self.ownedPort->union(allParents()->collect(ownedPort))->asSet(),
			        providedByPorts : Set(Interface) = ports.provided->asSet()
			in     ris->union(realizingClassifierInterfaces) ->union(providedByPorts)->asSet())
			<p>From package UML::StructuredClassifiers.</p>
			*/
			 
			virtual std::shared_ptr<Bag<uml::Interface> > getProvideds() ;
			
			/*!
			Derivation for Component::/required
			result = (let 	uis : Set(Interface) = allUsedInterfaces(),
			        realizingClassifiers : Set(Classifier) = self.realization.realizingClassifier->union(self.allParents()->collect(realization.realizingClassifier))->asSet(),
			        allRealizingClassifiers : Set(Classifier) = realizingClassifiers->union(realizingClassifiers.allParents())->asSet(),
			        realizingClassifierInterfaces : Set(Interface) = allRealizingClassifiers->iterate(c; rci : Set(Interface) = Set{} | rci->union(c.allUsedInterfaces())),
			        ports : Set(Port) = self.ownedPort->union(allParents()->collect(ownedPort))->asSet(),
			        usedByPorts : Set(Interface) = ports.required->asSet()
			in	    uis->union(realizingClassifierInterfaces)->union(usedByPorts)->asSet()
			)
			<p>From package UML::StructuredClassifiers.</p>
			*/
			 
			virtual std::shared_ptr<Bag<uml::Interface> > getRequireds() ;
			
			/*!
			A Component cannot nest Classifiers.
			nestedClassifier->isEmpty()
			*/
			 
			virtual bool no_nested_classifiers(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			A Component nested in a Class cannot have any packaged elements.
			nestingClass <> null implies packagedElement->isEmpty()
			*/
			 
			virtual bool no_packaged_elements(Any diagnostics,std::map <   Any, Any >  context) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			If true, the Component is defined at design-time, but at run-time (or execution-time) an object specified by the Component does not exist, that is, the Component is instantiated indirectly, through the instantiation of its realizing Classifiers or parts.
			<p>From package UML::StructuredClassifiers.</p>
			*/
			 
			virtual bool getIsIndirectlyInstantiated() const ;
			
			/*!
			If true, the Component is defined at design-time, but at run-time (or execution-time) an object specified by the Component does not exist, that is, the Component is instantiated indirectly, through the instantiation of its realizing Classifiers or parts.
			<p>From package UML::StructuredClassifiers.</p>
			*/
			 
			virtual void setIsIndirectlyInstantiated (bool _isIndirectlyInstantiated); 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			The set of PackageableElements that a Component owns. In the namespace of a Component, all model elements that are involved in or related to its definition may be owned or imported explicitly. These may include e.g., Classes, Interfaces, Components, Packages, UseCases, Dependencies (e.g., mappings), and Artifacts.
			<p>From package UML::StructuredClassifiers.</p>
			*/
			
			virtual std::shared_ptr<Subset<uml::PackageableElement, uml::NamedElement>> getPackagedElement() const ;
			
			
			/*!
			The Interfaces that the Component exposes to its environment. These Interfaces may be Realized by the Component or any of its realizingClassifiers, or they may be the Interfaces that are provided by its public Ports.
			<p>From package UML::StructuredClassifiers.</p>
			*/
			
			virtual std::shared_ptr<Bag<uml::Interface>> getProvided() const ;
			
			
			/*!
			The set of Realizations owned by the Component. Realizations reference the Classifiers of which the Component is an abstraction; i.e., that realize its behavior.
			<p>From package UML::StructuredClassifiers.</p>
			*/
			
			virtual std::shared_ptr<Subset<uml::ComponentRealization, uml::Element>> getRealization() const ;
			
			
			/*!
			The Interfaces that the Component requires from other Components in its environment in order to be able to offer its full set of provided functionality. These Interfaces may be used by the Component or any of its realizingClassifiers, or they may be the Interfaces that are required by its public Ports.
			<p>From package UML::StructuredClassifiers.</p>
			*/
			
			virtual std::shared_ptr<Bag<uml::Interface>> getRequired() const ;
			
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			All of the Properties that are direct (i.e., not inherited or imported) attributes of the Classifier.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<SubsetUnion<uml::Property, uml::Feature>> getAttribute() const ;/*!
			Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<SubsetUnion<uml::Feature, uml::NamedElement>> getFeature() const ;/*!
			A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::NamedElement>> getMember() const ;/*!
			Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement>> getOwnedMember() const ;/*!
			The Element that owns this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const ;/*!
			The roles that instances may play in this StructuredClassifier.
			<p>From package UML::StructuredClassifiers.</p>
			*/
			
			virtual std::shared_ptr<SubsetUnion<uml::ConnectableElement, uml::NamedElement>> getRole() const ; 
			 
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
			std::weak_ptr<Component> m_thisComponentPtr;
	};
}
#endif /* end of include guard: UML_COMPONENTCOMPONENTIMPL_HPP */
