/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 */

#ifndef __CEXTRACT__
#ifdef __STDC__

extern ThotBool IsTemplateInstanceDocument ( Document doc );
extern ThotBool IsTemplateDocument ( Document doc );
extern char *GetUsedTypeName ( Element el );
extern ThotBool IsInLineTemplateElement ( Element el,
                                          Document doc );
extern Element GetParentLine ( Element el,
                               SSchema templateSSchema );
extern ThotBool IsInternalTemplateDocument ( Document doc );
extern char* GetDocumentInstanceTemplateUrl ( Document doc );
extern ThotBool CheckPromptIndicator ( Element el,
                                       Document doc );
extern ThotBool RemovePromptIndicator ( NotifyOnTarget *event );
extern void* AllocTemplateRepositoryListElement ( const char* path,
                                                  void* prevElement );
extern void FreeTemplateRepositoryList ( void );
extern void SaveTemplateRepositoryList ( void );
extern void InitTemplates ( void );
extern void CreateInstanceOfTemplate ( Document doc,
                                       char *templatename,
                                       char *docname );
extern void PreventReloadingTemplate ( char* template_url );
extern void AllowReloadingTemplate ( char* template_url );
extern ThotBool isEOSorWhiteSpace ( const char c );
extern ThotBool isWhiteSpace ( const char c );
extern void giveItems ( char *text,
                        int size,
                        struct menuType **items,
                        int *nbitems );
extern ThotBool UseToBeCreated ( NotifyElement *event );
extern void UseCreated ( NotifyElement *event );
extern ThotBool Template_CanInsertRepeatChild ( Element el );
extern char *Template_GetListTypes ( XTigerTemplate t,
                                     Element el );
extern ThotBool BagButtonClicked ( NotifyElement *event );
extern void DoReplicateUseElement ( XTigerTemplate t,
                                    Document doc,
                                    int view,
                                    Element el,
                                    Element repeatEl,
                                    char *name );
extern ThotBool RepeatButtonClicked ( NotifyElement *event );
extern ThotBool ElementIsOptional ( Element el );
extern ThotBool UseButtonClicked ( NotifyElement *event );
extern ThotBool UseSimpleButtonClicked ( NotifyElement *event );
extern ThotBool OptionButtonClicked ( NotifyElement *event );
extern void Template_FillFromDocument ( Document doc );
extern ThotBool Template_CheckAndPrepareTemplate ( char* docURL );
extern void Template_CheckAndPrepareInstance ( char *localFileName,
                                               Document doc,
                                               char* docURL );
extern ThotBool ClosingTemplateDocument ( NotifyDialog* dialog );
extern ThotBool IsTemplateElement ( Element elem );
extern Element GetFirstTemplateParentElement ( Element elem );
extern ThotBool IsBeginningSelected ( Element el,
                                      Document doc );
extern ThotBool TemplateElementWillBeCreated ( NotifyElement *event );
extern ThotBool TemplateElementWillBeDeleted ( NotifyElement *event );
extern ThotBool TemplateAttrInMenu ( NotifyAttribute * event );
extern void CreateTemplateFromDocument ( Document doc,
                                         View view );
extern void UpdateTemplateMenus ( Document doc );
extern void UninstanciateTemplateDocument ( Document doc );
extern void Template_PrepareInstance ( char *url,
                                       Document doc,
                                       char* template_version,
                                       char* template_url );
extern void Template_PrepareLibrary ( char *url,
                                      Document doc,
                                      char* template_version );
extern void SetDocumentAsXTigerTemplate ( Document doc );
extern void SetDocumentAsXTigerLibrary ( Document doc );
extern void Template_CreateTextBox ( Document doc,
                                     ThotBool createComp );
extern void TemplateCreateTextBox ( Document doc,
                                    View view );
extern void TemplateCreateImport ( Document doc,
                                   View view );
extern void TemplateCreateFreeBox ( Document doc,
                                    View view );
extern void TemplateCreateUnion ( Document doc,
                                  View view );
extern void Template_ModifyUnionElement ( Document doc,
                                          Element unionEl );
extern void TemplateCreateRepeat ( Document doc,
                                   View view );
extern void TemplateCreateRepeatComp ( Document doc,
                                       View view );
extern Element Template_CreateRepeatFromSelection ( Document doc,
                                                    int view,
                                                    ThotBool createComp );
extern void TemplateCreateUseBox ( Document doc,
                                   View view );
extern void TemplateCreateUseCompBox ( Document doc,
                                       View view );
extern Element Template_CreateUseFromSelection ( Document doc,
                                                 int view,
                                                 ThotBool createComp );
extern Element Template_CreateComponentFromSelection ( Document doc );
extern ThotBool TemplateComponentWillBeDeleted ( NotifyElement *event );
extern void UnionClicked ( NotifyElement* event );
extern ThotBool UnionDoubleClicked ( NotifyElement* event );
extern ThotBool TemplateNameAttributeDeleted ( NotifyAttribute* event );
extern ThotBool TemplateNameAttributeModified ( NotifyAttribute* event );
extern void TemplateNameAttributeCreated ( NotifyAttribute* event );
extern ThotBool TemplateNameAttrInMenu ( NotifyAttribute * event );

#else /* __STDC__ */

