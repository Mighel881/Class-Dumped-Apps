//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKit/PSPDFFormElement.h>

@class NSArray, NSIndexSet, NSString, PSPDFChoiceFormField;

@interface PSPDFChoiceFormElement : PSPDFFormElement
{
    NSArray *_options;
    unsigned long long _topIndex;
    id _decodedContents;
}

+ (id)keysForValuesToObserveForUndo;
+ (id)propertyKeys;
@property(retain, nonatomic) id decodedContents; // @synthesize decodedContents=_decodedContents;
@property(readonly) unsigned long long topIndex; // @synthesize topIndex=_topIndex;
- (void).cxx_destruct;
- (_Bool)isResettable;
- (void)syncToCoreLockedWithPropertyMap:(id)arg1;
- (struct UIEdgeInsets)edgeInsets;
- (id)optionTextAtIndex:(unsigned long long)arg1;
- (id)formTypeName;
- (id)annotationIcon;
- (id)executeJavaScriptWithContents:(id)arg1 error:(id *)arg2;
- (void)executeJavaScriptFormChangedHandlerAndUpdateContents;
@property(readonly) _Bool customSelection;
@property(copy) NSString *customText;
- (id)contents;
- (void)setContents:(id)arg1;
@property(readonly, copy) NSArray *selectedOptions;
@property(copy) NSIndexSet *selectedIndices;
@property(copy) NSArray *options; // @synthesize options=_options;
@property(readonly) PSPDFChoiceFormField *choiceFormField;
- (id)description;
- (void)implementation_refreshFromCoreAnnotation:(id)arg1 additionalWork:(CDUnknownBlockType)arg2;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithCoreAnnotation:(id)arg1 formField:(id)arg2 documentProvider:(id)arg3;

@end
