//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_RECLASSIFYOBJECTACTIONRECLASSIFYOBJECTACTIONIMPL_HPP
#define UML_RECLASSIFYOBJECTACTIONRECLASSIFYOBJECTACTIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ReclassifyObjectAction.hpp"

#include "uml/impl/ActionImpl.hpp"

//*********************************
namespace uml 
{
	class ReclassifyObjectActionImpl : virtual public ActionImpl, virtual public ReclassifyObjectAction 
	{
		public: 
			ReclassifyObjectActionImpl(const ReclassifyObjectActionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:
			ReclassifyObjectActionImpl& operator=(ReclassifyObjectActionImpl const&) = delete;

		protected:
			friend class umlFactoryImpl;
			ReclassifyObjectActionImpl();
			virtual std::shared_ptr<ReclassifyObjectAction> getThisReclassifyObjectActionPtr() const;
			virtual void setThisReclassifyObjectActionPtr(std::weak_ptr<ReclassifyObjectAction> thisReclassifyObjectActionPtr);

			//Additional constructors for the containments back reference
			ReclassifyObjectActionImpl(std::weak_ptr<uml::Activity> par_activity);
			//Additional constructors for the containments back reference
			ReclassifyObjectActionImpl(std::weak_ptr<uml::StructuredActivityNode> par_inStructuredNode);
			//Additional constructors for the containments back reference
			ReclassifyObjectActionImpl(std::weak_ptr<uml::Namespace> par_namespace);
			//Additional constructors for the containments back reference
			ReclassifyObjectActionImpl(std::weak_ptr<uml::Element> par_owner);

		public:
			//destructor
			virtual ~ReclassifyObjectActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			None of the newClassifiers may be abstract.
			not newClassifier->exists(isAbstract)
			*/
			 
			virtual bool classifier_not_abstract(Any diagnostics,std::shared_ptr<std::map < Any, Any>> context) ;/*!
			The object InputPin has no type.
			object.type = null
			*/
			 
			virtual bool input_pin(Any diagnostics,std::shared_ptr<std::map < Any, Any>> context) ;/*!
			The multiplicity of the object InputPin is 1..1.
			object.is(1,1)
			*/
			 
			virtual bool multiplicity(Any diagnostics,std::shared_ptr<std::map < Any, Any>> context) ;
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			Specifies whether existing Classifiers should be removed before adding the new Classifiers.
			<p>From package UML::Actions.</p>
			*/
			 
			virtual bool getIsReplaceAll() const ;
			/*!
			Specifies whether existing Classifiers should be removed before adding the new Classifiers.
			<p>From package UML::Actions.</p>
			*/
			 
			virtual void setIsReplaceAll (bool _isReplaceAll);
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			A set of Classifiers to be added to the Classifiers of the given object.
			<p>From package UML::Actions.</p>
			*/
			
			virtual std::shared_ptr<Bag<uml::Classifier>> getNewClassifier() const ;
			
			/*!
			The InputPin that holds the object to be reclassified.
			<p>From package UML::Actions.</p>
			*/
			
			virtual std::shared_ptr<uml::InputPin> getObject() const ;
			/*!
			The InputPin that holds the object to be reclassified.
			<p>From package UML::Actions.</p>
			*/
			
			virtual void setObject(std::shared_ptr<uml::InputPin>) ;
			/*!
			A set of Classifiers to be removed from the Classifiers of the given object.
			<p>From package UML::Actions.</p>
			*/
			
			virtual std::shared_ptr<Bag<uml::Classifier>> getOldClassifier() const ;
			
			
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::ActivityGroup>> getInGroup() const ;/*!
			The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p>
			*/
			
			virtual std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element>> getInput() const ;/*!
			The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			The Element that owns this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Element> getOwner() const ;/*!
			The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const ; 
			 
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
			std::weak_ptr<ReclassifyObjectAction> m_thisReclassifyObjectActionPtr;
	};
}
#endif /* end of include guard: UML_RECLASSIFYOBJECTACTIONRECLASSIFYOBJECTACTIONIMPL_HPP */
