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

    scene bg boneHollow
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
    FJ "Hey!"
    MJ "Huh?"
    "An angry farmer stomps towards Mikey."
    show john at stageLeftish
    show mikey at stageRightish
    FJ "What's a bag of bones doing on my farm?!"
    MJ "Your farm? I'm sorry sir, I think you got the wrong-"
    FJ "Don't you lie to me."
    "The farmer points at a ricktiy fence, which was falling apart and being held together by chicken wire."
    FJ "That 'dere is my land and you're truding over it."
    MJ "If that's the case, that'll only leave me twenty-five acres! I can't run a farm with that size."
    FJ "You don't even got a body or organs to work with and you're still runnin'. You'll be just fine."
    FJ "So what will it be?"
    
    # First decision should be to either give half the land to Farmer John or decline. Giving in will result in a game over.
    menu:
        "Give some land. Don't want to cause any trouble":
            MJ "I-I guess you're right about that "  
            "And that's the sad tale of Mikey \"the supposed\" skeleton farmer."
            "But that doesn't sound right...maybe I'm remembering the story wrong...who knows..."
            "This story is infact, old as bones..."
            "THE END?"
            return 
        "This is my share! Step off!":
            "WIP"  
 
    # ===SEASON: WINTER===
    scene bg farmsnow
    show mikey at centerStage
    MJ "BRRR! It's a little nippy out today! The cold is practically rattling my bones!"
    MJ "Oh, shucks! I may be cold, but what about the horses or the cows?! They must be freezin' their tails off."
    OS "Be careful, son."
    MJ "Old straw?"
    show old straw at stageLeft
    show mikey at stageRightish
    "Old straw shakes off some of the snow from his hat."

    MJ "What are you doing out here? I thought you'd take shelter from the snow."
    OS "A scarecrow's job ain't never done, Mike. Beside...i'm sort of nailed here..."
    MJ "Oh...right."
    MJ "A-Anyways. You were saying something about \"being careful\? Careful of what?"
    OS "The ghost of little Lenny."
        # Insert bone rattle sound effect
    "Mikey bones rattled in fear."
    MJ "G-Ghosts?!"
    OS "You're afraid of ghost? Ain't scarin' a skeletons whole shtick?"
    MJ "I-I was never good at scarin'..."
    OS "That's a shame. At least you got a green thumb."
    OS "Long ago they say a farmer by the name of Lenny Frostnose owned this very farm."
    OS "Poor buddy forgot to put his tractor in park and well..."
    show bg deadFarmer
    OS "The thing crushed Lenny and dragged him into that 'dere barn in the process."
    OS "Ever since that, rumors began go around that poor Lenny's soul still wanders in that barn."

    # INTERACTION WITH FROST NOSE
    scene bg barn interior
    show mikey at stageLeftish
    show lenny at stageRightish
    menu:
        "L-Lenny?":
            LF "H-Hey...you know my name?"
            MJ "Yeah...Old straw told me about you and your sad story."
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
            LF "Wh-what?!"
            MJ ""
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
    show mikey at stageLeftish
    show john at stageRightish
    menu: # Final decision should be to either to show your true skeleton self or keep working. Either choice will result in a different ending. 
        "Scare John":
            "WIP"

        "Keep working":
            "WIP"
    
    label ending:
    "And that the story of Mikey \"Rattlebones\" Jones. The skeleton who became a farmer."
    
    # =============!This ends the game!=============
    return