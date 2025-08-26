#include <stdio.h>
#include <string.h>

int main(){
	char adjectives[7][50]; 
	char places[3][50]; 
	char friendName[50]; char food[50];  char animal[50];
	char nouns[2][50];
	char verbs[3][50];
	
	printf("Welcome to our mad libs game. Hope you have fun\n");
	
	printf("First write all the adjectives we need.\nThere is 7 adjectives in total in the story.\nPlease enter 7 adjectives (one per line):\n");
	int i , numAdjectives = 7;
	for(i = 0 ; i < numAdjectives ; i++){
		fgets(adjectives[i], sizeof(adjectives[i]), stdin);
		adjectives[i][strcspn(adjectives[i], "\n")] = 0;
	}
	
	printf("Next we need the locations. Firstly we need a city, then 2 places.\nPlease first enter a city name, then enter 2 places (one per line):\n");
	int j, numPlaces = 3;
	for(j = 0 ; j < numPlaces ; j++){
		fgets(places[j], sizeof(places[j]), stdin);
		places[j][strcspn(places[j], "\n")] = 0;
	}
	
	printf("Now we need a partner in crime for our story.\nPlease write a friends name: \n");
	    fgets(friendName, sizeof(friendName), stdin);
		friendName[strcspn(friendName, "\n")] = 0;
	
	printf("Now please write a food for the story: \n");
	    fgets(food, sizeof(food), stdin);
		food[strcspn(food, "\n")] = 0;
		
    printf("We also need an animal for a fun story.\n Please write an animal: \n");
        fgets(animal, sizeof(animal), stdin);
		animal[strcspn(animal, "\n")] = 0;
		
	printf("We need some more nouns. One in plural.\nPlease firstly write a plural noun then a single noun: \n");
	int k, numNouns=2;
	for(k = 0 ; k < numNouns ; k++){
		fgets(nouns[k], sizeof(nouns[k]), stdin);
		nouns[k][strcspn(nouns[k], "\n")] = 0;
	}
	
	printf("To really fulfill our story, we need some action, aka some verbs.\nPlease firstly write a verb, secondly a past tense verb, and lastly a verb ending with ing: \n");
	int n, numVerbs=3;
	for(n = 0 ; n < numVerbs ; n++){
		fgets(verbs[n], sizeof(verbs[n]), stdin);
		verbs[n][strcspn(verbs[n], "\n")] = 0;
	}
	
	printf("\n--- Your Story ---\n\n");

	
	printf("It was a %s day in %s. I decided to go out with my best friend, %s, to explore the city.\n",
	        adjectives[0], places[0], friendName);
	printf("First, we stopped at a %s %s where we bought %s and %s.\n",
	        adjectives[1], places[1], nouns[0], food);
	printf("Suddenly, a %s %s appeared and started to %s right in front of us!\n",
	        adjectives[2], animal, verbs[0]);
    printf("We were so %s that we %s all the way to the %s.\n",
	        adjectives[3], verbs[1], places[2]);
    printf("Then, we met a %s stranger who gave us a %s.\n",
	        adjectives[4], nouns[1]);
    printf("Finally, we ended the day feeling %s and couldn't stop %s about our adventure.\n",
	        adjectives[5], verbs[2]);
    printf("It was truly the most %s day of our lives!\n",
	        adjectives[6]);
	return 0;
}
