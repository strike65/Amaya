/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 */

#ifndef __CEXTRACT__
#ifdef __STDC__

extern ThotDrawable XpmCreate ( char *fn,
                                ThotPictInfo *imageDesc,
                                int *xif,
                                int *yif,
                                int *wif,
                                int *hif,
                                int bgColor,
                                int *width,
                                int *height,
                                int zoom );
extern void XpmPrint ( char *fn,
                       PictureScaling pres,
                       int xif,
                       int yif,
                       int wif,
                       int hif,
                       FILE *fd,
                       int bgColor );
extern ThotBool IsXpmFormat ( char *fn );

#else /* __STDC__ */

extern ThotDrawable XpmCreate ( char *fn,
                                  ThotPictInfo *imageDesc,
                                  int *xif,
                                  int *yif,
                                  int *wif,
                                  int *hif,
                                  int bgColor,
                                  int *width,
                                  int *height,
                                  int zoom );
extern void XpmPrint ( char *fn,
                         PictureScaling pres,
                         int xif,
                         int yif,
                         int wif,
                         int hif,
                         FILE *fd,
                         int bgColor );
extern ThotBool IsXpmFormat ( char *fn );

#endif /* __STDC__ */
#endif /* __CEXTRACT__ */
