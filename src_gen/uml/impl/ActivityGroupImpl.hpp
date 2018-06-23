//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ACTIVITYGROUPACTIVITYGROUPIMPL_HPP
#define UML_ACTIVITYGROUPACTIVITYGROUPIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ActivityGroup.hpp"

#include "uml/impl/ActivityContentImpl.hpp"
#include "uml/impl/NamedElementImpl.hpp"

//*********************************
namespace uml 
{
	class ActivityGroupImpl :virtual public ActivityContentImpl, virtual public NamedElementImpl, virtual public ActivityGroup 
	{
		public: 
			ActivityGroupImpl(const ActivityGroupImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ActivityGroupImpl& operator=(ActivityGroupImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ActivityGroupImpl();
			virtual std::shared_ptr<ActivityGroup> getThisActivityGroupPtr();
			virtual void setThisActivityGroupPtr(std::weak_ptr<ActivityGroup> thisActivityGroupPtr);

			//Additional constructors for the containments back reference
			ActivityGroupImpl(std::weak_ptr<uml::Activity > par_inActivity);


			//Additional constructors for the containments back reference
			ActivityGroupImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ActivityGroupImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			ActivityGroupImpl(std::weak_ptr<uml::ActivityGroup > par_superGroup);




		public:
			//destructor
			virtual ~ActivityGroupImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 All containedNodes and containeEdges of an ActivityGroup must be in the same Activity as the group.
			containedNode->forAll(activity = self.containingActivity()) and 
			containedEdge->forAll(activity = self.containingActivity()) */ 
			virtual bool nodes_and_edges(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			/*!
			 No containedNode or containedEdge of an ActivityGroup may be contained by its subgroups or its superGroups, transitively.
			subgroup->closure(subgroup).containedNode->excludesAll(containedNode) and
			superGroup->closure(superGroup).containedNode->excludesAll(containedNode) and 
			subgroup->closure(subgroup).containedEdge->excludesAll(containedEdge) and 
			superGroup->closure(superGroup).containedEdge->excludesAll(containedEdge) */ 
			virtual bool not_contained(Any diagnostics,std::map <   Any, Any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			
			
			/*!
			 The Activity containing the ActivityGroup, if it is directly owned by an Activity.
			<p>From package UML::Activities.</p> */
			virtual std::weak_ptr<uml::Activity > getInActivity() const ;
			
			/*!
			 The Activity containing the ActivityGroup, if it is directly owned by an Activity.
			<p>From package UML::Activities.</p> */
			virtual void setInActivity(std::shared_ptr<uml::Activity> _inActivity_inActivity) ;
			
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityEdges immediately contained in the ActivityGroup.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityEdge>> getContainedEdge() const ;/*!
			 ActivityNodes immediately contained in the ActivityGroup.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityNode>> getContainedNode() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 Other ActivityGroups immediately contained in this ActivityGroup.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::ActivityGroup, uml::Element>> getSubgroup() const ;/*!
			 The ActivityGroup immediately containing this ActivityGroup, if it is directly owned by another ActivityGroup.
			<p>From package UML::Activities.</p> */
			virtual std::weak_ptr<uml::ActivityGroup > getSuperGroup() const ; 
			 
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
			std::weak_ptr<ActivityGroup> m_thisActivityGroupPtr;
	};
}
#endif /* end of include guard: UML_ACTIVITYGROUPACTIVITYGROUPIMPL_HPP */
