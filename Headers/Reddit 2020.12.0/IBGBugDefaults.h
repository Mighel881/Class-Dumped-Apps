//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IBGBugStrings, NSDate;

@interface IBGBugDefaults : NSObject
{
    _Bool _startAlertShown;
    _Bool _enableAttachmentExtraScreenShot;
    _Bool _enableAttachmentGalleryImage;
    _Bool _enableAttachmentVoiceNote;
    _Bool _enableAttachmentScreenRecording;
    IBGBugStrings *_strings;
    long long _welcomeMessageMode;
    long long _bugReportingOptions;
}

+ (id)getInstance;
@property(nonatomic) _Bool enableAttachmentScreenRecording; // @synthesize enableAttachmentScreenRecording=_enableAttachmentScreenRecording;
@property(nonatomic) _Bool enableAttachmentVoiceNote; // @synthesize enableAttachmentVoiceNote=_enableAttachmentVoiceNote;
@property(nonatomic) _Bool enableAttachmentGalleryImage; // @synthesize enableAttachmentGalleryImage=_enableAttachmentGalleryImage;
@property(nonatomic) _Bool enableAttachmentExtraScreenShot; // @synthesize enableAttachmentExtraScreenShot=_enableAttachmentExtraScreenShot;
@property(nonatomic) long long bugReportingOptions; // @synthesize bugReportingOptions=_bugReportingOptions;
@property(nonatomic) _Bool startAlertShown; // @synthesize startAlertShown=_startAlertShown;
@property(nonatomic) long long welcomeMessageMode; // @synthesize welcomeMessageMode=_welcomeMessageMode;
@property(retain, nonatomic) IBGBugStrings *strings; // @synthesize strings=_strings;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool showPostSendingDialog;
@property(readonly, nonatomic) _Bool commentIsRequired;
@property(readonly, nonatomic) _Bool shouldShowEmail;
@property(readonly, nonatomic) _Bool emailIsRequired;
@property(retain, nonatomic) NSDate *lastBugAt;
@property(readonly, nonatomic) _Bool disableAttachments;
- (_Bool)shouldShowWelcomeMessage;
- (id)init;

@end
