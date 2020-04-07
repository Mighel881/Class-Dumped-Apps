//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKit/PSPDFModel.h>

#import <PSPDFKitUI/NSSecureCoding-Protocol.h>

@class NSArray, NSString, PSPDFSelectionState;

@interface PSPDFViewState : PSPDFModel <NSSecureCoding>
{
    _Bool _requiresCoordinateTransformation;
    NSArray *_selectedAnnotationNames;
    unsigned long long _pageIndex;
    PSPDFSelectionState *_selectionState;
    NSString *_annotationState;
    struct CGRect _viewPort;
}

+ (_Bool)supportsSecureCoding;
+ (id)propertyKeys;
+ (unsigned long long)modelVersion;
@property(retain, nonatomic) NSString *annotationState; // @synthesize annotationState=_annotationState;
@property(readonly, nonatomic) _Bool requiresCoordinateTransformation; // @synthesize requiresCoordinateTransformation=_requiresCoordinateTransformation;
@property(readonly, nonatomic) PSPDFSelectionState *selectionState; // @synthesize selectionState=_selectionState;
@property(readonly, nonatomic) struct CGRect viewPort; // @synthesize viewPort=_viewPort;
@property(readonly, nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(readonly, nonatomic) NSArray *selectedAnnotationNames; // @synthesize selectedAnnotationNames=_selectedAnnotationNames;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqualToViewState:(id)arg1 withAccuracy:(double)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) _Bool hasViewPort;
- (id)init;
- (id)initWithPageIndex:(unsigned long long)arg1;
- (id)initWithPageIndex:(unsigned long long)arg1 viewPort:(struct CGRect)arg2;
- (id)initWithPageIndex:(unsigned long long)arg1 selectionState:(id)arg2;
- (id)initWithPageIndex:(unsigned long long)arg1 viewPort:(struct CGRect)arg2 selectionState:(id)arg3;
- (id)initWithPageIndex:(unsigned long long)arg1 viewPort:(struct CGRect)arg2 selectionState:(id)arg3 selectedAnnotationNames:(id)arg4;

@end
