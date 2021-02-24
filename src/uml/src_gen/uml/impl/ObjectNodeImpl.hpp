//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_OBJECTNODEOBJECTNODEIMPL_HPP
#define UML_OBJECTNODEOBJECTNODEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ObjectNode.hpp"

#include "uml/impl/ActivityNodeImpl.hpp"
#include "uml/impl/TypedElementImpl.hpp"

//*********************************
namespace uml 
{
	class ObjectNodeImpl : virtual public ActivityNodeImpl, virtual public TypedElementImpl, virtual public ObjectNode 
	{
		public: 
			ObjectNodeImpl(const ObjectNodeImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			ObjectNodeImpl& operator=(ObjectNodeImpl const&);

		protected:
			friend class umlFactoryImpl;
			ObjectNodeImpl();
			virtual std::shared_ptr<ObjectNode> getThisObjectNodePtr() const;
			virtual void setThisObjectNodePtr(std::weak_ptr<ObjectNode> thisObjectNodePtr);

			//Additional constructors for the containments back reference
			ObjectNodeImpl(std::weak_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			ObjectNodeImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			ObjectNodeImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ObjectNodeImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~ObjectNodeImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			A selection Behavior has one input Parameter and one output Parameter. The input Parameter must have the same type as  or a supertype of the type of ObjectNode, be non-unique, and have multiplicity 0..*. The output Parameter must be the same or a subtype of the type of ObjectNode. The Behavior cannot have side effects.
			selection<>null implies
				selection.inputParameters()->size()=1 and
				selection.inputParameters()->forAll(p | not p.isUnique and p.is(0,*) and self.type.conformsTo(p.type)) and
				selection.outputParameters()->size()=1 and
					selection.inputParameters()->forAll(p | self.type.conformsTo(p.type))
			*/
			 
			virtual bool input_output_parameter(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			If isControlType=false, the ActivityEdges incoming to or outgoing from an ObjectNode must all be ObjectFlows.
			(not isControlType) implies incoming->union(outgoing)->forAll(oclIsKindOf(ObjectFlow))
			*/
			 
			virtual bool object_flow_edges(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			If an ObjectNode has a selection Behavior, then the ordering of the object node is ordered, and vice versa.
			(selection<>null) = (ordering=ObjectNodeOrderingKind::ordered)
			*/
			 
			virtual bool selection_behavior(Any diagnostics,std::map <   Any, Any >  context) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			Indicates whether the type of the ObjectNode is to be treated as representing control values that may traverse ControlFlows.
			<p>From package UML::Activities.</p>
			*/
			 
			virtual bool getIsControlType() const ;
			
			/*!
			Indicates whether the type of the ObjectNode is to be treated as representing control values that may traverse ControlFlows.
			<p>From package UML::Activities.</p>
			*/
			 
			virtual void setIsControlType (bool _isControlType); 
			/*!
			Indicates how the tokens held by the ObjectNode are ordered for selection to traverse ActivityEdges outgoing from the ObjectNode.
			<p>From package UML::Activities.</p>
			*/
			 
			virtual uml::ObjectNodeOrderingKind getOrdering() const ;
			
			/*!
			Indicates how the tokens held by the ObjectNode are ordered for selection to traverse ActivityEdges outgoing from the ObjectNode.
			<p>From package UML::Activities.</p>
			*/
			 
			virtual void setOrdering (uml::ObjectNodeOrderingKind _ordering); 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			The States required to be associated with the values held by tokens on this ObjectNode.
			<p>From package UML::Activities.</p>
			*/
			
			virtual std::shared_ptr<Bag<uml::State>> getInState() const ;
			
			
			/*!
			A Behavior used to select tokens to be offered on outgoing ActivityEdges.
			<p>From package UML::Activities.</p>
			*/
			
			virtual std::shared_ptr<uml::Behavior > getSelection() const ;
			
			/*!
			A Behavior used to select tokens to be offered on outgoing ActivityEdges.
			<p>From package UML::Activities.</p>
			*/
			
			virtual void setSelection(std::shared_ptr<uml::Behavior> _selection) ;
			
			/*!
			The maximum number of tokens that may be held by this ObjectNode. Tokens cannot flow into the ObjectNode if the upperBound is reached. If no upperBound is specified, then there is no limit on how many tokens the ObjectNode can hold.
			<p>From package UML::Activities.</p>
			*/
			
			virtual std::shared_ptr<uml::ValueSpecification > getUpperBound() const ;
			
			/*!
			The maximum number of tokens that may be held by this ObjectNode. Tokens cannot flow into the ObjectNode if the upperBound is reached. If no upperBound is specified, then there is no limit on how many tokens the ObjectNode can hold.
			<p>From package UML::Activities.</p>
			*/
			
			virtual void setUpperBound(std::shared_ptr<uml::ValueSpecification> _upperBound) ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::ActivityGroup>> getInGroup() const ;/*!
			The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			The Element that owns this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
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
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<ObjectNode> m_thisObjectNodePtr;
	};
}
#endif /* end of include guard: UML_OBJECTNODEOBJECTNODEIMPL_HPP */
