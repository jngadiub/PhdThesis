{
//=========Macro generated from canvas: c_lim_Asymptotic/c_lim_Asymptotic
//=========  (Tue Nov 29 15:51:39 2016) by ROOT version5.34/18
   TCanvas *c_lim_Asymptotic = new TCanvas("c_lim_Asymptotic", "c_lim_Asymptotic",0,0,600,630);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_lim_Asymptotic->SetHighLightColor(2);
   c_lim_Asymptotic->Range(-0.09814817,-3.915384,4.22284,2.187175);
   c_lim_Asymptotic->SetFillColor(0);
   c_lim_Asymptotic->SetBorderMode(0);
   c_lim_Asymptotic->SetBorderSize(2);
   c_lim_Asymptotic->SetLogy();
   c_lim_Asymptotic->SetTickx(1);
   c_lim_Asymptotic->SetTicky(1);
   c_lim_Asymptotic->SetLeftMargin(0.15);
   c_lim_Asymptotic->SetRightMargin(0.04);
   c_lim_Asymptotic->SetTopMargin(0.08);
   c_lim_Asymptotic->SetBottomMargin(0.15);
   c_lim_Asymptotic->SetFrameFillStyle(0);
   c_lim_Asymptotic->SetFrameBorderMode(0);
   c_lim_Asymptotic->SetFrameFillStyle(0);
   c_lim_Asymptotic->SetFrameBorderMode(0);
   
   TH1F *hframe__1 = new TH1F("hframe__1","",1000,0.75,4.05);
   hframe__1->SetMinimum(0.001);
   hframe__1->SetMaximum(50);
   hframe__1->SetDirectory(0);
   hframe__1->SetStats(0);
   hframe__1->SetLineStyle(0);
   hframe__1->SetMarkerStyle(20);
   hframe__1->GetXaxis()->SetTitle("M_{V'} (TeV)");
   hframe__1->GetXaxis()->SetLabelFont(42);
   hframe__1->GetXaxis()->SetLabelOffset(0.007);
   hframe__1->GetXaxis()->SetLabelSize(0.045);
   hframe__1->GetXaxis()->SetTitleSize(0.05);
   hframe__1->GetXaxis()->SetTitleOffset(1.2);
   hframe__1->GetXaxis()->SetTitleFont(42);
   hframe__1->GetYaxis()->SetTitle("#sigma_{95%} #times BR_{V' #rightarrow WV} (pb)");
   hframe__1->GetYaxis()->SetLabelFont(42);
   hframe__1->GetYaxis()->SetLabelOffset(0.007);
   hframe__1->GetYaxis()->SetLabelSize(0.045);
   hframe__1->GetYaxis()->SetTitleSize(0.05);
   hframe__1->GetYaxis()->SetTitleOffset(1.4);
   hframe__1->GetYaxis()->SetTitleFont(42);
   hframe__1->GetZaxis()->SetLabelFont(42);
   hframe__1->GetZaxis()->SetLabelOffset(0.007);
   hframe__1->GetZaxis()->SetLabelSize(0.05);
   hframe__1->GetZaxis()->SetTitleSize(0.06);
   hframe__1->GetZaxis()->SetTitleFont(42);
   hframe__1->Draw(" ");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(66);
   grae->SetName("Limit95CLs");
   grae->SetTitle("Graph");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#cccc00");
   grae->SetFillColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,0.8,0.3431778);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.1245358);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.07080573);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.0514133);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.04409343);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.03867994);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.03519806);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.03273583);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.03350921);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.03112395);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.02877004);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.02651094);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.02431576);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.0250635);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.02247408);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.02018323);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.01800689);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.01601586);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.01425499);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.01260148);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.01124299);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.01005654);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.009061952);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.008134602);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.007366932);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.006674759);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.006089156);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.005575816);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.005127985);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.004757173);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.004458005);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.004172007);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.00392151);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,4,0.03121068);
   grae->SetPointError(33,0,0,0,0);
   grae->SetPoint(34,3.9,0.03221186);
   grae->SetPointError(34,0,0,0,0);
   grae->SetPoint(35,3.8,0.03342097);
   grae->SetPointError(35,0,0,0,0);
   grae->SetPoint(36,3.7,0.03428169);
   grae->SetPointError(36,0,0,0,0);
   grae->SetPoint(37,3.6,0.03492686);
   grae->SetPointError(37,0,0,0,0);
   grae->SetPoint(38,3.5,0.03593776);
   grae->SetPointError(38,0,0,0,0);
   grae->SetPoint(39,3.4,0.03714474);
   grae->SetPointError(39,0,0,0,0);
   grae->SetPoint(40,3.3,0.03867387);
   grae->SetPointError(40,0,0,0,0);
   grae->SetPoint(41,3.2,0.0404383);
   grae->SetPointError(41,0,0,0,0);
   grae->SetPoint(42,3.1,0.04272104);
   grae->SetPointError(42,0,0,0,0);
   grae->SetPoint(43,3,0.04501834);
   grae->SetPointError(43,0,0,0,0);
   grae->SetPoint(44,2.9,0.04745365);
   grae->SetPointError(44,0,0,0,0);
   grae->SetPoint(45,2.8,0.05016502);
   grae->SetPointError(45,0,0,0,0);
   grae->SetPoint(46,2.7,0.05368511);
   grae->SetPointError(46,0,0,0,0);
   grae->SetPoint(47,2.6,0.05784056);
   grae->SetPointError(47,0,0,0,0);
   grae->SetPoint(48,2.5,0.06275578);
   grae->SetPointError(48,0,0,0,0);
   grae->SetPoint(49,2.4,0.06809644);
   grae->SetPointError(49,0,0,0,0);
   grae->SetPoint(50,2.3,0.07378902);
   grae->SetPointError(50,0,0,0,0);
   grae->SetPoint(51,2.2,0.08064819);
   grae->SetPointError(51,0,0,0,0);
   grae->SetPoint(52,2.1,0.08811284);
   grae->SetPointError(52,0,0,0,0);
   grae->SetPoint(53,2,0.09151047);
   grae->SetPointError(53,0,0,0,0);
   grae->SetPoint(54,1.9,0.1004871);
   grae->SetPointError(54,0,0,0,0);
   grae->SetPoint(55,1.8,0.1108981);
   grae->SetPointError(55,0,0,0,0);
   grae->SetPoint(56,1.7,0.1226475);
   grae->SetPointError(56,0,0,0,0);
   grae->SetPoint(57,1.6,0.1372242);
   grae->SetPointError(57,0,0,0,0);
   grae->SetPoint(58,1.5,0.148644);
   grae->SetPointError(58,0,0,0,0);
   grae->SetPoint(59,1.4,0.1677965);
   grae->SetPointError(59,0,0,0,0);
   grae->SetPoint(60,1.3,0.1937302);
   grae->SetPointError(60,0,0,0,0);
   grae->SetPoint(61,1.2,0.2284812);
   grae->SetPointError(61,0,0,0,0);
   grae->SetPoint(62,1.1,0.2777346);
   grae->SetPointError(62,0,0,0,0);
   grae->SetPoint(63,1,0.3623257);
   grae->SetPointError(63,0,0,0,0);
   grae->SetPoint(64,0.9,0.5155512);
   grae->SetPointError(64,0,0,0,0);
   grae->SetPoint(65,0.8,0.885331);
   grae->SetPointError(65,0,0,0,0);
   
   TH1F *Graph_Limit95CLs5 = new TH1F("Graph_Limit95CLs5","Graph",100,0.48,4.32);
   Graph_Limit95CLs5->SetMinimum(0.003529359);
   Graph_Limit95CLs5->SetMaximum(0.973472);
   Graph_Limit95CLs5->SetDirectory(0);
   Graph_Limit95CLs5->SetStats(0);
   Graph_Limit95CLs5->SetLineStyle(0);
   Graph_Limit95CLs5->SetMarkerStyle(20);
   Graph_Limit95CLs5->GetXaxis()->SetLabelFont(42);
   Graph_Limit95CLs5->GetXaxis()->SetLabelOffset(0.007);
   Graph_Limit95CLs5->GetXaxis()->SetLabelSize(0.05);
   Graph_Limit95CLs5->GetXaxis()->SetTitleSize(0.06);
   Graph_Limit95CLs5->GetXaxis()->SetTitleOffset(0.9);
   Graph_Limit95CLs5->GetXaxis()->SetTitleFont(42);
   Graph_Limit95CLs5->GetYaxis()->SetLabelFont(42);
   Graph_Limit95CLs5->GetYaxis()->SetLabelOffset(0.007);
   Graph_Limit95CLs5->GetYaxis()->SetLabelSize(0.05);
   Graph_Limit95CLs5->GetYaxis()->SetTitleSize(0.06);
   Graph_Limit95CLs5->GetYaxis()->SetTitleOffset(1.25);
   Graph_Limit95CLs5->GetYaxis()->SetTitleFont(42);
   Graph_Limit95CLs5->GetZaxis()->SetLabelFont(42);
   Graph_Limit95CLs5->GetZaxis()->SetLabelOffset(0.007);
   Graph_Limit95CLs5->GetZaxis()->SetLabelSize(0.05);
   Graph_Limit95CLs5->GetZaxis()->SetTitleSize(0.06);
   Graph_Limit95CLs5->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Limit95CLs5);
   
   grae->Draw("f");
   
   grae = new TGraphAsymmErrors(66);
   grae->SetName("Limit68CLs");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   grae->SetFillColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,0.8,0.4119921);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.1728422);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.1054039);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.07776916);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.06563902);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.05708073);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.05091841);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.04646679);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.04546783);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.04177715);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.03816485);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.03464046);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.03165551);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.03183316);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.02859305);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.02581154);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.02319044);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.02077454);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.01848674);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.01652304);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.01491022);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.01349437);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.01228711);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.01116874);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.01024691);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.009410011);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.008646489);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.008012124);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.007497112);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.007010436);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.006638972);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.006315334);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.005988393);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,4,0.018587);
   grae->SetPointError(33,0,0,0,0);
   grae->SetPoint(34,3.9,0.01901458);
   grae->SetPointError(34,0,0,0,0);
   grae->SetPoint(35,3.8,0.01955332);
   grae->SetPointError(35,0,0,0,0);
   grae->SetPoint(36,3.7,0.02010185);
   grae->SetPointError(36,0,0,0,0);
   grae->SetPoint(37,3.6,0.0208767);
   grae->SetPointError(37,0,0,0,0);
   grae->SetPoint(38,3.5,0.0215841);
   grae->SetPointError(38,0,0,0,0);
   grae->SetPoint(39,3.4,0.02262246);
   grae->SetPointError(39,0,0,0,0);
   grae->SetPoint(40,3.3,0.02393308);
   grae->SetPointError(40,0,0,0,0);
   grae->SetPoint(41,3.2,0.02525823);
   grae->SetPointError(41,0,0,0,0);
   grae->SetPoint(42,3.1,0.02694391);
   grae->SetPointError(42,0,0,0,0);
   grae->SetPoint(43,3,0.02879201);
   grae->SetPointError(43,0,0,0,0);
   grae->SetPoint(44,2.9,0.03081543);
   grae->SetPointError(44,0,0,0,0);
   grae->SetPoint(45,2.8,0.03298928);
   grae->SetPointError(45,0,0,0,0);
   grae->SetPoint(46,2.7,0.03578591);
   grae->SetPointError(46,0,0,0,0);
   grae->SetPoint(47,2.6,0.03898536);
   grae->SetPointError(47,0,0,0,0);
   grae->SetPoint(48,2.5,0.04271999);
   grae->SetPointError(48,0,0,0,0);
   grae->SetPoint(49,2.4,0.04684917);
   grae->SetPointError(49,0,0,0,0);
   grae->SetPoint(50,2.3,0.05150653);
   grae->SetPointError(50,0,0,0,0);
   grae->SetPoint(51,2.2,0.0564554);
   grae->SetPointError(51,0,0,0,0);
   grae->SetPoint(52,2.1,0.06205309);
   grae->SetPointError(52,0,0,0,0);
   grae->SetPoint(53,2,0.06426079);
   grae->SetPointError(53,0,0,0,0);
   grae->SetPoint(54,1.9,0.07056438);
   grae->SetPointError(54,0,0,0,0);
   grae->SetPoint(55,1.8,0.07811832);
   grae->SetPointError(55,0,0,0,0);
   grae->SetPoint(56,1.7,0.08639478);
   grae->SetPointError(56,0,0,0,0);
   grae->SetPoint(57,1.6,0.09639095);
   grae->SetPointError(57,0,0,0,0);
   grae->SetPoint(58,1.5,0.103341);
   grae->SetPointError(58,0,0,0,0);
   grae->SetPoint(59,1.4,0.1161192);
   grae->SetPointError(59,0,0,0,0);
   grae->SetPoint(60,1.3,0.1334941);
   grae->SetPointError(60,0,0,0,0);
   grae->SetPoint(61,1.2,0.1571233);
   grae->SetPointError(61,0,0,0,0);
   grae->SetPoint(62,1.1,0.1902719);
   grae->SetPointError(62,0,0,0,0);
   grae->SetPoint(63,1,0.2510027);
   grae->SetPointError(63,0,0,0,0);
   grae->SetPoint(64,0.9,0.3675519);
   grae->SetPointError(64,0,0,0,0);
   grae->SetPoint(65,0.8,0.6834404);
   grae->SetPointError(65,0,0,0,0);
   
   TH1F *Graph_Limit68CLs6 = new TH1F("Graph_Limit68CLs6","Graph",100,0.48,4.32);
   Graph_Limit68CLs6->SetMinimum(0.005389554);
   Graph_Limit68CLs6->SetMaximum(0.7511857);
   Graph_Limit68CLs6->SetDirectory(0);
   Graph_Limit68CLs6->SetStats(0);
   Graph_Limit68CLs6->SetLineStyle(0);
   Graph_Limit68CLs6->SetMarkerStyle(20);
   Graph_Limit68CLs6->GetXaxis()->SetLabelFont(42);
   Graph_Limit68CLs6->GetXaxis()->SetLabelOffset(0.007);
   Graph_Limit68CLs6->GetXaxis()->SetLabelSize(0.05);
   Graph_Limit68CLs6->GetXaxis()->SetTitleSize(0.06);
   Graph_Limit68CLs6->GetXaxis()->SetTitleOffset(0.9);
   Graph_Limit68CLs6->GetXaxis()->SetTitleFont(42);
   Graph_Limit68CLs6->GetYaxis()->SetLabelFont(42);
   Graph_Limit68CLs6->GetYaxis()->SetLabelOffset(0.007);
   Graph_Limit68CLs6->GetYaxis()->SetLabelSize(0.05);
   Graph_Limit68CLs6->GetYaxis()->SetTitleSize(0.06);
   Graph_Limit68CLs6->GetYaxis()->SetTitleOffset(1.25);
   Graph_Limit68CLs6->GetYaxis()->SetTitleFont(42);
   Graph_Limit68CLs6->GetZaxis()->SetLabelFont(42);
   Graph_Limit68CLs6->GetZaxis()->SetLabelOffset(0.007);
   Graph_Limit68CLs6->GetZaxis()->SetLabelSize(0.05);
   Graph_Limit68CLs6->GetZaxis()->SetTitleSize(0.06);
   Graph_Limit68CLs6->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Limit68CLs6);
   
   grae->Draw("f");
   
   grae = new TGraphAsymmErrors(33);
   grae->SetName("LimitExpectedCLs");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(2);
   grae->SetPoint(0,0.8,0.5229376);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.252025);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.1640386);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.1224354);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.1021531);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.08724285);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.07668683);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.06897425);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.06573454);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.05923963);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.05356459);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.0486509);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.04430487);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.04350003);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.03913853);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.03551139);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.03212379);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.02897569);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.0261597);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.02363355);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.02155959);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.01972778);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.01833881);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.01686201);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.01565091);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.01454245);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.01361418);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.01274472);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.01209921);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.01154347);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.01102656);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.0106272);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.01029648);
   grae->SetPointError(32,0,0,0,0);
   
   TH1F *Graph_LimitExpectedCLs7 = new TH1F("Graph_LimitExpectedCLs7","Graph",100,0.48,4.32);
   Graph_LimitExpectedCLs7->SetMinimum(0.009266829);
   Graph_LimitExpectedCLs7->SetMaximum(0.5742018);
   Graph_LimitExpectedCLs7->SetDirectory(0);
   Graph_LimitExpectedCLs7->SetStats(0);
   Graph_LimitExpectedCLs7->SetLineStyle(0);
   Graph_LimitExpectedCLs7->SetMarkerStyle(20);
   Graph_LimitExpectedCLs7->GetXaxis()->SetLabelFont(42);
   Graph_LimitExpectedCLs7->GetXaxis()->SetLabelOffset(0.007);
   Graph_LimitExpectedCLs7->GetXaxis()->SetLabelSize(0.05);
   Graph_LimitExpectedCLs7->GetXaxis()->SetTitleSize(0.06);
   Graph_LimitExpectedCLs7->GetXaxis()->SetTitleOffset(0.9);
   Graph_LimitExpectedCLs7->GetXaxis()->SetTitleFont(42);
   Graph_LimitExpectedCLs7->GetYaxis()->SetLabelFont(42);
   Graph_LimitExpectedCLs7->GetYaxis()->SetLabelOffset(0.007);
   Graph_LimitExpectedCLs7->GetYaxis()->SetLabelSize(0.05);
   Graph_LimitExpectedCLs7->GetYaxis()->SetTitleSize(0.06);
   Graph_LimitExpectedCLs7->GetYaxis()->SetTitleOffset(1.25);
   Graph_LimitExpectedCLs7->GetYaxis()->SetTitleFont(42);
   Graph_LimitExpectedCLs7->GetZaxis()->SetLabelFont(42);
   Graph_LimitExpectedCLs7->GetZaxis()->SetLabelOffset(0.007);
   Graph_LimitExpectedCLs7->GetZaxis()->SetLabelSize(0.05);
   Graph_LimitExpectedCLs7->GetZaxis()->SetTitleSize(0.06);
   Graph_LimitExpectedCLs7->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_LimitExpectedCLs7);
   
   grae->Draw("l");
   
   TGraph *graph = new TGraph(33);
   graph->SetName("CrossSectionTheo");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetFillStyle(3344);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(2);
   graph->SetPoint(0,0.8,1.034759694);
   graph->SetPoint(1,0.9,0.8937612227);
   graph->SetPoint(2,1,0.6838698905);
   graph->SetPoint(3,1.1,0.5078434195);
   graph->SetPoint(4,1.2,0.3752638083);
   graph->SetPoint(5,1.3,0.2780908423);
   graph->SetPoint(6,1.4,0.2073328409);
   graph->SetPoint(7,1.5,0.1556575944);
   graph->SetPoint(8,1.6,0.1177043317);
   graph->SetPoint(9,1.7,0.08961976911);
   graph->SetPoint(10,1.8,0.06866997055);
   graph->SetPoint(11,1.9,0.05292804769);
   graph->SetPoint(12,2,0.04101078701);
   graph->SetPoint(13,2.1,0.0319312081);
   graph->SetPoint(14,2.2,0.024970624);
   graph->SetPoint(15,2.3,0.0196030508);
   graph->SetPoint(16,2.4,0.01544355094);
   graph->SetPoint(17,2.5,0.01221032987);
   graph->SetPoint(18,2.6,0.009670588289);
   graph->SetPoint(19,2.7,0.007682780065);
   graph->SetPoint(20,2.8,0.006115519447);
   graph->SetPoint(21,2.9,0.004879528541);
   graph->SetPoint(22,3,0.003896046162);
   graph->SetPoint(23,3.1,0.003116732535);
   graph->SetPoint(24,3.2,0.002496344344);
   graph->SetPoint(25,3.3,0.002001541859);
   graph->SetPoint(26,3.4,0.001606097131);
   graph->SetPoint(27,3.5,0.001289584586);
   graph->SetPoint(28,3.6,0.001035918856);
   graph->SetPoint(29,3.7,0.00083243059);
   graph->SetPoint(30,3.8,0.0006689100223);
   graph->SetPoint(31,3.9,0.0005376608535);
   graph->SetPoint(32,4,0.0004321144255);
   
   TH1F *Graph_CrossSectionTheo3 = new TH1F("Graph_CrossSectionTheo3","Graph",100,0.48,4.32);
   Graph_CrossSectionTheo3->SetMinimum(0.000388903);
   Graph_CrossSectionTheo3->SetMaximum(1.138192);
   Graph_CrossSectionTheo3->SetDirectory(0);
   Graph_CrossSectionTheo3->SetStats(0);
   Graph_CrossSectionTheo3->SetLineStyle(0);
   Graph_CrossSectionTheo3->SetMarkerStyle(20);
   Graph_CrossSectionTheo3->GetXaxis()->SetLabelFont(42);
   Graph_CrossSectionTheo3->GetXaxis()->SetLabelOffset(0.007);
   Graph_CrossSectionTheo3->GetXaxis()->SetLabelSize(0.05);
   Graph_CrossSectionTheo3->GetXaxis()->SetTitleSize(0.06);
   Graph_CrossSectionTheo3->GetXaxis()->SetTitleOffset(0.9);
   Graph_CrossSectionTheo3->GetXaxis()->SetTitleFont(42);
   Graph_CrossSectionTheo3->GetYaxis()->SetLabelFont(42);
   Graph_CrossSectionTheo3->GetYaxis()->SetLabelOffset(0.007);
   Graph_CrossSectionTheo3->GetYaxis()->SetLabelSize(0.05);
   Graph_CrossSectionTheo3->GetYaxis()->SetTitleSize(0.06);
   Graph_CrossSectionTheo3->GetYaxis()->SetTitleOffset(1.25);
   Graph_CrossSectionTheo3->GetYaxis()->SetTitleFont(42);
   Graph_CrossSectionTheo3->GetZaxis()->SetLabelFont(42);
   Graph_CrossSectionTheo3->GetZaxis()->SetLabelOffset(0.007);
   Graph_CrossSectionTheo3->GetZaxis()->SetLabelSize(0.05);
   Graph_CrossSectionTheo3->GetZaxis()->SetTitleSize(0.06);
   Graph_CrossSectionTheo3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_CrossSectionTheo3);
   
   graph->Draw("c");
   
   graph = new TGraph(33);
   graph->SetName("CrossSectionTheoA");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetFillStyle(3344);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(2);
   graph->SetPoint(0,0.8,1.89310427);
   graph->SetPoint(1,0.9,1.154908994);
   graph->SetPoint(2,1,0.7390482785);
   graph->SetPoint(3,1.1,0.4901848659);
   graph->SetPoint(4,1.2,0.3349745859);
   graph->SetPoint(5,1.3,0.2344494307);
   graph->SetPoint(6,1.4,0.1673802156);
   graph->SetPoint(7,1.5,0.12148311);
   graph->SetPoint(8,1.6,0.08941649558);
   graph->SetPoint(9,1.7,0.06660532152);
   graph->SetPoint(10,1.8,0.05012120812);
   graph->SetPoint(11,1.9,0.03805258433);
   graph->SetPoint(12,2,0.02911110034);
   graph->SetPoint(13,2.1,0.02242101351);
   graph->SetPoint(14,2.2,0.01737038324);
   graph->SetPoint(15,2.3,0.01352644556);
   graph->SetPoint(16,2.4,0.01058119643);
   graph->SetPoint(17,2.5,0.008314131319);
   graph->SetPoint(18,2.6,0.006548823964);
   graph->SetPoint(19,2.7,0.005177453573);
   graph->SetPoint(20,2.8,0.004103428217);
   graph->SetPoint(21,2.9,0.003261385452);
   graph->SetPoint(22,3,0.002594963829);
   graph->SetPoint(23,3.1,0.002069360349);
   graph->SetPoint(24,3.2,0.001652726048);
   graph->SetPoint(25,3.3,0.00132170269);
   graph->SetPoint(26,3.4,0.00105806426);
   graph->SetPoint(27,3.5,0.0008477144819);
   graph->SetPoint(28,3.6,0.0006796179511);
   graph->SetPoint(29,3.7,0.000545124312);
   graph->SetPoint(30,3.8,0.0004373074741);
   graph->SetPoint(31,3.9,0.0003509573808);
   graph->SetPoint(32,4,0.0002816589144);
   
   TH1F *Graph_CrossSectionTheoA4 = new TH1F("Graph_CrossSectionTheoA4","Graph",100,0.48,4.32);
   Graph_CrossSectionTheoA4->SetMinimum(0.000253493);
   Graph_CrossSectionTheoA4->SetMaximum(2.082387);
   Graph_CrossSectionTheoA4->SetDirectory(0);
   Graph_CrossSectionTheoA4->SetStats(0);
   Graph_CrossSectionTheoA4->SetLineStyle(0);
   Graph_CrossSectionTheoA4->SetMarkerStyle(20);
   Graph_CrossSectionTheoA4->GetXaxis()->SetLabelFont(42);
   Graph_CrossSectionTheoA4->GetXaxis()->SetLabelOffset(0.007);
   Graph_CrossSectionTheoA4->GetXaxis()->SetLabelSize(0.05);
   Graph_CrossSectionTheoA4->GetXaxis()->SetTitleSize(0.06);
   Graph_CrossSectionTheoA4->GetXaxis()->SetTitleOffset(0.9);
   Graph_CrossSectionTheoA4->GetXaxis()->SetTitleFont(42);
   Graph_CrossSectionTheoA4->GetYaxis()->SetLabelFont(42);
   Graph_CrossSectionTheoA4->GetYaxis()->SetLabelOffset(0.007);
   Graph_CrossSectionTheoA4->GetYaxis()->SetLabelSize(0.05);
   Graph_CrossSectionTheoA4->GetYaxis()->SetTitleSize(0.06);
   Graph_CrossSectionTheoA4->GetYaxis()->SetTitleOffset(1.25);
   Graph_CrossSectionTheoA4->GetYaxis()->SetTitleFont(42);
   Graph_CrossSectionTheoA4->GetZaxis()->SetLabelFont(42);
   Graph_CrossSectionTheoA4->GetZaxis()->SetLabelOffset(0.007);
   Graph_CrossSectionTheoA4->GetZaxis()->SetLabelSize(0.05);
   Graph_CrossSectionTheoA4->GetZaxis()->SetTitleSize(0.06);
   Graph_CrossSectionTheoA4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_CrossSectionTheoA4);
   
   graph->Draw("c");
   
   grae = new TGraphAsymmErrors(33);
   grae->SetName("LimitObservedCLs");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,0.8,0.5803913);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.2900028);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.2154185);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.1439547);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.1608646);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.08585226);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.05698572);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.05961299);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.06589208);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.05282374);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.03731322);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.0399013);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.04969858);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,0.05147003);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,0.04302036);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,0.0319368);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,0.02490854);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,0.02466935);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,0.02927715);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,0.03089877);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,0.03160146);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,0.03082934);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,0.02654376);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,0.02225901);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,0.01873088);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,0.01462898);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,0.01180558);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,0.01029558);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,0.009470209);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,0.008985437);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,0.008672908);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,0.008461622);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,0.008311788);
   grae->SetPointError(32,0,0,0,0);
   
   TH1F *Graph_LimitObservedCLs8 = new TH1F("Graph_LimitObservedCLs8","Graph",100,0.48,4.32);
   Graph_LimitObservedCLs8->SetMinimum(0.007480609);
   Graph_LimitObservedCLs8->SetMaximum(0.6375992);
   Graph_LimitObservedCLs8->SetDirectory(0);
   Graph_LimitObservedCLs8->SetStats(0);
   Graph_LimitObservedCLs8->SetLineStyle(0);
   Graph_LimitObservedCLs8->SetMarkerStyle(20);
   Graph_LimitObservedCLs8->GetXaxis()->SetLabelFont(42);
   Graph_LimitObservedCLs8->GetXaxis()->SetLabelOffset(0.007);
   Graph_LimitObservedCLs8->GetXaxis()->SetLabelSize(0.05);
   Graph_LimitObservedCLs8->GetXaxis()->SetTitleSize(0.06);
   Graph_LimitObservedCLs8->GetXaxis()->SetTitleOffset(0.9);
   Graph_LimitObservedCLs8->GetXaxis()->SetTitleFont(42);
   Graph_LimitObservedCLs8->GetYaxis()->SetLabelFont(42);
   Graph_LimitObservedCLs8->GetYaxis()->SetLabelOffset(0.007);
   Graph_LimitObservedCLs8->GetYaxis()->SetLabelSize(0.05);
   Graph_LimitObservedCLs8->GetYaxis()->SetTitleSize(0.06);
   Graph_LimitObservedCLs8->GetYaxis()->SetTitleOffset(1.25);
   Graph_LimitObservedCLs8->GetYaxis()->SetTitleFont(42);
   Graph_LimitObservedCLs8->GetZaxis()->SetLabelFont(42);
   Graph_LimitObservedCLs8->GetZaxis()->SetLabelOffset(0.007);
   Graph_LimitObservedCLs8->GetZaxis()->SetLabelSize(0.05);
   Graph_LimitObservedCLs8->GetZaxis()->SetTitleSize(0.06);
   Graph_LimitObservedCLs8->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_LimitObservedCLs8);
   
   grae->Draw("lp");
   TLatex *   tex = new TLatex(0.96,0.936,"2.3 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.048);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.18645,0.89305,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(61);
   tex->SetTextSize(0.052);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.18645,0.83065,"Preliminary");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.03952);
   tex->SetLineWidth(2);
   //tex->Draw();
   
   TH1F *hframe__5 = new TH1F("hframe__5","",1000,0.55,4.05);
   hframe__5->SetMinimum(0.001);
   hframe__5->SetMaximum(50);
   hframe__5->SetDirectory(0);
   hframe__5->SetStats(0);
   hframe__5->SetLineStyle(0);
   hframe__5->SetMarkerStyle(20);
   hframe__5->GetXaxis()->SetTitle("M_{V'} (TeV)");
   hframe__5->GetXaxis()->SetLabelFont(42);
   hframe__5->GetXaxis()->SetLabelOffset(0.007);
   hframe__5->GetXaxis()->SetLabelSize(0.045);
   hframe__5->GetXaxis()->SetTitleSize(0.05);
   hframe__5->GetXaxis()->SetTitleOffset(1.2);
   hframe__5->GetXaxis()->SetTitleFont(42);
   hframe__5->GetYaxis()->SetTitle("#sigma_{95%} #times BR_{V' #rightarrow WV} (pb)");
   hframe__5->GetYaxis()->SetLabelFont(42);
   hframe__5->GetYaxis()->SetLabelOffset(0.007);
   hframe__5->GetYaxis()->SetLabelSize(0.045);
   hframe__5->GetYaxis()->SetTitleSize(0.05);
   hframe__5->GetYaxis()->SetTitleOffset(1.4);
   hframe__5->GetYaxis()->SetTitleFont(42);
   hframe__5->GetZaxis()->SetLabelFont(42);
   hframe__5->GetZaxis()->SetLabelOffset(0.007);
   hframe__5->GetZaxis()->SetLabelSize(0.05);
   hframe__5->GetZaxis()->SetTitleSize(0.06);
   hframe__5->GetZaxis()->SetTitleFont(42);
   hframe__5->Draw("sameaxis");
   
   TH1F *hframe__6 = new TH1F("hframe__6","",1000,0.55,4.05);
   hframe__6->SetMinimum(0.001);
   hframe__6->SetMaximum(50);
   hframe__6->SetDirectory(0);
   hframe__6->SetStats(0);
   hframe__6->SetLineStyle(0);
   hframe__6->SetMarkerStyle(20);
   hframe__6->GetXaxis()->SetTitle("M_{V'} (TeV)");
   hframe__6->GetXaxis()->SetLabelFont(42);
   hframe__6->GetXaxis()->SetLabelOffset(0.007);
   hframe__6->GetXaxis()->SetLabelSize(0.045);
   hframe__6->GetXaxis()->SetTitleSize(0.05);
   hframe__6->GetXaxis()->SetTitleOffset(1.2);
   hframe__6->GetXaxis()->SetTitleFont(42);
   hframe__6->GetYaxis()->SetTitle("#sigma_{95%} #times BR_{V' #rightarrow WV} (pb)");
   hframe__6->GetYaxis()->SetLabelFont(42);
   hframe__6->GetYaxis()->SetLabelOffset(0.007);
   hframe__6->GetYaxis()->SetLabelSize(0.045);
   hframe__6->GetYaxis()->SetTitleSize(0.05);
   hframe__6->GetYaxis()->SetTitleOffset(1.4);
   hframe__6->GetYaxis()->SetTitleFont(42);
   hframe__6->GetZaxis()->SetLabelFont(42);
   hframe__6->GetZaxis()->SetLabelOffset(0.007);
   hframe__6->GetZaxis()->SetLabelSize(0.05);
   hframe__6->GetZaxis()->SetTitleSize(0.06);
   hframe__6->GetZaxis()->SetTitleFont(42);
   hframe__6->Draw("sameaxig");
   
   TLegend *leg = new TLegend(0.4,0.59,0.91,0.79,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.031);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("LimitObservedCLs","Asympt. CL_{S} Observed","LP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Limit68CLs","Asympt. CL_{S} Expected #pm 1#sigma","LF");

   ci = TColor::GetColor("#00ff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Limit95CLs","Asympt. CL_{S} Expected #pm 2#sigma","LF");

   ci = TColor::GetColor("#cccc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("CrossSectionTheo","HVT_{B} (g_{V}=3)","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("CrossSectionTheoA","HVT_{A} (g_{V}=1)","L");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4,0.8,0.76,0.86,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(42);
   pt->SetTextSize(0.031);
   text = pt->AddText("lvJ channel");
   text->SetTextFont(62);
   //pt->Draw();
   c_lim_Asymptotic->Modified();
   c_lim_Asymptotic->cd();
   c_lim_Asymptotic->SetSelected(c_lim_Asymptotic);
}
