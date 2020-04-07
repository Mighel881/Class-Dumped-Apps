//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTIButtonSupportedRenderers, YTIFormattedString, YTIRenderer;

@interface YTIUnpluggedCancelFeedbackDialogRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *description_p; // @dynamic description_p;
@property(retain, nonatomic) NSMutableArray *feedbackOptionsArray; // @dynamic feedbackOptionsArray;
@property(readonly, nonatomic) unsigned long long feedbackOptionsArray_Count; // @dynamic feedbackOptionsArray_Count;
@property(retain, nonatomic) YTIButtonSupportedRenderers *finishButton; // @dynamic finishButton;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasFinishButton; // @dynamic hasFinishButton;
@property(nonatomic) _Bool hasNextButton; // @dynamic hasNextButton;
@property(nonatomic) _Bool hasSupportButton; // @dynamic hasSupportButton;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIRenderer *nextButton; // @dynamic nextButton;
@property(retain, nonatomic) NSMutableArray *optionsArray; // @dynamic optionsArray;
@property(readonly, nonatomic) unsigned long long optionsArray_Count; // @dynamic optionsArray_Count;
@property(retain, nonatomic) YTIButtonSupportedRenderers *supportButton; // @dynamic supportButton;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
