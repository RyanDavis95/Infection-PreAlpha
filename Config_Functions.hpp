class Infection_Server {
            tag = "INFS";
            class Server {
                    file = "Infection_Server";

                    class roundManager {};
                    class setupEVH {};  
            };

            class Items {
                    file = "Infection_Server\Items";

                    class createGrave {};
                    class dropItem {};
                    class giveAmmo {};
                    class giveEndurance {};
                    class giveHealth {};
                    class giveMine {};
                    class itemPickup {};  
            };

            class LootManager {
                    file = "Infection_Server\LootManager";

                    class randomRifle {};
            };
            class PlayerManager {
                    file = "Infection_Server\PlayerManager";

                    class connectedPlayer {};
                    class disconnectedPlayer {};
                    class unitKilled {};  
                    class unitRespawned {};
                    class updateTeams {};
            };

            class RoundManager {
                    file = "Infection_Server\RoundManager";

                    class aquirePlayers {};
                    class pickZombie {};
                    class pickZone {};
                    class resetWorld {};
                    class startIntermission {};
                    class startRound {};
                    class stopRound {};
            };

            class Stats {
                    file = "Infection_Server\Stats";

                    class decStat {};
                    class incStat {};
                    class saveStats {};
                    class showStats {};
                    class updateStats {};
            };

    };

class Infection_Core {

    tag="INF";
        
        class Core {
            file="Core";
            
            class initSurvivor {};
            class initZombie {};
            class setupEVH {};
            
        };

        class Dialog {
                file = "Core\Dialog";

                class intermission {};

        };
        
        class Functions {
            file="Core\Functions";

            class bloodEffects {};
            class getObjHeight {};          
            class jump {};
            class keyDown {};
            class mouseDown {};
            class playMusic {};
            class setupGear {};
            class spawnPlayer {};
            
        };
        class Icons {
            file="Core\Icons";  
            
            class modIcon {};
            class drawIcon {};
            
        };
        
        class Loadout {
                file = "Core\Loadout";

                class initLoadoutScreen {};
                class saveLoadout {};
                class giveAmmo {};
                class updateWeapon {};
                class updateWeaponList {};
                class updateVariant {};
                class updateAttachment {};
                class updateAttachmentList {};
        };

        class Survivors {
            file="Core\Survivors";
            
            class HandleSurvDamage {};           
        };
        
        class Zombies {
            file="Core\Zombies";
            
            class glowEffects {};
            class zombieDmg {};
            class zombieAttack {};
        };
        
};