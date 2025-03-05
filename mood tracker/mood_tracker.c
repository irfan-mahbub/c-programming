#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "mood_tracker.txt"

typedef struct
{
    char date[11];
    char mood[20];
    char notes[100];
} MoodEntry;

void addMoodEntry()
{
    MoodEntry entry;
    FILE *file = fopen(FILENAME, "a");

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter Date (DD-MM-YYYY): ");
    scanf("%10s", entry.date);
    printf("Enter Your Mood (Happy, Sad, Excited, etc.): ");
    scanf("%19s", entry.mood);
    getchar();
    printf("Enter Notes (optional): ");
    fgets(entry.notes, 100, stdin);
    entry.notes[strcspn(entry.notes, "\n")] = 0;

    fprintf(file, "%s | %s | %s\n", entry.date, entry.mood, entry.notes);
    fclose(file);

    printf("Mood entry saved successfully!\n");
}

void viewMoodEntries()
{
    char date[11];
    MoodEntry entry;
    FILE *file = fopen(FILENAME, "r");

    if (file == NULL)
    {
        printf("No mood entries found.\n");
        return;
    }

    printf("Enter Date to View (DD-MM-YYYY): ");
    scanf("%10s", date);

    int found = 0;
    char line[256];
    while (fgets(line, sizeof(line), file))
    {
        if (sscanf(line, "%10[^|] | %19[^|] | %99[^\n]", entry.date, entry.mood, entry.notes) == 3)
        {
            entry.date[strcspn(entry.date, " ")] = 0;
            if (strcmp(entry.date, date) == 0)
            {
                printf("\nDate: %s\nMood: %s\nNotes: %s\n", entry.date, entry.mood, entry.notes);
                found = 1;
            }
        }
    }

    fclose(file);

    if (!found)
    {
        printf("No entries found for %s.\n", date);
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n=== Smart Calendar & Mood Tracker ===\n");
        printf("1. Add Mood Entry\n");
        printf("2. View Mood Entries\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }
        getchar();

        switch (choice)
        {
        case 1:
            addMoodEntry();
            break;
        case 2:
            viewMoodEntries();
            break;
        case 3:
            printf("Exiting... Have a great day!\n");
            return 0;
        default:
            printf("Invalid choice! Try again.\n");
        }
    }
}
