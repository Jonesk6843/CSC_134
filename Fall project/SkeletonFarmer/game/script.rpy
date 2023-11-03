# Declare characters used by this game.
define MJ = Character("Mikey \"Rattlebones\" Jones")
define OS = Character("Old Straw, The Scarecrow")
define LF = Character("Lenny Frostnose")
define FJ = Character("Farmer John")
define SV = Character("Skeleton Villager 1")
define SV2 = Character("Skeleton Villager 2")
define OL = Character("Old Lady")
define LK = Character("Little Kid")
define SM = Character("Wandering Salesman")
define MY = Character("The Mayor")

#Declare music
define audio.gamemusic = "audio/teller-of-the-tales-by-kevin-macleod-from-filmmusic-io.mp3"
define audio.mikeyfarm = "audio/country-fun.mp3"
define audio.showdown = "audio/dark-sheriff.mp3"
define audio.snowfarm = "audio/snowday.mp3"
define audio.salesman = "audio/raggamuffin.mp3"
define audio.village = "audio/funny-country.mp3"
define audio.spooky = "dead-silence.mp3"

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

    scene bg bones
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
    
    show skelevillager
    SV "A farmer, Mikey? You're just a bag of bones! What can you grow?"
    show skelevillager at stageLeftish
    show skelevillage laugh at stageRightish
    SV2 "You should be a comedian! That was hilarious!"
    hide skelevillage laugh
    hide skelevillager

    "But Mikey was undeterred. This was Mikey's dream and he wasn't going to let anyone rattle his spirit. Not even his fellow skeletons!"
    "With a huff, Mikey went back to his home, gather his things and left in the dead of night."

    scene bg interlude
    "For days, Mikey squabbled to make ends meet in hopes of gettign a farm."
    "Tending to other farmer's animals, being a sciene room skeleton, and even offered some of his bones to local dogs!"
    "But it was all worth it for Mikey. As after five months of work, he finally had enough to afford a small farm close to a village."
    MJ "YEEEEEEEE HAW!"
    "This is his story..."

    # ===SEASON: FALL===
    "SEASON: FALL"
    play music mikeyfarm
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
            scene bg village
            play music village
            "Description"
            MJ "Woah! Look at all the lovely people!"
            menu:
                "Talk to the old lady":
                    OL"Hello Dearie"
                    MJ "Hello, Ma'am!"
                    MJ "I-I don't think she can see me..."
                    "The woman grabbed a hold of Mikey's hand."
                    OL"My, my! You're hands are frigid! You're going to get sick! Here,"
                    "The woman hurringly waddled to her stand and came back with a pair of mittens"
                "Talk to the child":
                    LK "Hey, mister!"
                "Talk to the salesman":
                    SM "Snake oil! Get yer snake oil!"
                    play music salesman
                    show snakeoil at stageRight
                    show mikey at stageLeft
                    MJ "Snake oil? Sounds...dangerous..."
                    SM "Not at all, my friend. This is not some cheap imitation. This is the real deal, made from the 
                    finest snakes in the land. It has been proven to heal wounds, ease pain, boost energy, and even enhance your love life."
                    MJ "How about give me my skin back?"
                    "The salesman stares at the skeleton in "
                    menu:
                        "Take a sample":
                            MJ "I'll bite. How much?"
                            SM "Three duckets!"
                            MJ "Sounds cheap."
                            "Mikey stares at the small cup with intrigue"
                            MJ "Here goes."
                            "Mikey downs the snake oil in one gulp."
                            play sound "splash.mp3"
                            "*SPLASH*"
                            "There was a puddle beneath Mikey."
                            "The salesman and Mikey stare at the puddle then at eachother."
                            MJ "Guess you can say it went right through me!"
                            "The two shared a laugh."
                            hide salesman
                            hide mikey
                        "I'll pass":
                            MJ "On second thought, I don't need my skin."
                            SM "R-Really?"
                            MJ "Yeah. I like feeling the sun on my bones."
                            SM "Oh, uh...v-very well! Well, if you ever need \"Authentic\" snake oil, I'm your salesman!"
                "I think I should leave...":
                    show mikey at centerStage
                    MJ "I think I made my presence known. Here's hopin' I made a good first impression."
                    "After taking in the sights, MIkey makes his way back to his farm."
    scene bg farm
    play music mikeyfarm
    show mikey
    MJ "Welp! I guess I can turn in for the day and-"
    FJ "Hey!"
    MJ "Huh?"
    "An angry farmer stomps towards Mikey."
    play music showdown
    show john at stageLeftish
    show mikey at stageRightish
    FJ "What's a bag of bones doing on my farm?!"
    MJ "Your farm? I'm sorry sir, I think you got the wrong-"
    FJ "Don't you lie to me!"
    "The farmer points at a ricktiy fence, which was falling apart and being held together by chicken wire."
    FJ "See that 'dere fence! Whatever crosses that fence is my land and you're truding over it."
    "The farmer trailed the dilapidated fence that did in fact lead into a bit of Mikey's farm."
    "Mikey's bones rattled in shock. The fence sliced right through a good chunk of his land."
    "It even managed to cut through a bit of his own lawn!"
    MJ "Wh-what is this 'ere Gerrymanderin'?! That'll only leave me twenty-five acres! I can't run a farm with that size!"
    FJ "You don't even got a body or organs to work with yourself and here you are, rattlin' your mouth off."
    FJ "So either you step off my land or you'll be in a world of hurt, son!"
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
            play sound "trembling.mp3"
            "Mikey's rattling ceazed."
            MJ "NO! How about you get yer' eyes checked and fixed that gosh darn gerrymanderin' issue you got goin' on!"
            "Farmer John was "  
 
    # ===SEASON: WINTER===
    scene bg farmsnow
    play music snowday
    show mikey at centerStage
    play sound "trembling.mp3"
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
    play sound "trembling.mp3"
    "Mikey bones rattled in fear."
    MJ "G-Ghosts?!"
    play music spooky
    OS "You're afraid of ghost? Ain't scarin' a skeletons whole shtick?"
    MJ "I-I was never good at scarin'..."
    OS "That's a shame. At least you got a green thumb."
    OS "Long ago they say a farmer by the name of Lenny Frostnose owned this very farm."
    OS "Poor buddy forgot to put his tractor in park and well..."
    hide old straw
    hide mikey
    show bg tragic
    OS "The thing crushed Lenny and dragged him into that 'dere barn in the process."
    OS "Ever since that, rumors began go around that poor Lenny's soul still wanders in that barn."

    hide bg tragic
    show bg farmsnow
    show old straw at stageLeft
    show mikey at stageRightish
    OS "So yeah. Be carful trudging through that dere barn. Scream if you need help..."
    MJ "Wh-What would screamin' do if you can't even move?"
    OS "..."
    OS "At least Lenny won't get lonely..."
    MJ "THAT DOESN'T HELP GOSH DARN IT!"

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
            play music village
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
    play music showdown
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