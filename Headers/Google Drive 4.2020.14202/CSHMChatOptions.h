//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSString;

@interface CSHMChatOptions : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool availableNow; // @dynamic availableNow;
@property(copy, nonatomic) NSString *chatPoolId; // @dynamic chatPoolId;
@property(copy, nonatomic) NSString *estimatedWaitTimeId; // @dynamic estimatedWaitTimeId;
@property(copy, nonatomic) NSString *formId; // @dynamic formId;
@property(nonatomic) _Bool hasAvailableNow; // @dynamic hasAvailableNow;
@property(nonatomic) _Bool hasChatPoolId; // @dynamic hasChatPoolId;
@property(nonatomic) _Bool hasEstimatedWaitTimeId; // @dynamic hasEstimatedWaitTimeId;
@property(nonatomic) _Bool hasFormId; // @dynamic hasFormId;

@end

