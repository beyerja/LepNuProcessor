#include "lcio.h"
#include <iostream>
#include <fstream>
#include <set>

//#include <math>
#include <string>
#include <vector>
#include <set>
#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end

//ROOT
#include "TObject.h"
#include "TFile.h"
#include "TTree.h"
#include "TLorentzVector.h"
#include "TObjArray.h"

//LCIO
#include <EVENT/LCCollection.h>
#include <EVENT/MCParticle.h>
#include <EVENT/ReconstructedParticle.h>
#include <EVENT/Vertex.h>

//----- include for verbosity dependend logging ---------
#include "marlin/VerbosityLevels.h"

using namespace lcio ;
using namespace marlin ;
