//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PDFCJSButtonImportIconParams;

@interface PSPDFJSButtonImportIconParams : NSObject
{
    NSString *_path;
    unsigned long long _pageIndex;
    PDFCJSButtonImportIconParams *_coreJSButtonImportIconParams;
}

@property(readonly, nonatomic) PDFCJSButtonImportIconParams *coreJSButtonImportIconParams; // @synthesize coreJSButtonImportIconParams=_coreJSButtonImportIconParams;
@property(readonly, nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoreJSButtonImportIconParams:(id)arg1;
- (id)initWithPath:(id)arg1 pageNumber:(unsigned long long)arg2;

@end
