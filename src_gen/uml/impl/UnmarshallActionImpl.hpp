//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_UNMARSHALLACTIONUNMARSHALLACTIONIMPL_HPP
#define UML_UNMARSHALLACTIONUNMARSHALLACTIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../UnmarshallAction.hpp"

#include "uml/impl/ActionImpl.hpp"

//*********************************
namespace uml 
{
	class UnmarshallActionImpl :virtual public ActionImpl, virtual public UnmarshallAction 
	{
		public: 
			UnmarshallActionImpl(const UnmarshallActionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			UnmarshallActionImpl& operator=(UnmarshallActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			UnmarshallActionImpl();
			virtual std::shared_ptr<UnmarshallAction> getThisUnmarshallActionPtr();
			virtual void setThisUnmarshallActionPtr(std::weak_ptr<UnmarshallAction> thisUnmarshallActionPtr);

			//Additional constructors for the containments back reference
			UnmarshallActionImpl(std::weak_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			UnmarshallActionImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			UnmarshallActionImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			UnmarshallActionImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~UnmarshallActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The multiplicity of the object InputPin is 1..1
			object.is(1,1) */ 
			virtual bool multiplicity_of_object(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			/*!
			 The number of result outputPins must be the same as the number of attributes of the unmarshallType.
			unmarshallType.allAttributes()->size() = result->size() */ 
			virtual bool number_of_result(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			/*!
			 The type of the object InputPin conform to the unmarshallType.
			object.type.conformsTo(unmarshallType) */ 
			virtual bool object_type(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			/*!
			 The unmarshallType must have at least one StructuralFeature.
			unmarshallType.allAttributes()->size() >= 1 */ 
			virtual bool structural_feature(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			/*!
			 The type, ordering and multiplicity of each attribute of the unmarshallType must be compatible with the type, ordering and multiplicity of the corresponding result OutputPin.
			let attribute:OrderedSet(Property) = unmarshallType.allAttributes() in
			Sequence{1..result->size()}->forAll(i | 
				attribute->at(i).type.conformsTo(result->at(i).type) and
				attribute->at(i).isOrdered=result->at(i).isOrdered and
				attribute->at(i).compatibleWith(result->at(i))) */ 
			virtual bool type_ordering_and_multiplicity(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The InputPin that gives the object to be unmarshalled.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::InputPin > getObject() const ;
			
			/*!
			 The InputPin that gives the object to be unmarshalled.
			<p>From package UML::Actions.</p> */
			virtual void setObject(std::shared_ptr<uml::InputPin> _object_object) ;
			/*!
			 The OutputPins on which are placed the values of the StructuralFeatures of the input object.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<Subset<uml::OutputPin, uml::OutputPin>> getResult() const ;
			
			/*!
			 The type of the object to be unmarshalled.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::Classifier > getUnmarshallType() const ;
			
			/*!
			 The type of the object to be unmarshalled.
			<p>From package UML::Actions.</p> */
			virtual void setUnmarshallType(std::shared_ptr<uml::Classifier> _unmarshallType_unmarshallType) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup>> getInGroup() const ;/*!
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element>> getInput() const ;/*!
			 The ordered set of OutputPins representing outputs from the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::OutputPin, uml::Element>> getOutput() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
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
			std::weak_ptr<UnmarshallAction> m_thisUnmarshallActionPtr;
	};
}
#endif /* end of include guard: UML_UNMARSHALLACTIONUNMARSHALLACTIONIMPL_HPP */
