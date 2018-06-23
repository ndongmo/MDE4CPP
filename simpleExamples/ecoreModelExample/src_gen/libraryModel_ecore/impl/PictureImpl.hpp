//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef LIBRARYMODEL_ECORE_PICTUREPICTUREIMPL_HPP
#define LIBRARYMODEL_ECORE_PICTUREPICTUREIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Picture.hpp"

#include "libraryModel_ecore/impl/NamedElementImpl.hpp"

//*********************************
namespace libraryModel_ecore 
{
	class PictureImpl :virtual public NamedElementImpl, virtual public Picture 
	{
		public: 
			PictureImpl(const PictureImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			PictureImpl& operator=(PictureImpl const&) = delete;

		protected:
			friend class LibraryModel_ecoreFactoryImpl;
			PictureImpl();
			virtual std::shared_ptr<Picture> getThisPicturePtr();
			virtual void setThisPicturePtr(std::weak_ptr<Picture> thisPicturePtr);

			//Additional constructors for the containments back reference
			PictureImpl(std::weak_ptr<libraryModel_ecore::Book > par_book);




		public:
			//destructor
			virtual ~PictureImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual int getPageNumber() const ;
			
			/*!
			 */ 
			virtual void setPageNumber (int _pageNumber); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::weak_ptr<libraryModel_ecore::Book > getBook() const ;
			
			/*!
			 */
			virtual void setBook(std::shared_ptr<libraryModel_ecore::Book> _book_book) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<libraryModel_ecore::LibraryModel_ecoreFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<Picture> m_thisPicturePtr;
	};
}
#endif /* end of include guard: LIBRARYMODEL_ECORE_PICTUREPICTUREIMPL_HPP */
