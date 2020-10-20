#include "translation/common.h"
#include "translation/translation.h"

static translation_string all_strings[] = {
    {TR_NO_PATCH_TITLE, "Patch 1.0.1.0 not installed"},
    {TR_NO_PATCH_MESSAGE,
        "Your Caesar 3 installation does not have the 1.0.1.0 patch installed. "
        "You can download the patch from:\n"
        URL_PATCHES "\n"
        "Continue at your own risk."},
    {TR_MISSING_FONTS_TITLE, "Missing fonts"},
    {TR_MISSING_FONTS_MESSAGE,
        "Your Caesar 3 installation requires extra font files. "
        "You can download them for your language from:\n"
        URL_PATCHES},
    {TR_NO_EDITOR_TITLE, "Editor not installed"},
    {TR_NO_EDITOR_MESSAGE,
        "Your Caesar 3 installation does not contain the editor files. "
        "You can download them from:\n"
        URL_EDITOR},
    {TR_INVALID_LANGUAGE_TITLE, "Invalid language directory"},
    {TR_INVALID_LANGUAGE_MESSAGE,
        "The directory you selected does not contain a valid language pack. "
        "Please check the log for errors."},
    {TR_BUTTON_OK, "OK"},
    {TR_BUTTON_CANCEL, "Cancel"},
    {TR_BUTTON_RESET_DEFAULTS, "Reset defaults"},
    {TR_BUTTON_CONFIGURE_HOTKEYS, "Configure hotkeys"},
    {TR_BUTTON_NEXT, "+"},
    {TR_BUTTON_PREV, "-"},
    {TR_CONFIG_TITLE, "Augustus configuration options"},
    {TR_CONFIG_LANGUAGE_LABEL, "Language:"},
    {TR_CONFIG_LANGUAGE_DEFAULT, "(default)"},
    {TR_CONFIG_PAGE_LABEL, "Page"},
    {TR_CONFIG_HEADER_UI_CHANGES, "User Interface"},
    {TR_CONFIG_HEADER_GAMEPLAY_CHANGES, "Difficulty"},
    {TR_CONFIG_SHOW_INTRO_VIDEO, "Play intro videos"},
    {TR_CONFIG_SIDEBAR_INFO, "Extra information in the control panel"},
    {TR_CONFIG_SMOOTH_SCROLLING, "Enable smooth scrolling"},
    {TR_CONFIG_VISUAL_FEEDBACK_ON_DELETE, "Improve visual feedback when clearing land"},
    {TR_CONFIG_ALLOW_CYCLING_TEMPLES, "Allow building each temple in succession"},
    {TR_CONFIG_SHOW_WATER_STRUCTURE_RANGE, "Show range when building reservoirs, fountains and wells"},
    {TR_CONFIG_SHOW_CONSTRUCTION_SIZE, "Show draggable construction size"},
    {TR_CONFIG_HIGHLIGHT_LEGIONS, "Highlight legion on cursor hover"},
    {TR_CONFIG_ROTATE_MANUALLY, "Rotate Gatehouse and Triumph Arch by hotkey"},
    {TR_CONFIG_FIX_IMMIGRATION_BUG, "Fix immigration bug on very hard"},
    {TR_CONFIG_FIX_100_YEAR_GHOSTS, "Fix 100-year-old ghosts"},
    {TR_CONFIG_FIX_EDITOR_EVENTS, "Fix Emperor change and survival time in custom missions"},
    {TR_CONFIG_DRAW_WALKER_WAYPOINTS, "Draw walker waypoints on overlay after right clicking on a building"},
    {TR_CONFIG_ENABLE_ZOOM, "Enable zoom (can be slow, uses more RAM)"},
    {TR_CONFIG_COMPLETE_RATING_COLUMNS, "Fix uncompleted rating columns on low targets"},
    {TR_CONFIG_GRANDFESTIVAL, "Grand festivals allow extra blessing from a god"},
    {TR_CONFIG_JEALOUS_GODS, "Disable jealousness of gods"},
    {TR_CONFIG_GLOBAL_LABOUR, "Enable global labour pool"},
    {TR_CONFIG_SCHOOL_WALKERS, "Extend school walkers range"},
    {TR_CONFIG_RETIRE_AT_60, "Change citizens' retirement age from 50 to 60"},
    {TR_CONFIG_FIXED_WORKERS, "Fixed worker pool - 38% of population"},
    {TR_CONFIG_EXTRA_FORTS, "Allow building 4 extra forts"},
    {TR_CONFIG_WOLVES_BLOCK, "Block building around wolves"},
    {TR_CONFIG_DYNAMIC_GRANARIES, "Block unconnected granary roads"},
    {TR_CONFIG_MORE_STOCKPILE, "Houses stockpile more goods from market"},
    {TR_CONFIG_NO_BUYER_DISTRIBUTION, "Buying market ladies don't distribute goods"},
    {TR_CONFIG_IMMEDIATELY_DELETE_BUILDINGS, "Immediately destroy buildings"},
    {TR_CONFIG_GETTING_GRANARIES_GO_OFFROAD, "Cart pushers from getting granaries can go offroad"},
    {TR_CONFIG_GRANARIES_GET_DOUBLE, "Double the capacity of cart pushers from getting granaries"},
    {TR_CONFIG_TOWER_SENTRIES_GO_OFFROAD, "Tower sentries don't need road access from barracks"},
    {TR_CONFIG_FARMS_DELIVER_CLOSE, "Farms and wharves deliver only to nearby granaries"},
    {TR_CONFIG_DELIVER_ONLY_TO_ACCEPTING_GRANARIES, "Food isn't delivered to getting granaries"},
    {TR_CONFIG_ALL_HOUSES_MERGE, "All houses merge"},
    {TR_CONFIG_WINE_COUNTS_IF_OPEN_TRADE_ROUTE, "Open trade route count as providing different wine type"},
    {TR_CONFIG_RANDOM_COLLAPSES_TAKE_MONEY, "Randomly collapsing clay pits and iron mines take some money instead"},
    {TR_CONFIG_MULTIPLE_BARRACKS, "Allow building multiple barracks" },
    {TR_CONFIG_NOT_ACCEPTING_WAREHOUSES, "Warehouses don't accept anything when built"},
    {TR_CONFIG_HOUSES_DONT_EXPAND_INTO_GARDENS, "Houses don't expand into gardens"},
    {TR_HOTKEY_TITLE, "Augustus hotkey configuration"},
    {TR_HOTKEY_LABEL, "Hotkey"},
    {TR_HOTKEY_ALTERNATIVE_LABEL, "Alternative"},
    {TR_HOTKEY_HEADER_ARROWS, "Arrow keys"},
    {TR_HOTKEY_HEADER_GLOBAL, "Global hotkeys"},
    {TR_HOTKEY_HEADER_CITY, "City hotkeys"},
    {TR_HOTKEY_HEADER_ADVISORS, "Advisors"},
    {TR_HOTKEY_HEADER_OVERLAYS, "Overlays"},
    {TR_HOTKEY_HEADER_BOOKMARKS, "City map bookmarks"},
    {TR_HOTKEY_HEADER_EDITOR, "Editor"},
    {TR_HOTKEY_HEADER_BUILD, "Construction hotkeys"},
    {TR_HOTKEY_ARROW_UP, "Up"},
    {TR_HOTKEY_ARROW_DOWN, "Down"},
    {TR_HOTKEY_ARROW_LEFT, "Left"},
    {TR_HOTKEY_ARROW_RIGHT, "Right"},
    {TR_HOTKEY_TOGGLE_FULLSCREEN, "Toggle fullscreen"},
    {TR_HOTKEY_CENTER_WINDOW, "Center window"},
    {TR_HOTKEY_RESIZE_TO_640, "Resize window to 640x480"},
    {TR_HOTKEY_RESIZE_TO_800, "Resize window to 800x600"},
    {TR_HOTKEY_RESIZE_TO_1024, "Resize window to 1024x768"},
    {TR_HOTKEY_SAVE_SCREENSHOT, "Save screenshot"},
    {TR_HOTKEY_SAVE_CITY_SCREENSHOT, "Save full city screenshot"},
    {TR_HOTKEY_BUILD_CLONE, "Clone building under cursor"},
    {TR_HOTKEY_LOAD_FILE, "Load file"},
    {TR_HOTKEY_SAVE_FILE, "Save file"},
    {TR_HOTKEY_INCREASE_GAME_SPEED, "Increase game speed"},
    {TR_HOTKEY_DECREASE_GAME_SPEED, "Decrease game speed"},
    {TR_HOTKEY_TOGGLE_PAUSE, "Toggle pause"},
    {TR_HOTKEY_CYCLE_LEGION, "Cycle through legions"},
    {TR_HOTKEY_ROTATE_MAP_LEFT, "Rotate map left"},
    {TR_HOTKEY_ROTATE_MAP_RIGHT, "Rotate map right"},
    {TR_HOTKEY_SHOW_ADVISOR_LABOR, "Labor advisor"},
    {TR_HOTKEY_SHOW_ADVISOR_MILITARY, "Military advisor"},
    {TR_HOTKEY_SHOW_ADVISOR_IMPERIAL, "Imperial advisor"},
    {TR_HOTKEY_SHOW_ADVISOR_RATINGS, "Ratings advisor"},
    {TR_HOTKEY_SHOW_ADVISOR_TRADE, "Trade advisor"},
    {TR_HOTKEY_SHOW_ADVISOR_POPULATION, "Population advisor"},
    {TR_HOTKEY_SHOW_ADVISOR_HEALTH, "Health advisor"},
    {TR_HOTKEY_SHOW_ADVISOR_EDUCATION, "Education advisor"},
    {TR_HOTKEY_SHOW_ADVISOR_ENTERTAINMENT, "Entertainment advisor"},
    {TR_HOTKEY_SHOW_ADVISOR_RELIGION, "Religion advisor"},
    {TR_HOTKEY_SHOW_ADVISOR_FINANCIAL, "Financial advisor"},
    {TR_HOTKEY_SHOW_ADVISOR_CHIEF, "Chief advisor"},
    {TR_HOTKEY_SHOW_ADVISOR_HOUSING, "Housing advisor"},
    {TR_HOTKEY_TOGGLE_OVERLAY, "Toggle current overlay"},
    {TR_HOTKEY_SHOW_OVERLAY_WATER, "Show water overlay"},
    {TR_HOTKEY_SHOW_OVERLAY_FIRE, "Show fire overlay"},
    {TR_HOTKEY_SHOW_OVERLAY_DAMAGE, "Damage overlay"},
    {TR_HOTKEY_SHOW_OVERLAY_CRIME, "Crime overlay"},
    {TR_HOTKEY_ROTATE_BUILDING, "Rotate building"},
    {TR_HOTKEY_SHOW_OVERLAY_PROBLEMS, "Problems overlay"},
    {TR_HOTKEY_GO_TO_BOOKMARK_1, "Go to bookmark 1"},
    {TR_HOTKEY_GO_TO_BOOKMARK_2, "Go to bookmark 2"},
    {TR_HOTKEY_GO_TO_BOOKMARK_3, "Go to bookmark 3"},
    {TR_HOTKEY_GO_TO_BOOKMARK_4, "Go to bookmark 4"},
    {TR_HOTKEY_SET_BOOKMARK_1, "Set bookmark 1"},
    {TR_HOTKEY_SET_BOOKMARK_2, "Set bookmark 2"},
    {TR_HOTKEY_SET_BOOKMARK_3, "Set bookmark 3"},
    {TR_HOTKEY_SET_BOOKMARK_4, "Set bookmark 4"},
    {TR_HOTKEY_EDITOR_TOGGLE_BATTLE_INFO, "Toggle battle info"},
    {TR_HOTKEY_EDIT_TITLE, "Press new hotkey"},
    {TR_BUILDING_ROADBLOCK, "Roadblock"},
    {TR_BUILDING_ROADBLOCK_DESC, "Roadblock stops loitering citizens."},
    {TR_BUILDING_ENGINEER_GUILD, "Engineer guild" },
    {TR_BUILDING_ENGINEER_GUILD_DESC, "Engineers here work tirelessly to construct monuments for the glory of Rome." },
    {TR_BUILDING_GRAND_TEMPLE_ADD_MODULE, "Bestow epithet on temple" },
    {TR_BUILDING_GRAND_TEMPLE_CERES, "Ceres grand temple" },
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE, "Neptune grand temple" },
    {TR_BUILDING_GRAND_TEMPLE_MERCURY, "Mercury grand temple" },
    {TR_BUILDING_GRAND_TEMPLE_MARS, "Mars grand Temple" },
    {TR_BUILDING_GRAND_TEMPLE_VENUS, "Venus grand Temple" },
    {TR_BUILDING_PANTHEON, "Pantheon" },
    {TR_BUILDING_GRAND_TEMPLE_CERES_DESC, "Grand temple of Ceres" },
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE_DESC, "Grand temple of Neptune" },
    {TR_BUILDING_GRAND_TEMPLE_MERCURY_DESC, "Grand temple of Mercury" },
    {TR_BUILDING_GRAND_TEMPLE_MARS_DESC, "Grand temple of Mars" },
    {TR_BUILDING_GRAND_TEMPLE_VENUS_DESC, "Grand temple of Venus" },
    {TR_BUILDING_PANTHEON_DESC, "Pantheon" },
    {TR_BUILDING_GRAND_TEMPLE_CERES_BONUS_DESC, "Cartpushers from farms move 50% faster." },
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE_BONUS_DESC, "Fountain and reservoirs require fewer workers and gain increased range. Trade ships move 25% faster." },
    {TR_BUILDING_GRAND_TEMPLE_MERCURY_BONUS_DESC, "Land and sea traders have an additional 50% capacity. Land traders move 25% faster." },
    {TR_BUILDING_GRAND_TEMPLE_MARS_BONUS_DESC, "Grand temple trains soldiers. Four extra forts may be built." },
    {TR_BUILDING_GRAND_TEMPLE_VENUS_BONUS_DESC, "City gardens, statues, and temples glow with increased beauty, increasing their desirability. Houses stock more goods and devolve more slowly." },
    {TR_BUILDING_PANTHEON_BONUS_DESC, "Provides access to all gods. Holds annual festivals and reduces temple levies by 25%." },
    {TR_BUILDING_GRAND_TEMPLE_CERES_MODULE_1_DESC, "Priests reduce food consumption by 20%." },
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE_MODULE_1_DESC, "Temples produce charioteers for the hippodrome." },
    {TR_BUILDING_GRAND_TEMPLE_MERCURY_MODULE_1_DESC, "Priests reduce pottery and furniture consumption by 20%." },
    {TR_BUILDING_GRAND_TEMPLE_MARS_MODULE_1_DESC, "Temples produce a large amount of food for the mess hall." },
    {TR_BUILDING_GRAND_TEMPLE_VENUS_MODULE_1_DESC, "Temples produce and distribute wine." },
    {TR_BUILDING_GRAND_TEMPLE_CERES_MODULE_2_DESC, "Priests collect and distribute one food type from city granaries." },
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE_MODULE_2_DESC, "Priests expand housing capacity by 5%. Grand temple provides water as a filled reservoir." },
    {TR_BUILDING_GRAND_TEMPLE_MERCURY_MODULE_2_DESC, "Priests reduce oil and wine consumption by 20%." },
    {TR_BUILDING_GRAND_TEMPLE_MARS_MODULE_2_DESC, "Priests reduce consumption of all goods by 10%." },
    {TR_BUILDING_GRAND_TEMPLE_VENUS_MODULE_2_DESC, "Priests provide entertainment and beautify houses." },
    {TR_BUILDING_PANTHEON_MODULE_1_DESC, "All the temples in the city send priests to Pantheon, spreading the faith and blessings of their gods." },
    {TR_BUILDING_PANTHEON_MODULE_2_DESC, "Houses with access to all five gods can evolve one additional step." },
    {TR_BUILDING_GRAND_TEMPLE_CERES_DESC_MODULE_1, "Temple of Ceres Promitor" },
    {TR_BUILDING_GRAND_TEMPLE_CERES_DESC_MODULE_2, "Temple of Ceres Reparator" },
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE_DESC_MODULE_1, "Temple of Neptunus Equester" },
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE_DESC_MODULE_2, "Temple of Neptunus Adiutor" },
    {TR_BUILDING_GRAND_TEMPLE_MERCURY_DESC_MODULE_1, "Temple of Mercurius Fortunus" },
    {TR_BUILDING_GRAND_TEMPLE_MERCURY_DESC_MODULE_2, "Temple of Mercurius Abundantia" },
    {TR_BUILDING_GRAND_TEMPLE_MARS_DESC_MODULE_1, "Temple of Mars Ultor" },
    {TR_BUILDING_GRAND_TEMPLE_MARS_DESC_MODULE_2, "Temple of Mars Quirinus" },
    {TR_BUILDING_GRAND_TEMPLE_VENUS_DESC_MODULE_1, "Temple of Venus Verticordia" },
    {TR_BUILDING_GRAND_TEMPLE_VENUS_DESC_MODULE_2, "Temple of Venus Genetrix" },
    {TR_BUILDING_PANTHEON_DESC_MODULE_1, "Pantheum Ara Maxima" },
    { TR_BUILDING_PANTHEON_DESC_MODULE_2, "Pantheum Roma Aeterna" },
    {TR_BUILDING_GRAND_TEMPLE_MENU, "Grand temple" },
    {TR_BUILDING_WORK_CAMP, "Work camp" },
    {TR_BUILDING_WORK_CAMP_DESC, "Laborers gather here to transport materials to construction sites." },
    {TR_HEADER_HOUSING, "Housing"},
    {TR_ADVISOR_HOUSING_ROOM, "City housing has room available for"},
    {TR_ADVISOR_HOUSING_NO_ROOM, "There is no room available in city housing."},
    {TR_ADVISOR_RESIDENCES_DEMANDING_POTTERY, "Residences demanding pottery"},
    {TR_ADVISOR_RESIDENCES_DEMANDING_FURNITURE, "Residences demanding furniture"},
    {TR_ADVISOR_RESIDENCES_DEMANDING_OIL, "Residences demanding oil"},
    {TR_ADVISOR_RESIDENCES_DEMANDING_WINE, "Residences demanding wine"},
    {TR_ADVISOR_TOTAL_NUM_HOUSES, "Total residences:"},
    {TR_ADVISOR_AVAILABLE_HOUSING_CAPACITY, "Available capacity:"},
    {TR_ADVISOR_TOTAL_HOUSING_CAPACITY, "Total capacity:"},
    {TR_ADVISOR_ADVISOR_HEADER_HOUSING, "Population - Housing"},
    {TR_ADVISOR_BUTTON_GRAPHS, "Graphs"},
    {TR_ADVISOR_HOUSING_PROSPERITY_RATING, "Housing prosperity rating is"},
    {TR_ADVISOR_PERCENTAGE_IN_VILLAS_PALACES, "Percentage of your population in villas and palaces is"},
    {TR_ADVISOR_PERCENTAGE_IN_TENTS_SHACKS, "Percentage of your population in tents and shacks is"},
    {TR_ADVISOR_AVERAGE_TAX, "Average tax income per residence is"},
    {TR_ADVISOR_AVERAGE_AGE, "Average age of your population is"},
    {TR_ADVISOR_PERCENT_IN_WORKFORCE, "Percentage of your population in the workforce is"},
    {TR_ADVISOR_BIRTHS_LAST_YEAR, "Births last year:"},
    {TR_ADVISOR_DEATHS_LAST_YEAR, "Deaths last year:"},
    {TR_ADVISOR_TOTAL_POPULATION, "residents total"},
    {TR_REQUIRED_RESOURCES, "Resources required for current phase:"},
    {TR_BUILDING_GRAND_TEMPLE_CONSTRUCTION_DESC, "Constructing grand temples requires material stored in a warehouse, laborers from a work camp, and engineers from an engineer's guild."},
    {TR_CONSTRUCTION_PHASE, "Construction phase:"},
    {TR_ADD_MODULE, "Rededicate temple?"},
    {TR_BUILDING_TEMPLE_MODULE_CONSTRUCTED, "Epithet bestowed."},
    {TR_BUILDING_CERES_TEMPLE_QUOTE, "First Ceres taught the laboring hind to plow\nThe pregnant Earth, and quickening seed to sow.\nShe first for Man did wholesome food provide\nAnd with just laws the wicked world supplied.\n-Ovid, the Metamorphoses" },
    { TR_BUILDING_NEPTUNE_TEMPLE_QUOTE, "The billows fall, while Neptune lays his mace\nOn the rough sea,and smooths its furrowed face.\nAlready Triton, at his call, appears Above the waves;\na Tyrian robe he wears;\nAnd in his hand a crooked trumpet bears.\n-Ovid, the Metamorphoses"},
    {TR_BUILDING_MERCURY_TEMPLE_QUOTE, "Cattle and fat sheep can all be had for the raiding,\ntripods for the trading, and tawny headed stallions.\nBut a mans's lifebreath cannot come back again-\nno raiders in force, no trading brings it back, \nonce it slips through a man's clenched teeth.\n-Homer, The Iliad"},
    {TR_BUILDING_MARS_TEMPLE_QUOTE, "For Mars, repair his broken axletrees and blunted war,\nAnd send him forth again with furbished arms,\nTo wake the lazy war with trumpets' loud alarms.\n-Virgil, the Aeneid" },
    {TR_BUILDING_VENUS_TEMPLE_QUOTE, "Venus is kind to creatures as young as we\nWe know not what we do, and while we're young\nWe have the right to live and love like gods.\n-Ovid, the Metamorphoses" },
    {TR_BUILDING_PANTHEON_QUOTE, "The gates of heaven unfold: Jupiter summons all\nThe gods to council in the common hall.\nSublimely seated, he surveys from far\nThe fields, the camp, the fortune of the war,\nAnd all the inferior world. From first to last,\nThe sovereign senate in degrees are placed.\n-Virgil, The Aeneid" },
    {TR_BUILDING_GRAND_TEMPLE_PHASE_1, "(Podium)"},
    {TR_BUILDING_GRAND_TEMPLE_PHASE_2, "(Portico)"},
    {TR_BUILDING_GRAND_TEMPLE_PHASE_3, "(Cella)"},
    {TR_BUILDING_GRAND_TEMPLE_PHASE_4, "(Praecinctum)"},
    {TR_BUILDING_GRAND_TEMPLE_PHASE_5, "(Dedicatio)"},
    {TR_BUILDING_GRAND_TEMPLE_PHASE_1_TEXT, "Laborers are constructing the podium that will elevate the temple and provide a solid foundation to weather the passage of time." },
    {TR_BUILDING_GRAND_TEMPLE_PHASE_2_TEXT, "Artisans are crafting the portico, which bears the temple's sacrificial altar." },
    {TR_BUILDING_GRAND_TEMPLE_PHASE_3_TEXT, "Engineers are crafting the cella, the temple interior that houses the sacred images." },
    {TR_BUILDING_GRAND_TEMPLE_PHASE_4_TEXT, "Work on the temple praecinctum has begun, where worshippers will gather outdoors for public ceremonies." },
    {TR_BUILDING_GRAND_TEMPLE_PHASE_5_TEXT, "With the temple nearly complete, priests gather to perform the rites of consecration." },
    {TR_BUILDING_MENU_TREES, "Trees" },
    {TR_BUILDING_MENU_PATHS, "Paths" },
    {TR_BUILDING_MENU_PARKS, "Parks"},
    {TR_BUILDING_SMALL_POND, "Small pond"},
    {TR_BUILDING_LARGE_POND, "Large pond"},
    {TR_BUILDING_PINE_TREE, "Pine tree"},
    {TR_BUILDING_FIR_TREE, "Fir tree" },
    {TR_BUILDING_OAK_TREE, "Oak tree" },
    {TR_BUILDING_ELM_TREE, "Elm tree" },
    {TR_BUILDING_FIG_TREE, "Fig tree" },
    {TR_BUILDING_PLUM_TREE, "Plum tree" },
    {TR_BUILDING_PALM_TREE, "Palm tree" },
    {TR_BUILDING_DATE_TREE, "Date tree" },
    {TR_BUILDING_PINE_PATH, "Pine path" },
    {TR_BUILDING_FIR_PATH, "Fir path" },
    {TR_BUILDING_OAK_PATH, "Oak path" },
    {TR_BUILDING_ELM_PATH, "Elm path" },
    {TR_BUILDING_FIG_PATH, "Fig path" },
    {TR_BUILDING_PLUM_PATH, "Plum path" },
    {TR_BUILDING_PALM_PATH, "Palm path" },
    {TR_BUILDING_DATE_PATH, "Date path" },
    {TR_BUILDING_BLUE_PAVILION, "Blue pavilion" },
    {TR_BUILDING_RED_PAVILION, "Red pavilion"},
    {TR_BUILDING_ORANGE_PAVILION, "Orange pavilion"},
    {TR_BUILDING_YELLOW_PAVILION, "Yellow pavilion"},
    {TR_BUILDING_GREEN_PAVILION, "Green pavilion" },
    {TR_BUILDING_SMALL_STATUE_ALT, "Goddess sculpture" },
    {TR_BUILDING_SMALL_STATUE_ALT_B, "Senator sculpture"},
    {TR_BUILDING_OBELISK, "Obelisk" },
    {TR_BUILDING_POND_DESC, "Ponds fill from city reservoirs and provide water for plants and animals and a cool, relaxing oasis for people. All citizens would love to live near a pond." },
    {TR_BUILDING_WINDOW_POND, "Pond"},
    {TR_BUILDING_OBELISK_DESC, "A prestigious monument inspired by the works of the ancient kings of the Nile."},
    {TR_ADVISOR_FINANCE_LEVIES, "Building levies"},
    {TR_CONFIRM_DELETE_MONUMENT, "Demolishing this monument"},
    {TR_SELECT_EPITHET_PROMPT_HEADER, "Select epithet to bestow"},
    {TR_SELECT_EPITHET_PROMPT_TEXT, "Bestowing an epithet will permanently dedicate your temple to one aspect of its deity, imbuing priests with divine power. This will cost 1000 Dn." },
    {TR_BUILDING_INFO_MONTHLY_LEVY, "/month"},
    {TR_BUILDING_MESS_HALL, "Mess hall"},
    {TR_BUILDING_MESS_HALL_DESC, "The mess hall collects food from city granaries to feed soldiers stationed at city forts. A poorly supplied mess hall will slow recruitment and damage morale."},
    {TR_BUILDING_MESS_HALL_FULFILLMENT, "Last month the mess hall was supplied:"},
    {TR_BUILDING_MESS_HALL_TROOP_HUNGER, "Soldiers are: " },
    {TR_BUILDING_MESS_HALL_TROOP_HUNGER_1, "Well-fed" },
    {TR_BUILDING_MESS_HALL_TROOP_HUNGER_2, "Fed"},
    {TR_BUILDING_MESS_HALL_TROOP_HUNGER_3, "Hungry"},
    {TR_BUILDING_MESS_HALL_TROOP_HUNGER_4, "Very hungry"},
    {TR_BUILDING_MESS_HALL_TROOP_HUNGER_5, "Malnourished"},
    {TR_BUILDING_MESS_HALL_TROOP_HUNGER_6, "Starving"},
    {TR_BUILDING_MESS_HALL_FOOD_TYPES_BONUS_1, "The varied diet of your soldiers greatly increases morale."},
    {TR_BUILDING_MESS_HALL_FOOD_TYPES_BONUS_2, "The diverse, nutritious diet enjoyed by your soldiers greatly increases morale."},
    {TR_BUILDING_MESS_HALL_NO_SOLDIERS, "You have no soldiers to feed." },
    {TR_BUILDING_MESS_HALL_MONTHS_FOOD_STORED, "Months of food stored:" },
    {TR_BUILDING_BARRACKS_FOOD_WARNING, "Food shortages at your mess hall are slowing soldier recruitment."},
    {TR_BUILDING_BARRACKS_FOOD_WARNING_2, "Critical food shortages at your mess hall are crippling soldier recruitment." },
    {TR_BUILDING_LEGION_FOOD_WARNING_1, "*Minor food shortage."},
    {TR_BUILDING_LEGION_FOOD_WARNING_2, "*Critical food shortage."},
    {TR_BUILDING_LEGION_STARVING, "Food shortage" },
    {TR_ADVISOR_LEGION_FOOD_SATISFIED, "Your soldiers have all the food they require."},
    {TR_ADVISOR_LEGION_FOOD_NEEDED, "Your soldiers need more food." },
    {TR_ADVISOR_LEGION_FOOD_CRITICAL, "Your soldiers are starving!"},
    {TR_ADVISOR_LEGION_MONTHS_FOOD_STORED, "Months of food stored at mess hall:" },
    {TR_CITY_MESSAGE_TITLE_MESS_HALL_NEEDS_FOOD, "Hungry soldiers" },
    {TR_CITY_MESSAGE_TEXT_MESS_HALL_NEEDS_FOOD, "Your mess hall is critically low on food, and the morale of your troops wanes. Ensure your mess hall can access a well-stocked granary."},
    {TR_CITY_MESSAGE_TEXT_MESS_HALL_MISSING, "Your city has lost its mess hall, and your troops starve. Construct a mess hall immediately."},
    {TR_MARKET_SPECIAL_ORDERS_HEADER, "Goods to collect"},
    {TR_WARNING_NO_MESS_HALL, "You must first build a Mess hall to feed your soldiers." },
    {TR_WARNING_MAX_GRAND_TEMPLES, "Only two Grand temples can be built." },
    {TR_CITY_MESSAGE_TITLE_GRAND_TEMPLE_COMPLETE, "Grand temple completed"},
    {TR_CITY_MESSAGE_TEXT_GRAND_TEMPLE_COMPLETE, "Priests and worshippers flock to the new grand temple for the rites of dedication. Your people stand in awe of the majesty of your works, and your chosen deity showers you with favor."},
    {TR_CITY_MESSAGE_TITLE_MERCURY_BLESSING, "A blessing from Mercury" },
    {TR_CITY_MESSAGE_TEXT_MERCURY_BLESSING, "Delighted by your devotion, Mercury has blessed your industry, uncovering raw materials for your craftsmen."},
    {TR_FIGURE_TYPE_WORK_CAMP_WORKER, "Foreman"},
    {TR_FIGURE_TYPE_WORK_CAMP_SLAVE, "Hauler"},
    {TR_FIGURE_TYPE_WORK_CAMP_ENGINEER, "Engineer"},
    {TR_FIGURE_TYPE_MESS_HALL_BUYER, "Quartermaster"},
    {TR_FIGURE_TYPE_MESS_HALL_COLLECTOR, "Mess hall worker"},
    {TR_BUILDING_CERES_TEMPLE_MODULE_DESC, "The grand temple organizes priests of Ceres to aid in distributing food to your hungry citizens."},
    {TR_BUILDING_VENUS_TEMPLE_MODULE_DESC, "The grand temple allows priests of Venus to supply sacred wine to your citizens." },
    {TR_BUILDING_SMALL_TEMPLE_CERES_NAME, "Temple of Ceres"},
    {TR_BUILDING_SMALL_TEMPLE_NEPTUNE_NAME, "Temple of Neptune"},
    {TR_BUILDING_SMALL_TEMPLE_MERCURY_NAME, "Temple of Mercury"},
    {TR_BUILDING_SMALL_TEMPLE_MARS_NAME, "Temple of Mars"},
    {TR_BUILDING_SMALL_TEMPLE_VENUS_NAME, "Temple of Venus"},
    {TR_FIGURE_TYPE_PRIEST_BUYER, "Priest" },
    // Transcription of mission_exact4.wav
    {TR_PHRASE_FIGURE_MISSIONARY_EXACT_4, "\"I'll do what I can to calm these barbarians down. I'm sure they'll stop attacking the city when I've had a word with them.\"" }, 
    {TR_CITY_MESSAGE_TITLE_PANTHEON_FESTIVAL, "An annual festival"},
    {TR_CITY_MESSAGE_TEXT_PANTHEON_FESTIVAL_CERES, "The faithful flock to temples for the celebration of Cerealia, in honor of Ceres. Farmers offer sacrifices for rich harvests in the coming years."},
    {TR_CITY_MESSAGE_TEXT_PANTHEON_FESTIVAL_NEPTUNE, "Today is the festival of Neptunalia, in honor of Neptune. The faithful build huts of branch and foilage and make merry under the blazing heat of the midsummer sun."},
    {TR_CITY_MESSAGE_TEXT_PANTHEON_FESTIVAL_MERCURY, "Traders and merchants turn out in droves to celebrate Mercuralia. Sacred water is sprinkled on ships and warehouses in hopes of divine protection from the god Mercury."},
    {TR_CITY_MESSAGE_TEXT_PANTHEON_FESTIVAL_MARS, "Citizens gather outside the city for the celebration of Equerria, to seek the favor of Mars. The air is filled with the thunder of hooves and the creaking of chariots as the faithful race in honor of their god."},
    {TR_CITY_MESSAGE_TEXT_PANTHEON_FESTIVAL_VENUS, "The faithful gather for the celebration of Veneralia, a day sacred to Venus. Your citizens beseech her for good fortune in matters of the heart."},
    {TR_TOOLTIP_BUTTON_DELETE_READ_MESSAGES, "Delete read messages"},
    {TR_TOOLTIP_BUTTON_MOTHBALL_ON, "Disable this building"},
    {TR_TOOLTIP_BUTTON_MOTHBALL_OFF, "Enable this building"},
    {TR_TOOLTIP_BUTTON_ACCEPT_MARKET_LADIES, "Allow market ladies to buy from here"},
    {TR_TOOLTIP_BUTTON_ACCEPT_TRADE_CARAVAN, "Allow caravans to trade here"},
    {TR_TOOLTIP_BUTTON_ACCEPT_TRADE_SHIPS, "Allow trade ships to trade here"},
    {TR_CONFIG_HEADER_CITY_MANAGEMENT_CHANGES, "City Management"},
    {TR_BUILDING_LIGHTHOUSE, "Lighthouse"}
};

void translation_english(const translation_string **strings, int *num_strings)
{
    *strings = all_strings;
    *num_strings = sizeof(all_strings) / sizeof(translation_string);
}
