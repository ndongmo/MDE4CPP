//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_LINKLINKIMPL_HPP
#define FUML_LINKLINKIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../Link.hpp"

#include "impl/ExtensionalValueImpl.hpp"

#include "uml/Property.hpp"
#include "uml/Association.hpp"


//*********************************
namespace fUML 
{
	class LinkImpl :virtual public ExtensionalValueImpl, virtual public Link 
	{
		public: 
			LinkImpl(const LinkImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			LinkImpl& operator=(LinkImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			LinkImpl();

		public:
			//destructor
			virtual ~LinkImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> getTypes()  ;
			
			/*!
			 */ 
			virtual bool isMatchingLink(std::shared_ptr<fUML::ExtensionalValue>  link,std::shared_ptr<uml::Property>  end)  ;
			
			/*!
			 */ 
			virtual void addTo(std::shared_ptr<fUML::Locus>  locus)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<std::vector<std::shared_ptr<fUML::FeatureValue>>> getOtherFeatureValues(std::shared_ptr<std::vector<std::shared_ptr<fUML::ExtensionalValue>>>  extent,std::shared_ptr<uml::Property>  end)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<uml::Association> getType() const ;
			
			/*!
			 */
			virtual void setType(std::shared_ptr<uml::Association> _type) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_LINKLINKIMPL_HPP */

