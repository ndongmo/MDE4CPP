//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_VERTEXVERTEXIMPL_HPP
#define UML_VERTEXVERTEXIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Vertex.hpp"

#include "uml/impl/NamedElementImpl.hpp"

//*********************************
namespace uml 
{
	class VertexImpl : virtual public NamedElementImpl, virtual public Vertex 
	{
		public: 
			VertexImpl(const VertexImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			VertexImpl& operator=(VertexImpl const&);

		protected:
			friend class umlFactoryImpl;
			VertexImpl();
			virtual std::shared_ptr<Vertex> getThisVertexPtr() const;
			virtual void setThisVertexPtr(std::weak_ptr<Vertex> thisVertexPtr);

			//Additional constructors for the containments back reference
			VertexImpl(std::weak_ptr<uml::Region > par_container);


			//Additional constructors for the containments back reference
			VertexImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			VertexImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~VertexImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			The operation containingStateMachine() returns the StateMachine in which this Vertex is defined.
			result = (if container <> null
			then
			-- the container is a region
			   container.containingStateMachine()
			else 
			   if (self.oclIsKindOf(Pseudostate)) and ((self.oclAsType(Pseudostate).kind = PseudostateKind::entryPoint) or (self.oclAsType(Pseudostate).kind = PseudostateKind::exitPoint)) then
			      self.oclAsType(Pseudostate).stateMachine
			   else 
			      if (self.oclIsKindOf(ConnectionPointReference)) then
			          self.oclAsType(ConnectionPointReference).state.containingStateMachine() -- no other valid cases possible
			      else 
			          null
			      endif
			   endif
			endif
			)
			<p>From package UML::StateMachines.</p>
			*/
			 
			virtual std::shared_ptr<uml::StateMachine> containingStateMachine() ;
			
			/*!
			Derivation for Vertex::/incoming.
			result = (Transition.allInstances()->select(target=self))
			<p>From package UML::StateMachines.</p>
			*/
			 
			virtual std::shared_ptr<Bag<uml::Transition> > getIncomings() ;
			
			/*!
			Derivation for Vertex::/outgoing
			result = (Transition.allInstances()->select(source=self))
			<p>From package UML::StateMachines.</p>
			*/
			 
			virtual std::shared_ptr<Bag<uml::Transition> > getOutgoings() ;
			
			/*!
			This utility query returns true if the Vertex is contained in the Region r (input argument).
			result = (if (container = r) then
				true
			else
				if (r.state->isEmpty()) then
					false
				else
					container.state.isContainedInRegion(r)
				endif
			endif)
			<p>From package UML::StateMachines.</p>
			*/
			 
			virtual bool isContainedInRegion(std::shared_ptr<uml::Region>  r) ;
			
			/*!
			This utility operation returns true if the Vertex is contained in the State s (input argument).
			result = (if not s.isComposite() or container->isEmpty() then
				false
			else
				if container.state = s then 
					true
				else
					container.state.isContainedInState(s)
				endif
			endif)
			<p>From package UML::StateMachines.</p>
			*/
			 
			virtual bool isContainedInState(std::shared_ptr<uml::State>  s) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			The Region that contains this Vertex.
			<p>From package UML::StateMachines.</p>
			*/
			
			virtual std::weak_ptr<uml::Region > getContainer() const ;
			
			/*!
			The Region that contains this Vertex.
			<p>From package UML::StateMachines.</p>
			*/
			
			virtual void setContainer(std::shared_ptr<uml::Region> _container) ;
			
			/*!
			Specifies the Transitions entering this Vertex.
			<p>From package UML::StateMachines.</p>
			*/
			
			virtual std::shared_ptr<Bag<uml::Transition>> getIncoming() const ;
			
			
			/*!
			Specifies the Transitions departing from this Vertex.
			<p>From package UML::StateMachines.</p>
			*/
			
			virtual std::shared_ptr<Bag<uml::Transition>> getOutgoing() const ;
			
			
							
			
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
			std::weak_ptr<Vertex> m_thisVertexPtr;
	};
}
#endif /* end of include guard: UML_VERTEXVERTEXIMPL_HPP */
