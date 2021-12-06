//Om Gautam
//Pather #: 002-57-0102

#ifndef PROBLEM5WORDS_H_INCLUDED
#define PROBLEM5WORDS_H_INCLUDED


int problem5words(FILE *fp)
{
    int word_count = 0;
    char c;
    for(c = fgetc(fp); c!=EOF; c=fgetc(fp))//for loop to return the word count
    {
        if (c==' ' || c=='\n')
        word_count++;
    }
    return word_count;
}


#endif // PROBLEM5WORDS_H_INCLUDED