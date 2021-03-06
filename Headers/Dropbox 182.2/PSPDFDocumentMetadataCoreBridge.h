//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, PDFCDocumentMetadata, PSPDFDocument, PSPDFDocumentProvider;

@interface PSPDFDocumentMetadataCoreBridge : NSObject
{
    PSPDFDocument *_document;
    PSPDFDocumentProvider *_documentProvider;
    PDFCDocumentMetadata *_coreDocumentMetadata;
    NSNumber *_documentProviderIndex;
}

@property(readonly, nonatomic) NSNumber *documentProviderIndex; // @synthesize documentProviderIndex=_documentProviderIndex;
@property(readonly, nonatomic) PDFCDocumentMetadata *coreDocumentMetadata; // @synthesize coreDocumentMetadata=_coreDocumentMetadata;
@property(readonly, nonatomic) PSPDFDocumentProvider *documentProvider; // @synthesize documentProvider=_documentProvider;
@property(readonly, nonatomic) PSPDFDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (id)initWithDocumentProvider:(id)arg1;

@end

