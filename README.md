# Integrity Check Bypass For COD:MW

//><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><//

// [ IW8 ] Force offline mode Fence bypass - 1.67 Edition

//><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><//


//=================================================================//

// 

// [ Credits ]

// 								      

// Main coding                             : HiNAtyu Studio    ( https://github.com/ProjectHiNAtyu )

// Special support                         : Sku-111           ( https://github.com/Sku-111 )

// Some support                            : rektinator & WantedDeviation & zhm86

// Very helpful base source                : h00dbyair         ( https://pastebin.com/uNWFy651 )

// Basic system and documentation          : Project Donetsk   ( https://github.com/ProjectDonetsk/IW8-1.20 )

// arxan Bypass base project               : mallgrab / CWHook ( https://github.com/mallgrab/CWHook )

// arxan Integrity Checks Infos            : momo5502 blogs    ( https://momo5502.com/posts/2022-11-17-reverse-engineering-integrity-checks-in-black-ops-3/ )

// Some debugging reference & good support : Lebta2 / iw8-mod  ( https://github.com/xifil/iw8-mod )

// 

//=================================================================//

//=================================================================//

// 

// [ Contact ]

// 

// Creator       : HiNAtyu Studio

// Update date   : 2024/07/16

// YouTube       : https://www.youtube.com/channel/UCmxJAnVPtkStQVKrvAVMZSw

// Twitter 1     : @KonataGIF ( https://x.com/KonataGIF )

// Twitter 2     : @H1NAtyu ( https://twitter.com/H1NAtyu )

// Discord       : hinatapoko ( https://discordapp.com/users/239453096026046464 )

// 

//=================================================================//

//=================================================================//

// 

// [ Promotion ]

// 

// I'd be very happy if you could follow, subscribe, like, or comment on my various SNS accounts.

// If you like my work, I'd be happy if you could sponsor or donate.

// This will help facilitate the development of new features and fixes.

// 

// Ko-fi : https://ko-fi.com/hinatyustudio

// BTC   : 32J66dfWi9dqqWHS2RYR9rFCUNBL88vgUR

// ETH   : 0xaE5D5b3e8E865B2bA676a24eF41d5f4CBD315978

// 

//=================================================================//

//=================================================================//

// 

// [ Project Info ]

// 

// Game title         : Call of Duty : Modern Warfare ( 2019 )

// Game code          : IW8 / CoD16 / MW19 / MW2019 / CoD2019 / CoD:MW

// Game released year : 2019

// Platform           : PC ( BattleNet )

// Build version      : 1.67

// Game mode          : CP / MP ( Co-op / Multiplayer )

// 

//=================================================================//

//=================================================================//

// 

// [ Caution! ]

// 

// * This project was created for research, development and educational purposes.

// * The project administrators are not responsible for any misuse of this project, use at your own risk.

// * There is no warranty or support for the use of this project

// * You must legally own the game in order to run this project, cracked/pirated versions of the game are not supported.

// * This project was created as part of technical verification and educational learning of C++ programming.

// * This project was not created for the purpose of increasing the number of cheaters (users who use cheats), hackers or trolls.

// * This project was created on the premise that it will only work in private spaces (private matches, offline builds, offline modes), not in environments with a large number of unspecified users such as public battles.

// * I, the developer, have only checked the operation of this project in the private space mentioned above, and I use it mainly for personal use, fun and play.

// * The functions performed by this project do not affect the current server (networks with general users).

// * We do not recommend using this project in public places other than the private spaces mentioned above, so please be sure to run it in a private space.

// * If you use this project in an environment other than the recommended environment or for other than the recommended purpose, I, the developer, will not be held responsible for any problems or risks that may occur, or serious measures such as account bans. Please use at your own risk.

// * I, the developer, take no responsibility for any serious actions, such as Call of Duty BAN (account ban), that may occur while using this project. All responsibility lies with the user himself.

// 

// * This project is designed to work with the game "Call of Duty Modern Warfare (IW8 / CoD16 / MW19 / MW2019 / CoD2019 / CoD:MW)".

// * This project is designed to work with the "PC BattleNet version 1.67 build" of the above game.

// * This project is not intended for use with game titles, environments, or platforms other than the above games.

// * If you use this project in an environment other than the recommended environment or for purposes other than the recommended purpose, I, the developer, will not be held responsible in any case, so please use at your own risk.

// 

//=================================================================//

//=================================================================//

// 

// [ About ]

// 

// This project was originally started for MW2019 1.57

// That's because I genuinely wanted to see Godzilla again lol

// However, the behavior of arxan in 1.57 is very mysterious and not immediately clear.

// Also, I am not a good client developer like Sku.

// 

// So I changed course and started work on 1.67.

// But with everyone's help, and with my own efforts, I didn't give up.

// I don't like waiting for someone to release something :P

// So I decided to learn this offline build technique myself.

// This project was completed thanks to the efforts of many people, as mentioned above.

// And this source is based on Sku and combined with the h00dbyair code.

// Don't forget their accomplishments.  

// 

// This project only supports MW2019 1.67.

// You can play CP, but MP lobby data has not been initialized, so bots will not appear.

// There may still be many problems.

// Feel free to play around with it, but if you send me feedback I won't know if I'll fix it.

// I don't intend to run any client with this, I'm just making it for my own enjoyment.

// Enjoy it freely!

// 

//=================================================================//

//=================================================================//

// 

// [ How to use ]

// 

// 1 - Purchase and install MW2019 BattleNet Version 1.67 build

// 2 - Move all of the files from your MW2019 1.67 installation into the included "Call of Duty" folder

// 3 - At this point your MW2019 1.67 file path should look something like this:

// 4 - C:\Users\tatsu\OneDrive\Desktop\PHA_IW8_167_OBFP\Call of Duty\ModernWarfare.exe

// 5 - Next, run "!install.bat" in the same directory as an administrator.

// 6 - You're now ready to go, just double-click "!StartGame.bat" to start the game!

// 

//=================================================================//

//=================================================================//

// 

// [ Issue ]

// 

// I have already tried this, but even if you update only the CWHook, which is the core part of this source, i.e. the arxan Bypass address, to another version such as 1.57, it may not work properly.

// Be careful, arxan's behavior varies greatly depending on the build.

// Also, I haven't checked SP yet, but it probably won't work (I haven't found the SP Patch flag that h00dbyair posted...)

// MP bots are currently under investigation (regarding lobby data initialization)

// 

//=================================================================//