extern ThotBool IsTemplateInstanceDocument ( Document doc );
extern ThotBool IsTemplateDocument ( Document doc );
extern char *GetUsedTypeName ( Element el );
extern ThotBool IsInLineTemplateElement ( Element el,
                                            Document doc );
extern Element GetParentLine ( Element el,
                                 SSchema templateSSchema );
extern ThotBool IsInternalTemplateDocument ( Document doc );
extern char* GetDocumentInstanceTemplateUrl ( Document doc );
extern ThotBool CheckPromptIndicator ( Element el,
                                         Document doc );
extern ThotBool RemovePromptIndicator ( NotifyOnTarget *event );
extern void* AllocTemplateRepositoryListElement ( const char* path,
                                                    void* prevElement );
extern void FreeTemplateRepositoryList ( void );
extern void SaveTemplateRepositoryList ( void );
extern void InitTemplates ( void );
extern void CreateInstanceOfTemplate ( Document doc,
                                         char *templatename,
                                         char *docname );
extern void PreventReloadingTemplate ( char* template_url );
extern void AllowReloadingTemplate ( char* template_url );
extern ThotBool isEOSorWhiteSpace ( const char c );
extern ThotBool isWhiteSpace ( const char c );
extern void giveItems ( char *text,
                          int size,
                          struct menuType **items,
                          int *nbitems );
extern ThotBool UseToBeCreated ( NotifyElement *event );
extern void UseCreated ( NotifyElement *event );
extern ThotBool Template_CanInsertRepeatChild ( Element el );
extern char *Template_GetListTypes ( XTigerTemplate t,
                                       Element el );
extern ThotBool BagButtonClicked ( NotifyElement *event );
extern void DoReplicateUseElement ( XTigerTemplate t,
                                      Document doc,
                                      int view,
                                      Element el,
                                      Element repeatEl,
                                      char *name );
extern ThotBool RepeatButtonClicked ( NotifyElement *event );
extern ThotBool ElementIsOptional ( Element el );
extern ThotBool UseButtonClicked ( NotifyElement *event );
extern ThotBool UseSimpleButtonClicked ( NotifyElement *event );
extern ThotBool OptionButtonClicked ( NotifyElement *event );
extern void Template_FillFromDocument ( Document doc );
extern ThotBool Template_CheckAndPrepareTemplate ( char* docURL );
extern void Template_CheckAndPrepareInstance ( char *localFileName,
                                                 Document doc,
                                                 char* docURL );
extern ThotBool ClosingTemplateDocument ( NotifyDialog* dialog );
extern ThotBool IsTemplateElement ( Element elem );
extern Element GetFirstTemplateParentElement ( Element elem );
extern ThotBool IsBeginningSelected ( Element el,
                                        Document doc );
extern ThotBool TemplateElementWillBeCreated ( NotifyElement *event );
extern ThotBool TemplateElementWillBeDeleted ( NotifyElement *event );
extern ThotBool TemplateAttrInMenu ( NotifyAttribute * event );
extern void CreateTemplateFromDocument ( Document doc,
                                           View view );
extern void UpdateTemplateMenus ( Document doc );
extern void UninstanciateTemplateDocument ( Document doc );
extern void Template_PrepareInstance ( char *url,
                                         Document doc,
                                         char* template_version,
                                         char* template_url );
extern void Template_PrepareLibrary ( char *url,
                                        Document doc,
                                        char* template_version );
extern void SetDocumentAsXTigerTemplate ( Document doc );
extern void SetDocumentAsXTigerLibrary ( Document doc );
extern void Template_CreateTextBox ( Document doc,
                                       ThotBool createComp );
extern void TemplateCreateTextBox ( Document doc,
                                      View view );
extern void TemplateCreateImport ( Document doc,
                                     View view );
extern void TemplateCreateFreeBox ( Document doc,
                                      View view );
extern void TemplateCreateUnion ( Document doc,
                                    View view );
extern void Template_ModifyUnionElement ( Document doc,
                                            Element unionEl );
extern void TemplateCreateRepeat ( Document doc,
                                     View view );
extern void TemplateCreateRepeatComp ( Document doc,
                                         View view );
extern Element Template_CreateRepeatFromSelection ( Document doc,
                                                      int view,
                                                      ThotBool createComp );
extern void TemplateCreateUseBox ( Document doc,
                                     View view );
extern void TemplateCreateUseCompBox ( Document doc,
                                         View view );
extern Element Template_CreateUseFromSelection ( Document doc,
                                                   int view,
                                                   ThotBool createComp );
extern Element Template_CreateComponentFromSelection ( Document doc );
extern ThotBool TemplateComponentWillBeDeleted ( NotifyElement *event );
extern void UnionClicked ( NotifyElement* event );
extern ThotBool UnionDoubleClicked ( NotifyElement* event );
extern ThotBool TemplateNameAttributeDeleted ( NotifyAttribute* event );
extern ThotBool TemplateNameAttributeModified ( NotifyAttribute* event );
extern void TemplateNameAttributeCreated ( NotifyAttribute* event );
extern ThotBool TemplateNameAttrInMenu ( NotifyAttribute * event );

#endif /* __STDC__ */
#endif /* __CEXTRACT__ */
