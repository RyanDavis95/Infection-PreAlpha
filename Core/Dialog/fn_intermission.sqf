RscMissionEnd_colorCorrection = ppeffectcreate ["ColorCorrections",1616];
RscMissionEnd_colorCorrection ppeffectforceinNVG true;
RscMissionEnd_colorCorrection ppEffectEnable true;
RscMissionEnd_colorCorrection ppEffectAdjust [1, 1, 0, [1, 1, 1, 0], [0.4, 0.4, 0.4, 1], [1, 1, 1, 1.0]];
RscMissionEnd_colorCorrection ppEffectCommit 0;
RscMissionEnd_colorCorrection ppEffectAdjust [1, 1, -0.1, [1, 1, 1, 0], [0.4, 0.4, 0.4, 0], [1, 1, 1, 1.0]];
RscMissionEnd_colorCorrection ppEffectCommit 0.2;

RscMissionEnd_filmGrain = ppeffectcreate ["filmGrain",2005];
RscMissionEnd_filmGrain ppeffectforceinNVG true;
RscMissionEnd_filmGrain ppEffectEnable true;
RscMissionEnd_filmGrain ppEffectAdjust [0, 1, 1, 0.1, 1, true];
RscMissionEnd_filmGrain ppEffectCommit 0;
RscMissionEnd_filmGrain ppEffectAdjust [0.1, 1, 1, 0.1, 1, true];
RscMissionEnd_filmGrain ppEffectCommit 0.2;

RscMissionEnd_radialBlur = ppeffectcreate ["RadialBlur",167];
RscMissionEnd_radialBlur ppeffectforceinNVG true;
RscMissionEnd_radialBlur ppeffectenable true;
RscMissionEnd_radialBlur ppeffectadjust [0,0,0,0];
RscMissionEnd_radialBlur ppeffectcommit 0;
RscMissionEnd_radialBlur ppeffectadjust [0.005,0,0.25,0.25];
RscMissionEnd_radialBlur ppeffectcommit 0.2;

[] spawn {
    disableserialization;
	disableUserInput true;
    waituntil {sleep .5; missionNamespace getVariable ["INF_Round_InProgress",false];};
	RscMissionEnd_colorCorrection ppEffectAdjust [1, 1, 0, [1, 1, 1, 0], [0.4, 0.4, 0.4, 1], [1, 1, 1, 1.0]];
	RscMissionEnd_colorCorrection ppEffectCommit 0.2;
	RscMissionEnd_filmGrain ppEffectAdjust [0, 1, 1, 0.1, 1, true];
	RscMissionEnd_filmGrain ppEffectCommit 0.2;
	RscMissionEnd_radialBlur ppeffectadjust [0,0,0,0];
	RscMissionEnd_radialBlur ppeffectcommit 0.2;
	sleep .5;
    ppeffectdestroy [
        RscMissionEnd_colorCorrection,
        RscMissionEnd_filmGrain,
        RscMissionEnd_radialBlur
    ];
	disableUserInput false;
};
