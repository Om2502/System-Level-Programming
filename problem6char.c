//Om Gautam
//Pather #: 002-57-0102

#ifndef PROBLEM5CHAR_H_INCLUDED
#define PROBLEM5CHAR_H_INCLUDED

int  problem5char(FILE *fp)
{
    int char_count = 0;
    char c;
    for(c = fgetc(fp); c!=EOF; c=fgetc(fp))//for loop to return char count
    {
        char_count++;
    }
    return char_count;
}


#endif // PROBLEM5CHAR_H_INCLUDED