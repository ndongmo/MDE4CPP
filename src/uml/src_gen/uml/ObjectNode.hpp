//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_OBJECTNODE_HPP
#define UML_OBJECTNODE_HPP

#include <map>
#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T> class Bag; 
template<class T, class ... U> class Subset;


class AnyObject;
typedef std::shared_ptr<AnyObject> Any;

//*********************************
// generated Includes

#include <map>

namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace uml
{
	class umlFactory;
}

//Forward Declaration for used types
namespace uml 
{
	class Activity;
}

namespace uml 
{
	class ActivityEdge;
}

namespace uml 
{
	class ActivityGroup;
}

namespace uml 
{
	class ActivityNode;
}

namespace uml 
{
	class ActivityPartition;
}

namespace uml 
{
	class Behavior;
}

namespace uml 
{
	class Classifier;
}

namespace uml 
{
	class Comment;
}

namespace uml 
{
	class Dependency;
}

namespace uml 
{
	class Element;
}

namespace uml 
{
	class InterruptibleActivityRegion;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class RedefinableElement;
}

namespace uml 
{
	class State;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class StructuredActivityNode;
}

namespace uml 
{
	class Type;
}

namespace uml 
{
	class TypedElement;
}

namespace uml 
{
	class ValueSpecification;
}

// base class includes
#include "uml/ActivityNode.hpp"

#include "uml/TypedElement.hpp"

// enum includes
#include "uml/ObjectNodeOrderingKind.hpp"

#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	An ObjectNode is an abstract ActivityNode that may hold tokens within the object flow in an Activity. ObjectNodes also support token selection, limitation on the number of tokens held, specification of the state required for tokens being held, and carrying control values.
	<p>From package UML::Activities.</p>
	*/
	
	class ObjectNode:virtual public ActivityNode,virtual public TypedElement
	{
		public:
 			ObjectNode(const ObjectNode &) {}
			ObjectNode& operator=(ObjectNode const&) = delete;

		protected:
			ObjectNode(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ObjectNode() {}

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
			 
			virtual bool input_output_parameter(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			If isControlType=false, the ActivityEdges incoming to or outgoing from an ObjectNode must all be ObjectFlows.
			(not isControlType) implies incoming->union(outgoing)->forAll(oclIsKindOf(ObjectFlow))
			*/
			 
			virtual bool object_flow_edges(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			If an ObjectNode has a selection Behavior, then the ordering of the object node is ordered, and vice versa.
			(selection<>null) = (ordering=ObjectNodeOrderingKind::ordered)
			*/
			 
			virtual bool selection_behavior(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			Indicates whether the type of the ObjectNode is to be treated as representing control values that may traverse ControlFlows.
			<p>From package UML::Activities.</p>
			*/
			 
			virtual bool getIsControlType() const = 0;
			
			/*!
			Indicates whether the type of the ObjectNode is to be treated as representing control values that may traverse ControlFlows.
			<p>From package UML::Activities.</p>
			*/
			 
			virtual void setIsControlType (bool _isControlType)= 0; 
			/*!
			Indicates how the tokens held by the ObjectNode are ordered for selection to traverse ActivityEdges outgoing from the ObjectNode.
			<p>From package UML::Activities.</p>
			*/
			 
			virtual uml::ObjectNodeOrderingKind getOrdering() const = 0;
			
			/*!
			Indicates how the tokens held by the ObjectNode are ordered for selection to traverse ActivityEdges outgoing from the ObjectNode.
			<p>From package UML::Activities.</p>
			*/
			 
			virtual void setOrdering (uml::ObjectNodeOrderingKind _ordering)= 0; 
			
			//*********************************
			// Reference
			//*********************************
			/*!
			The States required to be associated with the values held by tokens on this ObjectNode.
			<p>From package UML::Activities.</p>
			*/
			
			virtual std::shared_ptr<Bag<uml::State>> getInState() const = 0;
			
			
			/*!
			A Behavior used to select tokens to be offered on outgoing ActivityEdges.
			<p>From package UML::Activities.</p>
			*/
			
			virtual std::shared_ptr<uml::Behavior > getSelection() const = 0;
			
			/*!
			A Behavior used to select tokens to be offered on outgoing ActivityEdges.
			<p>From package UML::Activities.</p>
			*/
			
			virtual void setSelection(std::shared_ptr<uml::Behavior> _selection) = 0;
			
			/*!
			The maximum number of tokens that may be held by this ObjectNode. Tokens cannot flow into the ObjectNode if the upperBound is reached. If no upperBound is specified, then there is no limit on how many tokens the ObjectNode can hold.
			<p>From package UML::Activities.</p>
			*/
			
			virtual std::shared_ptr<uml::ValueSpecification > getUpperBound() const = 0;
			
			/*!
			The maximum number of tokens that may be held by this ObjectNode. Tokens cannot flow into the ObjectNode if the upperBound is reached. If no upperBound is specified, then there is no limit on how many tokens the ObjectNode can hold.
			<p>From package UML::Activities.</p>
			*/
			
			virtual void setUpperBound(std::shared_ptr<uml::ValueSpecification> _upperBound) = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			Indicates whether the type of the ObjectNode is to be treated as representing control values that may traverse ControlFlows.
			<p>From package UML::Activities.</p>
			*/
			 
			bool m_isControlType = false;
			/*!
			Indicates how the tokens held by the ObjectNode are ordered for selection to traverse ActivityEdges outgoing from the ObjectNode.
			<p>From package UML::Activities.</p>
			*/
			 
			uml::ObjectNodeOrderingKind m_ordering = ObjectNodeOrderingKind::FIFO;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			The States required to be associated with the values held by tokens on this ObjectNode.
			<p>From package UML::Activities.</p>
			*/
			
			mutable std::shared_ptr<Bag<uml::State>> m_inState;/*!
			A Behavior used to select tokens to be offered on outgoing ActivityEdges.
			<p>From package UML::Activities.</p>
			*/
			
			std::shared_ptr<uml::Behavior > m_selection;/*!
			The maximum number of tokens that may be held by this ObjectNode. Tokens cannot flow into the ObjectNode if the upperBound is reached. If no upperBound is specified, then there is no limit on how many tokens the ObjectNode can hold.
			<p>From package UML::Activities.</p>
			*/
			
			std::shared_ptr<uml::ValueSpecification > m_upperBound;

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::ActivityGroup>> getInGroup() const = 0;/*!
			The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			The Element that owns this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;/*!
			The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_OBJECTNODE_HPP */
