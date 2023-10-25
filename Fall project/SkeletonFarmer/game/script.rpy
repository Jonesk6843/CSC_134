# The script of the game goes in this file.

# Declare characters used by this game. The color argument colorizes the
# name of the character.

define MJ = Character("Mikey \"Rattlebones\" Jones")
define OS = Character("Old Straw, The Scarecrow")
define LF = Character("Lenny Frostnose")

#Declare music
define audio.gamemusic = "audio/teller-of-the-tales-by-kevin-macleod-from-filmmusic-io.mp3"

# The game starts here.

label start:
    play music gamemusic

    # Show a background. This uses a placeholder by default, but you can
    # add a file (named either "bg room.png" or "bg room.jpg") to the
    # images directory to show it.

    scene bg farm

    # This shows a character sprite. A placeholder is used, but you can
    # replace it by adding a file named "eileen happy.png" to the images
    # directory.

    show mikey

    # These display lines of dialogue.

    MJ "Howdy! The names' Mikey!"

    MJ "What Can I do ya for?"

    menu:
        "How's the farm?":
            "It's goin' great! Thanks for askin!"
        "Where's old straw?":
            hide mikey
            scene bg field
            show old straw
            OS "I haven't gone anywhere..."
        "Is your barn haunted?!":
            hide mikey
            scene bg barn interior
            show lenny
            LF "N-No it's not..."

    MJ "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam feugiat erat libero, ac feugiat diam pharetra tincidunt. Nullam tellus sem, semper sit amet tincidunt ac, dapibus at mauris. "
    MJ "Donec sit amet placerat risus. Nulla facilisi. Sed maximus nisi et nulla facilisis luctus. Proin velit purus, volutpat id lectus sed, scelerisque fringilla velit."
    # This ends the game.

    return
