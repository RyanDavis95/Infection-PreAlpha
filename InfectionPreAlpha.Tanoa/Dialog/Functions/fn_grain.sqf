PP_colorC = ppEffectCreate ["ColorCorrections",1500];
PP_colorC ppEffectEnable true;
PP_colorC ppEffectAdjust [1,1,0,[0,0,0,-0.25],[1,1,1,0.26],[0.33,0.33,0.33,-0.06],[0,0,0,0,0,0,4]];
PP_colorC ppEffectCommit 1;
PP_film = ppEffectCreate ["FilmGrain",2000];
PP_film ppEffectEnable true;
PP_film ppEffectAdjust [0.71,0.63,0.49,0.42,0.64,true];
PP_film ppEffectCommit 1;
// Date YYYY-MM-DD-HH-MM: [2035,6,24,15,18]. Overcast: 0.234477. Fog: 0.1. Fog params: [0.0800174,0.013,0] 
// GF PostProcess Editor parameters: Copy the following line to clipboard and click Import in the editor.
//[[false,100,[0.05,0.05,0.3,0.3]],[false,200,[0.01,0.01,true]],[false,300,[1,0.2,0.2,1,1,1,1,0.05,0.01,0.05,0.01,0.1,0.1,0.2,0.2]],[true,1500,[1,1,0,[0,0,0,-0.25],[1,1,1,0.26],[0.33,0.33,0.33,-0.06],[0,0,0,0,0,0,4]]],[false,500,[0.48]],[true,2000,[0.71,0.63,0.49,0.42,0.64,true]],[false,2500,[0.19,0.19,0.18]]]