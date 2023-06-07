#include "MurderMysteryData.h"

MurderMysteryData CreateNewSave(int Case) {
  switch (Case) {
  case 1:

    Suspect frank = {
      "Frank Tracer", //name
      "Frank liked to go out with Andre to Downtown Denville after school. He likes stopping by the candy store and the local pizzaria, but stops at CVS along the way to pick up his medications. In recent days before Andre's murder, Frank has been acting bitter with Andre and has stopped taking him.", //desc
      "Andre's friend", //relation
      "December 6th, 2006", //dob
      16, //age
      "MCST sophomore and Downtown Denville's best customer",
      {
        {
          "Bedroom", "0"
        },
       {
      "Garage","",
    },
        {
          "Living room", "1"
        },
        {
          "Kitchen","2"
        }
      }, //rooms
      {
        {
          "What were you doing with Andre in Denville, and why did you stop bringing him?",
          "I always took Andre to Downtown Denville to buy snacks. Everytime we go there, Andre has always asked me to pay for him because he never brought his own cash. After numerous occasions, Andre hasn't given me a single cent back and I think he owes me about over $100 dollars!"
        },
        {
          "Have you tried to get your money back from Andre?",
          "I have a few times. First I just asked him, but since he has not given me money, I try to take whatever money I find in Andre's backpack. If I am not doing that, I just avoid him."
        }
      } //q, a, interrogation
    };

    Suspect devon = {
      "Devon Martin", //name
      "Devon is a smart guy who scored nothing but A+'s on his report cards. Devon is obsessed with school and is allowed to bring materials from chemistry and history home with him. Despite his academic achievements, he recently received one detention before Andre's murder.'", //desc
      "Andre's friend", //relation
      "December 25, 2006", //dob
      16, //age
      "MCST sophomore and Code Ninjas Sensei",
      {
        {
          "Bedroom","3"
        },
        {
          "Garage","4"
        },
    {
    "Living room",""
    },
        {
          "Kitchen","5"
        }
      }, //rooms
      {
        {
          "You recently received a detention, what is it for?",
          "I received a detention slip for something Andre did. On that day, we were having a test in Computers class writing a program using HTML. Andre wanted to help his friends by sharing his source code online on discord. The kids who copied him were stupid enough to be caught, and Andre pinned the blame on me."
        },
        {
          "How would you describe your passion for academic performance?",
          "I want to do well in school so I can have a chance to get into Princeton University. It is the one place I think I can find belonging. Sadly, thanks to Andre and the detention, that dream is sort of out the window. "
        }
      } //q, a, interrogation
    };

    Suspect fran = {
      "Fran Bruno", //name
      "Fran is a video game enthusiast who has participated in many Super Smash Bros tournaments. Recently before Andre's murder, Andre defeated Fran in the final round of a recent Smash tournament. It has been clear that Fran is no longer Andre's friend and she has been aggressive towards him ever since.", //desc
      "Andre's ex-friend", //relation
      "December 7th, 2006", //dob
      16, //age
      "MCST sophomore and 2023 Super Smash runner-up",
      {
    {
    "Bedroom",""
    },
        {
          "Garage","6"
        },
        {
          "Living room","7"
        },
        {
          "Kitchen","8"
        }
      },
      {
        {
          "Why are you angry with Andre?",
          "BECAUSE HE MADE ME LOSE A SUPER SMASH BROS TOURNAMENT! I had spent a whole month practicing for this tournmanet as Greninja and Andre ended up defeating me by spamming Luigi's abilities. Andre was so selfish to take the one title I wanted most in my life *sobs*."
        },
        {
          "Are you angry to the point where you would kill Andre?",
          "Yes, I want Andre to die a slow painful death! Perhaps dying impaled or crucified."
        }
      } //q, a, interrogation
    };

    Suspect yahvi = {
      "Yahvi Bapat", //name
      "Yahvi loves to prank everybody. She owns a streaming account on tiktok where she records herself pranking the school, sometimes Andre was her assistant. In recent videos before Andre's death, Yahvi has been pranking Andre by hiding worms inside his lunches. ", //desc
      "Andre's Best Friend", //relation
      "May 11th, 2007", //dob
      16, //age
      "MCST sophomore and Prank Influencer",
      {
        {
          "Bedroom","9"
        },
        {
          "Garage","10"
        },
        {
          "Living room","11"
        },
    {
    "Kitchen",""
    }
      }, //rooms
      {
        {
          "You put things in Andre's food, did you consider whether or not they were safe to consume?",
          "Andre's my best buddy, I wouldn't kill him. If it comes to sneaking things in his food, I only use worms and Colgate toothpaste. I'm pretty sure everything I put in his food was safe to eat!"
        },
        {
          "Have you ever got in trouble for your pranks?",
          "Most of the time I get away with it, but I recently got a detention for putting rubber worms into Andre's pizza. I had to serve my detention during my lunch block."
        }
      } //q, a, interrogation
    };

    MurderMysteryData CaseSaveData = {
      "", // case name
      "", // probably you
      {
        "It was 12:00 PM on June 7th, 2023. 16 year old Computer Science academy sophomore Andre Sharp ate a slice of pizza, and consumed a carton of chocolate milk.",
        " Shortly afterwards, Andre began to gag and choke and had to be rushed to the hospital.",
        "Andre later died from food poisoning in the hospital, and after examining Andre's meal, it is clear that the milk contained a foreign substance.",
        "It is clear that the foreign substance was placed in on purpose and could not have accidentally been placed there.",
        "The students who have been close to Andre claim that there have been four people who had interactions with Andre where most of them resulted in bitterness.",
        "The four names that pop up the most for you are Frank Taylor, Devon Martin, Fran Bruno and Yahvi Batpat."
      }, // introduction sentences
      {
        frank,
        devon,
        fran,
        yahvi
      }, // all suspects
      1, // suspect solve index

      {
        {
          "Tallied note",
          "This was found in Frank's bedroom. It is a simple yellow post-it note with tally marks equalling to 108. The label written on the top of the note says that the tallies are equal to the amount of money Andre owes him."
        },
        {
          "Frank's phone",
          "This was found in Frank's living room. The first thing you see on Frank's phone is a video of him with his friends outside the cafeteria. The video was recorded on June 7th. In the background, a person with a dark hoodie advances towards a table and momentarily hovers its hand over a meal. The video ends with someone (possibly Andre?) sitting at the same table."
        },
        {
          "Blue pills",
          "This was found in Frank's kitchen. It was bought from CVS, this is a bottle of pills that dissolve in liquid. They are severe medications for skin care."
        },
        {
          "Science lab materials",
          "This was found in Devon's bedroom and has been used before. The kit contains a bottle of benedict's solution, corn syrup and two syringes. The kit is missing one of the syringes however."
        },
        {
          "Navy colored hoodie",
          "Found in Devon's garage, the hoodie is dark blue with no patches or patterns."
        },
        {
          "Detention slip",
          "Found in Devon's kitchen, it says that the detention was given to Devon for sharing test answers on social media to his classmates. A teacher has signed the slip stating the detention was served on June 1st, 2023."
        },
    {
          "Broken game consoles",
          "Found in Fran's garage, there are three broken consoles in a trash can. One of them is a Playstation 5, another is an XBox 1, and the final console is a Wii U."
        },
        {
          "Fran's diary",
          "Found in Fran's living room, her latest entry is about Andre defeating her in the Super Smash Bros tournament. Fran has written that she has been screaming for four hours after the loss and that she destroyed three gaming consoles at home. Fran hopes Andre kicks the bucket soon."
        },
        
        {
          "Fran's phone",
          "Found in Fran's kitchen. There is a recent voicecall message from June 7th, 2023. It is a call from her friends telling her that they missed seeing her that day and that she can recover from her fever."
        },
        
        {
          "Yahvi's phone",
          "Found in Yahvi's bedroom, it has a video of Yahvi sneaking rubber worms into someone's pizza on June 6th, 2023. There is also a post from Andre containing test answers for a Computer Science exam. Andre tells Yahvi that Devon will take the fall."
        },
        {
          "Yahvi's detention slip",
          "Found in Yahvi's garage, it is a detention slip for putting gross objects into her classmates food. A teacher signed the slip, stating the detention was served on June 7th, 2023."
        },
    {
          "Yahvi's prank kit",
          "Found in Yahvi's living room, it contains rubber worms, itching cream and rubber slime. The kit has a Hazardous If Swallowed warning on it."
        }
      }, // evidence, name desc
      {
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
      }, // found or not
     100,// how much evidence they can hold
    };

    return CaseSaveData;

    break;
  }
}
