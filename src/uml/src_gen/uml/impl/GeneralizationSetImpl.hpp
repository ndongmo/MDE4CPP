//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_GENERALIZATIONSETGENERALIZATIONSETIMPL_HPP
#define UML_GENERALIZATIONSETGENERALIZATIONSETIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../GeneralizationSet.hpp"

#include "uml/impl/PackageableElementImpl.hpp"

//*********************************
namespace uml 
{
	class GeneralizationSetImpl :virtual public PackageableElementImpl, virtual public GeneralizationSet 
	{
		public: 
			GeneralizationSetImpl(const GeneralizationSetImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			GeneralizationSetImpl& operator=(GeneralizationSetImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			GeneralizationSetImpl();
			virtual std::shared_ptr<GeneralizationSet> getThisGeneralizationSetPtr() const;
			virtual void setThisGeneralizationSetPtr(std::weak_ptr<GeneralizationSet> thisGeneralizationSetPtr);

			//Additional constructors for the containments back reference
			GeneralizationSetImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			GeneralizationSetImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			GeneralizationSetImpl(std::weak_ptr<uml::Package > par_owningPackage);


			//Additional constructors for the containments back reference
			GeneralizationSetImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);




		public:
			//destructor
			virtual ~GeneralizationSetImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			Every Generalization associated with a particular GeneralizationSet must have the same general Classifier.
			generalization->collect(general)->asSet()->size() <= 1
			*/
			 
			virtual bool generalization_same_classifier(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			The Classifier that maps to a GeneralizationSet may neither be a specific nor a general Classifier in any of the Generalization relationships defined for that GeneralizationSet. In other words, a power type may not be an instance of itself nor may its instances be its subclasses.
			powertype <> null implies generalization->forAll( gen | 
			    not (gen.general = powertype) and not gen.general.allParents()->includes(powertype) and not (gen.specific = powertype) and not powertype.allParents()->includes(gen.specific)
			  )
			*/
			 
			virtual bool maps_to_generalization_set(Any diagnostics,std::map <   Any, Any >  context) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			Indicates (via the associated Generalizations) whether or not the set of specific Classifiers are covering for a particular general classifier. When isCovering is true, every instance of a particular general Classifier is also an instance of at least one of its specific Classifiers for the GeneralizationSet. When isCovering is false, there are one or more instances of the particular general Classifier that are not instances of at least one of its specific Classifiers defined for the GeneralizationSet.
			<p>From package UML::Classification.</p>
			*/
			 
			virtual bool getIsCovering() const ;
			
			/*!
			Indicates (via the associated Generalizations) whether or not the set of specific Classifiers are covering for a particular general classifier. When isCovering is true, every instance of a particular general Classifier is also an instance of at least one of its specific Classifiers for the GeneralizationSet. When isCovering is false, there are one or more instances of the particular general Classifier that are not instances of at least one of its specific Classifiers defined for the GeneralizationSet.
			<p>From package UML::Classification.</p>
			*/
			 
			virtual void setIsCovering (bool _isCovering); 
			/*!
			Indicates whether or not the set of specific Classifiers in a Generalization relationship have instance in common. If isDisjoint is true, the specific Classifiers for a particular GeneralizationSet have no members in common; that is, their intersection is empty. If isDisjoint is false, the specific Classifiers in a particular GeneralizationSet have one or more members in common; that is, their intersection is not empty.
			<p>From package UML::Classification.</p>
			*/
			 
			virtual bool getIsDisjoint() const ;
			
			/*!
			Indicates whether or not the set of specific Classifiers in a Generalization relationship have instance in common. If isDisjoint is true, the specific Classifiers for a particular GeneralizationSet have no members in common; that is, their intersection is empty. If isDisjoint is false, the specific Classifiers in a particular GeneralizationSet have one or more members in common; that is, their intersection is not empty.
			<p>From package UML::Classification.</p>
			*/
			 
			virtual void setIsDisjoint (bool _isDisjoint); 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			Designates the instances of Generalization that are members of this GeneralizationSet.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<Bag<uml::Generalization>> getGeneralization() const ;
			
			
			/*!
			Designates the Classifier that is defined as the power type for the associated GeneralizationSet, if there is one.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<uml::Classifier > getPowertype() const ;
			
			/*!
			Designates the Classifier that is defined as the power type for the associated GeneralizationSet, if there is one.
			<p>From package UML::Classification.</p>
			*/
			
			virtual void setPowertype(std::shared_ptr<uml::Classifier> _powertype) ;
			
							
			
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
			std::weak_ptr<GeneralizationSet> m_thisGeneralizationSetPtr;
	};
}
#endif /* end of include guard: UML_GENERALIZATIONSETGENERALIZATIONSETIMPL_HPP */
