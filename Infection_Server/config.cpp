class CfgPatches {
        class Infection_Server {
                units[] = {"C_man_1"};
                weapons[] = {};
                requiredAddons[] = {"A3_Data_F"};
                fileName = "Infection_Server.pbo";
                author[] = {"DJRy"};
        };
};

class CfgFunctions {

        class Infection_System {
                tag = "INFS";
                class Server {
                        file = "\Server";

                        class roundManager {};
                        class setupEVH {};  
                };

                class Items {
                        file = "\Server\Items";

                        class createGrave {};
                        class dropItem {};
                        class giveAmmo {};
                        class giveEndurance {};
                        class giveHealth {};
                        class giveMine {};
                        class itemPickup {};  
                };

                class PlayerManager {
                        file = "\Server\PlayerManager";

                        class connectedPlayer {};
                        class disconnectedPlayer {};
                        class unitKilled {};  
                        class unitRespawned {};
                        class updateTeams {};
                };

                class RoundManager {
                        file = "\Server\RoundManager";

                        class aquirePlayers {};
                        class pickZombie {};
                        class pickZone {};
                        class resetWorld {};
                        class startIntermission {};
                        class startRound {};
                        class stopRound {};
                };

                class Stats {
                        file = "\Server\Stats";

                        class decStat {};
                        class incStat {};
                        class saveStats {};
                        class showStats {};
                        class updateStats {};
                };

        };

};