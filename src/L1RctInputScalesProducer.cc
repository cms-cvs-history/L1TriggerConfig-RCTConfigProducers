// -*- C++ -*-
//
// Package:    L1RctInputScalesProducer
// Class:      L1RctInputScalesProducer
// 
/**\class L1RctInputScalesProducer L1RctInputScalesProducer.h L1TriggerConfig/RCTConfigProducers/src/L1RctInputScalesProducer.cc

 Description: <one line class summary>

 Implementation:
     <Notes on implementation>
*/
//
// Original Author:  Jim Brooke
//         Created:  Fri May 16 16:09:43 CEST 2008
// $Id$
//
//


// system include files
#include <memory>
#include "boost/shared_ptr.hpp"

// user include files
#include "FWCore/Framework/interface/ModuleFactory.h"
#include "FWCore/Framework/interface/ESProducer.h"

#include "FWCore/Framework/interface/ESHandle.h"


#include "CondFormats/L1TObjects/interface/L1RctInputScale.h"
#include "CondFormats/DataRecord/interface/L1RctEcalScaleRcd.h"
#include "CondFormats/DataRecord/interface/L1RctHcalScaleRcd.h"

//
// class decleration
//

class L1RctInputScalesProducer : public edm::ESProducer {
   public:
      L1RctInputScalesProducer(const edm::ParameterSet&);
      ~L1RctInputScalesProducer();

      typedef boost::shared_ptr<L1RctInputScale> ReturnType;

      ReturnType produceEcalScale(const L1RctEcalScaleRcd&);
      ReturnType produceHcalScale(const L1RctHcalScaleRcd&);
   private:
      // ----------member data ---------------------------
};

//
// constants, enums and typedefs
//

//
// static data member definitions
//

//
// constructors and destructor
//
L1RctInputScalesProducer::L1RctInputScalesProducer(const edm::ParameterSet& iConfig)
{
   //the following line is needed to tell the framework what
   // data is being produced
   setWhatProduced(this, &L1RctInputScalesProducer::produceEcalScale);
   setWhatProduced(this, &L1RctInputScalesProducer::produceHcalScale);

   //now do what ever other initialization is needed
}


L1RctInputScalesProducer::~L1RctInputScalesProducer()
{
 
   // do anything here that needs to be done at desctruction time
   // (e.g. close files, deallocate resources etc.)

}


//
// member functions
//

// ------------ method called to produce the data  ------------
L1RctInputScalesProducer::ReturnType
L1RctInputScalesProducer::produceEcalScale(const L1RctEcalScaleRcd& iRecord)
{
   using namespace edm::es;
   boost::shared_ptr<L1RctInputScale> pL1RctInputScale ;


   return pL1RctInputScale ;
}

// ------------ method called to produce the data  ------------
L1RctInputScalesProducer::ReturnType
L1RctInputScalesProducer::produceHcalScale(const L1RctHcalScaleRcd& iRecord)
{
   using namespace edm::es;
   boost::shared_ptr<L1RctInputScale> pL1RctInputScale ;


   return pL1RctInputScale ;
}

//define this as a plug-in
DEFINE_FWK_EVENTSETUP_MODULE(L1RctInputScalesProducer);
