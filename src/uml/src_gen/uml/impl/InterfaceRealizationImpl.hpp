//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_INTERFACEREALIZATIONINTERFACEREALIZATIONIMPL_HPP
#define UML_INTERFACEREALIZATIONINTERFACEREALIZATIONIMPL_HPP

//*********************************
// generated Includes
//Model includes
#include "../InterfaceRealization.hpp"

#include "uml/impl/RealizationImpl.hpp"

//*********************************
namespace uml 
{
	class InterfaceRealizationImpl : virtual public RealizationImpl, virtual public InterfaceRealization 
	{
		public: 
			InterfaceRealizationImpl(const InterfaceRealizationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			InterfaceRealizationImpl& operator=(InterfaceRealizationImpl const&) = delete;

		protected:
			friend class umlFactoryImpl;
			InterfaceRealizationImpl();
			virtual std::shared_ptr<InterfaceRealization> getThisInterfaceRealizationPtr() const;
			virtual void setThisInterfaceRealizationPtr(std::weak_ptr<InterfaceRealization> thisInterfaceRealizationPtr);

			//Additional constructors for the containments back reference
			InterfaceRealizationImpl(std::weak_ptr<uml::BehavioredClassifier > par_implementingClassifier);


			//Additional constructors for the containments back reference
			InterfaceRealizationImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			InterfaceRealizationImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			InterfaceRealizationImpl(std::weak_ptr<uml::Package > par_owningPackage);


			//Additional constructors for the containments back reference
			InterfaceRealizationImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);




		public:
			//destructor
			virtual ~InterfaceRealizationImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			References the Interface specifying the conformance contract.
			<p>From package UML::SimpleClassifiers.</p>
			*/
			
			virtual std::shared_ptr<uml::Interface > getContract() const ;
			
			/*!
			References the Interface specifying the conformance contract.
			<p>From package UML::SimpleClassifiers.</p>
			*/
			
			virtual void setContract(std::shared_ptr<uml::Interface> _contract) ;
			
			/*!
			References the BehavioredClassifier that owns this InterfaceRealization, i.e., the BehavioredClassifier that realizes the Interface to which it refers.
			<p>From package UML::SimpleClassifiers.</p>
			*/
			
			virtual std::weak_ptr<uml::BehavioredClassifier > getImplementingClassifier() const ;
			
			/*!
			References the BehavioredClassifier that owns this InterfaceRealization, i.e., the BehavioredClassifier that realizes the Interface to which it refers.
			<p>From package UML::SimpleClassifiers.</p>
			*/
			
			virtual void setImplementingClassifier(std::shared_ptr<uml::BehavioredClassifier> _implementingClassifier) ;
			
							
			
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
			
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Element>> getRelatedElement() const ;/*!
			Specifies the source Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element>> getSource() const ;/*!
			Specifies the target Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element>> getTarget() const ; 
			 
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
			std::weak_ptr<InterfaceRealization> m_thisInterfaceRealizationPtr;
	};
}
#endif /* end of include guard: UML_INTERFACEREALIZATIONINTERFACEREALIZATIONIMPL_HPP */
