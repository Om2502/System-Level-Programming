//Om Gautam
//Pather #: 002-57-0102

#ifndef PROBLEM5LINES_H_INCLUDED
#define PROBLEM5LINES_H_INCLUDED

int problem5lines(FILE *fp)
{
    int line_count = 1;// since we already on line 1 and we will encounter '\n' to get next line
    char c;
    for(c = fgetc(fp); c!=EOF; c=fgetc(fp))//fpr loop to return line_count
    {
        if (c=='\n')
        line_count++;
    }
    return line_count;
}


#endif // PROBLEM5LINES_H_INCLUDED