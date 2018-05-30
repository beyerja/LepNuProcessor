#ifndef PLOTTERS_H
#define PLOTTERS_H 1

#include "plotter.h"

// Declase all plotter classes
class TestPlotter : public Plotter {
	virtual void set_plotter_settings();
	virtual void define_plots();
	virtual void fill_plots();
	virtual void draw_plots();
};

class LepNuPairPlotter : public Plotter {
	virtual void set_plotter_settings();
	virtual void define_plots();
	virtual void fill_plots();
	virtual void draw_plots();
	virtual bool isNeutrinoID( int pdgID );
	virtual TLorentzVector get_vis_tlv( LepNuVertex* vertex );
	virtual TLorentzVector get_parents_tlv( LepNuVertex *vertex );
	virtual TLorentzVector get_charged_lepton_daughters_tlv( LepNuVertex *vertex );
	virtual TLorentzVector get_nu_daughters_tlv( LepNuVertex* vertex );
};

class CheatedCorrectionPlotter : public Plotter {
	virtual void set_plotter_settings();
	virtual void define_plots();
	virtual void fill_plots();
	virtual void get_resolution_projection( TProfile* plot, TH1D* error_clone );
	virtual void draw_plots();
};

class NuCalculationPOPPlotter : public Plotter {
	virtual void set_plotter_settings();
	virtual void define_plots();
	virtual void fill_plots();
	virtual void draw_plots();
	virtual TLorentzVector get_nu_daughters_tlv( LepNuVertex* vertex );
	virtual TLorentzVector get_vis_tlv( LepNuVertex* vertex );
	virtual TLorentzVector get_charged_leptons_tlv( LepNuVertex* vertex );
	virtual int get_first_charged_lepton_pdg( LepNuVertex* vertex );
	virtual TLorentzVector calculate_nus_from_MC( LepNuVertex* vertex, std::string solution_mode );
	virtual bool isNeutrinoID( int pdgID );
};

class NuCalculationCheatedSignPOPPlotter : public Plotter {
	virtual void set_plotter_settings();
	virtual void define_plots();
	virtual void fill_plots();
	virtual void draw_plots();
	virtual TLorentzVector get_nu_daughters_tlv( LepNuVertex* vertex );
	virtual TLorentzVector get_charged_lepton_daughters_tlv( LepNuVertex *vertex );
	virtual TLorentzVector get_vis_tlv( LepNuVertex* vertex );
	virtual TLorentzVector calculate_nus_from_MC( LepNuVertex* vertex );
	virtual double get_deboosted_DeltaR( TLorentzVector tlv_1, TLorentzVector tlv_2, TLorentzVector boost_tlv );
	virtual double get_deboosted_angle( TLorentzVector tlv_1, TLorentzVector tlv_2, TLorentzVector boost_tlv );
	virtual bool isNeutrinoID( int pdgID );
};

class NuCalculationPOPGuessedGammaPlotter : public Plotter {
	virtual void set_plotter_settings();
	virtual void define_plots();
	virtual void fill_plots();
	virtual void draw_plots();
	virtual TLorentzVector get_nu_daughters_tlv( LepNuVertex* vertex );
	virtual TLorentzVector get_vis_tlv( LepNuVertex* vertex );
	virtual TLorentzVector get_charged_leptons_tlv( LepNuVertex* vertex );
	virtual int get_first_charged_lepton_pdg( LepNuVertex* vertex );
	virtual TLorentzVector calculate_nus_from_MC( LepNuVertex* vertex );
	virtual bool isNeutrinoID( int pdgID );
};

class CheatedNuCalculationReco4MomentaPlotter : public Plotter {
	virtual void set_plotter_settings();
	virtual void define_plots();
	virtual void fill_plots();
	virtual void draw_plots();
	virtual int get_nu_solution_sign_from_MC( LepNuVertex* vertex );
	virtual TLorentzVector get_nu_daughters_tlv( LepNuVertex* vertex );
	virtual TLorentzVector calculate_nus( LepNuVertex* vertex, std::string solution_mode );
	virtual bool isNeutrinoID( int pdgID );
};

#endif
