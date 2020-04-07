//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, PDFCLabelParser, PSPDFDocumentProvider;

@interface PSPDFLabelParser : NSObject
{
    PSPDFDocumentProvider *_documentProvider;
    NSDictionary *_labelStorage;
    PDFCLabelParser *_labelParser;
}

@property(readonly, nonatomic) PDFCLabelParser *labelParser; // @synthesize labelParser=_labelParser;
@property(copy) NSDictionary *labelStorage; // @synthesize labelStorage=_labelStorage;
@property(readonly, nonatomic) __weak PSPDFDocumentProvider *documentProvider; // @synthesize documentProvider=_documentProvider;
- (void).cxx_destruct;
- (unsigned long long)pageForPageLabel:(id)arg1 partialMatching:(_Bool)arg2;
- (id)pageLabelForPageAtIndex:(unsigned long long)arg1;
- (id)parseDocument;
@property(readonly, copy, nonatomic) NSDictionary *labels;
- (id)description;
- (id)initWithDocumentProvider:(id)arg1;
- (id)init;

@end
