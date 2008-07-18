/*HLTTauMCProducer
Producer that creates LorentzVector Collections
from offline reconstructed quantities to be used
in Offline Trigger DQM etc
*/

#ifndef HLTTauMCProducer_h
#define HLTTauMCProducer_h

#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/EDProducer.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "FWCore/ParameterSet/interface/InputTag.h"
#include "DataFormats/Common/interface/Handle.h"
#include "FWCore/MessageLogger/interface/MessageLogger.h"
#include "SimDataFormats/HepMCProduct/interface/HepMCProduct.h"
#include "DataFormats/HepMCCandidate/interface/GenParticle.h"
#include "DataFormats/Math/interface/LorentzVector.h"
#include "HepMC/GenEvent.h"
#include <vector>
#include <string>

class HLTTauMCProducer : public edm::EDProducer {
  
public:
  explicit HLTTauMCProducer(const edm::ParameterSet&);
  ~HLTTauMCProducer();

  virtual void produce(edm::Event&, const edm::EventSetup&);
  
 private:
  typedef math::XYZTLorentzVectorD LorentzVector;
  typedef std::vector<LorentzVector> LorentzVectorCollection;
  
  edm::InputTag MC_;
  double ptMinMCTau_;
  double ptMinMCElectron_;
  double ptMinMCMuon_;
  int m_PDG_;
  double etaMax;

};

#endif
