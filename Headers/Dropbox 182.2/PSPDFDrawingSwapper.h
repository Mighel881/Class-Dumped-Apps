//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSTimer;

@interface PSPDFDrawingSwapper : NSObject
{
    double _debounceInterval;
    unsigned long long _replacementThreshold;
    NSSet *_editableAnnotationTypes;
    NSTimer *_debouncingTimer;
}

@property(retain, nonatomic) NSTimer *debouncingTimer; // @synthesize debouncingTimer=_debouncingTimer;
@property(retain, nonatomic) NSSet *editableAnnotationTypes; // @synthesize editableAnnotationTypes=_editableAnnotationTypes;
@property(nonatomic) unsigned long long replacementThreshold; // @synthesize replacementThreshold=_replacementThreshold;
@property(nonatomic) double debounceInterval; // @synthesize debounceInterval=_debounceInterval;
- (void).cxx_destruct;
- (id)annotationByDetectingShapeInDrawLayer:(id)arg1 withPageInfo:(id)arg2 error:(out id *)arg3;
- (void)detectAndSwapDrawingInDrawLayer:(id)arg1 containedInDrawView:(id)arg2;
- (void)cancelPreviousDetectionRequests;
- (void)scheduleDetectionInDrawLayer:(id)arg1 containedInDrawView:(id)arg2;
- (id)init;

@end
