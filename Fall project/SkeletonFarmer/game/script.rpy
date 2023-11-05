# Declare characters used by this game.
define Mikey = Character("Mikey \"Rattlebones\" Jones")
define Straw = Character("Old Straw, The Scarecrow")
define Frost = Character("Lenny Frostnose")
define John = Character("Farmer John")
define SV = Character("Skeleton Villager 1")
define SV2 = Character("Skeleton Villager 2")
define Grandma = Character("Old Lady")
define Child = Character("Little Kid")
define Salesman = Character("Wandering Salesman")
define Mayor = Character("The Mayor")
define Unknown = Character("???")

#Declare music
define audio.gamemusic = "audio/teller-of-the-tales-by-kevin-macleod-from-filmmusic-io.mp3"
define audio.mikeyfarm = "audio/country-fun.mp3"
define audio.showdown = "audio/dark-sheriff.mp3"
define audio.snowfarm = "audio/snowday.mp3"
define audio.salesman = "audio/raggamuffin.mp3"
define audio.village = "audio/funny-country.mp3"
define audio.spooky = "dead-silence.mp3"

# Declaring objects
default player_has_ball = False
default  player_has_mittens = False
default player_has_snakeoil = False
default player_has_ribbon = False

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
    Mikey "I want to be a farmer! I want to grow the biggest crops any eyes could see!"
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
    Mikey "YEEEEEEEE HAW!"
    play sound "YeeHaw.wav"
    "This is his story..."

    # ===SEASON: FALL===
    "SEASON: FALL"
    play music mikeyfarm
    scene bg farm
    show mikey
    Mikey "Finally a perfect farm!"
    Mikey "What should I do first?"
    menu:
        "Check the fields":
            Mikey "That ought to be a good idea!"
            scene bg field
            show old straw
            Straw "Howdy..."
            Mikey "Well, rattle Mayor bones! You can talk?!"
            Straw "I should be asking you the same thing..."
            Straw "A talking skeleton workin' on a farm? I'm guessin' the pig are flying too?"
            Mikey "Are they?!"
            Straw "..."
            Straw "Anyways, you seem determined kid."
            Straw "If you're willing to put in the effort, I'll teach you everything I know about farming."
        "Check out the village":
            Mikey "Here's hopin' they like me..."
            scene bg village
            play music village
            "The farm village is a quaint and cozy place. The village is surrounded by green 
            fields, where the other farmers grow various crops such as wheat, corn, and potatoes."
            "The village also has a large barn, where the animals such as cows, sheep, and chickens are kept. 
            The villagers seemed to love their animals and treat them well."
            "The village has a small market, where the villagers sell their produce and buy other goods. The market is always lively and colorful, 
            with people chatting and bargaining."
            Mikey "Woah! Look at all the lovely people!"

            label villageWonder:
                show mikey at center
                Mikey "I wonder what I should do first..."
                menu:
                    "Talk to the old lady":
                        show grandma at stageRight
                        show mikey at stageLeft
                        Grandma"Hello Dearie"
                        Mikey "Hello, Ma'am!"
                        Mikey "I-I don't think she can see me..."
                        Grandma "Come closer. I want to get a good look at the new face in the village."
                        show grandma at stageRightish
                        show mikey at stageLeftish
                        "The woman grabbed a hold of Mikey's hand."
                        Grandma "My, My! You're hands are frigid! You're going to get sick! Here,"
                        show grandma at offscreenright
                        "The woman hurringly waddled to her stand and came back with a pair of mittens."
                        "Mikey wanted to correct the old woman, but she seemed so proud of her little mittens that he didn't want to disappoint her."
                        show grandma at stageRightish
                        Grandma "Here,"
                        show mittens
                        $ player_has_mittens = True
                        play sound "pickup.mp3"
                        "*Mikey obtained wool gloves*"
                        hide mittens
                        Grandma "Now you stay warm out here, understand?"
                        Mikey "Y-Yes, ma'am!"
                        Mikey "What a nice lady."
                        hide grandma
                        jump villageWonder
                    "Talk to the child":
                        show child at stageRightish
                        show mikey at stageLeftish
                        Child "Hey, mister!"
                        "The child let out a gasp"
                        Child "Are you a skeleton?!"
                        Mikey "Last time I checked."
                        Child "Then you're funny, right?"
                        Mikey "W-Well I would call myself a-"
                        Child "Tell me a joke! A funny one, please!"
                        Mikey "U-Uh..."
                        "The child continued his pleas for a joke. Mikey wasn't the type to turn down a good joke but he also didn't want to disappoint the child with a bad one."
                        Mikey "Wh-what joke should I say..."
                        menu:
                            "What kind of pasta do skeletons enjoy eating the most?":
                                Mikey "Elbow Macaroni"
                                Child "The child let out a boituous laugh."
                                Child "Here! you can have my favorite ball!"
                                show ball
                                play sound "pickup.mp3"
                                "*Mikey obtained a bouncy ball*"
                                $ player_has_ball = True
                                hide ball
                                Child "Now I know that we're friends!"
                                Mikey "Wow! Thank you."
                                Child "Your welcome. Thanks for the funny joke! Bye Mr. Bones!"
                                hide child
                                show mikey at center
                                "The child ran away to chase after a chicken."
                                Mikey "That went very well."
                                jump villageWonder
                            "What's a skeleton's favorite instrument?":
                                Child "A trombone!"
                                Mikey "O-Oh. You already knew that one?"
                                Child "Yeah, yeah! That's my favorite joke. Glad to see some else like it! Bye mister"
                                hide child
                                show mikey at centerStage
                                "The child ran away to chase after a chicken."
                                Mikey "Oh...At least it wasn't a bad joke!"
                                jump villageWonder
                            "Why was the skeleton crying?":
                                Mikey "Because he didn't have any body to love!"
                                "The child frowned."
                                Child "That's sad. D-Does the skeleton find some body."
                                Mikey "N-No, the joke is-"
                                "Mikey paused mid-sentence, seeing the child eyes tearing up."
                                Mikey "Y-Yeah! He does find somebody!"
                                Child "YAY!"
                                "Mikey let out a sigh of relief."
                                Mikey "Th-That could've gone way worse..."
                                hide child
                                show mikey at center
                                jump villageWonder
                    "Talk to the salesman":
                        Salesman "Snake oil! Get yer snake oil!"
                        play music salesman
                        show salesman at stageRight
                        show mikey at stageLeft
                        Mikey "Snake oil? Sounds...dangerous..."
                        Salesman "Not at all, Mayor friend. This is not some cheap imitation. This is the real deal, made from the 
                        finest snakes in the land. It has been proven to heal wounds, ease pain, boost energy, and even enhance your love life."
                        Mikey "How about give me Mayor skin back?"
                        "The salesman stares at the skeleton in confusion, fixing his glasses to inspect the farmer further."
                        "The salesman felt a chill run down his spine. He realized he had made a terrible mistake. He had tried to sell snakeoil to a skeleton, a living dead."
                        "The salesman quickly fixed his hat and showed a faint smile on his face."
                        Salesman "W-With the right amount, anythings possible with William Monroe's Snake oil!"
                        Mikey "Hmmmm..."
                        menu:
                            "Take a sample":
                                Mikey "I'll bite. How much?"
                                Salesman "Three duckets!"
                                Mikey "Sounds cheap."
                                "Mikey stares at the small cup with intrigue."
                                "The liquid is dark green upon holding it to his nose, had a pungent and sour odor."
                                "Upon furthur inspection, there were some bubbles and particles floating on the surface."
                                Mikey "Eh...I lost my life already...what's the worst that could happen to me?"
                                "Mikey downs the snake oil in one gulp."
                                play sound "splash.mp3"
                                "*SPLASH*"
                                "There was a puddle beneath Mikey."
                                "The salesman and Mikey stare at the puddle then at eachother."
                                Mikey "Guess you can say it went right through me!"
                                "The two erupted in boituous laughter."
                                Salesman "You're quite alright my boney fellow!"
                                Mikey "You too...fleshy fellow!"
                                Salesman "To commemorate this day, here!"
                                show snakeoil
                                "*Mikey obtains Taylor's Miracle Snake Oil! (Not for consumption for children under the age of 5. All sales FINAL!)"
                                play sound "pickup.mp3"
                                hide snakeoil
                                $ player_has_snakeoil = True
                                Salesman "You might find some better usages for it other than diguestion. Maybe use it like sunscreen!"
                                Mikey "I could. My bones tend to get warm in the sun. Thanks!"
                                hide salesman
                                hide mikey
                                play music village
                                jump villageWonder
                            "I'll pass":
                                Mikey "On second thought, I don't need Mayor skin."
                                Salesman "R-Really?"
                                Mikey "Yeah. I like feeling the sun on Mayor bones."
                                Salesman "Oh, uh...v-very well! Well, if you ever need \"Authentic\" snake oil, I'm your salesman! William Monroe!"
                                hide salesman
                                play music village
                                jump villageWonder
                    "I think I should leave...":
                        Mikey "I think I made Mayor presence known. Here's hopin' I made a good first impression."
                        "After taking in the sights, Mikey makes his way back to his farm."
    scene bg farm
    play music mikeyfarm
    show mikey
    Mikey "Welp! I guess I can turn in for the day and-"
    John "Hey!"
    Mikey "Huh?"
    "An angry farmer stomps towards Mikey."
    play music showdown
    show john at stageLeftish
    show mikey at stageRightish
    John "What's a bag of bones doing on Mayor farm?!"
    Mikey "Your farm? I'm sorry sir, I think you got the wrong-"
    John "Don't you lie to me!"
    "The farmer points at a ricktiy fence, which was falling apart and being held together by chicken wire."
    John "See that 'dere fence! Whatever crosses that fence is Mayor land and you're truding over it."
    "The farmer trailed the dilapidated fence that did in fact lead into a bit of Mikey's farm."
    "Mikey's bones rattled in shock. The fence sliced right through a good chunk of his land."
    "It even managed to cut through a bit of his own lawn!"
    Mikey "Wh-what is this 'ere Gerrymanderin'?! That'll only leave me twenty-five acres! I can't run a farm with that size!"
    John "You don't even got a body or organs to work with yourself and here you are, rattlin' your mouth off."
    John "So either you step off Mayor land or you'll be in a world of hurt, son!"
    John "So what will it be?"
    
    # First decision should be to either give half the land to Farmer John or decline. Giving in will result in a game over.
    menu:
        "Give some land. Don't want to cause any trouble":
            Mikey "I-I guess you're right about that whole...no organ thing..." 
            John "Of coure I am! Now chop chop!"
            jump badEnding 
        "This is my share! Step off!":
            play sound "trembling.mp3"
            "Mikey's rattling ceazed."
            Mikey "NO! How about you get yer' eyes checked and fixed that gosh darn gerrymanderin' issue you got goin' on!"
            "Farmer John was suprised."
            John "Wh-What in tarnation?!"
            Mikey "I said what I said! This is my share! Step off!"  
            "Farmer John stared at the skeleton, his face beet red. He was expecting this pile of bones to back down at the slight sight of danger, but no."
            "Mikey was standing his ground, with an angered look on his boney face."
            "Then, with a huff, Farmer John began to walk away."
            John "Fine! You asked for whatever comes your way, pile of bones!"
            hide john
            show mikey at centerStage
            "Mikey let out a sigh of relief. Although he saved his farm from certain danger, he felt bad that he made his first enemy this day."
            "But, Mikey kept his head held high."
            Mikey "John's right about one thin."
            Mikey "I may not have a body or organs, but I darn do have the \"guts\" to defend my share!"
            play sound "YeeHaw.wav"
            Mikey "YEEEEEEEE HAW!"
    scene bg interlude
    "On that day, Mikey got to keep his land for the many seasons that awaited him."
 
    # ===SEASON: WINTER===
    show bg interlude
    "SEASON: WINTER"
    scene bg farmsnow
    play music snowday
    show mikey at centerStage
    play sound "trembling.mp3"
    Mikey "BRRR! It's a little nippy out today! The cold is practically rattling Mayor bones!"
    if player_has_mittens == True:
        hide mikey
        show mittens  # Display the mittens as an item.
        Mikey "Oh yeah! The mittens I got from that old lady from the village."
        hide mittens
        "Mikey slips on the mittens."
        show mikey
        Mikey "Ah. That so much better!"
        Mikey "Oh, shucks! I may be warm, but what about the horses or the cows?! They must be freezin' their tails off."
    else:
        Mikey "Oh, shucks! I may be cold, but what about the horses or the cows?! They must be freezin' their tails off!"
    Mikey "I ought to bring them into the barn. Although...it is a little worn out..."
    Straw "Be careful, son."
    Mikey "Old straw?"
    show old straw at stageRight
    show mikey at stageLeftish
    "Old straw shakes off some of the snow from his hat."
    Mikey "What are you doing out here? I thought you'd take shelter from the snow."
    Straw "A scarecrow's job ain't never done, Mikey. Beside...i'm sort of nailed here..."
    Mikey "Oh...right."
    Mikey "A-Anyways. You were saying something about \"being careful\? Careful of what?"
    Straw "The ghost of little Lenny."
    play sound "trembling.mp3"
    "Mikey bones rattled in fear."
    Mikey "G-Ghosts?!"
    play music spooky
    Straw "You're afraid of ghost? Ain't scarin' a skeletons whole shtick?"
    Mikey "I-I was never good at scarin'..."
    Straw "That's a shame. At least you got a green thumb."
    Straw "Long ago they say a farmer by the name of Lenny Frostnose owned this very farm."
    Straw "Poor buddy forgot to put his tractor in park and well..."
    hide old straw
    hide mikey
    show bg tragic
    Straw "The thing crushed Lenny and dragged him into that 'dere barn in the process."
    Straw "Ever since that, rumors began go around that poor Lenny's soul still wanders in that barn."
    hide bg tragic
    show bg farmsnow
    show old straw at stageRight
    show mikey at stageLeftish
    Straw "So yeah. Be carful trudging through that dere barn. Scream if you need help..."
    Mikey "Wh-What would screamin' do if you can't even move?"
    Straw "..."
    Straw "At least Lenny won't get lonely..."
    Mikey "THAT DOESN'T HELP GOSH DARN IT!"
    "With a rattle, Mikey walked to the abandoned barn."
    hide old straw

    # INTERACTION WITH FROST NOSE
    scene bg barn interior
    "The wooden beams were rotting and sagging, the roof was full of holes and leaks, and the floor was covered with dust and debris." 
    "The only signs of life were the cobwebs that hung from the rafters and the occasional squeak of a mouse or rat."
    "A rusty tractor was parked in one corner, along with some old tools and equipment."
    play sound "trembling.mp3"
    "Mikey shaked at the sight."
    show mikey
    Mikey "Th-That must've been the tractor that crushed L-Lenny..."

    Unknown "Y-Yes?"
    "Mikey froze upon hearing the ghostly voice."
    
    Mikey "Wh-Who's there."
    Unknown "Come closer...towards the tractor..."

    play sound "trembling.mp3"
    "Mikey's bone rattled with each step he took."
    "Upon turning the corner, his eyes widened at the sight"
    hide mikey
    show lenny
    Frost "Hi."
    "The walls were adorned with faded posters and calendars, some dating back to decades ago."
    "A pile of hay bales was stacked in another corner, providing a makeshift bed."

    show mikey at stageLeftish
    show lenny at stageRightish
    Mikey "WAH! A G-GHOST!"
    Frost "W-Wait...y-your scared of...me?"
    Mikey "Darn tootin'! I've never seen a ghost before!"
    Frost "B-But you're a skeleton"
    Mikey "Yeah. What's your point?"
    Frost "..."
    Mikey "..."
    Frost "Nothing."
    Frost "Anyways...what brings you to my barn?"
    Mikey "W-Well, I own this farm- Y-YOUR farm I mean!"
    "Lenny let out a sigh of relief."
    Frost "Thank heavens! It's good to know that someone is taking care of my \"unfinished business\"."
    Mikey "Unfinished business?"
    Frost "Indeed. When I died, I died during one of the busiest times of the seasons! Of all the days to die, I died during the Spring Harvest"
    Frost "I JUST HAD TO FORGET TO PUT THE TRACTOR IN PARK!"
    "Lenny grew angry, chucking a watering can at the wall."
    play sound "hit.mp3"
    Frost "I not only missed the oportunity of having my farm sponsored on television, but I lost all of my produce!"
    Frost "Now...I just sit in this farm...waiting..."
    Frost "B-But know you're here! Taking care of the land the livestock correct?"
    Mikey "Y-yeah. That's what I'm here for. I need to move my livestock from out of the snow."
    Frost "Oh please, farmer! Would you kindly finish my \"unfinished business\"?"
    Frost "I would be forever grateful!"
    Mikey "W-well..."
            
    menu ghostChoice: # Second decision should be to either to tell Frostnose to leave or let him stay. Telling him to leave will result in a negative consequence
        "Deny":
            Frost "Wh-what?!"
            Mikey "I-I'm sorry, b-but I rather not hav you scarin' my livestock. Can't you just...leave?"
            Frost "B-But I can't even leave if I wanted to!"
            Frost "Like I said, I have unfinished buisness with this farm."
            Mikey "R-right...."
            jump ghostChoice
        "Accept":
            Mikey "Yeah, you can stay."
            Frost "R-Really!"
            Mikey "Yeah. You ain't causing any harm. Even if you scare me."
            Frost "Th-thank you so very much, Mikey! I promise I won't be a burden!"
            Mikey "Anytime! Now if you'll excuse me, I need to move my livestock in."
            hide mikey
            hide lenny
    scene bg interlude
    "Mikey, along with his new ghostly friend, began to lead the animals into the barn."

    # ===SEASON: SPRING (SPRING HARVEST)===
    scene bg interlude
    "SEASON: SPRING"
    show bg farm
    play music mikeyfarm
    "There was loud boituous music in the air."
    "In the village, the people were holding their annual Spring Harvest Festival."
    "The harvest festival was the most anticipated event of the year in the village." 
    "It was a time to celebrate the bounty of the land, the hard work of the farmers, and compete and show off the fruits of one's labor.."
    "Mikey watched from a distance, contemplating whether or not he should go and indulge in the fun."
    show mikey
    Mikey "On one hand, I want to make my presence known to the other farmers, but on the other hand..."
    Mikey "I don't want to accidently scared anyone and ruin the festival."
    "What should I do?"
    menu: # Third decision should be to either to go to the festival or stay at the farm. Staying will progress to SUMMER
        "Go to the festival":
            Mikey "Yeah! It's time for this skeleton to get some recognition!"
            play music "funny-country.mp3"
            scene bg festival
            "The village was transformed into a colorful and festive sight, with decorations that reflected the theme of the harvest and the joy of the villagers."
            "The main street was lined with flags and banners, made from cloth and paper, that displayed various symbols and slogans related to the festival."
            "The village square were the most decorated places in the village, as they were the centers of the festival activities."
            "Mikey walked to the center and saw a cardboard poster promanitely displayed with flashy lights and colors."
            "ARE YOU A FARMER? THINK YOU HAVE THE BIGGEST PRODUCE? IF SO, JOIN THE SPRING HARVEST PRODUCE CONTEST!"
            show mikey
            Mikey "Contest? Say that's a perfect way to get my farm some recognition."
            Mikey "I've grown a lot of produce this season. But which would be \"Spring Harvest\" worthy?"
            menu: # Fourth decision will be between squash or pumpkin. The pumpkin will win the festival show
                "The big squash":
                    Mikey "I bet this will \"Squash\" the competition!"
                    Mikey "..."
                    Mikey "Why am I so funny when no one's around..."
                    hide mikey
                    "Mikey quickly went back to his farm, grabbed the squash, and brought it to the judges for weighing."
                    "The other farmers were lined up, bringing their entries to the village square to be weighed and measured by a panel of judges."
                    "The farmers stood around, waiting for the mayor."
                    "After a few minutes with the judges, the mayor stepped up to the podium."
                    stop music
                    Mayor "Alright! Settle down everyone. It's time to announce this year's winner of the Spring Harvest produce contest!"
                    "Everyone held their breath in anticipation."
                    play sound "rattle.mp3"
                    "Mikey...well rattled in anticipation."
                    play sound "drumroll.mp3"
                    Mayor "The winner of this year's spring festival i-s-s-s-s-s-s..."
                    Mayor "FARMER JOHN!"
                    play music "funny-country.mp3"
                    play sound "crowd-cheer.mp3"
                    "Mikey was slightly disappointed that he was chosen, but he was still happy to have some fun."
                    "After the contest was said and done, it was time for the feast."
                    "Seeing that Mikey was a skeleton, he simply made his way back to his farm to tend to his crops."
                "The plump pumpkin":
                    Mikey "It's time to show these guys \"pumpkin\" amazing!"
                    Mikey "..."
                    Mikey "Why am I so funny when no one's around..."
                    hide mikey
                    "Mikey quickly went back to his farm, grabbed the pumpkin, and brought it to the judges for weighing."
                    "The other farmers were lined up, bringing their entries to the village square to be weighed and measured by a panel of judges."
                    "The farmers stood around, waiting for the mayor."
                    "After a few minutes with the judges, the mayor stepped up to the podium."
                    stop music
                    show mayor
                    Mayor "Alright! Settle down everyone. It's time to announce this year's winner of the Spring Harvest produce contest!"
                    "Everyone held their breath in anticipation."
                    play sound "trembling.mp3"
                    "Mikey...well rattled in anticipation."
                    play sound "drumroll.mp3"
                    Mayor "The winner of this year's spring festival i-s-s-s-s-s-s..."
                    Mayor "MIKEY, THE SKELETON!"
                    play music "funny-country.mp3"
                    play sound "crowd-cheer.mp3"
                    "Mikey couldn't believe his eyes! His pumpkin won!"
                    "The mayor beckoned the skeleton to come up to the podium."
                    "Mikey hurringly walked up the steps."
                    "Once on stage, Mikey could get a good look at the mass of villagers and farmers that had gathered, clapping and congratulating him."
                    "It was truly a sight to behold that he would treasure."
                    show mikey at stageLeftish
                    show mayor at stageRightish
                    Mayor "Well aren't you a sight to behold! A skeleton farmer managed to produce a giant pumpkin that weighed over 500 pounds!"
                    Mayor "What do you have to say about that!"
                    Mikey "That's a \"skele\"-ton of pounds!"
                    "The crowd errupted in laughter. Mikey's non-existant heart fluttered."
                    "His first public joke...AND IT DIDN'T FLOP!"
                    Mayor "We have ourselves a comedian as well! HA HA!"
                    Mayor "Well, as mayor, I bestow upon you the ribbon of this year's Spring Harvest Festival! Wear it wit pride!"
                    show ribbon
                    play sound "pickup.mp3"
                    "*Mikey recieved the Ribbon of Spring Harvest.*"
                    $ player_has_ribbon = True
                    hide ribbon
                    hide mikey
                    hide mayor
                    "After the contest was said and done, it was time for the feast."
                    "Seeing that Mikey was a skeleton, he simply made his way back to his farm to tend to his crops."
        "Stay at the farm":
            Mikey "M-Maybe I shouldn't. Besides, I have a lot of field work to tend to."
            hide mikey
            show bg interlude
            "With that, Mikey went back to tending the fields."
            "Despite being saddened about missing the fun and listening the boistuous laughter from a distance, he was still happy to tend to his farm."
            "He even had a chat with Old Straw, who taught him even more neat tricks to tending to his fields."
            "For the most part, it was a good day for Mikey."

    # ===SEASON: SUMMER===
    $ villagers = 0
    scene bg field
    play music mikeyfarm 
    if player_has_ribbon == True:
        "It was a rather busy day on the farm. Since Mikey had won the Spring Festival, a lot of people have come to his farm for his produce."
        "Mikey was very happy seeing his farm get so much recognition."
        "His mind then went to Frostnose and he wondered if his \"Unfinished business\" was finally finished."
        "He smiled at the idea of helping the spirit."
    else:
        "It was a slow day on the farm today."
        "He had customers here and there, but for the most part, it was \"dead.\""
        "...Get it..."
    "Mikey was currently tending to the fields, chatting with Old Straw until-"
    John "ENOUGH OF THIS!"
    play music showdown
    show mikey at stageLeftish
    show john at stageRightish
    Mikey "F-Farmer John. What are you-"
    John "I'M SICK OF YOU!"
    John "I CAN'T TEND TO MY FAR THANKS TO YOU \"STEALING\" MY LAND!"
    Mikey "Not this again..."
    Mikey "Listen, I already told you. This is my land! I worked my hand to the \"bone\" for this land!"
    John "GRAH! YOU AND YOU DUMB SKELETON JOKES!"
    Mikey "They aint dumb!"
    John "You got a problem with how I'm talking to you! If that's the case, GET OFF MY LAND!"

    if player_has_ribbon:
        play music "snowday.mp3"
        Mayor "Now hold on!"
        hide mikey
        hide john 
        "The mayor comes down the road."
        show mayor
        Mayor "I've been meaning to discuss your little \"fits\", Farmer John..."
        show mayor at stageRightish
        show john at stageLeftish
        John "M-Mr. Mayor! B-But-"
        Mayor "No butts about it, Johnathan. You know we had this same \"issue\" with the last farmer on that land."
        hide mayor
        hide john
        $ villagers += 1
    if player_has_ball:
        Child "H-Hey!"
        hide mikey
        hide john 
        "The child wanderes down the road."
        show child at centerStage
        Child "L-Leave him alone!"
        Child "That funny skeleton told me a funny joke and I like him."
        Child "A-Also...I gave him my ball, so that means we're friends! And friends help friends!"
        hide child
        $ villagers += 1
    if player_has_mittens:
        Grandma "Enough, Johnathan!"
        hide mikey
        hide john 
        "The old lady comes down the road."
        show grandma at stageRightish
        show john at stageLeftish
        John "M-Ma?! Wh-what in tarnation are-"
        "The elderly woman threw an accusing finger at John."
        Grandma "Know you listen here young man. That fella over there is just as much as a farmer as you."
        Grandma "You should be treating him with some respect!"
        Grandma "And didn't I tell you to fix that gosh dang fence! It's cutting into his lawn!"
        John "MA!"
        hide grandma
        hide john
        $ villagers += 1
    if player_has_snakeoil:
        Salesman "Now hold on there!"
        "The wandering salesman speedingly comes down the road."
        hide mikey
        hide john 
        show salesman
        Salesman "Now I may not be a farmin' man and I may not know an acre from a acorn."
        Salesman "But what I do know when a good friend his being dragged through the mud by a no good bully."
        Salesman "Know I do say, good sir. May you put your differences aside and let this farming skeleton tend to \"his\" land in peace?"
        hide salesman
        $ villagers += 1

    # ======ENDINGS=====
    if villagers > 0:
        jump supportEnding
    else:
        menu: # Final decision should be to either to show your true skeleton self or keep working. Either choice will result in a different ending. 
            "Scare John":
                jump scaryEnding
            "Tell him off":
                jump biggermanEnding
    label scaryEnding:
        play music "dead-silence.mp3"
        hide john
        show mikey at centerStage
        "Mikey was surprised by how scared John was...it was almost...exilerating."
        "Mikey never knew how much fun he had scaring John."
        "In this moment, Mikey realized that he had a talent for making people scream and run away."
        "With this, Mikey ran back to bone hollow to declare is new found skill."
        scene bg bones
        show mikey reformed
        "Now, all the villagers were actually supportive of Mikey. Happy that Mikey threw away his silly little dream and found his true calling."
        "As days went by, he scared hundreds of people every night and enjoyed every minute of it. He felt happy and fulfilled once more in his life." 
        "He never looked back at his old farm, where the crops withered and died."
        "He had found his true calling: scaring people out of their wits. He was the skeleton farmer no more. He was simply a skeleton."
        "But deep down, he still felt that something was missing..."
        "And that the story of Mikey \"Rattlebones\" Jones. The skeleton who...well \"dreamed\" of being a farmer."
        "THE END"
        return
    label biggermanEnding:
        play music "teller-of-the-tales-by-kevin-macleod-from-filmmusic-io.mp3"
        "Mikey took in a deep breath."
        Mikey "No John...I will not..."
        John "You better or else-"
        Mikey "You know why I'm not leaving?"
        "John remained silent."
        Mikey "Because I started from nothing with nothing but spindly limbs and a dream."
        Mikey "I've given my bones away to people and done odd jobs to scrounge the money for this land."
        Mikey "It was on the market with you name no where on the papers."
        Mikey "These boney hands have dug more soil than you've ever done in a lifetime!"
        "Mikey gets closer to John. He takes a step back."
        Mikey "Even when you're dead and gone, I'll still be here tending to this field until the soil runs dry. Can you say the same about yours?"
        "John seemed to be taken a back. However, he quickly snapped back to reality."
        "With a scuff, he began to walk away."
        John "FINE! Take the darn land. Looked bad anyways!"
        "With that, John storms off."
        hide john
        Straw "Well I'll be..."
        "Mikey turned to Old Straw."
        show old straw at stageRight
        show mikey at stageLeftish
        Straw "I've never seen someone lay the hammer down on someone as hard as you did."
        Mikey "I-I didn't want to...but it wasn't going to backoff unless I did something."
        Straw "You did the right thing kid. The biggest rule of being a farmer is being able to defend yer' land from anything that wish to do harm to it."
        Straw "And what you did there was a hoot to witness. I would applaud you, you know..."
        Mikey "\"You're sort of nailed there\"..."
        "Old straw chuckled."
        Straw "Attaboy."
        Straw "Now go on. You got a lot of crops to pull for the summer!"
        "With a nod, Mikey began th continue to work on his farm, happy that he's finally achieved his dream of becoming a \"true\" farmer."
        scene bg interlude
        "And that the story of Mikey \"Rattlebones\" Jones. The skeleton who became a farmer."
        "I know, what a crazy story."
        "You may be asking yourself \"how did you witness the whole story of Mikey's dream?\""
        "Guess you could say."
        show lenny
        Frost "I was the \"ghost\" of his hollowed body!"
        Frost "HAPPY HALLOWEEN!"
        hide lenny
        "THE END"
        return
    label badEnding:
        scene bg interlude
        play music "dead-silence.mp3"
        "With his land limited, Mikey could not operate a full farm."
        "Produce was limited, livestock ran away due to there being no barn, and villagers went to John's farm instead of Mikey."
        "The winter season was a even bigger nightmare, as produce was at a standstill and all of his livestock had already died off."
        "With no farm, Mikey threw in the towel and relunctantly wandered back to Bone Hollow, where he was laughingstock of the villagers for months to come."
        "And that's the sad tale of Mikey \"the supposed\" skeleton farmer."
        "But that doesn't sound right...maybe I'm remembering the story wrong...who knows..."
        "This story is infact, old as bones..."
        "THE END?"
        return
    label supportEnding:
        play music "teller-of-the-tales-by-kevin-macleod-from-filmmusic-io.mp3"
        show john at stageLeftish
        show mikey at stageRightish
        if villagers >=2:
            "Farmer John looked around at the villagers, standing in front of their befriend skeleton."
            "He let out a scuff."
            John "FINE! Whatever...I never even want that dirty plot of land anyhow..."
            hide john
            show mikey at centerStage
            "John left in a huff back to his farm."
            play music "teller-of-the-tales-by-kevin-macleod-from-filmmusic-io.mp3"
            "Mikey's heart was overwelmed with emotion."
            "The people of the village stepped in to his aid. He truly felt apart of the village."
            Mikey "I-If I could cry, I'd be crying pools of tears! THANK YOU! THANK YOU ALL!"
        else:
            "Farmer John looked at the individual, standing in front of their befriend skeleton"
            "He let out a scuff."
            John "FINE! Whatever...I never even want that dirty plot of land anyhow..."
            hide john
            show mikey at centerStage
            "John left in a huff back to his farm."
            play music "teller-of-the-tales-by-kevin-macleod-from-filmmusic-io.mp3"
            "Mikey's heart was overwelmed with emotion."
            "Despite it being only one villager backing him up, he truly felt like he had a friend on this farm."
            Mikey "I-If I could cry, I'd be crying pools of tears! THANK YOU! THANK YOU SO MUCH!"
        scene bg interlude
        "And that the story of Mikey \"Rattlebones\" Jones. The skeleton who became a farmer."
        "I know, what a crazy story."
        "You may be asking yourself \"how did you witness the whole story of Mikey's dream?\""
        "Guess you could say."
        show lenny
        Frost "I was the \"ghost\" of his hollowed body!"
        Frost "HAPPY HALLOWEEN!"
        hide lenny
        "THE END"
        return