# Declare characters used by this game.
define MJ = Character("Mikey \"Rattlebones\" Jones")
define OS = Character("Old Straw, The Scarecrow")
define LF = Character("Lenny Frostnose")
define FJ = Character("Farmer John")
define SV = Character("Skeleton Villager 1")
define SV2 = Character("Skeleton Villager 2")

#Declare music
define audio.gamemusic = "audio/teller-of-the-tales-by-kevin-macleod-from-filmmusic-io.mp3"

# Declaring transforms
transform stageLeft:
    xalign 0.0
    yalign 1.0
transform stageLeftish:
    xalign 0.25
    yalign 1.0
transform stageRight:
    xalign 1.0
    yalign 1.0
transform stageRightish:
    xalign 0.75
    yalign 1.0
transform centerStage:
    xalign 0.5
    yalign 1.0

# =============!The game starts here!=============
label start:
    # INTRODUCTION
    play music gamemusic
    "What if I were to tell you that there was a skeleton that wished to be a farmer."
    "Such a wild story you may say."
    "But the tale that I am about to tell you is all but true."
    "If one were to wander too far from the farming villages and walk deep enough into the forest you may find yourself in"

    # SHOW BONE HOLLOW
    "BONE HOLLOW!"
    "Bone Hollow is a spooky town where skeletons live and thrive. It's surrounded by a thick fog that makes it hard to see anything beyond the graveyard gates." 
    "The skeletons are rash and michevious, having a bone to pick with just about anyone who tries to disturb their peace."
    "Despite all these frowning \"faces\" there lived a friend and determined skeleton named Mikey."
    "Unlike the other skeletons in Bone Hollow, who spent their days telling bone-chilling stories and scaring away curious travelers, Mikey had a different dream."
    "He wanted to be a farmer."

    show mikey
    MJ "I want to be a farmer! I want to grow the biggest crops any eyes could see!"
    hide mikey

    "For as long as Mikey could remember, he had been fascinated by the lush green fields that stretched beyond the village."
    "He would watch the farmers tend to their crops, plowing the fields, planting seeds, and nurturing their plants."
    "The idea of growing something beautiful and sustaining life in the midst of the eerie Bone Hollow intrigued him."
    "He read farming books, watched the farmers work, and even took care of his own tomato plant in his room."
    "Despite his enthusiasm, the other skeletons cackled and rattled their bones in amusement...at Mikey, not with..."

    SV "A farmer, Mikey? You're just a bag of bones! What can you grow?"
    SV2 "You should be a comedian! That was hilarious!"

    "But Mikey was undeterred. He set out to learn everything he could about farming."
    "This is his story..."

    # ===SEASON: FALL===
    "SEASON: FALL"
    scene bg farm
    show mikey
    MJ "Finally a perfect farm!"
    MJ "What should I do first?"
    menu:
        "Check the fields":
            MJ "That ought to be a good idea!"
            scene bg field
            show old straw
            OS "Howdy..."
            MJ "Well, rattle my bones! You can talk?!"
            OS "I should be asking you the same thing..."
            OS "A talking skeleton workin' on a farm? I'm guessin' the pig are flying too?"
            MJ "Are they?!"
            OS "..."
            OS "Anyways, you seem determined kid."
            OS "If you're willing to put in the effort, I'll teach you everything I know about farming."
        "Check out the village":
            MJ "Here's hopin' they like me..."
        "Gander at the farm"
    # First decision should be to either give half the land to Farmer John or decline. Giving in will result in a game over.
    menu:
        "Give some land. Don't want to cause any trouble":
            "WIP"  
        "This is my share! Step off!":
            "WIP"  
 
    # ===SEASON: WINTER===
    # INTERACTION WITH FROST NOSE
    scene bg barn interior
    show mikey at stageLeftish
    show lenny at stageRightish
    menu:
        "Wh-who are you?!":
            LF "W-Well, my name's Lenny. The former owner of this farm your taking."
        "WAH! A G-GHOST!":
            LF "W-Wait...y-your scared of...me?"
            MJ "Darn tootin'! I've never seen a ghost before!"
            LF "B-But you're a skeleton"
            MJ "Yeah. What's your point?"
            LF "..."
            MJ "..."
            LF "Nothing."
    menu: # Second decision should be to either to tell Frostnose to leave or let him stay. Telling him to leave will result in a negative consequence
        "Tell him to leave":
            "WIP"
        "Let him stay":
            "WIP"

    # ===SEASON: SPRING (SPRING HARVEST)===
    menu: # Third decision should be to either to go to the festival or stay at the farm. Staying will progress to SUMMER
        "Go to the festival":
            scene bg festival
            "WIP"
            menu: # Fourth decision will be between squash or pumpkin. The pumpkin will win the festival show
                "The big squash":
                    "WIP"
                "The plump pumpkin":
                    "WIP"
        "Stay at the farm":
            "WIP"

    # ===SEASON: SUMMER===
    scene bg field
    menu: # Final decision should be to either to show your true skeleton self or keep working. Either choice will result in a different ending. 
        "Scare John":
            "WIP"

        "Keep working":
            "WIP"
    
    label ending:
    "And that the story of Mikey \"Rattlebones\" Jones. The skeleton who became a farmer."
    
    # =============!This ends the game!=============
    return