savedItems = [];

h = player spawn {
	sleep 1;
	
	disableSerialization;
	_display = findDisplay 46;
	_control = _display ctrlCreate [ "RscStructuredText", 999 ];
		
	[ "text", "onEachFrame", {
		_unit = _this;
	
		
		_display = findDisplay 46;
		_control = _display displayCtrl 999;
		
		_name = ( name _unit );
		

        _nTxt = parseText format["<t align='center' color='#CC00ff00'>%1</t>", name _unit]; //align='center'
        _img = parseText "<img align='center' color='#CCffffff' image='Resources\Images\Icons\triangle_ca.paa'/>";
        _finalText = composeText [_nTxt,lineBreak, _img];

		_control ctrlSetStructuredText _finalText;

		_w = ( ctrlPosition _control  ) select 2;
		_h = ( ctrlPosition _control  ) select 3;
		
		_pos2D = worldToScreen ( ( getPosVisual _unit ) vectorAdd [ 0, 0, 2 ] );
	
		if ( count _pos2D > 0 ) then {
			
			_control ctrlSetPosition [
				(_pos2D select 0) - _w/2,
				(_pos2D select 1) - _h/2,
				0.1,
				0.1
			];
	
			_control ctrlSetFade 0;
			_control ctrlCommit 0;
		}else{
			_control ctrlSetFade 1;
			_control ctrlCommit 0;
		};
	
	}, _this ] call BIS_fnc_addStackedEventHandler;

};

player addEventHandler ["InventoryOpened", {

	_h = [] spawn {

		disableSerialization;

		waitUntil { !(isNull (findDisplay 602)) };

		_button1 = (findDisplay 602) ctrlCreate ["RscButton",1928];

		_button1 ctrlSetPosition  [0.432969 * safezoneW + safezoneX,0.874 * safezoneH + safezoneY,0.12375 * safezoneW,0.033 * safezoneH];

		_button1 ctrlCommit 0;

		_button1 ctrlSetText "Select Loadout";

		_button1 buttonSetAction "player setDammage 1";

	};

}];