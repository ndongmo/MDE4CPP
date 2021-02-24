//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_COMMENTCOMMENTIMPL_HPP
#define UML_COMMENTCOMMENTIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Comment.hpp"

#include "uml/impl/ElementImpl.hpp"

//*********************************
namespace uml 
{
	class CommentImpl : virtual public ElementImpl, virtual public Comment 
	{
		public: 
			CommentImpl(const CommentImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			CommentImpl& operator=(CommentImpl const&);

		protected:
			friend class umlFactoryImpl;
			CommentImpl();
			virtual std::shared_ptr<Comment> getThisCommentPtr() const;
			virtual void setThisCommentPtr(std::weak_ptr<Comment> thisCommentPtr);

			//Additional constructors for the containments back reference
			CommentImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~CommentImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			Specifies a string that is the comment.
			<p>From package UML::CommonStructure.</p>
			*/
			 
			virtual std::string getBody() const ;
			
			/*!
			Specifies a string that is the comment.
			<p>From package UML::CommonStructure.</p>
			*/
			 
			virtual void setBody (std::string _body); 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			References the Element(s) being commented.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Bag<uml::Element>> getAnnotatedElement() const ;
			
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p>
			*/
			
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ; 
			 
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
			std::weak_ptr<Comment> m_thisCommentPtr;
	};
}
#endif /* end of include guard: UML_COMMENTCOMMENTIMPL_HPP */
