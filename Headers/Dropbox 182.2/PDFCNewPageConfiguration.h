//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PDFCNewPageConfiguration : NSObject
{
    struct Handle<std::__1::shared_ptr<PDFC::NewPageConfiguration>, std::__1::shared_ptr<PDFC::NewPageConfiguration>> _cppRefHandle;
}

+ (id)createExternalDocumentProviderPage:(id)arg1 sourcePageIndex:(int)arg2 rotation:(id)arg3 pageMargins:(id)arg4;
+ (id)createExternalDocumentPage:(id)arg1 sourcePageIndex:(int)arg2 rotation:(id)arg3 pageMargins:(id)arg4;
+ (id)createTiledPatternPage:(id)arg1 rotation:(id)arg2 backgroundColor:(id)arg3 pageMargins:(id)arg4 templateSourcePDF:(id)arg5;
+ (id)createEmptyPage:(id)arg1 rotation:(id)arg2 backgroundColor:(id)arg3 pageMargins:(id)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)shouldStripWebId;
- (void)setStripWebId:(_Bool)arg1;
- (id)getPagesToExpandOnCommit;
- (_Bool)expandPagesOnCommit;
- (void)setExpandPagesOnCommit:(_Bool)arg1 specificPages:(id)arg2;
- (int)getSourcePageIndex;
- (id)getDocumentProvider;
- (void)setItem:(id)arg1;
- (id)getItem;
- (id)getPageMargins;
- (id)getTemplateSourcePDF;
- (id)getBackgroundColor;
- (id)getRotation;
- (id)getPageSize;
- (long long)getPageType;
- (id)initWithCpp:(const shared_ptr_b73dd3be *)arg1;

@end

