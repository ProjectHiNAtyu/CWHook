# Integrity Check Bypass For COD:MW

//><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><//
// [ IW8 ] Force offline mode Fence bypass - 1.67 Edition
//><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><//

//=================================================================//
// 
// [ Credits ]
// 
// Main coding                    : HiNAtyu Studio    ( https://github.com/ProjectHiNAtyu )
// Special support                : Sku-111           ( https://github.com/Sku-111 )
// Some support                   : rektinator & mjkzy & WantedDeviation & zhm86 & Lebta2
// Very helpful base source       : h00dbyair         ( https://pastebin.com/uNWFy651 )
// Basic system and documentation : Project Donetsk   ( https://github.com/ProjectDonetsk/IW8-1.20 )
// arxan Bypass base project      : mallgrab / CWHook ( https://github.com/mallgrab/CWHook )
// arxan Integrity Checks Infos   : momo5502 blogs    ( https://momo5502.com/posts/2022-11-17-reverse-engineering-integrity-checks-in-black-ops-3/ )
// Some debugging reference       : iw8-mod           ( https://github.com/xifil/iw8-mod )
// 
//=================================================================//

//=================================================================//
// 
// [ Contact ]
// 
// Creator       : HiNAtyu Studio
// Update date   : 2024/07/14
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
// * This project is designed to work with the "PC BattleNet version 1.57 build" of the above game.
// * This project is not intended for use with game titles, environments, or platforms other than the above games.
// * If you use this project in an environment other than the recommended environment or for purposes other than the recommended purpose, I, the developer, will not be held responsible in any case, so please use at your own risk.
// 
//=================================================================//

//=================================================================//
// 
// [ Issue ]
// 
// This project does not yet include arxan Bypass.
// I need to port CWHook created by mallgrab to MW19...
// Please understand that this project is only meant to bypass FenceOnline and give you access to the Local Multiplayer frontend.
// For more information about arxan Bypass, please refer to the following:
// 
// mallgrab : CWHook                                              ( https://github.com/mallgrab/CWHook )
// momo5502 : Reverse Engineering Integrity Checks in Black Ops 3 ( https://momo5502.com/posts/2022-11-17-reverse-engineering-integrity-checks-in-black-ops-3/ )
// 
//=================================================================//
