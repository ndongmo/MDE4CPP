//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef OCL_TYPES_TUPLETYPETUPLETYPEIMPL_HPP
#define OCL_TYPES_TUPLETYPETUPLETYPEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../TupleType.hpp"

#include "ocl/Types/impl/TypesFactoryImpl.hpp"
#include "ecore/impl/EDataTypeImpl.hpp"

//*********************************
namespace ocl::Types 
{
	class TupleTypeImpl : virtual public ecore::EDataTypeImpl, virtual public TupleType 
	{
		public: 
			TupleTypeImpl(const TupleTypeImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;    
			TupleTypeImpl& operator=(TupleTypeImpl const&);

		protected:
			friend class ocl::Types::TypesFactoryImpl;
			TupleTypeImpl();
			virtual std::shared_ptr<TupleType> getThisTupleTypePtr() const;
			virtual void setThisTupleTypePtr(std::weak_ptr<TupleType> thisTupleTypePtr);

			//Additional constructors for the containments back reference
			TupleTypeImpl(std::weak_ptr<ecore::EPackage > par_ePackage);




		public:
			//destructor
			virtual ~TupleTypeImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			
			virtual std::shared_ptr<ocl::Values::TupleValue > getInstance() const ;
			
			
			virtual void setInstance(std::shared_ptr<ocl::Values::TupleValue> _instance) ;
			
			
			virtual std::shared_ptr<Bag<ocl::Types::NameTypeBinding>> getParts() const ;
			
			
							
			
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
			std::weak_ptr<TupleType> m_thisTupleTypePtr;
	};
}
#endif /* end of include guard: OCL_TYPES_TUPLETYPETUPLETYPEIMPL_HPP */
