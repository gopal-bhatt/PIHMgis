#ifndef DISSOLVE_H_H
#define DISSOLVE_H_H

struct Lines{
        double x1, y1, x2, y2;
};

int compareSlope(Lines *a, Lines *b);

int compareLines(Lines *a, Lines *b);

inline int doesIntersect(Lines *l, double x1, double y1);

int dissolve(const char* InShpFileName, const char* InDbfFileName, const char *OutShpFileName, const char *OutDbfFileName);

#endif
