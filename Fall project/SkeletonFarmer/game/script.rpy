# Declare characters used by this game.
define MJ = Character("Mikey \"Rattlebones\" Jones")
define OS = Character("Old Straw, The Scarecrow")
define LF = Character("Lenny Frostnose")
define FJ = Character("Farmer John")

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
    #INTRODUCTION
    play music gamemusic
    "What if I were to tell you that there was a skeleton that wished to be a farmer."
    "Such a wild story you may say."
    "But the tale that I am about to tell you is all but true."
    "If one were to wander too far from the farming villages and walk deep enough into the forest you may find yourself in"

    #SHOW BONE HOLLOW
    "BONE HOLLOW!"
    "Bone Hollow is a spooky town where skeletons live and thrive. It's surrounded by a thick fog that makes it hard to see anything beyond the graveyard gates." 
    "The skeletons are friendly and cheerful, but they have a bone to pick with anyone who tries to disturb their peace."

    #SEASON: FALL
    scene bg farm
    show mikey
    MJ "Howdy! The names' Mikey!"
    MJ "What Can I do ya for?"
    menu:
        "Check the fields":
            MJ "That ought to be a good idea!"
            scene bg field
            show old straw
            OS "Howdy..."
            MJ "Well, rattle my bones! You can talk?!"
            OS "I should be asking you the same thing..."
        "Check out the village":
            MJ "Here's hopin' they like me..."
        "Gander at the farm"
    #SEASON: WINTER
    #INTERACTION WITH FROST NOSE
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
    #SEASON: SPRING
    #SPRING HARVEST EVENT
    #SEASON: SUMMER
    
    "And that the story of Mikey \"Rattlebones\" Jones. The skeleton who became a farmer."
    
    # =============!This ends the game!=============
    return