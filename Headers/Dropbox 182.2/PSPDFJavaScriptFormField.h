//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PDFCJSFormField, PSPDFDocumentProvider, PSPDFFormElement, PSPDFFormField, PSPDFFormParser;

@interface PSPDFJavaScriptFormField : NSObject
{
    PSPDFDocumentProvider *_documentProvider;
    PSPDFFormParser *_formParser;
    PDFCJSFormField *_coreJSFormField;
}

+ (id)createRootJavaScriptFormFieldWithFormFields:(id)arg1 documentProvider:(id)arg2;
+ (id)findJavaScriptFormFieldFromFullyQualifiedName:(id)arg1 formParser:(id)arg2;
@property(readonly, nonatomic) PDFCJSFormField *coreJSFormField; // @synthesize coreJSFormField=_coreJSFormField;
@property(retain, nonatomic) PSPDFFormParser *formParser; // @synthesize formParser=_formParser;
@property(readonly, nonatomic) __weak PSPDFDocumentProvider *documentProvider; // @synthesize documentProvider=_documentProvider;
- (void).cxx_destruct;
- (id)kidWithName:(id)arg1;
@property(readonly, nonatomic) PSPDFFormElement *formElement;
@property(readonly, nonatomic) PSPDFFormField *formField;
@property(readonly, nonatomic) NSString *fullyQualifiedName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSArray *annotationKids;
@property(readonly, nonatomic) NSArray *kids;
- (id)description;
- (id)initWithCoreJSFormField:(id)arg1 formParser:(id)arg2;

@end
