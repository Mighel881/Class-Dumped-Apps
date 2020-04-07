//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKit/PSPDFModel.h>

#import <PSPDFKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, UIColor;

@interface PSPDFRenderOptions : PSPDFModel <NSSecureCoding>
{
    _Bool _preserveAspectRatio;
    _Bool _ignoreDisplaySettings;
    _Bool _invertRenderColor;
    _Bool _skipPageContent;
    _Bool _overlayAnnotations;
    _Bool _ignorePageClip;
    _Bool _allowAntialiasing;
    _Bool _renderTextUsingCoreGraphics;
    _Bool _drawSignHereOverlay;
    _Bool _drawRedactionsAsRedacted;
    _Bool _drawFlattened;
    _Bool _drawForPrinting;
    _Bool _centered;
    _Bool _drawAppearanceStream;
    _Bool _shouldAnimate;
    _Bool _skipTextRendering;
    _Bool _drawTabOrder;
    _Bool _disableAPStreamGenerator;
    _Bool _drawNoteAnnotationAsText;
    int _interpolationQuality;
    UIColor *_pageColor;
    unsigned long long _filters;
    NSArray *_skipAnnotationArray;
    UIColor *_backgroundFill;
    UIColor *_interactiveFormFillColor;
    CDUnknownBlockType _drawBlock;
    NSArray *_additionalCIFilters;
    NSDictionary *_extraInfo;
    struct UIEdgeInsets _margin;
}

+ (id)allowedSecureCodingClassesByPropertyKey;
+ (id)encodingBehaviorsByPropertyKey;
+ (_Bool)supportsSecureCoding;
+ (id)classesRequiredForDecodingLegacyPropertyMap;
@property(nonatomic) _Bool drawNoteAnnotationAsText; // @synthesize drawNoteAnnotationAsText=_drawNoteAnnotationAsText;
@property(nonatomic) _Bool disableAPStreamGenerator; // @synthesize disableAPStreamGenerator=_disableAPStreamGenerator;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) _Bool drawTabOrder; // @synthesize drawTabOrder=_drawTabOrder;
@property(nonatomic) _Bool skipTextRendering; // @synthesize skipTextRendering=_skipTextRendering;
@property(nonatomic) _Bool shouldAnimate; // @synthesize shouldAnimate=_shouldAnimate;
@property(nonatomic) _Bool drawAppearanceStream; // @synthesize drawAppearanceStream=_drawAppearanceStream;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property(nonatomic) _Bool centered; // @synthesize centered=_centered;
@property(nonatomic) _Bool drawForPrinting; // @synthesize drawForPrinting=_drawForPrinting;
@property(nonatomic) _Bool drawFlattened; // @synthesize drawFlattened=_drawFlattened;
@property(retain, nonatomic) NSArray *additionalCIFilters; // @synthesize additionalCIFilters=_additionalCIFilters;
@property(nonatomic) _Bool drawRedactionsAsRedacted; // @synthesize drawRedactionsAsRedacted=_drawRedactionsAsRedacted;
@property(nonatomic) _Bool drawSignHereOverlay; // @synthesize drawSignHereOverlay=_drawSignHereOverlay;
@property(copy, nonatomic) CDUnknownBlockType drawBlock; // @synthesize drawBlock=_drawBlock;
@property(retain, nonatomic) UIColor *interactiveFormFillColor; // @synthesize interactiveFormFillColor=_interactiveFormFillColor;
@property(nonatomic) _Bool renderTextUsingCoreGraphics; // @synthesize renderTextUsingCoreGraphics=_renderTextUsingCoreGraphics;
@property(retain, nonatomic) UIColor *backgroundFill; // @synthesize backgroundFill=_backgroundFill;
@property(nonatomic) _Bool allowAntialiasing; // @synthesize allowAntialiasing=_allowAntialiasing;
@property(nonatomic) _Bool ignorePageClip; // @synthesize ignorePageClip=_ignorePageClip;
@property(retain, nonatomic) NSArray *skipAnnotationArray; // @synthesize skipAnnotationArray=_skipAnnotationArray;
@property(nonatomic) _Bool overlayAnnotations; // @synthesize overlayAnnotations=_overlayAnnotations;
@property(nonatomic) _Bool skipPageContent; // @synthesize skipPageContent=_skipPageContent;
@property(nonatomic) int interpolationQuality; // @synthesize interpolationQuality=_interpolationQuality;
@property(nonatomic) unsigned long long filters; // @synthesize filters=_filters;
@property(nonatomic) _Bool invertRenderColor; // @synthesize invertRenderColor=_invertRenderColor;
@property(retain, nonatomic) UIColor *pageColor; // @synthesize pageColor=_pageColor;
@property(nonatomic) _Bool ignoreDisplaySettings; // @synthesize ignoreDisplaySettings=_ignoreDisplaySettings;
@property(nonatomic) _Bool preserveAspectRatio; // @synthesize preserveAspectRatio=_preserveAspectRatio;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)transferValuesFrom:(id)arg1 to:(id)arg2;
- (id)decodeValueForKey:(id)arg1 withCoder:(id)arg2 modelVersion:(unsigned long long)arg3;
- (id)initWithLegacyDictionary:(id)arg1;
- (id)init;

@end
